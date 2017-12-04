using System;
using NXOpen;
using NXOpen.UF;
using NXOpen.MenuBar;
using System.Runtime.InteropServices;
using System.Windows.Forms;
using System.Collections.Generic;
using ModifyDimPlane;
//这个类主要用于修改标注平面功能
public class Program
{
    // class members
    public  static Session theSession;
    public static UI theUI;
    
    public static UFSession theUfSession;
    public static Program theProgram;
    public static bool isDisposeCalled;
    public static UFModl theUfmodel;
    public static UFObj theUfobj;
    public static UFVec3 theUfVec3;

    //public static FeatureGraphic FeatGraphic;

    [DllImport("defineDLL.dll", EntryPoint = "GetLoopsNumber")]
    extern static int GetLoopsNumber(Tag face, ref int loopNum, ref int InnerloopNum);
    //  begin  
    //[DllImport("MyDefine.dll", EntryPoint = "sum", CharSet = CharSet.Ansi, CallingConvention = CallingConvention.StdCall)]
    //public static extern int sum(int a, int b);
    [DllImport("definedll.dll", EntryPoint = "Add")]
    //extern static int Add(int n, [MarshalAs(UnmanagedType.LPArray, SizeParamIndex = 1)] double [] Z);
    extern static void Add(int n, double[] Z);
    //end    
    //------------------------------------------------------------------------------
    // Constructor
    //------------------------------------------------------------------------------
    public Program()
    {
        
        try
        {
            theSession = Session.GetSession();
            theUI = UI.GetUI();
            theUfSession = UFSession.GetUFSession();
            theUfmodel = theUfSession.Modl;
            theUfobj = theUfSession.Obj;
            theUfVec3 = theUfSession.Vec3;

            isDisposeCalled = false;
        }
        catch (NXOpen.NXException ex)
        {
            // ---- Enter your exception handling code here -----
            // UI.GetUI().NXMessageBox.Show("Message", NXMessageBox.DialogType.Error, ex.Message);
        }
    }

    //------------------------------------------------------------------------------
    //  Explicit Activation
    //      This entry point is used to activate the application explicitly
    //------------------------------------------------------------------------------
    public static int Main(string[] args)
    {
        int retValue = 0;
        try
        {
            theProgram = new Program();

            //TODO: Add your application code here 

            theProgram.Dispose();
        }
        catch (NXOpen.NXException ex)
        {
            // ---- Enter your exception handling code here -----

        }
        return retValue;
    }

    //------------------------------------------------------------------------------
    //  NX Startup
    //      This entry point activates the application at NX startup

    //Will work when complete path of the dll is provided to Environment Variable 
    //USER_STARTUP or USER_DEFAULT
    //------------------------------------------------------------------------------
    public static int Startup()
    {
        int retValue = 0;
        try
        {
            theProgram = new Program();
            //在下面添加命令按钮
            theUI.MenuBarManager.AddMenuAction("Cs_ModifyDimPlane", ModifyDimPlane);
            theUI.MenuBarManager.AddMenuAction("Cs_CreateNodeLine", CreateNodeLine);
            theUI.MenuBarManager.AddMenuAction("Cs_CreateWaveObject",CreateWaveObject);
            theUI.MenuBarManager.AddMenuAction("Cs_Dimensioning", AutoDimension);
            theUI.MenuBarManager.AddMenuAction("Cs_Recognition", FeatureRecognition);
            theUI.MenuBarManager.AddMenuAction("Cs_Recognition", FeatureTree);
            CModifyDimPlane.HookStart();
        }
        catch (NXOpen.NXException ex)
        {
            // ---- Enter your exception handling code here -----
            // theUI.NXMessageBox.Show("UI Styler", NXMessageBox.DialogType.Error, ex.Message);
        }
        return retValue;
    }
    public static MenuBarManager.CallbackStatus CreateWaveObject(MenuButtonEvent buttonEvent)
    {
        Part workPart = theSession.Parts.Work;
        /*NXOpen.Session.UndoMarkId*/
        Part Open_part=workPart;

        BodyCollection  bodis=Open_part.Bodies;
        Body[] bodys = bodis.ToArray();

        Face[] faces=bodys[0].GetFaces();
        int num = faces.Length;
              
        return MenuBarManager.CallbackStatus.Continue;
    }

