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
    //定义一个空的图节点类？
    class GripchNode
    {

    }

    class GripchFaceNode : GripchNode
    {
        public Tag FaceTag;//面的标识
        public MyNewFaceType NodeFaceType;//面的类型
        public FaceConcavity FaceConcaConve;//面的凸凹性
        public int FaceLoopNumber;//面中环的个数
        public int FaceInnerLoopNumber;//面中内环的个数
        public double AreaOfFace;//面的面积
        public bool IsDeCompseBaseFace;//是否为分解基面true为分解基面，false不是分解基面

        public bool IsConCavityFace;//根据是否含有凹边来确认是否为凹面，true为凹面，false为凸面
        
        public double[ ] Face_Axis={0.0,0.0,0.0};//面的轴线方向，只针对圆柱面和圆锥面存在
        public double[] Face_Axis_Point={0.0,0.0,0.0};//面轴线上的一点
        public List<Tag> FaceInnerLoopEdges;


        //判断是否是分解基面
        public bool IsBaseFace()
        {
            //CAD模型面包含两个或两个以上的环，且存在内环，则为分解基面
            if (FaceLoopNumber >= 2 && FaceInnerLoopNumber >= 1)
                return true;
            return false;
        }

        //根据是否含有凹边来判断是否为凹面
        public bool IsConCavityFacebyEdge()
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

        //得到面的内环边的List<Tag>
        public List<Tag> GetFaceInnerListEdges()
        {
            List<Tag> InnerListEdge = new List<Tag>();
            Tag[] edgeList;
            Program.theUfmodel.AskFaceEdges(FaceTag, out edgeList);

            for (int i = 0; i < edgeList.Length; i++)
            {
                if (MyEdges.IsConcaveEdge(edgeList[i]))
                    InnerListEdge.Add(edgeList[i]);
            }
            return InnerListEdge;
        }
    }

    class GripchEdgeNode : GripchNode
    {
        public Tag EdgeTag;//边的标识
        public MyNewEdgeType NodeEdgeType;//边的类型
        public EdgeConcavity EdgeConcaConve;//边的凸凹性
        public bool LooType;//边所属环的类型
    }
}
