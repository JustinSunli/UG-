#ifndef NXOpen_FEATURES_SHELLFACE_HXX_INCLUDED
#define NXOpen_FEATURES_SHELLFACE_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     Features_ShellFace.ja
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
        class ShellFace;
    }
    namespace Features
    {
        class BodyFeature;
    }
    namespace Features
    {
        class _ShellFaceBuilder;
        class ShellFaceImpl;
        /** Represents a shell face feature  <br> To create or edit an instance of this class, use @link Features::ShellFaceBuilder Features::ShellFaceBuilder@endlink  <br> 
         <br>  Created in NX6.0.0.  <br>  
        */
        class NXOPENCPP_FEATURESEXPORT  ShellFace : public Features::BodyFeature
        {
            private: ShellFaceImpl * m_shellface_impl;
            private: friend class  _ShellFaceBuilder;
            protected: ShellFace();
            public: ~ShellFace();
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
