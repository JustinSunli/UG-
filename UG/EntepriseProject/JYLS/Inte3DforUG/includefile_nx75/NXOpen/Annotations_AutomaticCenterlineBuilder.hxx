#ifndef NXOpen_ANNOTATIONS_AUTOMATICCENTERLINEBUILDER_HXX_INCLUDED
#define NXOpen_ANNOTATIONS_AUTOMATICCENTERLINEBUILDER_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     Annotations_AutomaticCenterlineBuilder.ja
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
#include <NXOpen/Annotations_AutomaticCenterlineBuilder.hxx>
#include <NXOpen/Builder.hxx>
#include <NXOpen/SelectObjectList.hxx>
#include <NXOpen/libnxopencpp_annotations_exports.hxx>

#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable:4996)
#endif
#ifdef __GNUC__
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

namespace NXOpen
{
    namespace Annotations
    {
        class AutomaticCenterlineBuilder;
    }
    class Builder;
    namespace Drawings
    {
        class SelectDraftingViewList;
    }
    class NXColor;
    namespace Annotations
    {
        class _AutomaticCenterlineBuilderBuilder;
        class AutomaticCenterlineBuilderImpl;
        /** Builder for creating Automatic Centerlines  <br> To create a new instance of this class, use @link Annotations::CenterlineCollection::CreateAutomaticCenterlineBuilder Annotations::CenterlineCollection::CreateAutomaticCenterlineBuilder@endlink  <br> 
        Default values.
        <table border="1"> 
         
        <tr><th> 
        Property</th>  <th> 
        Value</th> </tr>
        <tr><td> 
         
        CylindricalExtension </td> <td> 
         
        1.5 (millimeters part), 0.0625 (inches part) </td> </tr> 

        <tr><td> 
         
        InheritAngle </td> <td> 
         
        1 </td> </tr> 

        <tr><td> 
         
        Width </td> <td> 
         
        Thin </td> </tr> 

        </table>  

         <br>  Created in NX6.0.0.  <br>  
        */
        class NXOPENCPP_ANNOTATIONSEXPORT  AutomaticCenterlineBuilder : public Builder
        {
            /** the types of centerline thickness */
            public: enum CenterlineThickness
            {
                CenterlineThicknessThin/** thin */,
                CenterlineThicknessNormal/** normal */,
                CenterlineThicknessThick/** thick */,
                CenterlineThicknessOne = 6/** Width One */,
                CenterlineThicknessTwo/** Width Two */,
                CenterlineThicknessThree/** Width Three */,
                CenterlineThicknessFour/** Width Four */,
                CenterlineThicknessFive/** Width Five */,
                CenterlineThicknessSix/** Width Six */,
                CenterlineThicknessSeven/** Width Seven */,
                CenterlineThicknessEight/** Width Eight */,
                CenterlineThicknessNine/** Width Nine */
            };

            private: AutomaticCenterlineBuilderImpl * m_automaticcenterlinebuilder_impl;
            private: friend class  _AutomaticCenterlineBuilderBuilder;
            protected: AutomaticCenterlineBuilder();
            public: ~AutomaticCenterlineBuilder();
            /**Returns  the selected views 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Drawings::SelectDraftingViewList * Views
            (
            );
            /**Returns  the cylindrical extension 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: double CylindricalExtension
            (
            );
            /**Sets  the cylindrical extension 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : drafting ("DRAFTING") */
            public: void SetCylindricalExtension
            (
                double cylindricalExtension /** cylindricalextension */ 
            );
            /**Returns  the inherit angle 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: bool InheritAngle
            (
            );
            /**Sets  the inherit angle 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : drafting ("DRAFTING") */
            public: void SetInheritAngle
            (
                bool inheritAngle /** inheritangle */ 
            );
            /**Returns  the color 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::NXColor * Color
            (
            );
            /**Sets  the color 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : drafting ("DRAFTING") */
            public: void SetColor
            (
                NXOpen::NXColor * color /** color */ 
            );
            /**Returns  the width 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Annotations::AutomaticCenterlineBuilder::CenterlineThickness Width
            (
            );
            /**Sets  the width 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : drafting ("DRAFTING") */
            public: void SetWidth
            (
                NXOpen::Annotations::AutomaticCenterlineBuilder::CenterlineThickness width /** width */ 
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
