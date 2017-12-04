#ifndef NXOpen_FEATURES_SHEETMETAL_AEROREFORMBUILDER_HXX_INCLUDED
#define NXOpen_FEATURES_SHEETMETAL_AEROREFORMBUILDER_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     Features_SheetMetal_AeroReformBuilder.ja
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
#include <NXOpen/Features_SheetMetal_SheetmetalBaseBuilder.hxx>
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
            class AeroReformBuilder;
        }
    }
    namespace Features
    {
        namespace SheetMetal
        {
            class SheetmetalBaseBuilder;
        }
    }
    class ScCollector;
    namespace Features
    {
        namespace SheetMetal
        {
            class _AeroReformBuilderBuilder;
            class AeroReformBuilderImpl;
            /** Represents a Aerospace Sheet Metal REFORM Builder. 
                     <br> To create a new instance of this class, use @link Features::SheetMetal::AeroSheetmetalManager::CreateReformBuilder Features::SheetMetal::AeroSheetmetalManager::CreateReformBuilder@endlink  <br> 
             <br>  Created in NX4.0.0.  <br>  
            */
            class NXOPENCPP_FEATURESEXPORT  AeroReformBuilder : public Features::SheetMetal::SheetmetalBaseBuilder
            {
                private: AeroReformBuilderImpl * m_aeroreformbuilder_impl;
                private: friend class  _AeroReformBuilderBuilder;
                protected: AeroReformBuilder();
                public: ~AeroReformBuilder();
                /**Sets  the unformed faces smart collector object.
                            
                 <br>  Created in NX4.0.0.  <br>  
                 <br> License requirements : aero_sheet_metal ("Aerospace Sheet Metal") OR adv_sheet_metal_dsgn ("ADVANCED SHEET METAL DESIGN") */
                public: void SetUnformFaceCollector
                (
                    NXOpen::ScCollector * unformFaceCollector /** unform face collector */ 
                );
                /**Returns  the unformed faces smart collector object.
                            
                 <br>  Created in NX4.0.0.  <br>  
                 <br> License requirements : aero_sheet_metal ("Aerospace Sheet Metal") OR adv_sheet_metal_dsgn ("ADVANCED SHEET METAL DESIGN") */
                public: NXOpen::ScCollector * UnformFaceCollector
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
