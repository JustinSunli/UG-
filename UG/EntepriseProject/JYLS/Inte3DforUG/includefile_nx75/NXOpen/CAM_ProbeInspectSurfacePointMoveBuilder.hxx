#ifndef NXOpen_CAM_PROBEINSPECTSURFACEPOINTMOVEBUILDER_HXX_INCLUDED
#define NXOpen_CAM_PROBEINSPECTSURFACEPOINTMOVEBUILDER_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     CAM_ProbeInspectSurfacePointMoveBuilder.ja
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
#include <NXOpen/CAM_ProbeInspectSurfacePointMoveBuilder.hxx>
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
        class ProbeInspectSurfacePointMoveBuilder;
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
    class NXObject;
    class Point;
    namespace CAM
    {
        class _ProbeInspectSurfacePointMoveBuilderBuilder;
        class ProbeInspectSurfacePointMoveBuilderImpl;
        /** Represents the Probe Inspect Surface Point Move Builder  <br> To create a new instance of this class, use @link CAM::MoveCollection::CreateProbeInspectSurfacePointMoveBuilder CAM::MoveCollection::CreateProbeInspectSurfacePointMoveBuilder@endlink  <br> 
         <br>  Created in NX5.0.0.  <br>  
        */
        class NXOPENCPP_CAMEXPORT  ProbeInspectSurfacePointMoveBuilder : public CAM::MoveBuilder
        {
            /** the probing direction type */
            public: enum Direction
            {
                DirectionNormal/** Inferred using surface normal */,
                DirectionVector = 7/** Specify vector */
            };

            /** the probing tool axis type */
            public: enum ToolAxis
            {
                ToolAxisNone/** Use the Previous Tool Axis */,
                ToolAxisNormal/** Inferred using surface normal */,
                ToolAxisAutomatic/** Tool Axis aligned with closest machine axis */
            };

            /** the measurement type */
            public: enum Measurement
            {
                MeasurementAxis2/** 2 Axis */,
                MeasurementAxis3/** 3 Axis */
            };

            private: ProbeInspectSurfacePointMoveBuilderImpl * m_probeinspectsurfacepointmovebuilder_impl;
            private: friend class  _ProbeInspectSurfacePointMoveBuilderBuilder;
            protected: ProbeInspectSurfacePointMoveBuilder();
            public: ~ProbeInspectSurfacePointMoveBuilder();
            /**Returns  the direction type 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::CAM::ProbeInspectSurfacePointMoveBuilder::Direction DirectionType
            (
            );
            /**Sets  the direction type 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : None */
            public: void SetDirectionType
            (
                NXOpen::CAM::ProbeInspectSurfacePointMoveBuilder::Direction dirType /** dirtype */ 
            );
            /**Returns  the probe axis type 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::CAM::ProbeInspectSurfacePointMoveBuilder::ToolAxis ToolAxisType
            (
            );
            /**Sets  the probe axis type 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: void SetToolAxisType
            (
                NXOpen::CAM::ProbeInspectSurfacePointMoveBuilder::ToolAxis axisType /** axistype */ 
            );
            /**Returns  the point to probe 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Point * Point
            (
            );
            /**Sets  the point to probe 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : None */
            public: void SetPoint
            (
                NXOpen::Point * point /** point */ 
            );
            /**Returns  the vector to define probing direction 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::NXObject * Vector
            (
            );
            /**Sets  the vector to define probing direction 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : None */
            public: void SetVector
            (
                NXOpen::NXObject * vector /** vector */ 
            );
            /**Returns  the measurement (axis) type 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::CAM::ProbeInspectSurfacePointMoveBuilder::Measurement MeasurementType
            (
            );
            /**Sets  the measurement (axis) type 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : None */
            public: void SetMeasurementType
            (
                NXOpen::CAM::ProbeInspectSurfacePointMoveBuilder::Measurement measType /** meastype */ 
            );
            /**Returns  the probe protected parameters builder 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::CAM::ProbeProtectedParametersBuilder * ProbeProtectedParameters
            (
            );
            /**Returns  the probe control parameters builder 
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
