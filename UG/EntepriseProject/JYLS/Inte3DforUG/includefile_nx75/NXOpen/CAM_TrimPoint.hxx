#ifndef NXOpen_CAM_TRIMPOINT_HXX_INCLUDED
#define NXOpen_CAM_TRIMPOINT_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     CAM_TrimPoint.ja
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
#include <NXOpen/CAM_TrimPoint.hxx>
#include <NXOpen/TaggedObject.hxx>
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
        class TrimPoint;
    }
    namespace CAM
    {
        class InheritableDoubleBuilder;
    }
    class NXObject;
    class Point;
    namespace CAM
    {
        class _TrimPointBuilder;
        class TrimPointImpl;
        /** Represents trim point 
         <br>  Created in NX6.0.0.  <br>  
        */
        class NXOPENCPP_CAMEXPORT  TrimPoint : public TaggedObject
        {
            /** The trim point options 
             <br>  Created in NX6.0.0.  <br>  
            */
            public: enum Options
            {
                OptionsNone/** Point is inactive. */,
                OptionsPoint/** Point is active. */
            };

            /** The trim point angle options 
             <br>  Created in NX6.0.0.  <br>  
            */
            public: enum AngleOptions
            {
                AngleOptionsAuto/** Angle is calculated automatically. */,
                AngleOptionsVector/** Angle is defined by a vector. */,
                AngleOptionsAngle/** Angle is defined by a value. */
            };

            /** The trim point ramp angle options 
             <br>  Created in NX7.5.0.  <br>  
            */
            public: enum RampAngleOptions
            {
                RampAngleOptionsNone/** no ramp angle. */,
                RampAngleOptionsAligned/** Ramp angle is aligned to angle. */,
                RampAngleOptionsVector/** Ramp angle is defined by a vector. */,
                RampAngleOptionsAngle/** Ramp angle is defined by a value. */
            };

            private: TrimPointImpl * m_trimpoint_impl;
            private: friend class  _TrimPointBuilder;
            protected: TrimPoint();
            public: ~TrimPoint();
            /**Returns  the trim point option 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::CAM::TrimPoint::Options Option
            (
            );
            /**Sets  the trim point option 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : cam_base ("CAM BASE") */
            public: void SetOption
            (
                NXOpen::CAM::TrimPoint::Options trimPointMode /** the trim point option */
            );
            /**Returns  the trim point 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Point * Point
            (
            );
            /**Sets  the trim point 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : cam_base ("CAM BASE") */
            public: void SetPoint
            (
                NXOpen::Point * point /** the trim point */
            );
            /**Returns  the trim point extend distance
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::CAM::InheritableDoubleBuilder * ExtendDistance
            (
            );
            /**Returns  the trim point angle option 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::CAM::TrimPoint::AngleOptions AngleOption
            (
            );
            /**Sets  the trim point angle option 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : cam_base ("CAM BASE") */
            public: void SetAngleOption
            (
                NXOpen::CAM::TrimPoint::AngleOptions angleMode /** the trim point angle option */
            );
            /**Returns  the trim point vector 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::NXObject * Vector
            (
            );
            /**Sets  the trim point vector 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : cam_base ("CAM BASE") */
            public: void SetVector
            (
                NXOpen::NXObject * vector /** the trim point vector */
            );
            /**Returns  the trim point angle 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::CAM::InheritableDoubleBuilder * Angle
            (
            );
            /**Returns  the trim point angle offset 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::CAM::InheritableDoubleBuilder * AngleOffset
            (
            );
            /**Returns  the trim point ramp angle option 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::CAM::TrimPoint::RampAngleOptions RampAngleOption
            (
            );
            /**Sets  the trim point ramp angle option 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : cam_base ("CAM BASE") */
            public: void SetRampAngleOption
            (
                NXOpen::CAM::TrimPoint::RampAngleOptions rampAngleMode /** the trim point ramp angle option */
            );
            /**Returns  the trim point ramp angle vector 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::NXObject * RampAngleVector
            (
            );
            /**Sets  the trim point ramp angle vector 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : cam_base ("CAM BASE") */
            public: void SetRampAngleVector
            (
                NXOpen::NXObject * rampVector /** the trim point ramp angle vector */
            );
            /**Returns  the trim point ramp angle 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::CAM::InheritableDoubleBuilder * RampAngle
            (
            );
            /**Returns  the trim point ramp angle offset 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::CAM::InheritableDoubleBuilder * RampAngleOffset
            (
            );
            /**Returns  the trim point check part geometry beyond trim
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: bool CheckPartGeometryBeyondTrim
            (
            );
            /**Sets  the trim point check part geometry beyond trim
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : cam_base ("CAM BASE") */
            public: void SetCheckPartGeometryBeyondTrim
            (
                bool checkPartGeometry /** the trim point check part geometry beyond trim*/
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
