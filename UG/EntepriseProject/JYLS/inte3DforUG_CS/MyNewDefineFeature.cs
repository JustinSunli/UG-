using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using NXOpen;
using NXOpen.UF;
using NXOpen.MenuBar;
using System.Runtime.InteropServices;

namespace ModifyDimPlane
{
    public enum NewSelfDefFeatureType
    {
        OTHER_TYPE,//无类型
        BlindHole,//盲孔
        ClosePocket,//矩形型腔
        ThroughHole,//直通孔;
        Cutter_Slot,//退刀槽
        DOVE_TAIL_SOLT,//先识别通的燕尾槽
        RECT_SOLT,//矩形槽
        RECT_THROUGH_SOLT,//通的矩形槽
        RECT_STEP,//矩形台阶
        RECT_CAVITY,//矩形腔体
        SEMI_CIRCLE_SOLT,//半圆槽

        PLANAR_COUNTERBORE_HOLE,//平头沉头孔
        CONICAL_COUNTERBORE_HOLE,//锥头沉头孔
        T_SOLT,//T型槽，通孔
        Conical_HOLE,//锥孔

        
        PIN_HOLE,//销孔
        ISOLATED_SMOOTH_SURFACE,//孤立的光顺面
        STEPPED_HOLE,//阶梯孔
        Cylinder_Boss,//圆柱凸台
        Outter_Cylinder_Surface,//外圆柱面，
        HORIZONTAL_HOLE,//轴类零件的特征

    }

    class MyNewDefineFeature
    {
        //以面作为特征的基本存储单位
        public List<GripchFaceNode> MyNewFeature;
        //子特征属性邻接图
        public GripchEdgeNode[,] adjmatrix;

        //拓扑信息
        public List<MyNewFace> FeatureAdjacentFaceList;//特征的邻接面
        public int FaceNumber;
        public int EdgeNumber;
        public int VertexNumber;

        //几何信息
        AngleGraph FeatureFaceAngleGraphic;
        public List<Face.FaceType> FeatureFaceOfType;
        public List<Edge.EdgeType> FeatureEdgeOfType;
        double SumOfSurfaceAres;

        //特征类型
        public NewSelfDefFeatureType FeatureType;

       public  MyNewDefineFeature()
        {
            MyNewFeature = new List<GripchFaceNode>();
            FaceNumber = 0;
            EdgeNumber = 0;
            VertexNumber = 0;
            FeatureAdjacentFaceList = new List<MyNewFace>();//初始化特征的邻接面链表
        }

        public void AddFaceNode(GripchFaceNode FaceNode)
        {
            MyNewFeature.Add(FaceNode);
            FaceNumber++;
        }

        //判断该特征中是否包含，参数指定的面
        public bool Contains(Tag face)
        {
            foreach(GripchFaceNode FaceNode in MyNewFeature)
            {
                if (FaceNode.FaceTag == face)
                    return true;
            }
            return false;
        }


        //获取特征邻接面的信息，并设置成员变量
        public void GetFeatureAdjacentFace()
        {
            List<Tag> AdjacentFace = GetAdjacentFace();//特征的邻接面
            for (int i = 0; i < AdjacentFace.Count; i++)
            {
                MyNewFace FeatureAdjacentFace = new MyNewFace(AdjacentFace[i]);
                FeatureAdjacentFaceList.Add(FeatureAdjacentFace);
            }

        }


        //得到特征的邻接面
        private List<Tag> GetAdjacentFace()
        {
            List<Tag> AdjacentFace = new List<Tag>();

            List<Tag> FeatureFace = new List<Tag>();

            foreach (GripchFaceNode Facenode in MyNewFeature)
            {
                FeatureFace.Add(Facenode.FaceTag);
            }

            foreach(Tag FeatureTag in FeatureFace)
            {
                Tag[] adjacentFace;
                Program.theUfmodel.AskAdjacFaces(FeatureTag, out adjacentFace);
                for (int i = 0; i < adjacentFace.Length; i++)
                {
                    if (!FeatureFace.Contains(adjacentFace[i]))//如果相邻中的面，不在特征中，则为特征的相邻面
                        AdjacentFace.Add(adjacentFace[i]);
                }
            }

            return AdjacentFace;
        }


