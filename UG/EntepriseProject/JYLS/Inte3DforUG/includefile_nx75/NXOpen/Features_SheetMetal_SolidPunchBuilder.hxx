#ifndef NXOpen_FEATURES_SHEETMETAL_SOLIDPUNCHBUILDER_HXX_INCLUDED
#define NXOpen_FEATURES_SHEETMETAL_SOLIDPUNCHBUILDER_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     Features_SheetMetal_SolidPunchBuilder.ja
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
#include <NXOpen/Expression.hxx>
#include <NXOpen/Features_FeatureBuilder.hxx>
#include <NXOpen/Features_SheetMetal_SolidPunchBuilder.hxx>
#include <NXOpen/SelectObject.hxx>
#include <NXOpen/SelectObjectList.hxx>
#include <NXOpen/libnxopencpp_features_exports.hxx>

#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable:4996)
#endif
#ifdef __GNUC__
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

namespace NXOpen
{
    namespace Features
    {
        namespace SheetMetal
        {
            class SolidPunchBuilder;
        }
    }
    class CoordinateSystem;
    class Expression;
    namespace Features
    {
        class FeatureBuilder;
    }
    class SelectBody;
    class SelectFace;
    class SelectFaceList;
    namespace Features
    {
        namespace SheetMetal
        {
            class _SolidPunchBuilderBuilder;
            class SolidPunchBuilderImpl;
            /**
                Represents a @link Features::SheetMetal::SolidPunchBuilder Features::SheetMetal::SolidPunchBuilder@endlink  
                 <br> To create a new instance of this class, use @link Features::SheetMetal::SheetmetalManager::CreateSolidPunchBuilder Features::SheetMetal::SheetmetalManager::CreateSolidPunchBuilder@endlink  <br> 
             <br>  Created in NX5.0.0.  <br>  
            */
            class NXOPENCPP_FEATURESEXPORT  SolidPunchBuilder : public Features::FeatureBuilder
            {
                /**Represents the punch type */
                public: enum Types
                {
                    TypesPunchType/** punch type */ ,
                    TypesDieType/** die type */ 
                };

