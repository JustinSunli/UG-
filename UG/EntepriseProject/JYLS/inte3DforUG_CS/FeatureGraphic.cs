using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using NXOpen.UF;
using NXOpen;
using System.Runtime.InteropServices;

namespace ModifyDimPlane
{
    class FeatureGraphic
    {
        //面的顶点数组
        public List<GripchFaceNode> FaceNodeList;
        //边的邻接矩阵
        public GripchEdgeNode[,] adjmatrix;
        //统计当前特征图中有几个面节点
        public int NumOfFace;

        //分解得到的子特征
        public List<MyNewDefineFeature> SubFeaturesList;
        //体中内环边的数目
        public int InnerLoopEdgeNumber;

        //体中内环边Tag的List
        public List<Tag> InnerLoopEdgeList;

        //体中的分解基面链表List;
        public List<Tag> DeCompseBaseFaceList;

        [DllImport("defineDLL.dll", EntryPoint = "GetLoopsNumber")]
        extern static int GetLoopsNumber(Tag face, ref int loopNum, ref int InnerloopNum);

        [DllImport("defineDLL.dll", EntryPoint = "GetInnerLoopEdgesNumber")]
        extern static int GetInnerLoopEdgesNumber();

        [DllImport("defineDLL.dll", EntryPoint = "GetInnerLoopEdge")]
        extern static void GetInnerLoopEdge([MarshalAs(UnmanagedType.SysUInt, SizeParamIndex = 1)] Tag[] InnerloopEdgeArray, int len);

        [DllImport("defineDLL.dll", EntryPoint = "GetInnerIndexEdge")]
        extern static Tag GetInnerIndexEdge(int index);

        [DllImport("defineDLL.dll", EntryPoint = "GetInnerLoopEdgesNum")]
        extern static int GetInnerLoopEdgesNum(Tag face);

