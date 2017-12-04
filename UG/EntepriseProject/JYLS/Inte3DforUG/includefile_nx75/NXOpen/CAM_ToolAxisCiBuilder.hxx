#ifndef NXOpen_CAM_TOOLAXISCIBUILDER_HXX_INCLUDED
#define NXOpen_CAM_TOOLAXISCIBUILDER_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     CAM_ToolAxisCiBuilder.ja
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
        class ToolAxisCiBuilder;
    }
    namespace CAM
    {
        class _ToolAxisCiBuilderBuilder;
        class ToolAxisCiBuilderImpl;
        /** Represents a tool axis ci Builder 
         <br>  Created in NX5.0.0.  <br>  
        */
        class NXOPENCPP_CAMEXPORT  ToolAxisCiBuilder : public TaggedObject
        {
            private: ToolAxisCiBuilderImpl * m_toolaxiscibuilder_impl;
            private: friend class  _ToolAxisCiBuilderBuilder;
            protected: ToolAxisCiBuilder();
            public: ~ToolAxisCiBuilder();
            /**Returns  the tool axis types 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : None */
            public: int ToolAxis
            (
            );
            /**Sets  the tool axis types 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : cam_base ("CAM BASE") */
            public: void SetToolAxis
            (
                int toolAxis /** the tool axis type */
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
