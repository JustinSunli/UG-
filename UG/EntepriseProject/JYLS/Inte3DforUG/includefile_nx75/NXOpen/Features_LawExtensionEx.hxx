#ifndef NXOpen_FEATURES_LAWEXTENSIONEX_HXX_INCLUDED
#define NXOpen_FEATURES_LAWEXTENSIONEX_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     Features_LawExtensionEx.ja
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
        class LawExtensionEx;
    }
    namespace Features
    {
        class BodyFeature;
    }
    namespace Features
    {
        class _LawExtensionExBuilder;
        class LawExtensionExImpl;
        /** Represents a law extension feature  <br> To create or edit an instance of this class, use @link Features::LawExtensionBuilderEx Features::LawExtensionBuilderEx@endlink  <br> 
         <br>  Created in NX8.5.0.  <br>  
        */
        class NXOPENCPP_FEATURESEXPORT  LawExtensionEx : public Features::BodyFeature
        {
            private: LawExtensionExImpl * m_lawextensionex_impl;
            private: friend class  _LawExtensionExBuilder;
            protected: LawExtensionEx();
            public: ~LawExtensionEx();
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