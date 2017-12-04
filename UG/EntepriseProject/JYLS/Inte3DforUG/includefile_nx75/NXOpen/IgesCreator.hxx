#ifndef NXOpen_IGESCREATOR_HXX_INCLUDED
#define NXOpen_IGESCREATOR_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     IgesCreator.ja
//
//  Generated by:
//     apiwrap
//
//  WARNING:
//    This file is automatically generated - do not edit by hand
//
#ifdef _MSC_VER
#pragma once
#endif

#include <NXOpen/NXDeprecation.hxx>
#include <vector>
#include <NXOpen/NXString.hxx>
#include <NXOpen/Callback.hxx>
#include <NXOpen/DexBuilder.hxx>
#include <NXOpen/IgesCreator.hxx>
#include <NXOpen/ObjectSelector.hxx>
#include <NXOpen/ObjectTypeSelector.hxx>
#include <NXOpen/libnxopencpp_exports.hxx>

#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable:4996)
#endif
#ifdef __GNUC__
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

namespace NXOpen
{
    class IgesCreator;
    class CoordinateSystem;
    class DexBuilder;
    class ObjectSelector;
    class ObjectTypeSelector;
    class TaggedObject;
    class _IgesCreatorBuilder;
    class IgesCreatorImpl;
    /**
        Represents a @link IgesCreator IgesCreator@endlink  to be used when exporting the IGES Data
        This class is created using @link DexManager DexManager@endlink . 
        NULL object will be returned from Commit()  <br> To create a new instance of this class, use @link DexManager::CreateIgesCreator DexManager::CreateIgesCreator@endlink  <br> 
    Default values.
    <table border="1"> 
     
    <tr><th> 
    Property</th>  <th> 
    Value</th> </tr>
    <tr><td> 
     
    BcurveTol </td> <td> 
     
    0.058 </td> </tr> 

    <tr><td> 
     
    ExportDrawings </td> <td> 
     
    0 </td> </tr> 

    <tr><td> 
     
    ExportFrom </td> <td> 
     
    DisplayPart </td> </tr> 

    <tr><td> 
     
    ExportModelData </td> <td> 
     
    0 </td> </tr> 

    <tr><td> 
     
    FlattenAssembly </td> <td> 
     
    0 </td> </tr> 

    <tr><td> 
     
    IdenticalPointResolution </td> <td> 
     
    0 </td> </tr> 

    <tr><td> 
     
    Jama </td> <td> 
     
    0 </td> </tr> 

    <tr><td> 
     
    MapCrossHatchTo </td> <td> 
     
    SectionArea </td> </tr> 

    <tr><td> 
     
    MapRevolvedFacesTo </td> <td> 
     
    BSurfaces </td> </tr> 

    <tr><td> 
     
    MapTabCylToBSurf </td> <td> 
     
    0 </td> </tr> 

    <tr><td> 
     
    MaxLineThickness </td> <td> 
     
    0 </td> </tr> 

    <tr><td> 
     
    MaxThreeDMdlSpace </td> <td> 
     
    0 </td> </tr> 

    <tr><td> 
     
    ProcessHoldFlag </td> <td> 
     
    0 </td> </tr> 

    <tr><td> 
     
    ReferenceType </td> <td> 
     
    Absolute </td> </tr> 

    <tr><td> 
     
    SysDefidenticalPointResolution </td> <td> 
     
    0 </td> </tr> 

    <tr><td> 
     
    SysDefmaxThreeDMdlSpace </td> <td> 
     
    0 </td> </tr> 

    <tr><td> 
     
    UseStartSectionFile </td> <td> 
     
    0 </td> </tr> 

    </table>  

     <br>  Created in NX6.0.0.  <br>  
    */
    class NXOPENCPPEXPORT  IgesCreator : public DexBuilder
    {
        /** Export From Option */
        public: enum ExportFromOption
        {
            ExportFromOptionDisplayPart/**  export data from displayed part */,
            ExportFromOptionExistingPart/**  export data from existing part which is on disk */
        };

        /** Cysref Option*/
        public: enum CsysrefEnum
        {
            CsysrefEnumAbsolute/** export data with respect to absolute CSYS */,
            CsysrefEnumWcs/** export data with respect to working CSYS */,
            CsysrefEnumSpecifiedCsys/** export data with respect to specified CSYS */
        };

