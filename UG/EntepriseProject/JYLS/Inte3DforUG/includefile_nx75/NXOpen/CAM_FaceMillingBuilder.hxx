#ifndef NXOpen_CAM_FACEMILLINGBUILDER_HXX_INCLUDED
#define NXOpen_CAM_FACEMILLINGBUILDER_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     CAM_FaceMillingBuilder.ja
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
#include <NXOpen/CAM_Geometry.hxx>
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
        class FaceMillingBuilder;
    }
    namespace CAM
    {
        class Geometry;
    }
    namespace CAM
    {
        class PlanarOperationBuilder;
    }
    namespace CAM
    {
        class RoundPointBuilder;
    }
    namespace CAM
    {
        class _FaceMillingBuilderBuilder;
        class FaceMillingBuilderImpl;
        /** Represents a FaceMilling Builder  <br> To create a new instance of this class, use @link CAM::OperationCollection::CreateFaceMillingBuilder CAM::OperationCollection::CreateFaceMillingBuilder@endlink  <br> 
         <br>  Created in NX5.0.0.  <br>  
        */
        class NXOPENCPP_CAMEXPORT  FaceMillingBuilder : public CAM::PlanarOperationBuilder
        {
            private: FaceMillingBuilderImpl * m_facemillingbuilder_impl;
            private: friend class  _FaceMillingBuilderBuilder;
            protected: FaceMillingBuilder();
            public: ~FaceMillingBuilder();
            /**Returns  the Round Point Output builder 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : cam_base ("CAM BASE") */
            public: NXOpen::CAM::RoundPointBuilder * RoundPoint
            (
            );
            /**Returns  the wall geometry builder
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::CAM::Geometry * WallGeometry
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
