#ifndef NXOpen_FIELDS_DISPLAYPROPERTIESBUILDER_HXX_INCLUDED
#define NXOpen_FIELDS_DISPLAYPROPERTIESBUILDER_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     Fields_DisplayPropertiesBuilder.ja
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
#include <NXOpen/Builder.hxx>
#include <NXOpen/Fields_DisplayPropertiesBuilder.hxx>
#include <NXOpen/libnxopencpp_fields_exports.hxx>

#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable:4996)
#endif
#ifdef __GNUC__
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

namespace NXOpen
{
    namespace Fields
    {
        class DisplayPropertiesBuilder;
    }
    class Builder;
    class NXColor;
    namespace Fields
    {
        class _DisplayPropertiesBuilderBuilder;
        class DisplayPropertiesBuilderImpl;
        /**  @brief  Represents a builder class for editing display properties of a @link Fields::Field Fields::Field@endlink   

         
             <br> Used to edit a @link Fields::Field Fields::Field@endlink  display properties. <br> 
             <br> To create a new instance of this class, use @link Fields::FieldManager::CreateDisplayPropertiesBuilder Fields::FieldManager::CreateDisplayPropertiesBuilder@endlink  <br> 
        Default values.
        <table border="1"> 
         
        <tr><th> 
        Property</th>  <th> 
        Value</th> </tr>
        <tr><td> 
         
        DepDispType </td> <td> 
         
        Symbol </td> </tr> 

        <tr><td> 
         
        DepDomColor </td> <td> 
         
        Inherit </td> </tr> 

        <tr><td> 
         
        DepLabelValues </td> <td> 
         
        None </td> </tr> 

        <tr><td> 
         
        DepSymbolSize </td> <td> 
         
        0 </td> </tr> 

        <tr><td> 
         
        DisplayResolution </td> <td> 
         
        Standard </td> </tr> 

        <tr><td> 
         
        DummyScale </td> <td> 
         
        0 </td> </tr> 

        <tr><td> 
         
        FaceAnalysis </td> <td> 
         
        0 </td> </tr> 

        <tr><td> 
         
        IndepDispType </td> <td> 
         
        Normal </td> </tr> 

        <tr><td> 
         
        Layer </td> <td> 
         
        1 </td> </tr> 

        <tr><td> 
         
        LineFont </td> <td> 
         
        Solid </td> </tr> 

        <tr><td> 
         
        LineWidth </td> <td> 
         
        Normal </td> </tr> 

        <tr><td> 
         
        PartiallyShaded </td> <td> 
         
        0 </td> </tr> 

        <tr><td> 
         
        ShowAxis </td> <td> 
         
        0 </td> </tr> 

        <tr><td> 
         
        ShowLabels </td> <td> 
         
        0 </td> </tr> 

        <tr><td> 
         
        ShowMapTopo </td> <td> 
         
        0 </td> </tr> 

        <tr><td> 
         
        ShowUndefinedValues </td> <td> 
         
        Hide </td> </tr> 

        <tr><td> 
         
        SpectrumLevels </td> <td> 
         
        3 </td> </tr> 

        <tr><td> 
         
        SurfaceOffset </td> <td> 
         
        0 </td> </tr> 

        <tr><td> 
         
        TblDepPtType </td> <td> 
         
        Hide </td> </tr> 

        <tr><td> 
         
        TblIndepPtType </td> <td> 
         
        Hide </td> </tr> 

        <tr><td> 
         
        Translucency </td> <td> 
         
        0 </td> </tr> 

        </table>  

         <br>  Created in NX6.0.1.  <br>  
        */
        class NXOPENCPP_FIELDSEXPORT  DisplayPropertiesBuilder : public Builder
        {
            /** Field Line Display Fonts */
            public: enum LineFontEnum
            {
                LineFontEnumSolid/** Solid */,
                LineFontEnumDashed/** Dashed */,
                LineFontEnumPhantom/** Phantom */,
                LineFontEnumCenterline/** Centerline */,
                LineFontEnumDotted/** Dotted */,
                LineFontEnumLongDashed/** LongDashed */,
                LineFontEnumDottedDashed/** dotted dashed */ 
            };

            /** Field Line Widths */
            public: enum LineWidthEnum
            {
                LineWidthEnumNormal/** Normal */,
                LineWidthEnumThin/** Thin */,
                LineWidthEnumThick/** Thick */
            };

