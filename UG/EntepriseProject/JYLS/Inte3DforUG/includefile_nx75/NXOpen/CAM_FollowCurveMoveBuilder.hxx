#ifndef NXOpen_CAM_FOLLOWCURVEMOVEBUILDER_HXX_INCLUDED
#define NXOpen_CAM_FOLLOWCURVEMOVEBUILDER_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     CAM_FollowCurveMoveBuilder.ja
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
#include <NXOpen/CAM_FollowGeometryMoveBuilder.hxx>
#include <NXOpen/CAM_FollowCurveMoveBuilder.hxx>
#include <NXOpen/Section.hxx>
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
        class FollowCurveMoveBuilder;
    }
    namespace CAM
    {
        class FollowGeometryMoveBuilder;
    }
    class Direction;
    class Point;
    class Section;
    namespace CAM
    {
        class _FollowCurveMoveBuilderBuilder;
        class FollowCurveMoveBuilderImpl;
        /** Represents the Follow Curve Move Builder  <br> To create a new instance of this class, use @link CAM::MoveCollection::CreateFollowCurveMoveBuilder CAM::MoveCollection::CreateFollowCurveMoveBuilder@endlink  <br> 
        Default values.
        <table border="1"> 
         
        <tr><th> 
        Property</th>  <th> 
        Value</th> </tr>
        <tr><td> 
         
        FeedRate </td> <td> 
         
        0.0 </td> </tr> 

        <tr><td> 
         
        FeedType </td> <td> 
         
        Motion </td> </tr> 

        <tr><td> 
         
        FeedUnit </td> <td> 
         
        None </td> </tr> 

        <tr><td> 
         
        MotionType </td> <td> 
         
        Cut </td> </tr> 

        <tr><td> 
         
        ProtectedMove </td> <td> 
         
        true </td> </tr> 

        </table>  

         <br>  Created in NX8.0.0.  <br>  
        */
        class NXOPENCPP_CAMEXPORT  FollowCurveMoveBuilder : public CAM::FollowGeometryMoveBuilder
        {
            private: FollowCurveMoveBuilderImpl * m_followcurvemovebuilder_impl;
            private: friend class  _FollowCurveMoveBuilderBuilder;
            protected: FollowCurveMoveBuilder();
            public: ~FollowCurveMoveBuilder();
            /**Returns  the geometry selection 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Section * Geometry
            (
            );
            /**Sets  the geometry selection 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : cam_base ("CAM BASE") */
            public: void SetGeometry
            (
                NXOpen::Section * geometryCollector /** geometrycollector */ 
            );
            /**Returns  the end location 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Point * EndPoint
            (
            );
            /**Sets  the end location 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : cam_base ("CAM BASE") */
            public: void SetEndPoint
            (
                NXOpen::Point * location /** location */ 
            );
            /**Returns  the end tool axis 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Direction * EndToolAxis
            (
            );
            /**Sets  the end tool axis 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : cam_base ("CAM BASE") */
            public: void SetEndToolAxis
            (
                NXOpen::Direction * vec /** vec */ 
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
