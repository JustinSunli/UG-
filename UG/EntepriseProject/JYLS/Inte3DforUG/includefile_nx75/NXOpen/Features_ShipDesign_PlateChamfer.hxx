#ifndef NXOpen_FEATURES_SHIPDESIGN_PLATECHAMFER_HXX_INCLUDED
#define NXOpen_FEATURES_SHIPDESIGN_PLATECHAMFER_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     Features_ShipDesign_PlateChamfer.ja
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
            class PlateChamfer;
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
            class _PlateChamferBuilder;
            class PlateChamferImpl;
            /** Represents a plate chamfer feature  <br> To create or edit an instance of this class, use @link Features::ShipDesign::PlateChamferBuilder Features::ShipDesign::PlateChamferBuilder@endlink  <br> 
             <br>  Created in NX8.0.0.  <br>  
            */
            class NXOPENCPP_FEATURESEXPORT  PlateChamfer : public Features::BodyFeature
            {
                private: PlateChamferImpl * m_platechamfer_impl;
                private: friend class  _PlateChamferBuilder;
                protected: PlateChamfer();
                public: ~PlateChamfer();
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