            /** Field Indep Dom Disp */
            public: enum IndepDomDispType
            {
                IndepDomDispTypeNormal/** normal */ ,
                IndepDomDispTypePoint/** point */ ,
                IndepDomDispTypePlusSign/** plus sign */ ,
                IndepDomDispTypeAsterisk/** asterisk */ ,
                IndepDomDispTypeCircle/** circle */ ,
                IndepDomDispTypePoundSign/** pound sign */ ,
                IndepDomDispTypeCross/** cross */ ,
                IndepDomDispTypeSquare/** square */ ,
                IndepDomDispTypeTriangle/** triangle */ ,
                IndepDomDispTypeDiamond/** diamond */ ,
                IndepDomDispTypeCenterline/** centerline */ ,
                IndepDomDispTypeHide/** hide */ 
            };

            /** Field Disp Resolution */
            public: enum DispResolutionEnum
            {
                DispResolutionEnumCoarse/** coarse */ ,
                DispResolutionEnumStandard/** standard */ ,
                DispResolutionEnumFine/** fine */ ,
                DispResolutionEnumExtraFine/** extra fine */ ,
                DispResolutionEnumSuperFine/** super fine */ ,
                DispResolutionEnumUltraFine/** ultra fine */ 
            };

            /** Field Dep Label Value */
            public: enum DepLabelValueEnum
            {
                DepLabelValueEnumNone/** none */ ,
                DepLabelValueEnumMinimumMaximum/** minimum maximum */ ,
                DepLabelValueEnumMaximum/** maximum */ ,
                DepLabelValueEnumMinimum/** minimum */ ,
                DepLabelValueEnumAll/** all */ 
            };

            /** Field Dep Disp Type */
            public: enum DepDispTypeEnum
            {
                DepDispTypeEnumSymbol/** symbol */ ,
                DepDispTypeEnumSurface/** surface */ ,
                DepDispTypeEnumSurfaceEdges/** surface edges */ ,
                DepDispTypeEnumHide/** hide */ 
            };

            /** Field Dep Dom Color */
            public: enum DepDomColorEnum
            {
                DepDomColorEnumInherit/** inherit */ ,
                DepDomColorEnumSpecified/** specified */ ,
                DepDomColorEnumSpectrum/** spectrum */ 
            };

            /** Field Values */
            public: enum ValuesEnum
            {
                ValuesEnumHide/** hide */ ,
                ValuesEnumPoint/** point */ ,
                ValuesEnumPlusSign/** plus sign */ ,
                ValuesEnumAsterisk/** asterisk */ ,
                ValuesEnumCircle/** circle */ ,
                ValuesEnumPoundSign/** pound sign */ ,
                ValuesEnumCross/** cross */ ,
                ValuesEnumSquare/** square */ ,
                ValuesEnumTriangle/** triangle */ ,
                ValuesEnumDiamond/** diamond */ ,
                ValuesEnumCenterline/** centerline */ 
            };

            /** Field Tbl Point Type */
            public: enum TblPointTypeEnum
            {
                TblPointTypeEnumHide/** hide */ ,
                TblPointTypeEnumShow/** show */ 
            };

