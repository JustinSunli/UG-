#ifndef NXOpen_CAM_DISPLAYTOOL_HXX_INCLUDED
#define NXOpen_CAM_DISPLAYTOOL_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     CAM_DisplayTool.ja
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
#include <NXOpen/CAM_DisplayTool.hxx>
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
        class DisplayTool;
    }
    namespace CAM
    {
        class _DisplayToolBuilder;
        class DisplayToolImpl;
        /** Represents a display tool Builder  <br> This is an abstract class and cannot be instantiated. <br> 
         <br>  Created in NX7.5.0.  <br>  
        */
        class NXOPENCPP_CAMEXPORT  DisplayTool : public TaggedObject
        {
            /** the tool display types 
             <br>  Created in NX7.5.0.  <br>  
            */
            public: enum ToolDisplayTypes
            {
                ToolDisplayTypesNone/** Tool Display: None */,
                ToolDisplayTypesTool2d/** Tool Display: 2D */,
                ToolDisplayTypesTool3d/** Tool Display: 3D */,
                ToolDisplayTypesAxis/** Tool Display: Axis */
            };

            private: DisplayToolImpl * m_displaytool_impl;
            private: friend class  _DisplayToolBuilder;
            protected: DisplayTool();
            public: ~DisplayTool();
            /**Returns  the tool display types 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::CAM::DisplayTool::ToolDisplayTypes ToolDisplayType
            (
            );
            /**Sets  the tool display types 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : cam_base ("CAM BASE") */
            public: void SetToolDisplayType
            (
                NXOpen::CAM::DisplayTool::ToolDisplayTypes toolDisplay /** the tool display type */
            );
            /**Returns  the tool display frequency 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: int ToolDisplayFrequency
            (
            );
            /**Sets  the tool display frequency 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : cam_base ("CAM BASE") */
            public: void SetToolDisplayFrequency
            (
                int toolDisplayFrequency /** the tool display frequency */
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
