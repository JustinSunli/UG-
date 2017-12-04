#ifndef NXOpen_FEATURES_SHEETMETAL_RESIZEBENDRADIUSBUILDER_HXX_INCLUDED
#define NXOpen_FEATURES_SHEETMETAL_RESIZEBENDRADIUSBUILDER_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     Features_SheetMetal_ResizeBendRadiusBuilder.ja
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
#include <NXOpen/Features_SheetMetal_ResizeBendRadiusBuilder.hxx>
#include <NXOpen/ScCollector.hxx>
#include <NXOpen/SelectObject.hxx>
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
            class ResizeBendRadiusBuilder;
        }
    }
    class Expression;
    namespace Features
    {
        class FeatureBuilder;
    }
    class ScCollector;
    class SelectDisplayableObject;
    namespace Features
    {
        namespace SheetMetal
        {
            class _ResizeBendRadiusBuilderBuilder;
            class ResizeBendRadiusBuilderImpl;
            /**
                Represents a ResizeBendRadius feature builder.
                 <br> To create a new instance of this class, use @link Features::SheetMetal::SheetmetalManager::CreateResizeBendRadiusFeatureBuilder Features::SheetMetal::SheetmetalManager::CreateResizeBendRadiusFeatureBuilder@endlink  <br> 
             <br>  Created in NX5.0.0.  <br>  
            */
            class NXOPENCPP_FEATURESEXPORT  ResizeBendRadiusBuilder : public Features::FeatureBuilder
            {
                /** This enum represents the feature types. */
                public: enum Types
                {
                    TypesFixedFoldedLength/** fixed folded length */ ,
                    TypesFixedUnfoldedLength/** fixed unfolded length */ 
                };

                private: ResizeBendRadiusBuilderImpl * m_resizebendradiusbuilder_impl;
                private: friend class  _ResizeBendRadiusBuilderBuilder;
                protected: ResizeBendRadiusBuilder();
                public: ~ResizeBendRadiusBuilder();
                /**Returns  the bend faces 
                 <br>  Created in NX5.0.0.  <br>  
                 <br> License requirements : nx_sheet_metal ("NX Sheet Metal") */
                public: NXOpen::ScCollector * BendFaces
                (
                );
                /**Returns  the bend radius 
                 <br>  Created in NX5.0.0.  <br>  
                 <br> License requirements : nx_sheet_metal ("NX Sheet Metal") */
                public: NXOpen::Expression * BendRadius
                (
                );
                /**Returns  the feature type 
                 <br>  Created in NX7.0.0.  <br>  
                 <br> License requirements : None */
                public: NXOpen::Features::SheetMetal::ResizeBendRadiusBuilder::Types Type
                (
                );
                /**Sets  the feature type 
                 <br>  Created in NX7.0.0.  <br>  
                 <br> License requirements : nx_sheet_metal ("NX Sheet Metal") */
                public: void SetType
                (
                    NXOpen::Features::SheetMetal::ResizeBendRadiusBuilder::Types type /** type */ 
                );
                /**Returns  the non-thickness planar face or linear edge to remain fixed while bend is resized 
                 <br>  Created in NX7.0.0.  <br>  
                 <br> License requirements : None */
                public: NXOpen::SelectDisplayableObject * ReferenceEntity
                (
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
