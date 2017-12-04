#ifndef NXOpen_FEATURES_TRIMBODY_HXX_INCLUDED
#define NXOpen_FEATURES_TRIMBODY_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     Features_TrimBody.ja
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
        class TrimBody;
    }
    namespace Features
    {
        class Feature;
    }
    namespace Features
    {
        class _TrimBodyBuilder;
        class TrimBodyImpl;
        /** Represents a Trim Body feature. This class is to be used only for editing pre-NX7.5.0 trim body features.
            Use @link Features::TrimBody2 Features::TrimBody2@endlink  to create and edit trim body features.  <br> To create or edit an instance of this class, use @link Features::TrimBodyBuilder Features::TrimBodyBuilder@endlink  <br> 
         <br>  Created in NX4.0.0.  <br>  
        */
        class NXOPENCPP_FEATURESEXPORT  TrimBody : public Features::Feature
        {
            private: TrimBodyImpl * m_trimbody_impl;
            private: friend class  _TrimBodyBuilder;
            protected: TrimBody();
            public: ~TrimBody();
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
