using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using NXOpen;
using System.Runtime.InteropServices;
using NXOpen.UF;
using NXOpen.Annotations;

namespace ModifyDimPlane
{
    class Dimension
    {
        public static Session theSession = Session.GetSession();
        public static UFSession theUfSession = UFSession.GetUFSession();
        public static NXOpen.UF.UFModl ufmodel = theUfSession.Modl;
        public static NXOpen.UF.UFVec3 Vec3 = theUfSession.Vec3;
        public static UFObj theUfobj = theUfSession.Obj;

        //标注孔的尺寸1、盲孔
        public static void HoleDime(Tag edge_tag)
        {
            int edge_type;
            ufmodel.AskEdgeType(edge_tag,out edge_type);
           
            Part workPart = theSession.Parts.Work;
            NXOpen.Session.UndoMarkId markId2;
            markId2 = theSession.SetUndoMark(NXOpen.Session.MarkVisibility.Visible, "Create Dimension");

            NXOpen.Annotations.DimensionData dimensionData1;
            dimensionData1 = workPart.Annotations.NewDimensionData();

            NXOpen.Annotations.Associativity associativity1;
            associativity1 = workPart.Annotations.NewAssociativity();

            Edge edge1 = MyEdges.GetEdgeOfTag(edge_tag);          
            associativity1.FirstObject = edge1;

            associativity1.SecondObject = null;
            associativity1.ObjectView = workPart.ModelingViews.WorkView;

            double[] point1={0.0,0.0,0.0},point2={0.0,0.0,0.0};
            int VertexNum;
            ufmodel.AskEdgeVerts(edge_tag, point1, point2,out VertexNum);//圆弧上只有一个端点

            Point3d pickPoint1 = new Point3d(point1[0], point1[1], point1[2]);//圆弧上一点
            associativity1.PickPoint = pickPoint1;

            NXOpen.Annotations.Associativity[] associativity2 = new NXOpen.Annotations.Associativity[1];
            associativity2[0] = associativity1;
            dimensionData1.SetAssociativity(1, associativity2);
            associativity1.Dispose();//释放对象内存

            NXOpen.Annotations.PmiData pmiData1;
            pmiData1 = workPart.Annotations.NewPmiData();

            Xform xform2;
            xform2 = dimensionData1.GetInferredPlane(NXOpen.Annotations.PmiDefaultPlane.ModelView, NXOpen.Annotations.DimensionType.Diameter);

            Point3d origin1 = new Point3d(0.0, 0, 0.0);
            NXOpen.Annotations.PmiDiameterDimension pmiDiameterDimension1;
            //尺寸数据，PMI数据，标注平面，标注原点
            //try
            //{
            // 输入无效对象   pmiDiameterDimension1 = workPart.Dimensions.CreatePmiDiameterDimension(dimensionData1, pmiData1, xform2, origin1);
            //}
            //catch (System.Exception ex)
            //{
            	
            //}
            pmiDiameterDimension1 = workPart.Dimensions.CreatePmiDiameterDimension(dimensionData1, pmiData1, xform2, origin1);

            //盲孔的标注位置定义圆心
            //NXOpen.UF.UFCurve theCure = theUfSession.Curve;
            //UFCurve.Arc TheArc;
            //theCure.AskArcData(edge_tag,out TheArc);

            //Point3d origin2 = new Point3d(TheArc.arc_center[0], TheArc.arc_center[1], TheArc.arc_center[2]);
            //pmiDiameterDimension1.AnnotationOrigin = origin2;//设置标注原点的位置

            pmiDiameterDimension1.IsOriginCentered = true;

            int nErrs1;
            nErrs1 = theSession.UpdateManager.DoUpdate(markId2);
        }