       //确定特征的类型,确定特征类型之前应该进行特征的组合，例如沉头孔和
        public NewSelfDefFeatureType GetFeatureType()
        {
            return NewSelfDefFeatureType.OTHER_TYPE;
        }

        //判断两个特征是否相邻
        public static bool FeatureIsAdjacent(MyNewDefineFeature Feature1,MyNewDefineFeature Feature2 )
        {
            Tag[] SharedEdge;
            for (int i = 0; i < Feature1.FaceNumber; i++)
                for (int j = 0; j < Feature2.FaceNumber; j++)
                {
                    Program.theUfmodel.AskSharedEdges(Feature1.MyNewFeature[i].FaceTag, Feature2.MyNewFeature[j].FaceTag, out SharedEdge);
                    if (SharedEdge.Length > 0)//表示两个特征之间存在相邻的边，及特征相邻
                    {
                        return true;
                    }
                }
                    return false;
        }

        //将两个特征进行组合成一个特征,把两个特征组合成一个特征主要是把两个特征的面组合到一起
        public static void AssociationFeature(MyNewDefineFeature Feature1, MyNewDefineFeature Feature2)
        {
            for (int i = 0; i < Feature2.FaceNumber; i++)
            {
                Feature1.AddFaceNode(Feature2.MyNewFeature[i]);//把Feature2中的特征面保存到Feature1中，进行特征的组合
            }
        }


        //目前只针对有圆柱面和圆锥面的特征进行组合
        public static bool FeatureIsContainCylOrCon(MyNewDefineFeature Feature1)
        {
            for (int i = 0; i < Feature1.FaceNumber; i++)
            {
                if (Feature1.MyNewFeature[i].NodeFaceType == MyNewFaceType.Cylindrical || Feature1.MyNewFeature[i].NodeFaceType == MyNewFaceType.Conical)
                    return true;
            }

            return false;
        }

        //判断两个特征是否同轴，
        public static bool FeatureIsConcentric(MyNewDefineFeature Feature1, MyNewDefineFeature Feature2)
        {
            GripchFaceNode FaceNode1 = GetCylinderOrConFaceNode(Feature1);
            GripchFaceNode FaceNode2 = GetCylinderOrConFaceNode(Feature2);

            int Is_equal;
            Program.theUfVec3.IsParallel(FaceNode1.Face_Axis, FaceNode2.Face_Axis, 0, out Is_equal);
            if (Is_equal==1)
            {
                //获得轴线上两点的连线适量
                double [] Point1_to_Point2={0.0,0.0,0.0};
                Point1_to_Point2[0]=FaceNode1.Face_Axis_Point[0]-FaceNode2.Face_Axis_Point[0];
                Point1_to_Point2[1]=FaceNode1.Face_Axis_Point[1]-FaceNode2.Face_Axis_Point[1];
                Point1_to_Point2[2]=FaceNode1.Face_Axis_Point[2]-FaceNode2.Face_Axis_Point[2];

                int is_parallel;
                Program.theUfVec3.IsParallel(Point1_to_Point2,FaceNode1.Face_Axis,1,out is_parallel);
                if (is_parallel == 1)//矢量平行
                    return true;
            }

            return false;
        }

        //得到一个特征中的圆柱面或圆锥面
        public static GripchFaceNode GetCylinderOrConFaceNode(MyNewDefineFeature Feature1)
        {
            GripchFaceNode FaceNode=null;
            for (int i = 0; i < Feature1.FaceNumber; i++)
            {
                if (Feature1.MyNewFeature[i].NodeFaceType == MyNewFaceType.Conical || Feature1.MyNewFeature[i].NodeFaceType == MyNewFaceType.Cylindrical)
                    FaceNode = Feature1.MyNewFeature[i];
            }

            return FaceNode;
        }



