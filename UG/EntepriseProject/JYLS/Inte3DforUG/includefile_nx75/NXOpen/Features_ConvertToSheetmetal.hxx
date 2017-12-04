#ifndef NXOpen_FEATURES_CONVERTTOSHEETMETAL_HXX_INCLUDED
#define NXOpen_FEATURES_CONVERTTOSHEETMETAL_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     Features_ConvertToSheetmetal.ja
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
#include <NXOpen/Features_Feature.hxx>
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
        class ConvertToSheetmetal;
    }
    namespace Features
    {
        class Feature;
    }
    namespace Features
    {
        class _ConvertToSheetmetalBuilder;
        class ConvertToSheetmetalImpl;
        /** Represents a ConvertToSheetmetal feature  <br> To create or edit an instance of this class, use @link Features::SheetMetal::ConvertToSheetmetalBuilder Features::SheetMetal::ConvertToSheetmetalBuilder@endlink  <br> 
         <br>  Created in NX5.0.0.  <br>  
        */
        class NXOPENCPP_FEATURESEXPORT  ConvertToSheetmetal : public Features::Feature
        {
            private: ConvertToSheetmetalImpl * m_converttosheetmetal_impl;
            private: friend class  _ConvertToSheetmetalBuilder;
            protected: ConvertToSheetmetal();
            public: ~ConvertToSheetmetal();
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
