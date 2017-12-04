#ifndef NXOpen_CAM_VAZLMILLINGBUILDER_HXX_INCLUDED
#define NXOpen_CAM_VAZLMILLINGBUILDER_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     CAM_VazlMillingBuilder.ja
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
#include <NXOpen/CAM_PlanarOperationBuilder.hxx>
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
        class VazlMillingBuilder;
    }
    namespace CAM
    {
        class CutLevel;
    }
    namespace CAM
    {
        class PlanarOperationBuilder;
    }
    namespace CAM
    {
        class _VazlMillingBuilderBuilder;
        class VazlMillingBuilderImpl;
        /** Represents a VazlMilling Builder  <br> To create a new instance of this class, use @link CAM::OperationCollection::CreateVazlMillingBuilder CAM::OperationCollection::CreateVazlMillingBuilder@endlink  <br> 
         <br>  Created in NX5.0.0.  <br>  
        */
        class NXOPENCPP_CAMEXPORT  VazlMillingBuilder : public CAM::PlanarOperationBuilder
        {
            private: VazlMillingBuilderImpl * m_vazlmillingbuilder_impl;
            private: friend class  _VazlMillingBuilderBuilder;
            protected: VazlMillingBuilder();
            public: ~VazlMillingBuilder();
            /**Returns  the cut level builder 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::CAM::CutLevel * CutLevel
            (
            );
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
