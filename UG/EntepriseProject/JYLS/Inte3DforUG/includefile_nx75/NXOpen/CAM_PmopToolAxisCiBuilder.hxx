#ifndef NXOpen_CAM_PMOPTOOLAXISCIBUILDER_HXX_INCLUDED
#define NXOpen_CAM_PMOPTOOLAXISCIBUILDER_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     CAM_PmopToolAxisCiBuilder.ja
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
        class PmopToolAxisCiBuilder;
    }
    class SmartObject;
    namespace CAM
    {
        class _PmopToolAxisCiBuilderBuilder;
        class PmopToolAxisCiBuilderImpl;
        /** Represents a PmopToolAxisCiBuilder  <br> This is an abstract class, and cannot be instantiated. <br> 
         <br>  Created in NX5.0.0.  <br>  
        */
        class NXOPENCPP_CAMEXPORT  PmopToolAxisCiBuilder : public TaggedObject
        {
            /** Available types for pmop tool axis type */
            public: enum ToolAxisTypes
            {
                ToolAxisTypesNone/** +ZM axis */,
                ToolAxisTypesVector/** Specify Vector */,
                ToolAxisTypesNormalToPart/** Normal To Floor Face */,
                ToolAxisTypesNormalToFirstFace/** Normal To First Face */
            };

            private: PmopToolAxisCiBuilderImpl * m_pmoptoolaxiscibuilder_impl;
            private: friend class  _PmopToolAxisCiBuilderBuilder;
            protected: PmopToolAxisCiBuilder();
            public: ~PmopToolAxisCiBuilder();
            /**Returns  the tool axis type 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::CAM::PmopToolAxisCiBuilder::ToolAxisTypes ToolAxis
            (
            );
            /**Sets  the tool axis type 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : cam_base ("CAM BASE") */
            public: void SetToolAxis
            (
                NXOpen::CAM::PmopToolAxisCiBuilder::ToolAxisTypes newValue /** the tool axis type */
            );
            /**Returns  the tool axis vector 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::SmartObject * FixedVector
            (
            );
            /**Sets  the tool axis vector 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : cam_base ("CAM BASE") */
            public: void SetFixedVector
            (
                NXOpen::SmartObject * newValue /** new value */ 
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
