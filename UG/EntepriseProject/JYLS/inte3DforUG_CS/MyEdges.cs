using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using NXOpen;
using System.Runtime.InteropServices;
using NXOpen.UF;

namespace ModifyDimPlane
{
    class MyEdges
    {
        public static Session theSession = Session.GetSession();
        public static UFSession theUfSession = UFSession.GetUFSession();
        public static NXOpen.UF.UFModl ufmodel = theUfSession.Modl;
        public static NXOpen.UF.UFVec3 Vec3 = theUfSession.Vec3;
        public static UFObj theUfobj=theUfSession.Obj;
        public static Edge[] BodyOfEdges = MyEdges.GetEdgeOfBody();
        //获取模型中的凹边
        public static void GetConcaveEdge(out Tag[] Edges)
        {
            Part workPart = theSession.Parts.Work;

            BodyCollection bodis = workPart.Bodies;
            Body[] bodys = bodis.ToArray();

            Tag []egde_list;
            ufmodel.AskBodyEdges(bodys[0].Tag, out egde_list);

            Tag[] face_list;
            double Angle;
            int i = 0;
            Tag[] TemEdges=new Tag[egde_list.Length];

            foreach (Tag egde in egde_list)
            {
                ufmodel.AskEdgeFaces(egde, out face_list);
                MyFace.AskAngleOfFace(face_list[0], face_list[1], out Angle);
                if (Angle < 180.0)
                {
                    TemEdges[i] = egde;
                    ++i;
                }
            }
            Edges = new Tag[i];
            for (int j = 0; j < Edges.Length; ++j)
                Edges[j] = TemEdges[j];
        }

        //得到一个特征中边的个数
        public static void GetEdgeOfFeature(List<Tag> Feature, out HashSet<Tag> Edge_Feature)
        {
            Edge_Feature = new HashSet<Tag>();
            Tag[] EdgeList;
            foreach (Tag face in Feature)
            {
                Program.theUfmodel.AskFaceEdges(face, out EdgeList);
                foreach (Tag EdgeTag in EdgeList)
                {
                    Edge_Feature.Add(EdgeTag);
                }
            }
        }

        //通过Tag获取Edge对象
        public static Edge GetEdgeOfTag(Tag EgdeTag)
        {
            foreach (Edge edge in BodyOfEdges)
            {
                if (edge.Tag==EgdeTag)
                {
                    return edge;
                }
            }
            return null;
        }

        //得到体的所有边对象
        public static Edge[] GetEdgeOfBody()
        {
            Part workPart = theSession.Parts.Work;
            Part Open_part = workPart;

            BodyCollection bodis = Open_part.Bodies;
            Body[] bodys = bodis.ToArray();

            Edge[] edges= bodys[0].GetEdges();
            return edges;
        }

        //获取盲孔的标注边:Face1为圆柱面，Face2为平面
        public static Tag GetDimeEdgeOfHole(Tag Face1,Tag Face2)
        {
            Tag[] edge1List, edge2List;
            ufmodel.AskFaceEdges(Face1,out edge1List);
            ufmodel.AskFaceEdges(Face2,out edge2List);
          
            Tag resultEdge=Tag.Null;
            bool IsExit;
            foreach (Tag edgeTag1 in edge1List)
            {
                IsExit = false;
                foreach (Tag edgeTag2 in edge2List)
                {
                    if (edgeTag1 == edgeTag2)
                    {
                        IsExit = true;
                        break;
                    }
                }
                if (!IsExit)
                    resultEdge=edgeTag1;
            }
            return  resultEdge;
        }

        //判断边是否为凹边
        public static bool IsConcaveEdge(Tag edge1)
        {
            Tag[] face_list;
            ufmodel.AskEdgeFaces(edge1, out face_list);

            bool IsConcave=true;
            double Angle;
            MyFace.AskAngleOfFace(face_list[0], face_list[1], out Angle);

            if (Angle>=180.0)
                IsConcave = false;
            return IsConcave;
        }
    }
}
