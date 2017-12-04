#ifndef NXOpen_CAM_TOOLAXISCHANGE_HXX_INCLUDED
#define NXOpen_CAM_TOOLAXISCHANGE_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     CAM_ToolAxisChange.ja
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
#include <NXOpen/CAM_ToolAxisChange.hxx>
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
        class ToolAxisChange;
    }
    namespace CAM
    {
        class InheritableDoubleBuilder;
    }
    namespace CAM
    {
        class _ToolAxisChangeBuilder;
        class ToolAxisChangeImpl;
        /**
            Represents a @link CAM::ToolAxisChange CAM::ToolAxisChange@endlink 
            
         <br>  Created in NX6.0.0.  <br>  
        */
        class NXOPENCPP_CAMEXPORT  ToolAxisChange : public TaggedObject
        {
            /** Available types for tool axis change method */
            public: enum MethodTypes
            {
                MethodTypesPerStep/**Per Step*/,
                MethodTypesPerMinute/**Per Minute*/
            };

            private: ToolAxisChangeImpl * m_toolaxischange_impl;
            private: friend class  _ToolAxisChangeBuilder;
            protected: ToolAxisChange();
            public: ~ToolAxisChange();
            /**Returns  the extend at convex corner toggle 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: bool ExtendAtConvexCorner
            (
            );
            /**Sets  the extend at convex corner toggle 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : cam_base ("CAM BASE") */
            public: void SetExtendAtConvexCorner
            (
                bool propValue /** the Extend at Convex Corner value */
            );
            /**Returns  the  maximum corner angle 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::CAM::InheritableDoubleBuilder * MaxCornerAngle
            (
            );
            /**Returns  the maximum tool axis change
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::CAM::InheritableDoubleBuilder * MaxToolAxisChange
            (
            );
            /**Returns  the tool axis change method
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::CAM::ToolAxisChange::MethodTypes Method
            (
            );
            /**Sets  the tool axis change method
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : cam_base ("CAM BASE") */
            public: void SetMethod
            (
                NXOpen::CAM::ToolAxisChange::MethodTypes propValue /** the value of max tool axis change */
            );
            /**Returns  the lift at convex corner toggle 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: bool LiftAtConvexCorner
            (
            );
            /**Sets  the lift at convex corner toggle 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : cam_base ("CAM BASE") */
            public: void SetLiftAtConvexCorner
            (
                bool propValue /** the Lift at Convex Corner value */
            );
            /**Returns  the minimum tool axis change 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::CAM::InheritableDoubleBuilder * MinToolAxisChange
            (
            );
            /**Returns  the tilt angle
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::CAM::InheritableDoubleBuilder * TiltAngle
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
