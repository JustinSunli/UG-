using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using NXOpen.UF;
using NXOpen;
using System.Runtime.InteropServices;

namespace ModifyDimPlane
{
    class MyFace
    {
        public static Session theSession = Session.GetSession();
        public static UFSession theUfSession=UFSession.GetUFSession();
        public static NXOpen.UF.UFModl ufmodel = theUfSession.Modl;
        public static NXOpen.UF.UFVec3 Vec3 = theUfSession.Vec3;
        public static Face[] BodyOfFace = MyFace.GetFaceOfBody();
        public static UFObj theUfobj = theUfSession.Obj;

        public Face myFace;
        [DllImport("defineDLL.dll", EntryPoint = "GenerateFaceFaceRelationCode")]
        //extern static int GetEdgeSenseInFace(Tag face, Tag edge);
        //extern static int EvaluateEdgeAtMidPoint(Tag face, Tag edge, double[] pos,double [] tanvec);
        //extern static int Add(int n, [MarshalAs(UnmanagedType.LPArray, SizeParamIndex = 1)] int[] Z);
         extern static int GenerateFaceFaceRelationCode(Tag face1,Tag face2,ref int Z);
         [DllImport("defineDLL.dll", EntryPoint = "EvaluateEdgeAtMidPoint")]
         extern static int EvaluateEdgeAtMidPoint(Tag face, Tag edge, double[] pos, double[] tanvec);

        //计算两面的夹角
        public static void AskAngleOfFace(Tag Face1,Tag Face2,out double Angle)
        {
             Tag [] SharedEdges;
             ufmodel.AskSharedEdges(Face1, Face2, out SharedEdges);//获得两个面的公共边

            double[] param = { 0.0, 0.0 }; double[] point = { 0.0, 0.0, 0.0 }; double[] u1 = { 0.0, 0.0, 0.0 };
            double[] v1 = { 0.0, 0.0, 0.0 }; double[] u2 = { 0.0, 0.0, 0.0 }; double[] v2 = { 0.0, 0.0, 0.0 };
            double[] unit_norm1 = { 0.0, 0.0, 0.0 }; double[] unit_norm2 = { 0.0, 0.0, 0.0 };
            double[] radii = { 0.0, 0.0 };

            int Type1,Type2;
            ufmodel.AskFaceType(Face1, out Type1);//22为平面，16为柱面
            ufmodel.AskFaceType(Face2, out Type2);


            //计算面的法向量
            ufmodel.AskFaceProps(Face1, param, point, u1, v1, u2, v2, unit_norm1, radii);
            ufmodel.AskFaceProps(Face2, param, point, u1, v1, u2, v2, unit_norm2, radii);

            int Code=0;
            GenerateFaceFaceRelationCode(Face1, Face2, ref Code);
            double Arcangle;
            double[] dir = { 0.0, 0.0, 0.0 };
            Vec3.Cross(unit_norm1, unit_norm2, dir);//计算两面发线叉乘结果
            double[] pos = { 0.0, 0.0, 0.0 };
            double [] tanvec={0.0,0.0,0.0};
           
            //计算两面的中点及中点的切向量
            EvaluateEdgeAtMidPoint(Face1,SharedEdges[0],pos,tanvec);

            double Orie;
            Vec3.Dot(dir, tanvec, out Orie);//计算两面法线叉乘的结果，与两面公共边中点切向量的夹角

            Vec3.AngleBetween(unit_norm1, unit_norm2, dir, out Arcangle);//计算法向量的夹角
            if (Code%10==1)//大于零表示边为凸边
                Angle = 180 + Arcangle * 180 / NXOpen.UF.UFConstants.PI;//为什么public const成员不需要对象访问？
            else if (Code %10== 2) //小于零表示边为凹边
                Angle = 180 - Arcangle * 180 / NXOpen.UF.UFConstants.PI;
            else
                Angle = 180;//0表示相切
        }

