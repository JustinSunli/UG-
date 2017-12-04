#ifndef NXOpen_FEATURES_REPLACEFACE_HXX_INCLUDED
#define NXOpen_FEATURES_REPLACEFACE_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     Features_ReplaceFace.ja
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
#include <NXOpen/Features_BodyFeature.hxx>
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
        class ReplaceFace;
    }
    namespace Features
    {
        class BodyFeature;
    }
    namespace Features
    {
        class _ReplaceFaceBuilder;
        class ReplaceFaceImpl;
        /** Represents a replace face feature , don't use it until nx502  <br> To create or edit an instance of this class, use @link Features::ReplaceFaceBuilder Features::ReplaceFaceBuilder@endlink  <br> 
         <br>  Created in NX5.0.2.  <br>  
        */
        class NXOPENCPP_FEATURESEXPORT  ReplaceFace : public Features::BodyFeature
        {
            private: ReplaceFaceImpl * m_replaceface_impl;
            private: friend class  _ReplaceFaceBuilder;
            protected: ReplaceFace();
            public: ~ReplaceFace();
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
