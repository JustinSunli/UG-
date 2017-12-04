#ifndef NXOpen_GEOMETRICANALYSIS_CURVECONTINUITY_HXX_INCLUDED
#define NXOpen_GEOMETRICANALYSIS_CURVECONTINUITY_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     GeometricAnalysis_CurveContinuity.ja
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
        class CurveContinuity;
    }
    namespace GeometricAnalysis
    {
        class AnalysisObject;
    }
    namespace GeometricAnalysis
    {
        class _CurveContinuityBuilder;
        class CurveContinuityImpl;
        /** Represents a Curve Continuity Analysis builder  <br> To create or edit an instance of this class, use @link GeometricAnalysis::CurveContinuityBuilder GeometricAnalysis::CurveContinuityBuilder@endlink  <br> 
         <br>  Created in NX7.0.0.  <br>  
        */
        class NXOPENCPP_GEOMETRICANALYSISEXPORT  CurveContinuity : public GeometricAnalysis::AnalysisObject
        {
            private: CurveContinuityImpl * m_curvecontinuity_impl;
            private: friend class  _CurveContinuityBuilder;
            protected: CurveContinuity();
            public: ~CurveContinuity();
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