        //判断特征类型
        public static NewSelfDefFeatureType GetFeatureType(MyNewDefineFeature Feature1)
        {
            NewSelfDefFeatureType FeatureType = NewSelfDefFeatureType.OTHER_TYPE;

            HashSet<Tag> Edge_Feature;
            HashSet<Point3d> Vertex_Feature;
            MyNewEdge.GetEdgeOfFeature(Feature1, out Edge_Feature);
            MyVertex.GetVertexOfFeature(Feature1, out Vertex_Feature);
            Feature1.EdgeNumber = Edge_Feature.Count;//特征中边的数目
            Feature1.VertexNumber = Vertex_Feature.Count;//特征中顶点的数目;

            Feature1.FeatureFaceAngleGraphic = new AngleGraph(Feature1);//构建特征中面之间的夹角图
            //先识别出每个孤立特征的特征类型，然后在进行组合
            if (IsThroughHole(Feature1))//通孔
            {
                FeatureType = NewSelfDefFeatureType.ThroughHole;
                for (int i = 0; i<Feature1.FeatureAdjacentFaceList.Count;i++ )
                {
                    if(Feature1.FeatureAdjacentFaceList[i].FaceType==MyNewFaceType.Cylindrical)
                        FeatureType = NewSelfDefFeatureType.HORIZONTAL_HOLE;//横孔
                }
            }
            else if (IsRECT_THROUGH_SOLT(Feature1))//矩形通腔
            {
                FeatureType = NewSelfDefFeatureType.RECT_THROUGH_SOLT;
            }
            else if (IsCounterboreHole(Feature1))//盲孔
            {
                FeatureType = NewSelfDefFeatureType.BlindHole;
            }
            else if (IsConicalHole(Feature1))//锥孔
            {
                FeatureType = NewSelfDefFeatureType.Conical_HOLE;
            }
            else if (IsIsolatedSmoothSurface(Feature1))
            {
                FeatureType = NewSelfDefFeatureType.ISOLATED_SMOOTH_SURFACE;//孤立的光顺面;
            }
            else if(IsRectCavity(Feature1))//判断是否是矩形腔
            {
                FeatureType = NewSelfDefFeatureType.RECT_CAVITY;//矩形腔
            }
            else if (IsOutterCylinderSurface(Feature1))
            {
                FeatureType = NewSelfDefFeatureType.Outter_Cylinder_Surface;//凸台特征的外圆柱面
            }
            return FeatureType;
        }

        //直通孔特征,针对每个特征需要添加一个加权数吗？
        public static bool IsThroughHole(MyNewDefineFeature Feature1)
        {
            if (Feature1.FaceNumber == 1 && Feature1.MyNewFeature[0].NodeFaceType == MyNewFaceType.Cylindrical)
            {
                int temp = MyFace.IsConcaveFace(Feature1.MyNewFeature[0].FaceTag);
                if (temp==2)//同时需要判断该圆柱面为内圆柱面
                        return true;
            }
            return false;
        }

        //判断一个特征是否为矩形通腔
        public static bool IsRECT_THROUGH_SOLT(MyNewDefineFeature Feature1)
        {
            bool IsRect_Through_solt = false;
            if (Feature1.FaceNumber == 3&&Feature1.EdgeNumber>=10&&Feature1.VertexNumber==8)
            {
                for (int i = 0; i < 3; i++)
                {
                    //三个面都要是平面
                    if (Feature1.MyNewFeature[i].NodeFaceType != MyNewFaceType.Planar)
                    {
                        return false;
                    }
                }
                //面之间要两两垂直
                for (int index1 = 0; index1 < 3; index1++)
                    for (int index2 = index1 + 1; index2 < 3; ++index2)
                    {
                        double tmp = Feature1.FeatureFaceAngleGraphic.adjmatrix[index1, index2];
                        if (tmp != -1)//相邻,其实还要判断夹角是否相等
                        {
                            if (tmp != 90.0)
                            {
                                return false;
                            }
                        }
                    }
                IsRect_Through_solt = true;
            }

            return IsRect_Through_solt;
        }

