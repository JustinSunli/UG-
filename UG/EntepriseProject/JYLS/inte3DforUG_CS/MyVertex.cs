using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using NXOpen;
using NXOpen.UF;
namespace ModifyDimPlane
{
    class MyVertex
    {
        public static Session theSession = Session.GetSession();
        public static UFSession theUfSession = UFSession.GetUFSession();
        public static NXOpen.UF.UFModl ufmodel = theUfSession.Modl;
        public static NXOpen.UF.UFVec3 Vec3 = theUfSession.Vec3;
        public static UFObj theUfobj = theUfSession.Obj;

        //得到特征中的点
        public static void GetVertexOfFeature(List<Tag> Feature, out HashSet<Point3d> Verter_List)
        {
            Verter_List = new HashSet<Point3d>();
            Tag[] EdgeList;
            
            int VertexNum;
            double[] point1 = { 0.0, 0.0, 0.0 }, point2 = { 0.0, 0.0, 0.0 };
            foreach (Tag face in Feature)
            {
                ufmodel.AskFaceEdges(face, out EdgeList);
                foreach (Tag EdgeTag in EdgeList)
                {
                   
                    ufmodel.AskEdgeVerts(EdgeTag, point1, point2, out VertexNum);
                    //顶点坐标需要四舍五入，否则可能导致同一个点计算出两个点

                    Point3d Point1 = new Point3d(Math.Round(point1[0], 2), Math.Round(point1[1], 2), Math.Round(point1[2], 2));
                    Point3d Point2 = new Point3d(Math.Round(point2[0], 2), Math.Round(point2[1], 2), Math.Round(point2[2], 2));
                    switch (VertexNum)
                    {
                        case 1:
                            Verter_List.Add(Point1);
                            break;
                        case 2:
                            Verter_List.Add(Point1);
                            Verter_List.Add(Point2);
                            break;
                        default:
                            break;
                    }
                }
            }

        }


        //得到特征中的点
        public static void GetVertexOfFeature(MyNewDefineFeature Feature, out HashSet<Point3d> Verter_List)
        {
            Verter_List = new HashSet<Point3d>();
            Tag[] EdgeList;

            int VertexNum;
            double[] point1 = { 0.0, 0.0, 0.0 }, point2 = { 0.0, 0.0, 0.0 };
            for (int i = 0; i < Feature.FaceNumber; i++)
            {
                ufmodel.AskFaceEdges(Feature.MyNewFeature[i].FaceTag, out EdgeList);
                foreach (Tag EdgeTag in EdgeList)
                {

                    ufmodel.AskEdgeVerts(EdgeTag, point1, point2, out VertexNum);
                    //顶点坐标需要四舍五入，否则可能导致同一个点计算出两个点

                    Point3d Point1 = new Point3d(Math.Round(point1[0], 2), Math.Round(point1[1], 2), Math.Round(point1[2], 2));
                    Point3d Point2 = new Point3d(Math.Round(point2[0], 2), Math.Round(point2[1], 2), Math.Round(point2[2], 2));
                    switch (VertexNum)
                    {
                        case 1:
                            Verter_List.Add(Point1);
                            break;
                        case 2:
                            Verter_List.Add(Point1);
                            Verter_List.Add(Point2);
                            break;
                        default:
                            break;
                    }
                }
            }
        }
        //得到面中的任意一点
        public static void GetVertexOfFace(Tag Face1,ref double[] point)
        {
           
            Tag[] EdgeTags;
            ufmodel.AskFaceEdges(Face1,out EdgeTags);
            double[] point1={0.0,0.0,0.0},point2={0.0,0.0,0.0};
            int Point_Num;
            ufmodel.AskEdgeVerts(EdgeTags[0], point1, point2,out Point_Num);

            point[0] = (point1[0] + point2[0]) / 2;
            point[1] = (point1[1] + point2[1]) / 2;
            point[2] = (point1[2] + point2[2]) / 2;
                    
        }

        public static void GetVerterMidOfEdge(Edge edge)
        {

        }
    }
}
