#ifndef NXOpen_CAM_PROBEINSPECTPOINTMOVEBUILDER_HXX_INCLUDED
#define NXOpen_CAM_PROBEINSPECTPOINTMOVEBUILDER_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     CAM_ProbeInspectPointMoveBuilder.ja
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
#include <NXOpen/CAM_MoveBuilder.hxx>
#include <NXOpen/CAM_ProbeControlParametersBuilder.hxx>
#include <NXOpen/CAM_ProbeInspectPointMoveBuilder.hxx>
#include <NXOpen/CAM_ProbeProtectedParametersBuilder.hxx>
#include <NXOpen/CAM_ProbeStockParametersBuilder.hxx>
#include <NXOpen/CAM_ProbeToleranceParametersBuilder.hxx>
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
        class ProbeInspectPointMoveBuilder;
    }
    namespace CAM
    {
        class MoveBuilder;
    }
    namespace CAM
    {
        class ProbeControlParametersBuilder;
    }
    namespace CAM
    {
        class ProbeProtectedParametersBuilder;
    }
    namespace CAM
    {
        class ProbeStockParametersBuilder;
    }
    namespace CAM
    {
        class ProbeToleranceParametersBuilder;
    }
    class Point;
    namespace CAM
    {
        class _ProbeInspectPointMoveBuilderBuilder;
        class ProbeInspectPointMoveBuilderImpl;
        /** Represents the Probe Inspect Point Move Builder  <br> To create a new instance of this class, use @link CAM::MoveCollection::CreateProbeInspectPointMoveBuilder CAM::MoveCollection::CreateProbeInspectPointMoveBuilder@endlink  <br> 
         <br>  Created in NX5.0.0.  <br>  
        */
        class NXOPENCPP_CAMEXPORT  ProbeInspectPointMoveBuilder : public CAM::MoveBuilder
        {
            /** the probing direction type */
            public: enum Direction
            {
                DirectionInferred/** Inferred using surface normal */,
                DirectionXm/** XM */,
                DirectionNegxm/** Negative XM */,
                DirectionYm/** YM */,
                DirectionNegym/** Negative YM */,
                DirectionZm/** ZM */,
                DirectionNegzm/** Negative ZM */
            };

            private: ProbeInspectPointMoveBuilderImpl * m_probeinspectpointmovebuilder_impl;
            private: friend class  _ProbeInspectPointMoveBuilderBuilder;
            protected: ProbeInspectPointMoveBuilder();
            public: ~ProbeInspectPointMoveBuilder();
            /**Returns  the point to probe 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Point * Point
            (
            );
            /**Sets  the point to probe 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : cam_base ("CAM BASE") */
            public: void SetPoint
            (
                NXOpen::Point * point /** point */ 
            );
            /**Returns  the probing direction 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::CAM::ProbeInspectPointMoveBuilder::Direction DirectionType
            (
            );
            /**Sets  the probing direction 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : cam_base ("CAM BASE") */
            public: void SetDirectionType
            (
                NXOpen::CAM::ProbeInspectPointMoveBuilder::Direction dirType /** dirtype */ 
            );
            /**Returns  the probe protected parameters builder 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::CAM::ProbeProtectedParametersBuilder * ProbeProtectedParameters
            (
            );
            /**Returns  the probe control  parameters builder 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::CAM::ProbeControlParametersBuilder * ProbeControlParameters
            (
            );
            /**Returns  the probe stock  parameters builder 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::CAM::ProbeStockParametersBuilder * ProbeStockParameters
            (
            );
            /**Returns  the probe tolerance parameters builder 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::CAM::ProbeToleranceParametersBuilder * ProbeToleranceParameters
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