        /** Map Option */
        public: enum MapRevolvedFacesOption
        {
            MapRevolvedFacesOptionBSurfaces/** export revolved faces as b-surfaces */,
            MapRevolvedFacesOptionSurfaceOfRevolution/** exported revolved faces as surface of revolution */
        };

        /** Cross Hatch Map Option */
        public: enum CrossHatchMapEnum
        {
            CrossHatchMapEnumSectionArea/** map cross hatch as section area */,
            CrossHatchMapEnumCopiousData/** map cross hatch as copious data */
        };

        private: IgesCreatorImpl * m_igescreator_impl;
        private: friend class  _IgesCreatorBuilder;
        protected: IgesCreator();
        public: ~IgesCreator();
        /** The save settings - this will save the settings to a file sepcified 
         <br>  Created in NX6.0.0.  <br>  
         <br> License requirements : None */
        public: void SaveSettings
        (
            const NXString & filename /**   <br>  NOTE: The full Unicode character set is not supported for this parameter.  <br> */
        );
        /** The save settings - this will save the settings to a file sepcified 
         <br>  Created in NX6.0.0.  <br>  
         <br> License requirements : None */
        void SaveSettings
        (
            const char * filename /**   <br>  NOTE: The full Unicode character set is not supported for this parameter.  <br> */
        );
        /**Returns  the export from - this option will determine if data from display part or existing part is exported 
         <br>  Created in NX6.0.0.  <br>  
         <br> License requirements : None */
        public: NXOpen::IgesCreator::ExportFromOption ExportFrom
        (
        );
        /**Sets  the export from - this option will determine if data from display part or existing part is exported 
         <br>  Created in NX6.0.0.  <br>  
         <br> License requirements : None */
        public: void SetExportFrom
        (
            NXOpen::IgesCreator::ExportFromOption exportFrom /** exportfrom */ 
        );
        /**Returns  the input file  - name of file which is being exported.
         <br>  Created in NX6.0.0.  <br>  
         <br> License requirements : None */
        public: NXString InputFile
        (
        );
        /**Sets  the input file  - name of file which is being exported.
         <br>  Created in NX6.0.0.  <br>  
         <br> License requirements : None */
        public: void SetInputFile
        (
            const NXString & filename /** filename */ 
        );
        /**Sets  the input file  - name of file which is being exported.
         <br>  Created in NX6.0.0.  <br>  
         <br> License requirements : None */
        void SetInputFile
        (
            const char * filename /** filename */ 
        );
        /**Returns  the output file - the name of iges file where output is being written 
         <br>  Created in NX6.0.0.  <br>  
         <br> License requirements : None */
        public: NXString OutputFile
        (
        );
        /**Sets  the output file - the name of iges file where output is being written 
         <br>  Created in NX6.0.0.  <br>  
         <br> License requirements : None */
        public: void SetOutputFile
        (
            const NXString & filename /** filename */ 
        );
        /**Sets  the output file - the name of iges file where output is being written 
         <br>  Created in NX6.0.0.  <br>  
         <br> License requirements : None */
        void SetOutputFile
        (
            const char * filename /** filename */ 
        );
        /**Returns  the Settings File to read the default settings  
         <br>  Created in NX6.0.0.  <br>  
         <br> License requirements : None */
        public: NXString SettingsFile
        (
        );
        /**Sets  the Settings File to read the default settings  
         <br>  Created in NX6.0.0.  <br>  
         <br> License requirements : None */
        public: void SetSettingsFile
        (
            const NXString & filename /** filename */ 
        );
        /**Sets  the Settings File to read the default settings  
         <br>  Created in NX6.0.0.  <br>  
         <br> License requirements : None */
        void SetSettingsFile
        (
            const char * filename /** filename */ 
        );
        /**Returns  the Export NX model data to IGES - if set to true model data will be exported to IGES 
         <br>  Created in NX6.0.0.  <br>  
         <br> License requirements : None */
        public: bool ExportModelData
        (
        );
        /**Sets  the Export NX model data to IGES - if set to true model data will be exported to IGES 
         <br>  Created in NX6.0.0.  <br>  
         <br> License requirements : None */
        public: void SetExportModelData
        (
            bool modelData /** modeldata */ 
        );
        /**Returns  the Export drawings to IGES - if set to ture drawings will be exported to IGES 
         <br>  Created in NX6.0.0.  <br>  
         <br> License requirements : None */
        public: bool ExportDrawings
        (
        );
        /**Sets  the Export drawings to IGES - if set to ture drawings will be exported to IGES 
         <br>  Created in NX6.0.0.  <br>  
         <br> License requirements : None */
        public: void SetExportDrawings
        (
            bool drawings /** drawings */ 
        );
        /**Returns  the reference type - reference coordinate system for export
         <br>  Created in NX6.0.0.  <br>  
         <br> License requirements : None */
        public: NXOpen::IgesCreator::CsysrefEnum ReferenceType
        (
        );
        /**Sets  the reference type - reference coordinate system for export
         <br>  Created in NX6.0.0.  <br>  
         <br> License requirements : None */
        public: void SetReferenceType
        (
            NXOpen::IgesCreator::CsysrefEnum referenceType /** referencetype */ 
        );
        /**Returns  the jama - if set to true the exported data will be Japanese Automotive compliant
         <br>  Created in NX6.0.0.  <br>  
         <br> License requirements : None */
        public: bool Jama
        (
        );
        /**Sets  the jama - if set to true the exported data will be Japanese Automotive compliant
         <br>  Created in NX6.0.0.  <br>  
         <br> License requirements : None */
        public: void SetJama
        (
            bool jama /** jama */ 
        );
        /**Returns  the flatten assembly - if set to true the assembly structure will not be retained 
         <br>  Created in NX6.0.0.  <br>  
         <br> License requirements : None */
        public: bool FlattenAssembly
        (
        );
        /**Sets  the flatten assembly - if set to true the assembly structure will not be retained 
         <br>  Created in NX6.0.0.  <br>  
         <br> License requirements : None */
        public: void SetFlattenAssembly
        (
            bool flattenAssembly /** flattenassembly */ 
        );
        /**Returns  the map tabulated cylinder to b-spline surface 
         <br>  Created in NX6.0.0.  <br>  
         <br> License requirements : None */
        public: bool MapTabCylToBSurf
        (
        );
        /**Sets  the map tabulated cylinder to b-spline surface 
         <br>  Created in NX6.0.0.  <br>  
         <br> License requirements : None */
        public: void SetMapTabCylToBSurf
        (
            bool mapTabCylToBSurf /** maptabcyltobsurf */ 
        );
        /**Returns  the Map revolved faces in NX to IGES b-surfaces/surface of revolution 
         <br>  Created in NX6.0.0.  <br>  
         <br> License requirements : None */
        public: NXOpen::IgesCreator::MapRevolvedFacesOption MapRevolvedFacesTo
        (
        );
        /**Sets  the Map revolved faces in NX to IGES b-surfaces/surface of revolution 
         <br>  Created in NX6.0.0.  <br>  
         <br> License requirements : None */
        public: void SetMapRevolvedFacesTo
        (
            NXOpen::IgesCreator::MapRevolvedFacesOption revolvedFacesTo /** revolvedfacesto */ 
        );
        /**Returns  the map cross hatch to section area or copious data 
         <br>  Created in NX6.0.0.  <br>  
         <br> License requirements : None */
        public: NXOpen::IgesCreator::CrossHatchMapEnum MapCrossHatchTo
        (
        );
        /**Sets  the map cross hatch to section area or copious data 
         <br>  Created in NX6.0.0.  <br>  
         <br> License requirements : None */
        public: void SetMapCrossHatchTo
        (
            NXOpen::IgesCreator::CrossHatchMapEnum mapCrossHatchTo /** mapcrosshatchto */ 
        );
        /**Returns  the bcurve tol - tolerance for creating b-spline curves 
         <br>  Created in NX6.0.0.  <br>  
         <br> License requirements : None */
        public: double BcurveTol
        (
        );
        /**Sets  the bcurve tol - tolerance for creating b-spline curves 
         <br>  Created in NX6.0.0.  <br>  
         <br> License requirements : None */
        public: void SetBcurveTol
        (
            double bcurveTol /** bcurvetol */ 
        );
        /**Returns  the max line thickness - maximum line thickness in resulting iges file 
         <br>  Created in NX6.0.0.  <br>  
         <br> License requirements : None */
        public: double MaxLineThickness
        (
        );
        /**Sets  the max line thickness - maximum line thickness in resulting iges file 
         <br>  Created in NX6.0.0.  <br>  
         <br> License requirements : None */
        public: void SetMaxLineThickness
        (
            double maxLineThickness /** maxlinethickness */ 
        );
        /**Returns  the sys defmaxThreeDmdl space - if set to true then system defined maximum 3D model 
                    space will be used
         <br>  Created in NX6.0.0.  <br>  
         <br> License requirements : None */
        public: bool SysDefmaxThreeDMdlSpace
        (
        );
        /**Sets  the sys defmaxThreeDmdl space - if set to true then system defined maximum 3D model 
                    space will be used
         <br>  Created in NX6.0.0.  <br>  
         <br> License requirements : None */
        public: void SetSysDefmaxThreeDMdlSpace
        (
            bool sysDefmaxThreeDMdlSpace /** sysdefmaxthreedmdlspace */ 
        );
        /**Returns  the maxThree dmdl space - if not using system defined maximum 3D model space then specifiy
                    the new value
         <br>  Created in NX6.0.0.  <br>  
         <br> License requirements : None */
        public: double MaxThreeDMdlSpace
        (
        );
        /**Sets  the maxThree dmdl space - if not using system defined maximum 3D model space then specifiy
                    the new value
         <br>  Created in NX6.0.0.  <br>  
         <br> License requirements : None */
        public: void SetMaxThreeDMdlSpace
        (
            double maxThreeDMdlSpace /** maxthreedmdlspace */ 
        );
        /**Returns  the sys defidentical point resolution - if set to true then system defined tolerance will be
                    used to find identical points 
         <br>  Created in NX6.0.0.  <br>  
         <br> License requirements : None */
        public: bool SysDefidenticalPointResolution
        (
        );
        /**Sets  the sys defidentical point resolution - if set to true then system defined tolerance will be
                    used to find identical points 
         <br>  Created in NX6.0.0.  <br>  
         <br> License requirements : None */
        public: void SetSysDefidenticalPointResolution
        (
            bool sysDefidenticalPointResolution /** sysdefidenticalpointresolution */ 
        );
        /**Returns  the identical point resolution - if not using system defined tolerance for identical points then
                    specify new value 
         <br>  Created in NX6.0.0.  <br>  
         <br> License requirements : None */
        public: double IdenticalPointResolution
        (
        );
        /**Sets  the identical point resolution - if not using system defined tolerance for identical points then
                    specify new value 
         <br>  Created in NX6.0.0.  <br>  
         <br> License requirements : None */
        public: void SetIdenticalPointResolution
        (
            double identicalPointResolution /** identicalpointresolution */ 
        );
        /**Returns  the author - name of the author 
         <br>  Created in NX5.0.0.  <br>  
         <br> License requirements : None */
        public: NXString Author
        (
        );
        /**Sets  the author - name of the author 
         <br>  Created in NX6.0.0.  <br>  
         <br> License requirements : None */
        public: void SetAuthor
        (
            const NXString & author /** author */ 
        );
        /**Sets  the author - name of the author 
         <br>  Created in NX6.0.0.  <br>  
         <br> License requirements : None */
        void SetAuthor
        (
            const char * author /** author */ 
        );
        /**Returns  the company - company name
         <br>  Created in NX6.0.0.  <br>  
         <br> License requirements : None */
        public: NXString Company
        (
        );
        /**Sets  the company - company name
         <br>  Created in NX6.0.0.  <br>  
         <br> License requirements : None */
        public: void SetCompany
        (
            const NXString & company /** company */ 
        );
        /**Sets  the company - company name
         <br>  Created in NX6.0.0.  <br>  
         <br> License requirements : None */
        void SetCompany
        (
            const char * company /** company */ 
        );
        /**Returns  the receiver id 
         <br>  Created in NX6.0.0.  <br>  
         <br> License requirements : None */
        public: NXString ReceiverID
        (
        );
        /**Sets  the receiver id 
         <br>  Created in NX6.0.0.  <br>  
         <br> License requirements : None */
        public: void SetReceiverID
        (
            const NXString & receiverID /** receiverid */ 
        );
        /**Sets  the receiver id 
         <br>  Created in NX6.0.0.  <br>  
         <br> License requirements : None */
        void SetReceiverID
        (
            const char * receiverID /** receiverid */ 
        );
        /**Returns  the use start section file - set to true if want to specify text file for start section
         <br>  Created in NX6.0.0.  <br>  
         <br> License requirements : None */
        public: bool UseStartSectionFile
        (
        );
        /**Sets  the use start section file - set to true if want to specify text file for start section
         <br>  Created in NX6.0.0.  <br>  
         <br> License requirements : None */
        public: void SetUseStartSectionFile
        (
            bool useStartSectionFile /** usestartsectionfile */ 
        );
        /**Returns  the start section file - name of the file to provide start section
         <br>  Created in NX6.0.0.  <br>  
         <br> License requirements : None */
        public: NXString StartSectionFile
        (
        );
        /**Sets  the start section file - name of the file to provide start section
         <br>  Created in NX6.0.0.  <br>  
         <br> License requirements : None */
        public: void SetStartSectionFile
        (
            const NXString & filename /** filename */ 
        );
        /**Sets  the start section file - name of the file to provide start section
         <br>  Created in NX6.0.0.  <br>  
         <br> License requirements : None */
        void SetStartSectionFile
        (
            const char * filename /** filename */ 
        );
        /**Returns  the drawing list - comma separated list of drawings 
         <br>  Created in NX6.0.0.  <br>  
         <br> License requirements : None */
        public: NXString DrawingList
        (
        );
        /**Sets  the drawing list - comma separated list of drawings 
         <br>  Created in NX6.0.0.  <br>  
         <br> License requirements : None */
        public: void SetDrawingList
        (
            const NXString & drawingList /** drawinglist */ 
        );
        /**Sets  the drawing list - comma separated list of drawings 
         <br>  Created in NX6.0.0.  <br>  
         <br> License requirements : None */
        void SetDrawingList
        (
            const char * drawingList /** drawinglist */ 
        );
        /**Returns  the view list - comma separated list of views 
         <br>  Created in NX6.0.0.  <br>  
         <br> License requirements : None */
        public: NXString ViewList
        (
        );
        /**Sets  the view list - comma separated list of views 
         <br>  Created in NX6.0.0.  <br>  
         <br> License requirements : None */
        public: void SetViewList
        (
            const NXString & viewList /** viewlist */ 
        );
        /**Sets  the view list - comma separated list of views 
         <br>  Created in NX6.0.0.  <br>  
         <br> License requirements : None */
        void SetViewList
        (
            const char * viewList /** viewlist */ 
        );
        /**Returns  the layerMask - comma separated layer list 
         <br>  Created in NX6.0.0.  <br>  
         <br> License requirements : None */
        public: NXString LayerMask
        (
        );
        /**Sets  the layerMask - comma separated layer list 
         <br>  Created in NX6.0.0.  <br>  
         <br> License requirements : None */
        public: void SetLayerMask
        (
            const NXString & layerMask /** layermask */ 
        );
        /**Sets  the layerMask - comma separated layer list 
         <br>  Created in NX6.0.0.  <br>  
         <br> License requirements : None */
        void SetLayerMask
        (
            const char * layerMask /** layermask */ 
        );
        /**Returns  the csys - reference coordinate system for exported data
         <br>  Created in NX5.0.0.  <br>  
         <br> License requirements : None */
        public: NXOpen::CoordinateSystem * Csys
        (
        );
        /**Sets  the csys - reference coordinate system for exported data
         <br>  Created in NX5.0.0.  <br>  
         <br> License requirements : None */
        public: void SetCsys
        (
            NXOpen::CoordinateSystem * csys /** csys */ 
        );
        /**Returns  the objectTypes - this is subcomponent being used to set object types filters. This
                    will be used to filter objects based on the types 
         <br>  Created in NX6.0.0.  <br>  
         <br> License requirements : None */
        public: NXOpen::ObjectTypeSelector * ObjectTypes
        (
        );
        /**Returns  the export selection block - the object selection will be done by this block. 
         <br>  Created in NX6.0.0.  <br>  
         <br> License requirements : None */
        public: NXOpen::ObjectSelector * ExportSelectionBlock
        (
        );
        /**Returns  the file save flag - set to false if doing file export
         <br>  Created in NX6.0.0.  <br>  
         <br> License requirements : None */
        public: bool FileSaveFlag
        (
        );
        /**Sets  the file save flag - set to false if doing file export
         <br>  Created in NX6.0.0.  <br>  
         <br> License requirements : None */
        public: void SetFileSaveFlag
        (
            bool doingFileSave /** doingfilesave */ 
        );
        /** Sets the drawings -  the list of drawings to translate
         <br>  Created in NX6.0.0.  <br>  
         <br> License requirements : None */
        public: void SetDrawingArray
        (
            const std::vector<NXOpen::TaggedObject *> & objects /** items in list */
        );
    };
}

#ifdef _MSC_VER
#pragma warning(pop)
#endif
#ifdef __GNUC__
#ifndef NX_NO_GCC_DEPRECATION_WARNINGS
#pragma GCC diagnostic warning "-Wdeprecated-declarations"
#endif
#endif

#undef EXPORTLIBRARY
#endif
