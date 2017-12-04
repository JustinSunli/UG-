#ifndef NXOpen_CAM_INTERPOLATEVECTOR_HXX_INCLUDED
#define NXOpen_CAM_INTERPOLATEVECTOR_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     CAM_InterpolateVector.ja
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
#include <NXOpen/CAM_ToolAxisInterpolate.hxx>
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
        class InterpolateVector;
    }
    namespace CAM
    {
        class ToolAxisInterpolate;
    }
    class Direction;
    class NXObject;
    class Point;
    namespace CAM
    {
        class _InterpolateVectorBuilder;
        class InterpolateVectorImpl;
        /** Represents builder of Interpolate Vector, one option of Tool Axis  
         <br>  Created in NX7.5.0.  <br>  
        */
        class NXOPENCPP_CAMEXPORT  InterpolateVector : public CAM::ToolAxisInterpolate
        {
            private: InterpolateVectorImpl * m_interpolatevector_impl;
            private: friend class  _InterpolateVectorBuilder;
            protected: InterpolateVector();
            public: ~InterpolateVector();
            /** Add a new item
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : cam_base ("CAM BASE") */
            public: void Insert
            (
                int inputIndex /** the new created item index */,
                NXOpen::Point * point /** the point */,
                NXOpen::NXObject * view /** the view */,
                NXOpen::Direction * vector /** the vector */
            );
            /** Modify an existing item by index 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : cam_base ("CAM BASE") */
            public: void Modify
            (
                int index /** the index of modified item */,
                NXOpen::Point * point /** the point */,
                NXOpen::Direction * vector /** the vector */
            );
            /** Delete an existing item by index 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : cam_base ("CAM BASE") */
            public: void Erase
            (
                int index /** the index of deleted item */
            );
            /** Move up an item 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: void MoveUp
            (
                int index /** the index of item which should be moved up*/
            );
            /** Move down an item 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: void MoveDown
            (
                int index /** the index of item which should be moved down*/
            );
            /**Returns  the tilt angle 
             <br>  Created in NX7.5.2.  <br>  
             <br> License requirements : None */
            public: double TiltAngle
            (
            );
            /**Sets  the tilt angle 
             <br>  Created in NX7.5.2.  <br>  
             <br> License requirements : cam_base ("CAM BASE") */
            public: void SetTiltAngle
            (
                double tiltAngle /** the tilt angle value */
            );
            /** Get the vector  @return  the vector 
             <br>  Created in NX7.5.5.  <br>  
             <br> License requirements : None */
            public: NXOpen::Direction * GetVector
            (
                int index /** the index of item */
            );
            /**Returns  the minimum lead angle 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : None */
            public: double MinimumLeadAngle
            (
            );
            /**Sets  the minimum lead angle 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : cam_base ("CAM BASE") */
            public: void SetMinimumLeadAngle
            (
                double minLeadAngle /** the minimum lead angle */
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
