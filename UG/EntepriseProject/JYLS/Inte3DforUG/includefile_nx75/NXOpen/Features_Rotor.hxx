#ifndef NXOpen_FEATURES_ROTOR_HXX_INCLUDED
#define NXOpen_FEATURES_ROTOR_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     Features_Rotor.ja
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
        class Rotor;
    }
    namespace Features
    {
        class BodyFeature;
    }
    namespace Features
    {
        class _RotorBuilder;
        class RotorImpl;
        /** Represents a Die CAM Rotor feature.  <br> To create or edit an instance of this class, use @link Die::RotorBuilder Die::RotorBuilder@endlink  <br> 
         <br>  Created in NX4.0.0.  <br>  
        */
        class NXOPENCPP_FEATURESEXPORT  Rotor : public Features::BodyFeature
        {
            private: RotorImpl * m_rotor_impl;
            private: friend class  _RotorBuilder;
            protected: Rotor();
            public: ~Rotor();
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