                private: SolidPunchBuilderImpl * m_solidpunchbuilder_impl;
                private: friend class  _SolidPunchBuilderBuilder;
                protected: SolidPunchBuilder();
                public: ~SolidPunchBuilder();
                /**Returns  the type 
                 <br>  Created in NX5.0.0.  <br>  
                 <br> License requirements : None */
                public: NXOpen::Features::SheetMetal::SolidPunchBuilder::Types Type
                (
                );
                /**Sets  the type 
                 <br>  Created in NX5.0.0.  <br>  
                 <br> License requirements : nx_sheet_metal ("NX Sheet Metal") OR sheet_metal_design ("SHEET METAL DESIGN") */
                public: void SetType
                (
                    NXOpen::Features::SheetMetal::SolidPunchBuilder::Types type /** type */ 
                );
                /**Returns  the target face 
                 <br>  Created in NX5.0.0.  <br>  
                 <br> License requirements : None */
                public: NXOpen::SelectFace * TargetFace
                (
                );
                /**Returns  the tool body 
                 <br>  Created in NX5.0.0.  <br>  
                 <br> License requirements : None */
                public: NXOpen::SelectBody * ToolBody
                (
                );
                /**Returns  the csys that defines the start of transformation of the tool body. 
                 <br>  Created in NX5.0.0.  <br>  
                 <br> License requirements : None */
                public: NXOpen::CoordinateSystem * FromCsys
                (
                );
                /**Sets  the csys that defines the start of transformation of the tool body. 
                 <br>  Created in NX5.0.0.  <br>  
                 <br> License requirements : nx_sheet_metal ("NX Sheet Metal") OR sheet_metal_design ("SHEET METAL DESIGN") */
                public: void SetFromCsys
                (
                    NXOpen::CoordinateSystem * fromCsys /** fromcsys */ 
                );
                /**Returns  the csys that defines the end of transformation of the tool body. 
                 <br>  Created in NX5.0.0.  <br>  
                 <br> License requirements : None */
                public: NXOpen::CoordinateSystem * ToCsys
                (
                );
                /**Sets  the csys that defines the end of transformation of the tool body. 
                 <br>  Created in NX5.0.0.  <br>  
                 <br> License requirements : nx_sheet_metal ("NX Sheet Metal") OR sheet_metal_design ("SHEET METAL DESIGN") */
                public: void SetToCsys
                (
                    NXOpen::CoordinateSystem * toCsys /** tocsys */ 
                );
                /**Returns  the pierce faces of the tool body.
                 <br>  Created in NX5.0.0.  <br>  
                 <br> License requirements : None */
                public: NXOpen::SelectFaceList * PierceFaces
                (
                );
                /**Returns  the thickness expression to use when the option to infer thickness is turned off.
                 <br>  Created in NX5.0.0.  <br>  
                 <br> License requirements : None */
                public: NXOpen::Expression * Thickness
                (
                );
                /**Returns  the option to infer the thickness from the target body. 
                 <br>  Created in NX5.0.0.  <br>  
                 <br> License requirements : None */
                public: bool InferThickness
                (
                );
                /**Sets  the option to infer the thickness from the target body. 
                 <br>  Created in NX5.0.0.  <br>  
                 <br> License requirements : nx_sheet_metal ("NX Sheet Metal") OR sheet_metal_design ("SHEET METAL DESIGN") */
                public: void SetInferThickness
                (
                    bool inferThickness /** inferthickness */ 
                );
                /**Returns  the option to create centroid automatically.
                 <br>  Created in NX5.0.0.  <br>  
                 <br> License requirements : None */
                public: bool AutoCentroid
                (
                );
                /**Sets  the option to create centroid automatically.
                 <br>  Created in NX5.0.0.  <br>  
                 <br> License requirements : nx_sheet_metal ("NX Sheet Metal") OR sheet_metal_design ("SHEET METAL DESIGN") */
                public: void SetAutoCentroid
                (
                    bool autoCentroid /** autocentroid */ 
                );
                /**Returns  the option to round the sharp edges of bottom face and top face. 
                 <br>  Created in NX5.0.0.  <br>  
                 <br> License requirements : None */
                public: bool IncludeRounding
                (
                );
                /**Sets  the option to round the sharp edges of bottom face and top face. 
                 <br>  Created in NX5.0.0.  <br>  
                 <br> License requirements : nx_sheet_metal ("NX Sheet Metal") OR sheet_metal_design ("SHEET METAL DESIGN") */
                public: void SetIncludeRounding
                (
                    bool includeRounding /** includerounding */ 
                );
                /**Returns  the Radius value of the sharp edges of the bottom face 
                 <br>  Created in NX5.0.0.  <br>  
                 <br> License requirements : None */
                public: NXOpen::Expression * DieRadius
                (
                );
                /**Returns  the Radius value of the sharp edges on the top face 
                 <br>  Created in NX5.0.0.  <br>  
                 <br> License requirements : None */
                public: NXOpen::Expression * PunchRadius
                (
                );
                /**Returns  the option to maintain constant thickness during thickening.
                 <br>  Created in NX5.0.0.  <br>  
                 <br> License requirements : None */
                public: bool ConstantThickness
                (
                );
                /**Sets  the option to maintain constant thickness during thickening.
                 <br>  Created in NX5.0.0.  <br>  
                 <br> License requirements : nx_sheet_metal ("NX Sheet Metal") OR sheet_metal_design ("SHEET METAL DESIGN") */
                public: void SetConstantThickness
                (
                    bool constantThickness /** constantthickness */ 
                );
                /**Returns  the option to hide the tool body after creating the punch. 
                 <br>  Created in NX5.0.0.  <br>  
                 <br> License requirements : None */
                public: bool HideTool
                (
                );
                /**Sets  the option to hide the tool body after creating the punch. 
                 <br>  Created in NX5.0.0.  <br>  
                 <br> License requirements : nx_sheet_metal ("NX Sheet Metal") OR sheet_metal_design ("SHEET METAL DESIGN") */
                public: void SetHideTool
                (
                    bool hideTool /** hidetool */ 
                );
            };
        }
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