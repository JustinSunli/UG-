using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using NXOpen;
using NXOpen.UF;

namespace ModifyDimPlane
{
     
    class AngleGraph
    {
        public static Session theSession = Session.GetSession();
        public static UFSession theUfSession = UFSession.GetUFSession();
        public static NXOpen.UF.UFModl ufmodel = theUfSession.Modl;
        public static NXOpen.UF.UFVec3 Vec3 = theUfSession.Vec3;
        public static UFObj theUfobj = theUfSession.Obj;
        //邻接矩阵
        public double[,] adjmatrix;

        //统计当前图中有几个点
        public int  NumOfFace;
        //构建Face的角度属性邻接图
        public AngleGraph(List<Tag> FaceList)
        {
            int FaceNum = FaceList.Count;
            NumOfFace = FaceNum;//记录图中面的个数
            //初始化邻接矩阵和顶点数组
            adjmatrix = new double[FaceNum, FaceNum];
            
            Tag[] shared_edges;
            double FaceAngle;
            //将代表邻接矩阵的表全初始化为0
            for (int i = 0; i < FaceNum; i++)
            {
                for (int j = 0; j < FaceNum; j++)
                {
                    if (i==j)
                    {
                        adjmatrix[i, j] = 0;
                        continue;
                    }
                    //判断两个面是否相邻
                    ufmodel.AskSharedEdges(FaceList[i],FaceList[j],out shared_edges);
                    if (shared_edges.Length==0)//不相邻的情况取-1
                    {
                        adjmatrix[i, j] = -1.0;
                    }
                    else
                    {
                        MyFace.AskAngleOfFace(FaceList[i], FaceList[j], out FaceAngle);
                        adjmatrix[i, j] = Math.Round(FaceAngle, 2);//四舍五入，保留2位小数
                    }
                   
                }
            }
        }

        //构建特征中Face的角度属性邻接图
        public AngleGraph(MyNewDefineFeature Feature1)
        {
            int FaceNum = Feature1.FaceNumber;
            NumOfFace = FaceNum;//记录图中面的个数
            //初始化邻接矩阵和顶点数组
            adjmatrix = new double[FaceNum, FaceNum];

            Tag[] shared_edges;
            double FaceAngle;
            //将代表邻接矩阵的表全初始化为0
            for (int i = 0; i < FaceNum; i++)
            {
                for (int j = 0; j < FaceNum; j++)
                {
                    if (i == j)
                    {
                        adjmatrix[i, j] = 0;
                        continue;
                    }
                    //判断两个面是否相邻
                    ufmodel.AskSharedEdges(Feature1.MyNewFeature[i].FaceTag, Feature1.MyNewFeature[j].FaceTag, out shared_edges);
                    if (shared_edges.Length == 0)//不相邻的情况取-1
                    {
                        adjmatrix[i, j] = -1.0;
                    }
                    else
                    {
                        MyFace.AskAngleOfFace(Feature1.MyNewFeature[i].FaceTag, Feature1.MyNewFeature[j].FaceTag, out FaceAngle);
                        adjmatrix[i, j] = Math.Round(FaceAngle, 2);//四舍五入，保留2位小数
                    }

                }
            }
        }
    }
}
