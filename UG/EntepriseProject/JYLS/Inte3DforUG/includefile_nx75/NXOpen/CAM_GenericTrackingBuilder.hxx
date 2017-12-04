#ifndef NXOpen_CAM_GENERICTRACKINGBUILDER_HXX_INCLUDED
#define NXOpen_CAM_GENERICTRACKINGBUILDER_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     CAM_GenericTrackingBuilder.ja
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
#include <NXOpen/CAM_SolidTrackingBuilder.hxx>
#include <NXOpen/libnxopencpp_cam_exports.hxx>

#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable:4996)
#endif
#ifdef __GNUC__
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

namespace NXOpen
{
    namespace CAM
    {
        class GenericTrackingBuilder;
    }
    namespace CAM
    {
        class SolidTrackingBuilder;
    }
    namespace CAM
    {
        class _GenericTrackingBuilderBuilder;
        class GenericTrackingBuilderImpl;
        /** Represents a GenericTracking Builder  <br> To create a new instance of this class, use @link CAM::Tool::CreateGenericTrackingBuilder CAM::Tool::CreateGenericTrackingBuilder@endlink  <br> 
         <br>  Created in NX5.0.0.  <br>  
        */
        class NXOPENCPP_CAMEXPORT  GenericTrackingBuilder : public CAM::SolidTrackingBuilder
        {
            private: GenericTrackingBuilderImpl * m_generictrackingbuilder_impl;
            private: friend class  _GenericTrackingBuilderBuilder;
            protected: GenericTrackingBuilder();
            public: ~GenericTrackingBuilder();
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