            private: DisplayPropertiesBuilderImpl * m_displaypropertiesbuilder_impl;
            private: friend class  _DisplayPropertiesBuilderBuilder;
            protected: DisplayPropertiesBuilder();
            public: ~DisplayPropertiesBuilder();
            /**Returns  the layer 
             <br>  Created in NX6.0.1.  <br>  
             <br> License requirements : None */
            public: int Layer
            (
            );
            /**Sets  the layer 
             <br>  Created in NX6.0.1.  <br>  
             <br> License requirements : None */
            public: void SetLayer
            (
                int layer /** layer */ 
            );
            /**Returns  the basic color 
             <br>  Created in NX6.0.1.  <br>  
             <br> License requirements : None */
            public: NXOpen::NXColor * BasicColor
            (
            );
            /**Sets  the basic color 
             <br>  Created in NX6.0.1.  <br>  
             <br> License requirements : None */
            public: void SetBasicColor
            (
                NXOpen::NXColor * basicColor /** basiccolor */ 
            );
            /**Returns  the line font 
             <br>  Created in NX6.0.1.  <br>  
             <br> License requirements : None */
            public: NXOpen::Fields::DisplayPropertiesBuilder::LineFontEnum LineFont
            (
            );
            /**Sets  the line font 
             <br>  Created in NX6.0.1.  <br>  
             <br> License requirements : None */
            public: void SetLineFont
            (
                NXOpen::Fields::DisplayPropertiesBuilder::LineFontEnum lineFont /** linefont */ 
            );
            /**Returns  the line width 
             <br>  Created in NX6.0.1.  <br>  
             <br> License requirements : None */
            public: NXOpen::Fields::DisplayPropertiesBuilder::LineWidthEnum LineWidth
            (
            );
            /**Sets  the line width 
             <br>  Created in NX6.0.1.  <br>  
             <br> License requirements : None */
            public: void SetLineWidth
            (
                NXOpen::Fields::DisplayPropertiesBuilder::LineWidthEnum lineWidth /** linewidth */ 
            );
            /**Returns  the translucency 
             <br>  Created in NX6.0.1.  <br>  
             <br> License requirements : None */
            public: int Translucency
            (
            );
            /**Sets  the translucency 
             <br>  Created in NX6.0.1.  <br>  
             <br> License requirements : None */
            public: void SetTranslucency
            (
                int translucency /** translucency */ 
            );
            /**Returns  the partially shaded 
             <br>  Created in NX6.0.1.  <br>  
             <br> License requirements : None */
            public: bool PartiallyShaded
            (
            );
            /**Sets  the partially shaded 
             <br>  Created in NX6.0.1.  <br>  
             <br> License requirements : None */
            public: void SetPartiallyShaded
            (
                bool partiallyShaded /** partiallyshaded */ 
            );
            /**Returns  the face analysis 
             <br>  Created in NX6.0.1.  <br>  
             <br> License requirements : None */
            public: bool FaceAnalysis
            (
            );
            /**Sets  the face analysis 
             <br>  Created in NX6.0.1.  <br>  
             <br> License requirements : None */
            public: void SetFaceAnalysis
            (
                bool faceAnalysis /** faceanalysis */ 
            );
            /**Returns  the indep disp type 
             <br>  Created in NX6.0.1.  <br>  
             <br> License requirements : None */
            public: NXOpen::Fields::DisplayPropertiesBuilder::IndepDomDispType IndepDispType
            (
            );
            /**Sets  the indep disp type 
             <br>  Created in NX6.0.1.  <br>  
             <br> License requirements : None */
            public: void SetIndepDispType
            (
                NXOpen::Fields::DisplayPropertiesBuilder::IndepDomDispType indepDispType /** indepdisptype */ 
            );
            /**Returns  the display resolution 
             <br>  Created in NX6.0.1.  <br>  
             <br> License requirements : None */
            public: NXOpen::Fields::DisplayPropertiesBuilder::DispResolutionEnum DisplayResolution
            (
            );
            /**Sets  the display resolution 
             <br>  Created in NX6.0.1.  <br>  
             <br> License requirements : None */
            public: void SetDisplayResolution
            (
                NXOpen::Fields::DisplayPropertiesBuilder::DispResolutionEnum displayResolution /** displayresolution */ 
            );
            /**Returns  the axis color 
             <br>  Created in NX6.0.1.  <br>  
             <br> License requirements : None */
            public: NXOpen::NXColor * AxisColor
            (
            );
            /**Sets  the axis color 
             <br>  Created in NX6.0.1.  <br>  
             <br> License requirements : None */
            public: void SetAxisColor
            (
                NXOpen::NXColor * axisColor /** axiscolor */ 
            );
            /**Returns  the show axis 
             <br>  Created in NX6.0.1.  <br>  
             <br> License requirements : None */
            public: bool ShowAxis
            (
            );
            /**Sets  the show axis 
             <br>  Created in NX6.0.1.  <br>  
             <br> License requirements : None */
            public: void SetShowAxis
            (
                bool showAxis /** showaxis */ 
            );
            /**Returns  the label color 
             <br>  Created in NX6.0.1.  <br>  
             <br> License requirements : None */
            public: NXOpen::NXColor * LabelColor
            (
            );
            /**Sets  the label color 
             <br>  Created in NX6.0.1.  <br>  
             <br> License requirements : None */
            public: void SetLabelColor
            (
                NXOpen::NXColor * labelColor /** labelcolor */ 
            );
            /**Returns  the show labels 
             <br>  Created in NX6.0.1.  <br>  
             <br> License requirements : None */
            public: bool ShowLabels
            (
            );
            /**Sets  the show labels 
             <br>  Created in NX6.0.1.  <br>  
             <br> License requirements : None */
            public: void SetShowLabels
            (
                bool showLabels /** showlabels */ 
            );
            /**Returns  the show map topo 
             <br>  Created in NX6.0.1.  <br>  
             <br> License requirements : None */
            public: bool ShowMapTopo
            (
            );
            /**Sets  the show map topo 
             <br>  Created in NX6.0.1.  <br>  
             <br> License requirements : None */
            public: void SetShowMapTopo
            (
                bool showMapTopo /** showmaptopo */ 
            );
            /**Returns  the dep label values 
             <br>  Created in NX6.0.1.  <br>  
             <br> License requirements : None */
            public: NXOpen::Fields::DisplayPropertiesBuilder::DepLabelValueEnum DepLabelValues
            (
            );
            /**Sets  the dep label values 
             <br>  Created in NX6.0.1.  <br>  
             <br> License requirements : None */
            public: void SetDepLabelValues
            (
                NXOpen::Fields::DisplayPropertiesBuilder::DepLabelValueEnum depLabelValues /** deplabelvalues */ 
            );
            /**Returns  the dep disp type 
             <br>  Created in NX6.0.1.  <br>  
             <br> License requirements : None */
            public: NXOpen::Fields::DisplayPropertiesBuilder::DepDispTypeEnum DepDispType
            (
            );
            /**Sets  the dep disp type 
             <br>  Created in NX6.0.1.  <br>  
             <br> License requirements : None */
            public: void SetDepDispType
            (
                NXOpen::Fields::DisplayPropertiesBuilder::DepDispTypeEnum depDispType /** depdisptype */ 
            );
            /**Returns  the dummy scale 
             <br>  Created in NX6.0.1.  <br>  
             <br> License requirements : None */
            public: double DummyScale
            (
            );
            /**Sets  the dummy scale 
             <br>  Created in NX6.0.1.  <br>  
             <br> License requirements : None */
            public: void SetDummyScale
            (
                double dummyScale /** dummyscale */ 
            );
            /**Returns  the dep symbol size 
             <br>  Created in NX6.0.1.  <br>  
             <br> License requirements : None */
            public: double DepSymbolSize
            (
            );
            /**Sets  the dep symbol size 
             <br>  Created in NX6.0.1.  <br>  
             <br> License requirements : None */
            public: void SetDepSymbolSize
            (
                double depSymbolSize /** depsymbolsize */ 
            );
            /**Returns  the surface offset 
             <br>  Created in NX6.0.1.  <br>  
             <br> License requirements : None */
            public: double SurfaceOffset
            (
            );
            /**Sets  the surface offset 
             <br>  Created in NX6.0.1.  <br>  
             <br> License requirements : None */
            public: void SetSurfaceOffset
            (
                double surfaceOffset /** surfaceoffset */ 
            );
            /**Returns  the dep dom color 
             <br>  Created in NX6.0.1.  <br>  
             <br> License requirements : None */
            public: NXOpen::Fields::DisplayPropertiesBuilder::DepDomColorEnum DepDomColor
            (
            );
            /**Sets  the dep dom color 
             <br>  Created in NX6.0.1.  <br>  
             <br> License requirements : None */
            public: void SetDepDomColor
            (
                NXOpen::Fields::DisplayPropertiesBuilder::DepDomColorEnum depDomColor /** depdomcolor */ 
            );
            /**Returns  the dep sel color 
             <br>  Created in NX6.0.1.  <br>  
             <br> License requirements : None */
            public: NXOpen::NXColor * DepSelColor
            (
            );
            /**Sets  the dep sel color 
             <br>  Created in NX6.0.1.  <br>  
             <br> License requirements : None */
            public: void SetDepSelColor
            (
                NXOpen::NXColor * depSelColor /** depselcolor */ 
            );
            /**Returns  the spectrum levels 
             <br>  Created in NX6.0.1.  <br>  
             <br> License requirements : None */
            public: int SpectrumLevels
            (
            );
            /**Sets  the spectrum levels 
             <br>  Created in NX6.0.1.  <br>  
             <br> License requirements : None */
            public: void SetSpectrumLevels
            (
                int spectrumLevels /** spectrumlevels */ 
            );
            /**Returns  the show undefined values 
             <br>  Created in NX6.0.1.  <br>  
             <br> License requirements : None */
            public: NXOpen::Fields::DisplayPropertiesBuilder::ValuesEnum ShowUndefinedValues
            (
            );
            /**Sets  the show undefined values 
             <br>  Created in NX6.0.1.  <br>  
             <br> License requirements : None */
            public: void SetShowUndefinedValues
            (
                NXOpen::Fields::DisplayPropertiesBuilder::ValuesEnum showUndefinedValues /** showundefinedvalues */ 
            );
            /**Returns  the undef value color 
             <br>  Created in NX6.0.1.  <br>  
             <br> License requirements : None */
            public: NXOpen::NXColor * UndefValueColor
            (
            );
            /**Sets  the undef value color 
             <br>  Created in NX6.0.1.  <br>  
             <br> License requirements : None */
            public: void SetUndefValueColor
            (
                NXOpen::NXColor * undefValueColor /** undefvaluecolor */ 
            );
            /**Returns  the tbl indep pt type 
             <br>  Created in NX6.0.1.  <br>  
             <br> License requirements : None */
            public: NXOpen::Fields::DisplayPropertiesBuilder::ValuesEnum TblIndepPtType
            (
            );
            /**Sets  the tbl indep pt type 
             <br>  Created in NX6.0.1.  <br>  
             <br> License requirements : None */
            public: void SetTblIndepPtType
            (
                NXOpen::Fields::DisplayPropertiesBuilder::ValuesEnum tblIndepPtType /** tblindeppttype */ 
            );
            /**Returns  the tbl indep color 
             <br>  Created in NX6.0.1.  <br>  
             <br> License requirements : None */
            public: NXOpen::NXColor * TblIndepColor
            (
            );
            /**Sets  the tbl indep color 
             <br>  Created in NX6.0.1.  <br>  
             <br> License requirements : None */
            public: void SetTblIndepColor
            (
                NXOpen::NXColor * tblIndepColor /** tblindepcolor */ 
            );
            /**Returns  the tbl dep pt type 
             <br>  Created in NX6.0.1.  <br>  
             <br> License requirements : None */
            public: NXOpen::Fields::DisplayPropertiesBuilder::TblPointTypeEnum TblDepPtType
            (
            );
            /**Sets  the tbl dep pt type 
             <br>  Created in NX6.0.1.  <br>  
             <br> License requirements : None */
            public: void SetTblDepPtType
            (
                NXOpen::Fields::DisplayPropertiesBuilder::TblPointTypeEnum tblDepPtType /** tbldeppttype */ 
            );
            /**Returns  the table dependent symbol size 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: double TblDepSymbolSize
            (
            );
            /**Sets  the table dependent symbol size 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: void SetTblDepSymbolSize
            (
                double tblDepSymbolSize /** tbldepsymbolsize */ 
            );
            /**Returns  the table dependent domain color 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Fields::DisplayPropertiesBuilder::DepDomColorEnum TblDepDomColor
            (
            );
            /**Sets  the table dependent domain color 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: void SetTblDepDomColor
            (
                NXOpen::Fields::DisplayPropertiesBuilder::DepDomColorEnum depDomColor /** depdomcolor */ 
            );
            /**Returns  the table dependent color 
             <br>  Created in NX6.0.1.  <br>  
             <br> License requirements : None */
            public: NXOpen::NXColor * TblDepColor
            (
            );
            /**Sets  the table dependent color 
             <br>  Created in NX6.0.1.  <br>  
             <br> License requirements : None */
            public: void SetTblDepColor
            (
                NXOpen::NXColor * tblDepColor /** tbldepcolor */ 
            );
            /**Returns  the table dependent label values 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Fields::DisplayPropertiesBuilder::DepLabelValueEnum TblDepLabelValues
            (
            );
            /**Sets  the table dependent label values 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: void SetTblDepLabelValues
            (
                NXOpen::Fields::DisplayPropertiesBuilder::DepLabelValueEnum tblDepLabelValues /** tbldeplabelvalues */ 
            );
        };
    }
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