    public static MenuBarManager.CallbackStatus CreateNodeLine(MenuButtonEvent buttonEvent)
    {
        Part oPart;
        oPart=theSession.Parts.Work;
        if(oPart==null)
            return MenuBarManager.CallbackStatus.Continue;
        Point3d pStart=new Point3d(0,0,0);
        Point3d pEnd=new Point3d(1000,1000,1000);
        oPart.Curves.CreateLine(pStart, pEnd);

        return MenuBarManager.CallbackStatus.Continue;
    }

//     public static MenuBarManager.CallbackStatus CreateCircle(MenuButtonEvent buttonEvent)
//     {
//         Part oPart;
//         oPart = theSession.Parts.Work;
//         if (oPart == null)
//             return MenuBarManager.CallbackStatus.Continue;
//         Point3d pStart = new Point3d(0, 0, 0);
//         Point3d pEnd = new Point3d(1000, 1000, 1000);
//         oPart.Arcs.;
// 
//         return MenuBarManager.CallbackStatus.Continue;
//     }

    //修改标注平面，这个函数不做任何工作，主要是采用钩子函数方式来实现相关的内容；
    public static MenuBarManager.CallbackStatus ModifyDimPlane(MenuButtonEvent buttonEvent)
    {
        
        //Xform xform1;
        //Xform xform2;
        //Xform xform3;
        //xform1 = ((NXOpen.Annotations.PmiParallelDimension)theUI.SelectionManager.GetSelectedObject(0)).GetInferredAnnotationPlane(NXOpen.Annotations.PmiDefaultPlane.YzOfWcs);
        //xform2 = ((NXOpen.Annotations.PmiParallelDimension)theUI.SelectionManager.GetSelectedObject(0)).GetInferredAnnotationPlane(NXOpen.Annotations.PmiDefaultPlane.XyOfWcs);
        //xform3 = ((NXOpen.Annotations.PmiParallelDimension)theUI.SelectionManager.GetSelectedObject(0)).GetInferredAnnotationPlane(NXOpen.Annotations.PmiDefaultPlane.XzOfWcs);

        //NXOpen.Session.UndoMarkId markId1;
        //markId1 = theSession.SetUndoMark(NXOpen.Session.MarkVisibility.Visible, "Edit Dimension");

        //iCurrent++;
        //if(iCurrent>3)
        //    iCurrent=1;
        //if(iCurrent==1)
        //    ((NXOpen.Annotations.PmiParallelDimension)theUI.SelectionManager.GetSelectedObject(0)).AnnotationPlane = xform1;
        //else if(iCurrent==2)
        //    ((NXOpen.Annotations.PmiParallelDimension)theUI.SelectionManager.GetSelectedObject(0)).AnnotationPlane = xform2;
        //else if(iCurrent==3)
        //    ((NXOpen.Annotations.PmiParallelDimension)theUI.SelectionManager.GetSelectedObject(0)).AnnotationPlane = xform3;


        //int nErrs1;
        //nErrs1 = theSession.UpdateManager.DoUpdate(markId1);
        return MenuBarManager.CallbackStatus.Continue;
    }

