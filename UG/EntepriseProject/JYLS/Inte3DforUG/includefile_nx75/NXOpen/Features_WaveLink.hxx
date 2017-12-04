#ifndef NXOpen_FEATURES_WAVELINK_HXX_INCLUDED
#define NXOpen_FEATURES_WAVELINK_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     Features_WaveLink.ja
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
        class WaveLink;
    }
    namespace Features
    {
        class Feature;
    }
    namespace Features
    {
        class _WaveLinkBuilder;
        class WaveLinkImpl;
        /** Represents a wavelink feature  <br> To create or edit an instance of this class, use @link Features::WaveLinkBuilder Features::WaveLinkBuilder@endlink  <br> 
         <br>  Created in NX5.0.0.  <br>  
        */
        class NXOPENCPP_FEATURESEXPORT  WaveLink : public Features::Feature
        {
            private: WaveLinkImpl * m_wavelink_impl;
            private: friend class  _WaveLinkBuilder;
            protected: WaveLink();
            public: ~WaveLink();
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