        //判断一个特征是否为一个盲孔
        public static bool IsCounterboreHole(MyNewDefineFeature Feature1)
        {
            //单独的盲孔,边数为3的盲孔是存在阶梯孔的情况
            if (Feature1.FaceNumber == 2 && (Feature1.EdgeNumber >= 2) && Feature1.VertexNumber == 0)
            {
                //先计算两面之间的夹角
                double Angle;
                MyFace.AskAngleOfFace(Feature1.MyNewFeature[0].FaceTag, Feature1.MyNewFeature[1].FaceTag, out Angle);
                if (Angle != 90.0)
                    return false;
                if (Feature1.MyNewFeature[0].NodeFaceType == MyNewFaceType.Cylindrical && Feature1.MyNewFeature[1].NodeFaceType == MyNewFaceType.Planar)
                {
                    //判断盲孔：一个面为凹圆柱面，一个面为平面，且两面的交线为凹边
                    Tag[] SharedEdges;
                    Program.theUfmodel.AskSharedEdges(Feature1.MyNewFeature[0].FaceTag, Feature1.MyNewFeature[1].FaceTag, out SharedEdges);
                    if (MyEdges.IsConcaveEdge(SharedEdges[0]) && (MyFace.IsConcaveFace(Feature1.MyNewFeature[0].FaceTag) == 2))
                        return true;
                }
                else if (Feature1.MyNewFeature[1].NodeFaceType == MyNewFaceType.Cylindrical && Feature1.MyNewFeature[0].NodeFaceType == MyNewFaceType.Planar)
                {
                    //判断盲孔：一个面为凹圆柱面，一个面为平面，且两面的交线为凹边
                    Tag[] SharedEdges;
                    Program.theUfmodel.AskSharedEdges(Feature1.MyNewFeature[0].FaceTag, Feature1.MyNewFeature[1].FaceTag, out SharedEdges);
                    if (MyEdges.IsConcaveEdge(SharedEdges[0]) && (MyFace.IsConcaveFace(Feature1.MyNewFeature[1].FaceTag) == 2))
                        return true;
                }
            }
            return false;
        }

        //判断是否是一个锥孔
        public static bool IsConicalHole(MyNewDefineFeature Feature1)
        {
            if (Feature1.FaceNumber == 1 && Feature1.MyNewFeature[0].NodeFaceType == MyNewFaceType.Conical)
            {
                int temp = MyFace.IsConcaveFace(Feature1.MyNewFeature[0].FaceTag);
                if (temp == 2)//同时需要判断该圆柱面为内圆柱面
                    return true;
            }
            return false;
        }

        //判断特征是否为一个孤立的光顺面
        public static bool IsIsolatedSmoothSurface(MyNewDefineFeature Feature1)
        {
            if (Feature1.FaceNumber == 1 && Feature1.MyNewFeature[0].NodeFaceType == MyNewFaceType.Planar)
            {
                    return true;
            }
            return false;
        }

        //判断特征是否是一个矩形腔
        public static bool IsRectCavity(MyNewDefineFeature Feature1)
        {
            bool IsRect_Through_solt = false;
            if (Feature1.FaceNumber == 5 && Feature1.EdgeNumber ==12 && Feature1.VertexNumber == 8)
            {
                for (int i = 0; i < 5; i++)
                {
                    //三个面都要是平面
                    if (Feature1.MyNewFeature[i].NodeFaceType != MyNewFaceType.Planar)
                    {
                        return false;
                    }
                }
                //面之间要两两垂直
                for (int index1 = 0; index1 < 3; index1++)
                    for (int index2 = index1 + 1; index2 < 3; ++index2)
                    {
                        double tmp = Feature1.FeatureFaceAngleGraphic.adjmatrix[index1, index2];
                        if (tmp != -1)//相邻,其实还要判断夹角是否相等
                        {
                            if (tmp != 90.0)
                            {
                                return false;
                            }
                        }
                    }
                IsRect_Through_solt = true;
            }

            return IsRect_Through_solt;
        }

        //判断是否为圆柱凸台
        public static bool IsOutterCylinderSurface(MyNewDefineFeature Feature1)
        {
            if (Feature1.FaceNumber == 1 && Feature1.MyNewFeature[0].NodeFaceType == MyNewFaceType.Cylindrical)
            {
                int temp = MyFace.IsConcaveFace(Feature1.MyNewFeature[0].FaceTag);
                if (temp == 1)//同时需要判断该圆柱面为外圆柱面
                    return true;
            }
            return false;
        }
    }


}
