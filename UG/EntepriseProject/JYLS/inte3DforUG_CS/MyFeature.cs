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
    public enum SelfDefFeatureType
    {
        NULL_TYPE,//无类型
        BlindHole,//盲孔
        ClosePocket,//矩形型腔
        ThroughHole,//通孔;
        Cutter_Slot,//退刀槽
        DOVE_TAIL_SOLT,//先识别通的燕尾槽
        RECT_SOLT,//矩形槽
        RECT_THROUGH_SOLT,//通的矩形槽
        RECT_STEP,//矩形台阶
        SEMI_CIRCLE_SOLT,//半圆槽

        COUNTERBORE_HOLE,//沉头孔
        T_SOLT,//T型槽，通孔
    }
    class MyFeature
    {
        public static Session theSession = Session.GetSession();
        public static UFSession theUfSession = UFSession.GetUFSession();
        public static NXOpen.UF.UFModl ufmodel = theUfSession.Modl;
        public static NXOpen.UF.UFVec3 Vec3 = theUfSession.Vec3;
        public static UFObj theUfobj = theUfSession.Obj;

        public static void AskTypeOfFeature(List<List<Tag>> Face_of_Feature, out SelfDefFeatureType[] Types)
        {
            int FaceNum, EdgeNum, VertexNum;
            HashSet<Tag> Edge_Feature;
            HashSet<Point3d> Vertex_Feature;
            Types = new SelfDefFeatureType[Face_of_Feature.Count];
            int i=0;
            foreach (List<Tag> Feature in Face_of_Feature)//List中存储的面
            {
                FaceNum = Feature.Count;
                MyEdges.GetEdgeOfFeature(Feature,out Edge_Feature);
                EdgeNum=Edge_Feature.Count;
                MyVertex.GetVertexOfFeature(Feature,out Vertex_Feature);
                VertexNum=Vertex_Feature.Count;

                //得到燕尾槽的角度图
                AngleGraph Anglegraph = new AngleGraph(Feature);
                //盲孔
                if (FaceNum == 2)//EdegNum=3时为阶梯孔
                {
                    int type1,type2;
                    ufmodel.AskFaceType(Feature[0],out type1);
                    ufmodel.AskFaceType(Feature[1],out type2);
                    if (type1 == 22 && type2 == 16)//16为柱面，22为平面
                    {
                        //判断盲孔：一个面为凹圆柱面，一个面为平面，且两面的交线为凹边
                        Tag [] SharedEdges;
                        ufmodel.AskSharedEdges(Feature[0], Feature[1], out SharedEdges);
                        if (MyEdges.IsConcaveEdge(SharedEdges[0]) && (MyFace.IsConcaveFace(Feature[1])==2))
                        {
                            Types[i] = SelfDefFeatureType.BlindHole;
                            //得到盲孔的标注边
                            //Tag Dimeedge = MyEdges.GetDimeEdgeOfHole(Feature[1], Feature[0]);
                            //Dimension.HoleDime(Dimeedge);
                            ++i;
                        }
                    }
                    else if(type1 == 16 && type2 == 22)
                    {
                        //判断盲孔：一个面为凹圆柱面，一个面为平面，且两面的交线为凹边
                        Tag[] SharedEdges;
                        ufmodel.AskSharedEdges(Feature[0], Feature[1], out SharedEdges);
                        if (MyEdges.IsConcaveEdge(SharedEdges[0]) && (MyFace.IsConcaveFace(Feature[0])==2))
                        {
                            Types[i] = SelfDefFeatureType.BlindHole;
                            //得到盲孔的标注边
                            //Tag Dimeedge = MyEdges.GetDimeEdgeOfHole(Feature[1], Feature[0]);
                            //Dimension.HoleDime(Dimeedge);
                            ++i;
                        }
                    }
                    else if (type1 == 22 && type2==22)
                    {

                        if (Anglegraph.adjmatrix[0,1] == 90)
                        {
                            Types[i] = SelfDefFeatureType.RECT_STEP;
                            ++i;
                        }
                    }
                }
                else if (FaceNum==1)
                {
                    int type1;
                    ufmodel.AskFaceType(Feature[0],out type1);
                    if (type1==16)
                    {
                        //应该要添加一个判断是否为孔的圆柱面
                        //double[] normal1=MyFace.AskFaceofNormal(Feature[0]);
                        //if (normal1[0] < 0 || normal1[1] < 0 || normal1[2] < 0)//判断圆柱面的法向量是否小于0，如果小于0即为孔的圆柱面
                        //{
                        if (EdgeNum == 4)
                        {
                            Types[i] = SelfDefFeatureType.SEMI_CIRCLE_SOLT;
                            ++i;
                        }
                        else
                        {
                            //Tag[] edge_list;
                            //ufmodel.AskFaceEdges(Feature[0], out edge_list);
                            //Dimension.HoleDime(edge_list[0]);
                            Types[i] = SelfDefFeatureType.ThroughHole;
                            ++i;
                        }
                        //}
                    }
                }
                else if (FaceNum==5)//型腔
                {
                    if (EdgeNum == 12)
                    {
                        if (VertexNum == 12)
                        {
                            if (MyFace.AllVerticalplane(Anglegraph))//如果相互垂直，则判定为矩形腔
                            {
                                Types[i] = SelfDefFeatureType.ClosePocket;
                                ++i;

                                Tag BasicFace;
                                MyFace.AskBasicFace(Feature, out BasicFace);
                                for(int j=0;j<FaceNum;++j)
                                   //标注矩形腔的长度和宽度
                                    for (int k = j + 1; k < FaceNum; ++k)
                                    {
                                        if (MyFace.ISFaceParallel(Feature[j],Feature[k]))
                                        {
                                           
                                            //Dimension.ParallelFaceDime(Feature[j], Feature[k], BasicFace);
                                        }
                                    }
                                //根据基面来标注矩形槽的深度
                                Tag OutFace;
                                MyFace.AskFaceOutFeature(Feature,out OutFace);
                                Dimension.ParallelFaceDime(OutFace, BasicFace,Tag.Null);

                            }
                        }
                        else if(VertexNum==8)
                        {
                            bool IsRectSlot=true;
                            for (int index1 = 0; index1 < FaceNum; ++index1)
                                for (int index2 = index1 + 1; index2 < FaceNum; ++index2)
                                 {
                                     double tmp = Anglegraph.adjmatrix[index1, index2];
                                     if (tmp != -1)//相邻,其实还要判断夹角是否相等
                                     {
                                         if (tmp != 90.0&&tmp!=180.0)
                                         {
                                             IsRectSlot = false;
                                         }
                                     }
                                 }
                            if (IsRectSlot)
                            {
                                Types[i] = SelfDefFeatureType.RECT_SOLT;
                                i++;
                            }
                        }
                    }
                }
                else if(FaceNum==3)
                {
                    if (EdgeNum==10)
                    {
                        if (VertexNum==8)
                        {
                            bool IsDoveTatilSolt = true;
                            bool IsRectSolt = true;
                            for(int index1=0;index1<FaceNum;index1++)
                                for (int index2 = index1 + 1; index2 < FaceNum; ++index2)
                                {
                                    double tmp = Anglegraph.adjmatrix[index1, index2];
                                    if (tmp!=-1)//相邻,其实还要判断夹角是否相等
                                    {
                                        if (tmp>=90.0||tmp==0.0)
                                        {
                                            IsDoveTatilSolt = false;
                                        }
                                        if (tmp!=90.0)
                                        {
                                            IsRectSolt = false;
                                        }
                                    }
                                }
                            if (IsDoveTatilSolt)
                            {
                                Types[i] = SelfDefFeatureType.DOVE_TAIL_SOLT;
                                ++i;
                            }
                            if (IsRectSolt)//通的矩形槽
                            {
                                Types[i] = SelfDefFeatureType.RECT_THROUGH_SOLT;
                                ++i;
                            }

                        }
                    }
                    else if (EdgeNum == 4)
                    {
                        if (VertexNum == 0)
                        {
                            bool IsCutterSlot = true;
                            for (int index1 = 0; index1 < FaceNum; ++index1)
                                for (int index2 = index1 + 1; index2 < FaceNum; ++index2)
                                {
                                    double tmp = Anglegraph.adjmatrix[index1, index2];
                                    if (tmp != -1)//相邻,其实还要判断夹角是否相等
                                    {
                                        if (tmp != 90.0 && tmp != 180.0)
                                        {
                                            IsCutterSlot = false;
                                        }
                                    }
                                }
                            if (IsCutterSlot)
                            {
                                Types[i] = SelfDefFeatureType.Cutter_Slot;//退刀槽
                                i++;
                            }
                        }
                    }
                }
            }
        }

//         //寻找All特征的基面;
//         public static void AskBasicFaceOfAllFeature(List<List<Tag>> Face_of_Feature_Array,out List<Tag> BasicFace)
//         {
//             foreach (List<Tag> Face_of_Fature in Face_of_Feature_Array)
//             {
//                 Tag Basic_Face;
//                 if (Face_of_Fature.Count==2)
//                 {
// 
//                 }
//                 else
//                 {
//                     MyFace.AskBasicFace(Face_of_Fature, out Basic_Face);
//                     
//                 }
//             }
// 
//         }


        //寻找单个特征的基面
        public static void AskBasicFaceOfFeature(List<Tag> Face_of_Feature,out Tag BasicFace)
        {
            int count=Face_of_Feature.Count;
            if (count==1)
            {
                BasicFace = Face_of_Feature[0];
            }
            else if (Face_of_Feature.Count==2)
            {
                BasicFace =Tag.Null;
            }
            else
            {
                Tag[] adjance_face;
                BasicFace = Face_of_Feature[0];
                ufmodel.AskAdjacFaces(Face_of_Feature[0],out adjance_face);
                int MaxAdj = adjance_face.Length;
                for (int i = 1; i < Face_of_Feature.Count; i++)
                {
                    ufmodel.AskAdjacFaces(Face_of_Feature[i], out adjance_face);
                    if (adjance_face.Length>MaxAdj)
                    {
                        BasicFace = Face_of_Feature[i];
                        MaxAdj = adjance_face.Length;
                    }
                }
            }
        }
    }
}
