#ifndef NXOpen_FEATURES_EMBOSSBODY_HXX_INCLUDED
#define NXOpen_FEATURES_EMBOSSBODY_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     Features_EmbossBody.ja
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
#include <NXOpen/Features_CombineBodyFeature.hxx>
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
        class EmbossBody;
    }
    namespace Features
    {
        class CombineBodyFeature;
    }
    namespace Features
    {
        class _EmbossBodyBuilder;
        class EmbossBodyImpl;
        /** Represents an emboss body feature  <br> To create or edit an instance of this class, use @link Features::EmbossBodyBuilder Features::EmbossBodyBuilder@endlink  <br> 
         <br>  Created in NX8.5.0.  <br>  
        */
        class NXOPENCPP_FEATURESEXPORT  EmbossBody : public Features::CombineBodyFeature
        {
            private: EmbossBodyImpl * m_embossbody_impl;
            private: friend class  _EmbossBodyBuilder;
            protected: EmbossBody();
            public: ~EmbossBody();
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
