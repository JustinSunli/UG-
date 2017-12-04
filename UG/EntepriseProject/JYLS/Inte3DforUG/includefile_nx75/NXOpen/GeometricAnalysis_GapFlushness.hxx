#ifndef NXOpen_GEOMETRICANALYSIS_GAPFLUSHNESS_HXX_INCLUDED
#define NXOpen_GEOMETRICANALYSIS_GAPFLUSHNESS_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     GeometricAnalysis_GapFlushness.ja
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
#include <NXOpen/GeometricAnalysis_AnalysisObject.hxx>
#include <NXOpen/libnxopencpp_geometricanalysis_exports.hxx>

#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable:4996)
#endif
#ifdef __GNUC__
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

namespace NXOpen
{
    namespace GeometricAnalysis
    {
        class GapFlushness;
    }
    namespace GeometricAnalysis
    {
        class AnalysisObject;
    }
    namespace GeometricAnalysis
    {
        class _GapFlushnessBuilder;
        class GapFlushnessImpl;
        /** Gap and Flushness analysis object class  <br> To create or edit an instance of this class, use @link GeometricAnalysis::GapFlushnessBuilder GeometricAnalysis::GapFlushnessBuilder@endlink  <br> 
         <br>  Created in NX5.0.0.  <br>  
        */
        class NXOPENCPP_GEOMETRICANALYSISEXPORT  GapFlushness : public GeometricAnalysis::AnalysisObject
        {
            private: GapFlushnessImpl * m_gapflushness_impl;
            private: friend class  _GapFlushnessBuilder;
            protected: GapFlushness();
            public: ~GapFlushness();
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