        [DllImport("defineDLL.dll", EntryPoint = "GetEdgeTagInInnerLoop")]
        extern static Tag GetEdgeTagInInnerLoop(Tag face, int index);
         //构建Face的矩阵邻接图属性邻接图
        public FeatureGraphic()
        {
            FaceNodeList = new List<GripchFaceNode>();
            DeCompseBaseFaceList = new List<Tag>();
            Face[] BodyFace = MyFace.GetFaceOfBody();
            NumOfFace = BodyFace.Length;
            //构建AAG图中的面链表
            for (int i = 0; i < BodyFace.Length; i++)
            {
                GripchFaceNode faceNode = new GripchFaceNode();
                faceNode.AreaOfFace=0;//的面的表面积
                if (MyFace.IsConcaveFace(BodyFace[i].Tag) == 2)
                    faceNode.FaceConcaConve = FaceConcavity.Concavity;//面的凸凹性
                else if (MyFace.IsConcaveFace(BodyFace[i].Tag) == 1)
                    faceNode.FaceConcaConve = FaceConcavity.Convexity;
                else
                    faceNode.FaceConcaConve = FaceConcavity.Tangent;//光顺面
                int loopNum=0,InnerloopNum=0;
                GetLoopsNumber(BodyFace[i].Tag,ref loopNum,ref InnerloopNum);
                faceNode.FaceInnerLoopNumber = InnerloopNum;//面中内环的数目
                faceNode.FaceLoopNumber = loopNum;//面中环的数目
                faceNode.FaceTag = BodyFace[i].Tag;
                faceNode.NodeFaceType = MyNewFace.getFaceType(BodyFace[i]);
                faceNode.IsDeCompseBaseFace = faceNode.IsBaseFace();
                if (faceNode.IsDeCompseBaseFace)
                {
                    DeCompseBaseFaceList.Add(BodyFace[i].Tag);
                }
                faceNode.IsConCavityFace = faceNode.IsConCavityFacebyEdge();
                faceNode.FaceInnerLoopEdges = faceNode.GetFaceInnerListEdges();


                //faceNode.IsConCavityFace = IsConCavityFacebyEdge(faceNode.FaceTag);

                int type=0;//面的类型
                double[] point={0.0,0.0,0.0};//圆柱面、圆锥面轴线上的一点
                double[] dir={0.0,0.0,0.0};//轴线方向
                double[] box={0.0,0.0,0.0,0.0,0.0,0.0};//面的包容盒
                double radius;
                double rad_data;
                int norm_dir=0;
                Program.theUfmodel.AskFaceData(BodyFace[i].Tag, out type, point, dir, box, out radius, out rad_data, out norm_dir);
                if (faceNode.NodeFaceType == MyNewFaceType.Cylindrical || faceNode.NodeFaceType == MyNewFaceType.Conical)
                {
                    //数组还可这样赋值？
                    faceNode.Face_Axis[0] = Math.Round(dir[0], 2);
                    faceNode.Face_Axis[1] = Math.Round(dir[1], 2);
                    faceNode.Face_Axis[2] = Math.Round(dir[2], 2);


                    faceNode.Face_Axis_Point[0] = Math.Round(point[0], 2);
                    faceNode.Face_Axis_Point[1] = Math.Round(point[1], 2);
                    faceNode.Face_Axis_Point[2] = Math.Round(point[2], 2);
                }
                FaceNodeList.Add(faceNode);
            }
            //构建二维AAG图中的属性邻接图主要包含边的信息
            adjmatrix = new GripchEdgeNode[NumOfFace, NumOfFace];
            Tag[] shared_edges;
            for(int i=0;i<BodyFace.Length;++i)
                for (int j = 0; j < BodyFace.Length; ++j)
                {
                    if (i == j)
                    {
                        adjmatrix[i, j] = null;
                        continue;
                    }
                    //判断两个面是否相邻
                    Program.theUfmodel.AskSharedEdges(BodyFace[i].Tag, BodyFace[j].Tag, out shared_edges);
                    if (shared_edges.Length == 0)//不相邻的情况取null
                    {
                        adjmatrix[i, j] =adjmatrix[j,i]= null;
                    }
                    else
                    {
                        GripchEdgeNode EdgeNode = new GripchEdgeNode();
                        EdgeNode.EdgeConcaConve = MyNewEdge.GetEdgeConca(shared_edges[0]);
                        

                        EdgeNode.EdgeTag = shared_edges[0];
                        EdgeNode.NodeEdgeType = MyNewEdge.GetEdgeType(shared_edges[0]);
                        EdgeNode.LooType = true;//暂定true;
                        adjmatrix[i, j] = EdgeNode;
                    }
                }
            InnerLoopEdgeNumber = GetInnerLoopEdgesNumber();
            InnerLoopEdgeList = new List<Tag>();
            Tag InneerEdge;
            /*GetInnerLoopEdge(InneerEdgeArray,InnerLoopEdgeNumber);*/
            for (int i = 0; i < InnerLoopEdgeNumber; ++i)
            {
                InneerEdge = GetInnerIndexEdge(i);
                InnerLoopEdgeList.Add(InneerEdge);
            }

            //初始化用来存储，AAG图中分解的特征
            SubFeaturesList = new List<MyNewDefineFeature>();
        }