        //获取子特征的相关面
        public static void GetFaceArray(out List<List<Tag>> Face_of_Feature)
        {

            //获取零件模型中的凹边:
            Tag[] Edges;
            MyEdges.GetConcaveEdge(out Edges);

            Tag [] face_tag;
           
            //List<List<Tag>> temp_Face_list;
            Face_of_Feature = new List<List<Tag>>();

            bool IsExit;
            foreach(Tag edge_tag in Edges)
            {
                IsExit = false;
                ufmodel.AskEdgeFaces(edge_tag, out face_tag);

                foreach (List<Tag> list_tag in Face_of_Feature)
                {
                    if (list_tag.Contains(face_tag[0])&&(!list_tag.Contains(face_tag[1])))
                    {
                        list_tag.Add(face_tag[1]);
                        IsExit = true;
                    }
                    else if (list_tag.Contains(face_tag[1]) && (!list_tag.Contains(face_tag[0])))
                    {
                        list_tag.Add(face_tag[0]);
                        IsExit = true;
                    }
                }
                if (!IsExit)
                {
                    List<Tag> TempList1 = new List<Tag>();
                    TempList1.Add(face_tag[0]);
                    TempList1.Add(face_tag[1]);

                    Face_of_Feature.Add(TempList1);
                }
            }

            List<List<Tag>> Face_of_Temp;
            Face_of_Temp=new List<List<Tag>>();

            Face_of_Temp=Face_of_Feature;
            //判断Face_of_Feature中是否有重合的情况，如果有，就合并该List
            for (int i = 0; i < Face_of_Temp.Count; ++i)
            {
                for (int j = 0; j < Face_of_Feature.Count; ++j)
                {
                    if (Face_of_Temp[i]==Face_of_Feature[j])
                            continue;
                    if (IsContainsAll(Face_of_Temp[i], Face_of_Feature[j]))//如果有包含关系，删除List
                    {
                        Face_of_Feature.Remove(Face_of_Feature[j]);
                        Face_of_Temp = Face_of_Feature;
                        --j;
                    }
                }
            }

           Face[] AllFace= GetFaceOfBody();
           Tag[] Cylindredge;
           bool IsThroughHole;
           foreach (Face SinFace in AllFace)
           {
               IsThroughHole = true;
               if (SinFace.SolidFaceType==Face.FaceType.Cylindrical)
               {
                   ufmodel.AskFaceEdges(SinFace.Tag, out Cylindredge);//圆柱面的边
                   foreach (Tag CyEdge1 in Cylindredge)
                   {
                       if (MyEdges.IsConcaveEdge(CyEdge1))
                       {
                           IsThroughHole = false;
                           break;
                       }
                   }

                   if (MyFace.IsConcaveFace(SinFace.Tag)==2)//如果是内圆柱面;
                   {
                       if (IsThroughHole && Cylindredge.Length == 2)
                       {
                           List<Tag> TempList2 = new List<Tag>();
                           TempList2.Add(SinFace.Tag);
                           Face_of_Feature.Add(TempList2);
                           //Dimension.HoleDime(Cylindredge[0]);
                           //theUfobj.SetColor(SinFace.Tag, 106);//红色186
                       }
                       else if (Cylindredge.Length == 4)
                       {
                           List<Tag> TempList2 = new List<Tag>();
                           TempList2.Add(SinFace.Tag);
                           Face_of_Feature.Add(TempList2);
                       }

                   }
               }
           }
            
        }
        //确定一个圆柱面是一个内圆柱面还是一个外圆柱面?方法错误
//         public static bool IsNeiCylinder(Tag CylinderFace)
//         {
//             double[] point = { 0.0, 0.0, 0.0 }, dir = { 0.0, 0.0, 0.0 }, box = { 0.0, 0.0, 0.0 };
//             int type; double radius; double rad_data; int norm_dir;
//             //dir为轴线方向
//             ufmodel.AskFaceData(CylinderFace, out type, point, dir, box, out radius, out rad_data, out norm_dir);
//             double[] normal1 = MyFace.AskFaceofNormal(CylinderFace);
// 
//             UFVec3 theUfVec3 = theUfSession.Vec3;
//             double[] cross_product = { 0.0, 0.0, 0.0 };
// 
//             theUfVec3.Cross(normal1, dir, cross_product);
//             double angle;
//             theUfVec3.AngleBetween(normal1, dir, cross_product, out angle);
//             double Angle = angle * 180 / NXOpen.UF.UFConstants.PI;
//             if (Angle > 90.0)
//                 return false;
//             return true;
//         }
        //判断一个List是否包含另一个List
       public static bool IsContainsAll(List<Tag> ListA, List<Tag> ListB)
        {
            return ListB.All(b => ListA.Any(a =>TagEqual(a,b)));
        }
        //判断两个Tag是否相等
        public static bool TagEqual(Tag A,Tag B)
       {
           return A == B;
       }
        //计算一组特征面中的基面(目前的方法是，相交面最多的面)
        public static void AskBasicFace(List<Tag> FaceArray,out Tag BasicFace)
        {
            BasicFace = FaceArray[0];
            Tag[] adjacent_face;
            //这是计算出面在零件模型中的相邻面，我们要计算出在特征中的相邻面
            ufmodel.AskAdjacFaces(FaceArray[0], out adjacent_face);
            int countadjacent = 0;
            foreach (Tag face_tag1 in adjacent_face)
            {
                if (FaceArray.Contains(face_tag1))
                    countadjacent++;
            }

            int MaxAdjacent = countadjacent;

            for(int i=1;i<FaceArray.Count;i++)
            {
                countadjacent = 0;
                ufmodel.AskAdjacFaces(FaceArray[i], out adjacent_face);
                foreach (Tag face_tag2 in adjacent_face)
                {
                    if (FaceArray.Contains(face_tag2))
                        countadjacent++;
                }

                if (countadjacent> MaxAdjacent)
                {
                    MaxAdjacent = countadjacent;
                    BasicFace = FaceArray[i];
                }
            }
        }
        
