#ifndef NXOpen_FEATURES_SHIPDESIGN_WELDCUT2_HXX_INCLUDED
#define NXOpen_FEATURES_SHIPDESIGN_WELDCUT2_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     Features_ShipDesign_WeldCut2.ja
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
        namespace ShipDesign
        {
            class WeldCut2;
        }
    }
    namespace Features
    {
        class BodyFeature;
    }
    namespace Features
    {
        namespace ShipDesign
        {
            class _WeldCut2Builder;
            class WeldCut2Impl;
            /** Represents a weld cut2 feature  <br> To create or edit an instance of this class, use @link Features::ShipDesign::WeldCut2Builder Features::ShipDesign::WeldCut2Builder@endlink  <br> 
             <br>  Created in NX8.0.1.  <br>  
            */
            class NXOPENCPP_FEATURESEXPORT  WeldCut2 : public Features::BodyFeature
            {
                private: WeldCut2Impl * m_weldcut2_impl;
                private: friend class  _WeldCut2Builder;
                protected: WeldCut2();
                public: ~WeldCut2();
            };
        }
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