        //内环边删除后，根据给定的面List来构建属性邻接图
        public FeatureGraphic(List<Tag> FaceList)
        {
            FaceNodeList = new List<GripchFaceNode>();
            DeCompseBaseFaceList = new List<Tag>();

            NumOfFace = FaceList.Count;
            //构建AAG图中的面链表
            for (int i = 0; i < NumOfFace; i++)
            {
                GripchFaceNode faceNode = new GripchFaceNode();
                faceNode.AreaOfFace = 0;//的面的表面积
                if (MyFace.IsConcaveFace(FaceList[i]) == 2)
                    faceNode.FaceConcaConve = FaceConcavity.Concavity;//面的凸凹性
                else if (MyFace.IsConcaveFace(FaceList[i]) == 1)
                    faceNode.FaceConcaConve = FaceConcavity.Convexity;
                else
                    faceNode.FaceConcaConve = FaceConcavity.Tangent;//光顺面
                int loopNum = 0, InnerloopNum = 0;
                GetLoopsNumber(FaceList[i], ref loopNum, ref InnerloopNum);
                faceNode.FaceInnerLoopNumber = 0;//面中内环的数目
                faceNode.FaceLoopNumber = loopNum;//面中环的数目
                faceNode.FaceTag = FaceList[i];
                faceNode.NodeFaceType = MyNewFace.getFaceType(FaceList[i]);
                faceNode.IsDeCompseBaseFace = faceNode.IsBaseFace();
                if (faceNode.IsDeCompseBaseFace)
                {
                    DeCompseBaseFaceList.Add(FaceList[i]);
                }
                //面凸凹性的判断，需要根据凹边是否存在
                faceNode.IsConCavityFace = faceNode.IsConCavityFacebyEdge();
                //faceNode.FaceInnerLoopEdges = faceNode.GetFaceInnerListEdges();//得到面的内环边

                int type = 0;//面的类型
                double[] point = { 0.0, 0.0, 0.0 };//圆柱面、圆锥面轴线上的一点
                double[] dir = { 0.0, 0.0, 0.0 };//轴线方向
                double[] box = { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 };//面的包容盒
                double radius;
                double rad_data;
                int norm_dir = 0;
                Program.theUfmodel.AskFaceData(FaceList[i], out type, point, dir, box, out radius, out rad_data, out norm_dir);
                if (faceNode.NodeFaceType == MyNewFaceType.Cylindrical || faceNode.NodeFaceType == MyNewFaceType.Cylindrical)
                {
                    //数组还可这样赋值？
                    faceNode.Face_Axis = dir;
                    faceNode.Face_Axis_Point = point;
                }
                FaceNodeList.Add(faceNode);
            }
            //构建二维AAG图中的属性邻接图主要包含边的信息
            adjmatrix = new GripchEdgeNode[NumOfFace, NumOfFace];
            Tag[] shared_edges;
            for (int i = 0; i < FaceList.Count; ++i)
                for (int j = 0; j < FaceList.Count; ++j)
                {
                    if (i == j)
                    {
                        adjmatrix[i, j] = null;
                        continue;
                    }
                    //判断两个面是否相邻
                    Program.theUfmodel.AskSharedEdges(FaceList[i], FaceList[j], out shared_edges);
                    if (shared_edges.Length == 0)//不相邻的情况取null
                    {
                        adjmatrix[i, j] = adjmatrix[j, i] = null;
                    }
                    else
                    {
                        GripchEdgeNode EdgeNode = new GripchEdgeNode();
                        EdgeNode.EdgeConcaConve = MyNewEdge.GetEdgeConca(shared_edges[0]);


                        EdgeNode.EdgeTag = shared_edges[0];
                        EdgeNode.NodeEdgeType = MyNewEdge.GetEdgeType(shared_edges[0]);
                        EdgeNode.LooType = true;//暂定true;
                        adjmatrix[i, j] = EdgeNode;
                    }
                }
            //初始化用来存储，AAG图中分解的特征
            SubFeaturesList = new List<MyNewDefineFeature>();
        }
        //分解特征AAG(属性邻接图)得到子图
        public void GetAllSubFeature()
        {
            //1、删除分解基面中内环边
            for (int i = 0; i < DeCompseBaseFaceList.Count; ++i)
            {
                int InnerLoopEdgesNum;
                ////分解基面为凸面时才删除内环边
                //if (!MyNewFace.IsConCavityFacebyEdge(DeCompseBaseFaceList[i]))
                //{
                //    //找到内环边数组，并删除边连接
                    //面中内环边的个数
                    InnerLoopEdgesNum=GetInnerLoopEdgesNum(DeCompseBaseFaceList[i]);

                    Tag InnerEdgeTag;
                    for (int j = 0; j < InnerLoopEdgesNum; j++)
                    {
                        //找到一条分解基面内环边，
                        InnerEdgeTag=GetEdgeTagInInnerLoop(DeCompseBaseFaceList[i],j);
                        //在图中删除该边
                        //1、首先在图中找到该边节点,并设置该节点值为空
                        FoundAndDeletEdgeNode(InnerEdgeTag);

//                         //删除内环后，包含该边的面的内环边链表中也要相应的减去该边
//                         Tag[] FaceList;
//                         Program.theUfmodel.AskEdgeFaces(InnerEdgeTag, out FaceList);
// 
//                         for(int m=0;m<FaceList.Length;m++)
//                             for (int n = 0; n < NumOfFace; n++)
//                             {
//                                 if (FaceNodeList[n].FaceTag == FaceList[m])
//                                 {
//                                     FaceNodeList[n].FaceInnerLoopEdges.Remove(InnerEdgeTag);
//                                 }
//                             }
                    }
                //}
            }

            //在进行第2步之前，需要先识别出连通子图，并存储为特征子图
            GetSubConnectGraph();

            //余图:目前暂定义为面结点最多的特征
            MyNewDefineFeature SubMaxFeatureGraphic = GetMaxSubGraphic(SubFeaturesList);

            List<Tag> YuFaceList = new List<Tag>();

            for (int i = 0; i < SubMaxFeatureGraphic.FaceNumber; i++)
            {
                YuFaceList.Add(SubMaxFeatureGraphic.MyNewFeature[i].FaceTag);
            }

            //构建余图
            FeatureGraphic YuGraphic1 = new FeatureGraphic(YuFaceList);

            //2、遍历余图，保留凹面之间的连接,删除凹凸面之间的连接
            for (int i = 0; i < YuGraphic1.NumOfFace; ++i)
            {
                if (YuGraphic1.FaceNodeList[i].IsConCavityFace /*&& YuGraphic1.FaceNodeList[i].FaceInnerLoopEdges.Count==0*/)//如果这个面是凹面,还要确定这条导致该面为凹面的边是否存在，如果不存在则该面为凸面
                {
                    Tag[] AdjacentFaces;
                     Program.theUfmodel.AskAdjacFaces(YuGraphic1.FaceNodeList[i].FaceTag, out AdjacentFaces);
                    //判断哪些邻面是凸面;
                    for (int j = 0; j < AdjacentFaces.Length; j++)
                    {
                        if (IsConvexFace(AdjacentFaces[j]))//如果是凸面
                        {
                            Tag[] SharedEdge;
                            Program.theUfmodel.AskSharedEdges(YuGraphic1.FaceNodeList[i].FaceTag, AdjacentFaces[j], out SharedEdge);
                            for (int k = 0; k < SharedEdge.Length; ++k)
                            {
                                FoundAndDeletEdgeNode(SharedEdge[k]);
                            }
                        }
                    }
                }
                
            }
            //在进行第3步之前，需要先识别出连通子图，并存储为特征子图
            GetSubConnectGraph();

            //划分完特征后，就可以确定邻接面的信息
            GetFeatureListAdjacentFace();
            //进行第三步前，需要存储识别出来的连通子图，并存储为特征子图，
            //对余图进行余下操作
            //对面的方程和法失相同的部分计算留到后面有时间在考虑
        }
        //在边的邻接矩阵中找到指定的边界点，并删除该边
        public void FoundAndDeletEdgeNode(Tag EdgeNodeTag)
        {
            for(int i=0;i<NumOfFace;i++)
                for (int j = 0; j < NumOfFace; j++)
                {
                    if(adjmatrix[i,j]==null)
                        continue;
                    else if (adjmatrix[i, j].EdgeTag == EdgeNodeTag)
                    {
                        adjmatrix[i, j] =adjmatrix[j,i]= null;//删除该边，得到子图
                    }
                }
        }