        //平行平面的标注，1、型腔的标注
        public static void ParallelFaceDime(Tag Face1,Tag Face2,Tag BasicFace)
        {
            Part workPart = theSession.Parts.Work;

            NXOpen.Session.UndoMarkId markId3;
            markId3 = theSession.SetUndoMark(NXOpen.Session.MarkVisibility.Visible, "Create Dimension");

            NXOpen.Annotations.DimensionData dimensionData1;
            dimensionData1 = workPart.Annotations.NewDimensionData();

            NXOpen.Annotations.Associativity associativity1;
            associativity1 = workPart.Annotations.NewAssociativity();

            Face face1 = MyFace.GetFaceByTag(Face1);
            associativity1.FirstObject = face1;

            NXObject nullNXObject = null;
            associativity1.SecondObject = nullNXObject;

            associativity1.ObjectView = workPart.ModelingViews.WorkView;

            //得到一个面上的一点
            double[] DefPoint1 = { 0.0, 0.0, 0.0 };
            MyVertex.GetVertexOfFace(Face1, ref DefPoint1);
            Point3d pickPoint1 = new Point3d(DefPoint1[0], DefPoint1[1], DefPoint1[2]);//寻找面face1上的点
            associativity1.PickPoint = pickPoint1;

            NXOpen.Annotations.Associativity[] associativity2 = new NXOpen.Annotations.Associativity[1];
            associativity2[0] = associativity1;
            dimensionData1.SetAssociativity(1, associativity2);
            associativity1.Dispose();

            NXOpen.Annotations.Associativity associativity3;
            associativity3 = workPart.Annotations.NewAssociativity();

            Face face2 = MyFace.GetFaceByTag(Face2);

            associativity3.FirstObject = face2;
            associativity3.SecondObject = nullNXObject;
            //得到一个面上的一点
            double[] DefPoint2 = { 0.0, 0.0, 0.0 };
            MyVertex.GetVertexOfFace(Face1, ref DefPoint2);

            Point3d pickPoint2 = new Point3d(DefPoint2[0], DefPoint2[1], DefPoint2[2]);//寻找face2上的点
            associativity3.PickPoint = pickPoint2;

            NXOpen.Annotations.Associativity[] associativity4 = new NXOpen.Annotations.Associativity[1];
            associativity4[0] = associativity3;
            dimensionData1.SetAssociativity(2, associativity4);

            NXOpen.Annotations.PmiData pmiData1;
            pmiData1 = workPart.Annotations.NewPmiData();

            Xform xform2;
            if (BasicFace == Tag.Null)
                xform2 = dimensionData1.GetInferredPlane(PmiDefaultPlane.ModelView, NXOpen.Annotations.DimensionType.Perpendicular);
            else
                xform2 = dimensionData1.GetInferredPlane(AutoSelectPMIPlane(Face1, BasicFace), NXOpen.Annotations.DimensionType.Perpendicular);

            Point3d origin1 = new Point3d(0.0, 0.0, 0.0);
            NXOpen.Annotations.PmiPerpendicularDimension pmiPerpendicularDimension1;
            pmiPerpendicularDimension1 = workPart.Dimensions.CreatePmiPerpendicularDimension(dimensionData1, pmiData1, xform2, origin1);

            pmiPerpendicularDimension1.IsOriginCentered = true;

            int nErrs3;
            nErrs3 = theSession.UpdateManager.DoUpdate(markId3);
        }

        //确定标注平面,1、确定两平面的标注时，确定标注平面
        public static PmiDefaultPlane AutoSelectPMIPlane(Tag Object,Tag BasicFace)
        {
            double[] param = { 0.0, 0.0 }; double[] point = { 0.0, 0.0, 0.0 }; double[] u1 = { 0.0, 0.0, 0.0 };
            double[] v1 = { 0.0, 0.0, 0.0 }; double[] u2 = { 0.0, 0.0, 0.0 }; double[] v2 = { 0.0, 0.0, 0.0 };
            double[] unit_norm1 = { 0.0, 0.0, 0.0 }; double[] unit_norm2 = { 0.0, 0.0, 0.0 };
            double[] radii = { 0.0, 0.0 };
            ufmodel.AskFaceProps(Object, param, point, u1, v1, u2, v2, unit_norm1, radii);
            ufmodel.AskFaceProps(BasicFace, param, point, u1, v1, u2, v2, unit_norm2, radii);

            double[] result={0.0,0.0,0.0};
            Vec3.Cross(unit_norm1, unit_norm2, result);


            double[] X={1.0,0.0,0.0},Y={0.0,1.0,0.0},Z={0.0,0.0,1.0};
            double ArcangleX,ArcangleY,ArcangleZ;
            double[] dir = { 0.0, 0.0, 0.0 };
            Vec3.AngleBetween(result, X, dir, out ArcangleX);//计算法向量的夹角
            ArcangleX = ArcangleX * 180 / NXOpen.UF.UFConstants.PI;

            Vec3.AngleBetween(result, Y, dir, out ArcangleY);//计算法向量的夹角
            ArcangleY = ArcangleY * 180 / NXOpen.UF.UFConstants.PI;

            Vec3.AngleBetween(result, Z, dir, out ArcangleZ);//计算法向量的夹角
            ArcangleZ = ArcangleZ * 180 / NXOpen.UF.UFConstants.PI;
            if (ArcangleX == 0 || ArcangleX == 180.0)
                return NXOpen.Annotations.PmiDefaultPlane.YzOfWcs;
            else if (ArcangleY == 0 || ArcangleY == 180.0)
                return NXOpen.Annotations.PmiDefaultPlane.XzOfWcs;
            else if (ArcangleZ == 0 || ArcangleZ == 180.0)
                return NXOpen.Annotations.PmiDefaultPlane.XyOfWcs;
            else
                return NXOpen.Annotations.PmiDefaultPlane.ModelView;
        }
    }
}
