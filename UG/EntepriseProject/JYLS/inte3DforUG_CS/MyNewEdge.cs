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
    public enum MyNewEdgeType
    {
        Liner,//直线
        CirCular,//圆弧线
        Other,//其他
    }
    public enum EdgeConcavity{
        TangentLiner,//相切线
        Concavity,//凹性
        Convexity,//凸性
    }
    class MyNewEdge
    {
        public Tag EdgeTag;
        public MyNewEdgeType Edgetype;
        public EdgeConcavity EdgeConcaConve;

        //边所属环的内外性，外环为True,内环为False
        public bool LoopType;


        public static EdgeConcavity GetEdgeConca(Tag edge)
        {
            Tag[] face_list;
            Program.theUfmodel.AskEdgeFaces(edge, out face_list);
            EdgeConcavity edgeType;
            double Angle;
            MyFace.AskAngleOfFace(face_list[0], face_list[1], out Angle);
            if (Angle == 180.0)
                edgeType=EdgeConcavity.TangentLiner;//相切
            else if (Angle > 180.0)
                edgeType=EdgeConcavity.Convexity;//凸边
            else
                edgeType=EdgeConcavity.Concavity;//凹边
            return edgeType;
        }

        public static MyNewEdgeType GetEdgeType(Tag edge)
        {
            int type;
            MyNewEdgeType edgeType;
            Program.theUfmodel.AskEdgeType(edge, out type);
            switch (type)
            {
                case 3001:
                    edgeType = MyNewEdgeType.Liner;
                    break;
                case 3002:
                    edgeType = MyNewEdgeType.CirCular;
                    break;
                default:
                    edgeType = MyNewEdgeType.Other;
                    break;
            }
            return edgeType;
        }



        //得到一个特征中边的个数
        public static void GetEdgeOfFeature(MyNewDefineFeature Feature, out HashSet<Tag> Edge_Feature)
        {
            Edge_Feature = new HashSet<Tag>();
            Tag[] EdgeList;
            for (int i = 0; i < Feature.FaceNumber; i++)
            {
                Program.theUfmodel.AskFaceEdges(Feature.MyNewFeature[i].FaceTag, out EdgeList);
                foreach (Tag EdgeTag in EdgeList)
                {
                    Edge_Feature.Add(EdgeTag);
                }
            }
        }

       
    }
}