        //判断一个面是否为凸面
        private bool IsConvexFace(Tag faceTag)
        {
            for (int i = 0; i < FaceNodeList.Count; i++)
            {
                if (FaceNodeList[i].FaceTag == faceTag &&(!FaceNodeList[i].IsConCavityFace))
                    return true;
            }
            return false;
        }

        //得到图的连通子图,并存储特征
        public void GetSubConnectGraph()
        {
            List<MyNewDefineFeature> TempFeatureList = new List<MyNewDefineFeature>();
            for (int i = 0; i < NumOfFace; i++)//遍历面节点的List
            {
                bool IsExit = false;
                foreach (MyNewDefineFeature feature in TempFeatureList)
                {
                    //如果特征中包含了这个面，就继续下一个面的判断
                    if(feature.Contains(FaceNodeList[i].FaceTag))
                    {
                        IsExit=true;
                        break;
                    }
                    else //在feature这个特征中不包含面FaceNodeList[i]时，需要判断feature中的特征面与FaceNodeList[i]这个面是否有链接
                    {
                        if(FeatureConncetFace(feature,FaceNodeList[i].FaceTag))//如果特征面与指定面之间存在链接的边则，包含进该边
                        {
                            feature.AddFaceNode(FaceNodeList[i]);
                            IsExit=true;
                            break;
                        }

                    }

                }
                //遍历完所有特征，后发现该面并没有被包含，则为该面定义一个新的特征
                if(!IsExit)
                {
                    MyNewDefineFeature temFeature=new MyNewDefineFeature();
                    temFeature.AddFaceNode(FaceNodeList[i]);

                    TempFeatureList.Add(temFeature);
                }    
            }

            //在判断特征之间是否有两两连接的关系
            for (int i = 0; i < TempFeatureList.Count; i++)
                for (int j = i + 1; j < TempFeatureList.Count; j++)
                {
                    foreach (GripchFaceNode Facenode in TempFeatureList[j].MyNewFeature)
                    {
                        if (FeatureConncetFace(TempFeatureList[i], Facenode.FaceTag))//如果一个特征中的面与另一个特征中的面有链接，则合并两个特征
                        {
                            for (int k = 0; k < TempFeatureList[j].FaceNumber; k++)
                            {
                                TempFeatureList[i].AddFaceNode(TempFeatureList[j].MyNewFeature[k]);
                            }
                            //SubFeaturesList[j] = null;
                            TempFeatureList.RemoveAt(j);
                        }
                        
                    }
                   
                }
            SubFeaturesList = TempFeatureList;
        }

