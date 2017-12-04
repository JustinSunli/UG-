#ifndef NXOpen_FEATURES_LAWCURVE_HXX_INCLUDED
#define NXOpen_FEATURES_LAWCURVE_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     Features_LawCurve.ja
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
        class LawCurve;
    }
    namespace Features
    {
        class Feature;
    }
    namespace Features
    {
        class _LawCurveBuilder;
        class LawCurveImpl;
        /** Represents a law curve feature  <br> To create or edit an instance of this class, use @link Features::LawCurveBuilder Features::LawCurveBuilder@endlink  <br> 
         <br>  Created in NX7.5.1.  <br>  
        */
        class NXOPENCPP_FEATURESEXPORT  LawCurve : public Features::Feature
        {
            private: LawCurveImpl * m_lawcurve_impl;
            private: friend class  _LawCurveBuilder;
            protected: LawCurve();
            public: ~LawCurve();
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