    public static MenuBarManager.CallbackStatus AutoDimension(MenuButtonEvent buttonEvent)
    {
        Part workPart = theSession.Parts.Work;
        Part Open_part = workPart;

        BodyCollection bodis = Open_part.Bodies;
        Body[] bodys = bodis.ToArray();

        Edge[] edges = bodys[0].GetEdges();

        FeatureGraphic FeatGraphic = new FeatureGraphic();

        //得到子特征;
        FeatGraphic.GetAllSubFeature();

        //确定各特征的类型
        FeatGraphic.FeatureListType();

        //先合并孔类特征
        //FeatureGraphic.AssembleHoleFeature();

        //组合子特征，
        FeatGraphic.AssembleFeature();
        
        //重新组合后需要，再次获取特征邻接面的信息
        FeatGraphic.GetFeatureListAdjacentFace();
       

        //目前得到的结论是零件的毛坯面都会存储在SubFeaturesList[0]中，所以从索引1开始查找，相邻面的信息
        for (int i = 0;i<FeatGraphic.SubFeaturesList.Count ; i++)
        {
            if (FeatGraphic.SubFeaturesList[i].FeatureType != NewSelfDefFeatureType.OTHER_TYPE)//只标注可以识别的特征颜色
                for (int j = 0; j < FeatGraphic.SubFeaturesList[i].FaceNumber; j++)
                {
                    int color = 106 + i * 10;
                    theUfobj.SetColor(FeatGraphic.SubFeaturesList[i].MyNewFeature[j].FaceTag, color);//红色186
                }
        }


        for (int i = 0; i < edges.Length; i++)
        {
            int type;
            Program.theUfmodel.AskEdgeType(edges[i].Tag, out type);
        }
       
        Face[] faces = bodys[0].GetFaces();
        int num_radii;
        double[] radii={0.0,0.0};
        double[] positions={0.0,0.0,0.0,0.0,0.0,0.0};
        double[] UVparams={0.0,0.0,0.0,0.0};
        for (int i = 0; i<faces.Length;i++ )
        {
            //theUfmodel.AskFaceMinRadii(faces[i].Tag, out num_radii, radii, positions, UVparams);
            int loopNum = 0;
            int InnerLoopNum = 0;
            GetLoopsNumber(faces[i].Tag, ref loopNum, ref InnerLoopNum);
        }
        return MenuBarManager.CallbackStatus.Continue;
    }
    //------------------------------------------------------------------------------
    // Following method disposes all the class members
    //------------------------------------------------------------------------------
    public void Dispose()
    {
        try
        {
            if (isDisposeCalled == false)
            {
                //TODO: Add your application code here 
            }
            isDisposeCalled = true;
        }
        catch (NXOpen.NXException ex)
        {
            // ---- Enter your exception handling code here -----

        }
    }

    //public static void Dimesioning()
    //{
    //   Part workPart=theSession.Parts.Work;

    //   NXOpen.Annotations.DimensionData dimeData1;
    //   dimeData1 = workPart.Annotations.NewDimensionData();

    //   BodyCollection bodis = workPart.Bodies;
    //   Body[] bodys = bodis.ToArray();

    //   Face[] faces = bodys[0].GetFaces();
    //   int Faces_num = faces.Length;

    //   NXOpen.Annotations.Associativity ass1;
    //   ass1 = workPart.Annotations.NewAssociativity();

    //   ass1.FirstObject=faces[0];
    //   NXObject nullNXObject = null;
    //   ass1.SecondObject = nullNXObject;

       
    //   Expression expression1;
    //   expression1 = workPart.Expressions.CreateSystemExpressionWithUnits("p1=0.5", null);
    //   Scalar scalar1;
    //   scalar1 = workPart.Scalars.CreateScalarExpression(expression1, NXOpen.Scalar.DimensionalityType.None, NXOpen.SmartObject.UpdateOption.WithinModeling);
    //   Point point1=workPart.Points.CreatePoint(faces[0], scalar1, scalar1, NXOpen.SmartObject.UpdateOption.WithinModeling);

        
    //   Point3d pickPoint1 = new Point3d(point1.Coordinates.X, point1.Coordinates.Y, point1.Coordinates.Z);//面的中心点坐标
    //   ass1.PickPoint = pickPoint1;