        //判断一个特征中的面，与指定面在AAG图中是否存在链接
        private bool FeatureConncetFace(MyNewDefineFeature feature,Tag faceNode)
        {
            //找到tag，指定的Facenode
            GripchFaceNode tempFaceNode;
            int index1=0;
            for(int i=0;i<NumOfFace;i++)
            {
                if (FaceNodeList[i].FaceTag == faceNode) 
                {
                    tempFaceNode = FaceNodeList[i];
                    index1=i;
                }
            }
            //判断feature中的面与指定的面之间是否存在关联
            foreach (GripchFaceNode face2 in feature.MyNewFeature)
            {
                int index2=0;
                for (int j = 0; j < NumOfFace; j++)
                {
                    if (FaceNodeList[j] == face2)
                    {
                        index2 = j;
                    }
                }
                if (adjmatrix[index1, index2] != null)
                    return true;
            }

            return false;
        }


        //从众多的子图特征中选择余图特征
        private MyNewDefineFeature GetMaxSubGraphic(List<MyNewDefineFeature> SubFeaturesList)
        {
            MyNewDefineFeature MaxSubGrphicFeature = SubFeaturesList[0];
            for (int i = 1; i < SubFeaturesList.Count; i++)
            {
                if (SubFeaturesList[i].FaceNumber > MaxSubGrphicFeature.FaceNumber)
                    MaxSubGrphicFeature = SubFeaturesList[i];
            }
            return MaxSubGrphicFeature;
        }