        //判断一个特征中所有面的夹角是否都为90
        public static bool AllVerticalplane(AngleGraph graph)
        {
            bool allVertical = true;
            int length = graph.NumOfFace;
            for (int i = 0; i < length; i++)
                for (int j = i + 1; j < length; ++j)
                {
                    if (graph.adjmatrix[i, j] == -1)//不相邻的面
                        continue;
                    if (graph.adjmatrix[i, j] != 90)
                        allVertical = false;
                }
                    return allVertical;
        }
        
        //根据Tag得到一个面的对象
        public static Face GetFaceByTag(Tag Face_Edge)
        {
            foreach (Face face in BodyOfFace)
            {
                if (face.Tag == Face_Edge)
                {
                    return face;
                }
            }
            return null;
        }

        //得到体的所有面
        public static Face[] GetFaceOfBody()
        {
            Part workPart = theSession.Parts.Work;
            Part Open_part = workPart;

            BodyCollection bodis = Open_part.Bodies;
            Body[] bodys = bodis.ToArray();

            Face[] faces = bodys[0].GetFaces();
            return faces;
        }

        //判断两个面是否平行
        public static bool ISFaceParallel(Tag Face1,Tag Face2)
        {
            double[] param = { 0.0, 0.0 }; double[] point = { 0.0, 0.0, 0.0 }; double[] u1 = { 0.0, 0.0, 0.0 };
            double[] v1 = { 0.0, 0.0, 0.0 }; double[] u2 = { 0.0, 0.0, 0.0 }; double[] v2 = { 0.0, 0.0, 0.0 };
            double[] unit_norm1 = { 0.0, 0.0, 0.0 }; double[] unit_norm2 = { 0.0, 0.0, 0.0 };
            double[] radii = { 0.0, 0.0 };

            ufmodel.AskFaceProps(Face1, param, point, u1, v1, u2, v2, unit_norm1, radii);
            ufmodel.AskFaceProps(Face2, param, point, u1, v1, u2, v2, unit_norm2, radii);

            double Arcangle;
            double[] dir = { 0.0, 0.0, 0.0 };
            Vec3.AngleBetween(unit_norm1, unit_norm2, dir, out Arcangle);//计算法向量的夹角
            Arcangle = Arcangle * 180 / NXOpen.UF.UFConstants.PI;
            if (Arcangle == 0 || Arcangle == 180.0)
                return true;
            else
                return false;
        }

        //求面的法失
        public static double[] AskFaceofNormal(Tag Face1)
        {
            double[] param = { 0.0, 0.0 }; double[] point = { 0.0, 0.0, 0.0 }; double[] u1 = { 0.0, 0.0, 0.0 };
            double[] v1 = { 0.0, 0.0, 0.0 }; double[] u2 = { 0.0, 0.0, 0.0 }; double[] v2 = { 0.0, 0.0, 0.0 };
            double[] unit_norm1 = { 0.0, 0.0, 0.0 };
            double[] radii = { 0.0, 0.0 };
            //计算面的法向量
            ufmodel.AskFaceProps(Face1, param, point, u1, v1, u2, v2, unit_norm1, radii);
            return unit_norm1;
        }
        //求取矩形槽标注特征之外的面
        public static void AskFaceOutFeature(List<Tag> Face_Feature,out Tag OutFace)
        {
            OutFace = Tag.Null;
            Tag[] Face_Tag;
            foreach(Tag face1 in Face_Feature)
            {
                ufmodel.AskAdjacFaces(face1, out Face_Tag);
                foreach (Tag face2 in Face_Tag)
                {
                    if (!Face_Feature.Contains(face2))
                        OutFace = face2;
                }
            }
        }
        public static void BulidAAG()
        {

            Part workPart=theSession.Parts.Work;

            BodyCollection bodis = workPart.Bodies;
            Body[] bodys = bodis.ToArray();

            Face[] faces = bodys[0].GetFaces();

        }

        //判断一个面是否为内凹面
        public static int IsConcaveFace(Tag face1)
        {
            int num_radii;
            double[] radii = { 0.0, 0.0 };
            double[] positions = { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 };
            double[] UVparams = { 0.0, 0.0, 0.0, 0.0 };

            ufmodel.AskFaceMinRadii(face1, out num_radii, radii, positions, UVparams);

            int convexity=0;
            if (num_radii == 0) convexity = 0;//相切
            else if (num_radii == 1)
            {
                if (radii[0] > 0) convexity = 2;//凹
                else convexity = 1;//凸
            }
            else if (num_radii == 2)//为2的情况占时还未遇见
            {
                if (radii[0] > 0 && radii[1] > 0) convexity = 2;
                else if (radii[0] <= 0 && radii[1] <= 0) convexity = 1;
                else convexity = 3;
            }

            return convexity;
        }


        //返回面的类型
        public Face.FaceType getTypeOfFace()
        {
            return myFace.SolidFaceType;
        }

        //求面中环的个数
        public static int getNumLoopOfFace(Tag face)
        {
            //Program.theUfmodel.AskFaceTopology()
            return 0;
        }
    }
}