    //   NXOpen.Annotations.Associativity[] associativity2 = new NXOpen.Annotations.Associativity[1];
    //   associativity2[0] = ass1;
    //   dimeData1.SetAssociativity(1, associativity2);

    //   ass1.Dispose();

    //   NXOpen.Annotations.Associativity ass3;
    //   ass3 = workPart.Annotations.NewAssociativity();


    ////        NXOpen.UF.UFSf ufsf1 = new NXOpen.UF.UFSf();
    ////        int num_adjacent;
    ////        Tag [] adjacentFaces;
    ////        ufsf1.FaceAskAdjacentFaces(faces[0].Tag,out num_adjacent,out adjacentFaces);

    //   int num_adjacent=0;
    //   Face [] adjacentFaces;
    //   //GetAdjacentFace(faces[0],num_adjacent,adjacentFaces);

    //    Edge[] edges = faces[0].GetEdges();

    //    Face[] AdFaces = new Face[4];
    //    for (int i = 0; i<edges.Length;++i )
    //    {
    //        Face[] tmpFace=edges[i].GetFaces();
    //        for(int j=0;j<tmpFace.Length;++j)
    //            if (tmpFace[j].Tag != faces[0].Tag)
    //            {
    //                AdFaces[num_adjacent] = tmpFace[j];
    //                num_adjacent++;
    //            }
    //    }
    //    Face parallelface;
    //    for (int i=0;i<faces.Length;++i)
    //    {
    //        if(faces[i]==)
    //    }
    //   ass3.FirstObject = faces[1];
    //   ass3.SecondObject = nullNXObject;

    //   Point3d pickPoint2 = new Point3d(17.7852174562136, 0.0, 28.080186384977);
    //   ass3.PickPoint = pickPoint2;

    //   NXOpen.Annotations.Associativity[] associativity4 = new NXOpen.Annotations.Associativity[1];
    //   associativity4[0] = ass3;
    //   dimeData1.SetAssociativity(2, associativity4);

    //   ass3.Dispose();

    //   NXOpen.Annotations.PmiData pmiData1;
    //   pmiData1 = workPart.Annotations.NewPmiData();


    //   Xform xform2;
    //   xform2 = dimeData1.GetInferredPlane(NXOpen.Annotations.PmiDefaultPlane.ModelView, NXOpen.Annotations.DimensionType.Perpendicular);

    //   Point3d origin1 = new Point3d(0.0, 0.0, 0.0);
    //   NXOpen.Annotations.PmiPerpendicularDimension pmiPerpendicularDimension1;
    //   pmiPerpendicularDimension1 = workPart.Dimensions.CreatePmiPerpendicularDimension(dimeData1, pmiData1, xform2, origin1);

    //   dimeData1.Dispose();
    //   pmiData1.Dispose();

    //   Xform xform3;
    //   xform3 = pmiPerpendicularDimension1.GetInferredAnnotationPlane(NXOpen.Annotations.PmiDefaultPlane.YzOfWcs);

    //   pmiPerpendicularDimension1.AnnotationPlane = xform3;

    //   pmiPerpendicularDimension1.IsOriginCentered = true;

    //   Point3d origin4 = new Point3d(0.0, 54.5601856649006, 75.4465181592287);
    //   pmiPerpendicularDimension1.AnnotationOrigin = origin4;

    //   pmiPerpendicularDimension1.LeaderOrientation = NXOpen.Annotations.LeaderOrientation.FromLeft;
    //}