        //根据得到的Sub特征链表，进行组合，并存储进SubFeaturesList
        public void AssembleFeature()
        {
            //默认SubFeatureList[0]中存储的零件的毛坯面特征
            for(int i=0;i<SubFeaturesList.Count;i++)
                for (int j =0; j < SubFeaturesList.Count; j++)
                {
                    if (i == j || SubFeaturesList[i].FeatureType == NewSelfDefFeatureType.OTHER_TYPE || SubFeaturesList[j].FeatureType ==NewSelfDefFeatureType.OTHER_TYPE)
                        continue;
                    //判断两个特征是否相邻
                    if (MyNewDefineFeature.FeatureIsAdjacent(SubFeaturesList[i], SubFeaturesList[j]))
                    {
                        //两个特征都含有圆柱或圆锥面
                        if (MyNewDefineFeature.FeatureIsContainCylOrCon(SubFeaturesList[i]) && MyNewDefineFeature.FeatureIsContainCylOrCon(SubFeaturesList[j]))
                        {
                            if (MyNewDefineFeature.FeatureIsConcentric(SubFeaturesList[i], SubFeaturesList[j]))//如果两个特征同轴
                            {
                                MyNewDefineFeature.AssociationFeature(SubFeaturesList[i], SubFeaturesList[j]);
                                if (SubFeaturesList[i].FeatureType == NewSelfDefFeatureType.ThroughHole 
                                    && SubFeaturesList[j].FeatureType == NewSelfDefFeatureType.BlindHole)
                                {
                                    SubFeaturesList[i].FeatureType = NewSelfDefFeatureType.PLANAR_COUNTERBORE_HOLE;//平头沉头孔
                                }
                                else if (SubFeaturesList[i].FeatureType == NewSelfDefFeatureType.BlindHole 
                                    && SubFeaturesList[j].FeatureType == NewSelfDefFeatureType.ThroughHole)
                                {
                                    SubFeaturesList[i].FeatureType = NewSelfDefFeatureType.PLANAR_COUNTERBORE_HOLE;//平头沉头孔
                                }
                                else if (SubFeaturesList[i].FeatureType == NewSelfDefFeatureType.BlindHole 
                                    && SubFeaturesList[j].FeatureType == NewSelfDefFeatureType.Conical_HOLE)
                                {
                                    SubFeaturesList[i].FeatureType = NewSelfDefFeatureType.CONICAL_COUNTERBORE_HOLE;//锥头沉头孔
                                }
                                else if (SubFeaturesList[i].FeatureType == NewSelfDefFeatureType.Conical_HOLE 
                                    && SubFeaturesList[j].FeatureType == NewSelfDefFeatureType.BlindHole)
                                {
                                    SubFeaturesList[i].FeatureType = NewSelfDefFeatureType.CONICAL_COUNTERBORE_HOLE;//锥头沉头孔
                                }
                                else if (SubFeaturesList[i].FeatureType == NewSelfDefFeatureType.ThroughHole 
                                    && SubFeaturesList[j].FeatureType == NewSelfDefFeatureType.Conical_HOLE)
                                {
                                    SubFeaturesList[i].FeatureType = NewSelfDefFeatureType.CONICAL_COUNTERBORE_HOLE;//锥头沉头孔
                                }
                                else if (SubFeaturesList[i].FeatureType == NewSelfDefFeatureType.Conical_HOLE 
                                    && SubFeaturesList[j].FeatureType == NewSelfDefFeatureType.ThroughHole)
                                {
                                    SubFeaturesList[i].FeatureType = NewSelfDefFeatureType.CONICAL_COUNTERBORE_HOLE;//锥头沉头孔
                                }
                                else if(SubFeaturesList[i].FeatureType == NewSelfDefFeatureType.BlindHole
                                    && SubFeaturesList[j].FeatureType == NewSelfDefFeatureType.BlindHole)
                                {
                                    SubFeaturesList[i].FeatureType = NewSelfDefFeatureType.PLANAR_COUNTERBORE_HOLE;//平头沉头孔
                                }
                            }
                        }
                        else if(SubFeaturesList[i].FeatureType == NewSelfDefFeatureType.Conical_HOLE
                                && SubFeaturesList[j].FeatureType == NewSelfDefFeatureType.ISOLATED_SMOOTH_SURFACE)
                        {
                            MyNewDefineFeature.AssociationFeature(SubFeaturesList[i], SubFeaturesList[j]);
                            SubFeaturesList[i].FeatureType = NewSelfDefFeatureType.PIN_HOLE;//锥头沉头孔
                        }
                        else if (SubFeaturesList[i].FeatureType == NewSelfDefFeatureType.ISOLATED_SMOOTH_SURFACE
                                && SubFeaturesList[j].FeatureType == NewSelfDefFeatureType.Conical_HOLE)
                        {
                            MyNewDefineFeature.AssociationFeature(SubFeaturesList[i], SubFeaturesList[j]);
                            SubFeaturesList[i].FeatureType = NewSelfDefFeatureType.PIN_HOLE;//锥头沉头孔
                        }

                        SubFeaturesList.RemoveAt(j);//如果两个特征相邻，才移除
                    }

                    
                }
        }


        //识别特征链表中特征的类型
        public void FeatureListType()
        {
            for (int i = 0; i < SubFeaturesList.Count; i++)
            {
                SubFeaturesList[i].FeatureType=MyNewDefineFeature.GetFeatureType(SubFeaturesList[i]);
            }
        }


        //合并孔类特征
        public void AssembleHoleFeature()
        {

        }

        //得到特征的邻接面的信息
        public void GetFeatureListAdjacentFace()
        {
            //SubFeatureList[0]中存储的毛胚面中的信息，
            for (int i = 1; i < SubFeaturesList.Count; i++)
            {
                SubFeaturesList[i].GetFeatureAdjacentFace();//得到特征邻接面的信息
            }
        }


        //根据AAG图中面之间的相连边是否存在来判断，面的凸凹性
        private  bool IsConCavityFacebyEdge(Tag FaceTag)
        {
            Tag[] edgeList;
            Program.theUfmodel.AskFaceEdges(FaceTag,out edgeList);
            for (int i = 0; i < edgeList.Length; i++)
            {
                if (MyEdges.IsConcaveEdge(edgeList[i]))
                    return true;
            }
            return false;
        }
    }
}
