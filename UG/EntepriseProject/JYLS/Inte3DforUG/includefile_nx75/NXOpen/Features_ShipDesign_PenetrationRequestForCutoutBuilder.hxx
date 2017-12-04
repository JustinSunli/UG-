#ifndef NXOpen_FEATURES_SHIPDESIGN_PENETRATIONREQUESTFORCUTOUTBUILDER_HXX_INCLUDED
#define NXOpen_FEATURES_SHIPDESIGN_PENETRATIONREQUESTFORCUTOUTBUILDER_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     Features_ShipDesign_PenetrationRequestForCutoutBuilder.ja
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
#include <NXOpen/Builder.hxx>
#include <NXOpen/Features_ShipDesign_PenetrationRequestForCutoutBuilder.hxx>
#include <NXOpen/SelectObjectList.hxx>
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
            class PenetrationRequestForCutoutBuilder;
        }
    }
    class Builder;
    class SelectNXObjectList;
    namespace Features
    {
        namespace ShipDesign
        {
            class _PenetrationRequestForCutoutBuilderBuilder;
            class PenetrationRequestForCutoutBuilderImpl;
            /** Represents a @link Features::ShipDesign::PenetrationRequest Features::ShipDesign::PenetrationRequest@endlink  builder  <br> To create a new instance of this class, use @link Features::ShipDesign::PenetrationRequestCollection::CreatePenetrationRequestForCutoutBuilder Features::ShipDesign::PenetrationRequestCollection::CreatePenetrationRequestForCutoutBuilder@endlink  <br> 
             <br>  Created in NX8.5.0.  <br>  
            */
            class NXOPENCPP_FEATURESEXPORT  PenetrationRequestForCutoutBuilder : public Builder
            {
                private: PenetrationRequestForCutoutBuilderImpl * m_penetrationrequestforcutoutbuilder_impl;
                private: friend class  _PenetrationRequestForCutoutBuilderBuilder;
                protected: PenetrationRequestForCutoutBuilder();
                public: ~PenetrationRequestForCutoutBuilder();
                /**Returns  the selection cutout 
                 <br>  Created in NX8.5.0.  <br>  
                 <br> License requirements : None */
                public: NXOpen::SelectNXObjectList * SelectionCutout
                (
                );
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
