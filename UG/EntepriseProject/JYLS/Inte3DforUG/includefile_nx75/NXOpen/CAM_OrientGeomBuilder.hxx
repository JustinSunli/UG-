#ifndef NXOpen_CAM_ORIENTGEOMBUILDER_HXX_INCLUDED
#define NXOpen_CAM_ORIENTGEOMBUILDER_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     CAM_OrientGeomBuilder.ja
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
#include <NXOpen/CAM_NCGroupBuilder.hxx>
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
        class OrientGeomBuilder;
    }
    namespace CAM
    {
        class InheritableIntBuilder;
    }
    namespace CAM
    {
        class LayoutCiBuilder;
    }
    namespace CAM
    {
        class NCGroupBuilder;
    }
    class CartesianCoordinateSystem;
    class NXObject;
    namespace CAM
    {
        class _OrientGeomBuilderBuilder;
        class OrientGeomBuilderImpl;
        /** Represents a OrientGeom Builder  <br> This is an abstract class, and cannot be instantiated. <br> 
         <br>  Created in NX5.0.0.  <br>  
        */
        class NXOPENCPP_CAMEXPORT  OrientGeomBuilder : public CAM::NCGroupBuilder
        {
            /** The CSYS purpose mode options 
             <br>  Created in NX5.0.0.  <br>  
            */
            public: enum CsysPurposeModes
            {
                CsysPurposeModesLocal/** CSYS purpose mode: Local */,
                CsysPurposeModesMain/** CSYS purpose mode: Main */
            };

            /** The special output mode options 
             <br>  Created in NX5.0.0.  <br>  
            */
            public: enum SpecialOutputModes
            {
                SpecialOutputModesNone/** Special output mode: None */,
                SpecialOutputModesUseMainMcs/** Special output mode: Use main MCS */,
                SpecialOutputModesFixtureOffset/** Special output mode: Fixture offset */,
                SpecialOutputModesCsysRotation/** Special output mode: CSYS rotation */
            };

            /** the tool axis mode options */
            public: enum ToolAxisModes
            {
                ToolAxisModesPositiveZOfMcs/** Tool axis mode: +Z of MCS */,
                ToolAxisModesFixedAxis/** Tool axis mode: Fixed axis */,
                ToolAxisModesAllAxes/** Tool axis mode: All axes */
            };

            private: OrientGeomBuilderImpl * m_orientgeombuilder_impl;
            private: friend class  _OrientGeomBuilderBuilder;
            protected: OrientGeomBuilder();
            public: ~OrientGeomBuilder();
            /**Returns  the MCS 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : cam_base ("CAM BASE") */
            public: NXOpen::CartesianCoordinateSystem * Mcs
            (
            );
            /**Sets  the MCS 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : cam_base ("CAM BASE") */
            public: void SetMcs
            (
                NXOpen::CartesianCoordinateSystem * mcs /** the MCS */
            );
            /** Returns the CSYS purpose  @return  the CSYS purpose mode 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : cam_base ("CAM BASE") */
            public: NXOpen::CAM::OrientGeomBuilder::CsysPurposeModes GetCsysPurposeMode
            (
            );
            /** Sets the CSYS purpose 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : cam_base ("CAM BASE") */
            public: void SetCsysPurposeMode
            (
                NXOpen::CAM::OrientGeomBuilder::CsysPurposeModes csysPurposeMode /** the CSYS purpose mode */
            );
            /** Returns the Special Output  @return  the special output mode 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : cam_base ("CAM BASE") */
            public: NXOpen::CAM::OrientGeomBuilder::SpecialOutputModes GetSpecialOutputMode
            (
            );
            /** Sets the Special Output 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : cam_base ("CAM BASE") */
            public: void SetSpecialOutputMode
            (
                NXOpen::CAM::OrientGeomBuilder::SpecialOutputModes specialOutputMode /** the special output mode */
            );
            /**Returns  the Fixture Offset builder 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : cam_base ("CAM BASE") */
            public: NXOpen::CAM::InheritableIntBuilder * FixtureOffsetBuilder
            (
            );
            /**Returns  the link RCS to MCS 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : cam_base ("CAM BASE") */
            public: bool LinkRcsToMcs
            (
            );
            /**Sets  the link RCS to MCS 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : cam_base ("CAM BASE") */
            public: void SetLinkRcsToMcs
            (
                bool linkRcsToMcs /** the link RCS to MCS value */
            );
            /**Returns  the RCS 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : cam_base ("CAM BASE") */
            public: NXOpen::CartesianCoordinateSystem * Rcs
            (
            );
            /**Sets  the RCS 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : cam_base ("CAM BASE") */
            public: void SetRcs
            (
                NXOpen::CartesianCoordinateSystem * rcs /** the MCS */
            );
            /** Returns the tool axis mode  @return  the integer value  
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : cam_base ("CAM BASE") */
            public: NXOpen::CAM::OrientGeomBuilder::ToolAxisModes GetToolAxisMode
            (
            );
            /** Sets the tool axis mode 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : cam_base ("CAM BASE") */
            public: void SetToolAxisMode
            (
                NXOpen::CAM::OrientGeomBuilder::ToolAxisModes toolAxisMode /** the integer value  */
            );
            /**Returns  the tool axis vector 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : cam_base ("CAM BASE") */
            public: NXOpen::NXObject * ToolAxisVector
            (
            );
            /**Sets  the tool axis vector 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : cam_base ("CAM BASE") */
            public: void SetToolAxisVector
            (
                NXOpen::NXObject * toolAxisVector /** the vector tag */
            );
            /**Returns  the Save Layer/Layout builder 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : cam_base ("CAM BASE") */
            public: NXOpen::CAM::LayoutCiBuilder * LayoutCiBuilder
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
