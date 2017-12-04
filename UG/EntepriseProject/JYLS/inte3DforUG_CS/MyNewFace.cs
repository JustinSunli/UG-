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
    //面的凸凹性判断面的内外
    public enum FaceConcavity{
        Tangent,//切平面
        Concavity,//凹性
        Convexity,//凸性
    }
    public enum MyNewFaceType
    {
        Planar,//平面
        Cylindrical,//圆柱面
        Conical,//圆锥面
        Spherical,//球面
        Other,//其他面
    }
    class MyNewFace
    {
        public Tag FaceTag;
        public FaceConcavity FaceConcaConve;
        public MyNewFaceType FaceType;

        //True：实际存在的面，False:虚面
        public bool FaceExistence;//表示面的存在性，表示节点的面原本就存在，还是几何推理添加的虚面

        //面上环的数量，反映了面与其他面的相交情况，环数越多，则该面出的相交情况越复杂
        public int FaceLoopsNumber;

        public MyNewFace(Tag faceTag)
        {
            FaceTag = faceTag;
            FaceType = getFaceType(faceTag);
            if (MyFace.IsConcaveFace(faceTag) == 2)
                FaceConcaConve = FaceConcavity.Concavity;
            else if (MyFace.IsConcaveFace(faceTag) == 1)
                FaceConcaConve = FaceConcavity.Convexity;
            else if(MyFace.IsConcaveFace(faceTag) == 0)
                FaceConcaConve = FaceConcavity.Tangent;//这个面应该称为光顺面

        }
        //得到面的类型
        public static MyNewFaceType getFaceType(Face Face)
        {
            MyNewFaceType facetype;
            switch (Face.SolidFaceType)
            {
                case Face.FaceType.Planar:
                    facetype=MyNewFaceType.Planar;
                    break;
                case Face.FaceType.Cylindrical:
                    facetype = MyNewFaceType.Cylindrical;
                    break;
                case Face.FaceType.Conical:
                    facetype = MyNewFaceType.Conical;
                    break;
                case Face.FaceType.Spherical:
                    facetype = MyNewFaceType.Spherical;
                    break;
                default:
                    facetype = MyNewFaceType.Other;
                    break;

            }
            return facetype;
        }

        //根据tag得到面的类型
        public static MyNewFaceType getFaceType(Tag FaceTag)
        {
            int type = 0;//面的类型
            double[] point = { 0.0, 0.0, 0.0 };//圆柱面、圆锥面轴线上的一点
            double[] dir = { 0.0, 0.0, 0.0 };//轴线方向
            double[] box = { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 };//面的包容盒
            double radius;
            double rad_data;
            int norm_dir = 0;
            Program.theUfmodel.AskFaceData(FaceTag, out type, point, dir, box, out radius, out rad_data, out norm_dir);

            MyNewFaceType facetype;
            switch (type)
            {
                case 22:
                    facetype = MyNewFaceType.Planar;
                    break;
                case 16:
                    facetype = MyNewFaceType.Cylindrical;
                    break;
                case 17:
                    facetype = MyNewFaceType.Conical;
                    break;
                case 18:
                    facetype = MyNewFaceType.Spherical;
                    break;
                default:
                    facetype = MyNewFaceType.Other;
                    break;

            }
            return facetype;
        }

        //根据是否含有凹边来判断是否为凹面
        public static bool IsConCavityFacebyEdge(Tag Face)
        {
            Tag[] edgeList;
            Program.theUfmodel.AskFaceEdges(Face, out edgeList);
            for (int i = 0; i < edgeList.Length; i++)
            {
                if (MyEdges.IsConcaveEdge(edgeList[i]))
                    return true;
            }
            return false;
        }
        //得到面中环个数
//         public static int GetNumberFaceLoop()
//         {
// 
//         }

        //判断连个
    }
}