    public static MenuBarManager.CallbackStatus FeatureRecognition(MenuButtonEvent buttonEvent)
    {
        //C++dll中函数用法实例
        //int a = 1;
        //int b = 2;
        //int c = Add(a, b);

        //double [] num={0.0,0.0,0.0};
        //Add(3,num);

        List<List<Tag>> Face_of_Feature;
        MyFace.GetFaceArray(out Face_of_Feature);//是否应该加一条相邻特征的判断?

        SelfDefFeatureType[] Def_Types;
        MyFeature.AskTypeOfFeature(Face_of_Feature, out Def_Types);

        string TypeMessage="";
        foreach (SelfDefFeatureType Deftemp in Def_Types)
        {
            TypeMessage += Enum.GetName(typeof(SelfDefFeatureType), Deftemp) + "\n";
        }
        NXMessageBox box = theUI.NXMessageBox;
        box.Show("特征类型显示", NXMessageBox.DialogType.Information, TypeMessage);

        foreach (List<Tag> Face_list in Face_of_Feature)
        {
            for (int i = 0; i < Face_list.Count; ++i)
                theUfobj.SetColor(Face_list[i], 106);//红色186
        }
        //for (int i = 0; i < Face_of_Feature.Count; i++)
        //{
        //    if (Def_Types[i] == SelfDefFeatureType.RECT_SOLT)
        //    {
        //        foreach (Tag Face_tag in Face_of_Feature[i])
        //        {
        //             theUfobj.SetColor(Face_tag, 106);//红色186
        //        }
                   
        //    }
        //}

        Part workPart = theSession.Parts.Work;

        BodyCollection bodis = workPart.Bodies;
        Body[] bodys = bodis.ToArray();

        Body body = bodys[0];
        NXOpen.Face[] faces = body.GetFaces();
        NXOpen.Features.Feature[] features= body.GetFeatures();
        
        Tag[] body_faces_tag;
        theUfmodel.AskFeatFaces(features[0].Tag, out body_faces_tag);
        
        //theUfobj.SetColor(body_faces_tag[0], 106);
        //theUfobj.SetColor(body_faces_tag[5], 106);

        double Arcangle;

        MyFace.AskAngleOfFace(body_faces_tag[0], body_faces_tag[5], out Arcangle);

        int fLength = features.Length;

        foreach (NXOpen.Features.Feature tempF in features)
        {
            string type = tempF.FeatureType;
            if (type=="DOVE_TAIL_SLOT")
            {
                Tag[] VSlot_face_Tag;
                theUfmodel.AskFeatFaces(tempF.Tag, out VSlot_face_Tag);
                theUfobj.SetColor(VSlot_face_Tag[0], 106);
                theUfobj.SetColor(VSlot_face_Tag[1], 106);

                MyFace.AskAngleOfFace(VSlot_face_Tag[0], VSlot_face_Tag[1], out Arcangle);
                
                //    obj.SetColor(tempF.Tag, 106);
                Tag[] faces_tag, edges_tag,adjacFace_tag;
                theUfmodel.AskFeatEdges(tempF.Tag, out edges_tag);

                theUfmodel.AskFeatFaces(tempF.Tag, out faces_tag);

                //高亮指定面
                //NXOpen.UF.UFDisp Disp = theUfSession.Disp;
                //Disp.SetHighlight(faces_tag[0], 1);
            }
        }
        //String tmpString = faces_tag[0].ToString();
        //Face face=(Face)feature.FindObject("FACE 0");
        //face.Highlight();
        
        return MenuBarManager.CallbackStatus.Continue;
    }
   
    public static int GetUnloadOption(string arg)
    {
        //Unloads the image explicitly, via an unload dialog
        //return System.Convert.ToInt32(Session.LibraryUnloadOption.Explicitly);

        //Unloads the image immediately after execution within NX
        
        //return System.Convert.ToInt32(Session.LibraryUnloadOption.Immediately);

        //Unloads the image when the NX session terminates
        return System.Convert.ToInt32(Session.LibraryUnloadOption.AtTermination);
    }

    //显示特征树
    public static MenuBarManager.CallbackStatus FeatureTree(MenuButtonEvent buttonEvent)
    {
        return MenuBarManager.CallbackStatus.Continue;
    }
}

