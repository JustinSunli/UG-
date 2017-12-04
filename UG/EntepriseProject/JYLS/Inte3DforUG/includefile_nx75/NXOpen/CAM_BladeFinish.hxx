#ifndef NXOpen_CAM_BLADEFINISH_HXX_INCLUDED
#define NXOpen_CAM_BLADEFINISH_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     CAM_BladeFinish.ja
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
#include <NXOpen/CAM_Blade.hxx>
#include <NXOpen/CAM_BladeFinish.hxx>
#include <NXOpen/CAM_BladeFinishGeom.hxx>
#include <NXOpen/CAM_BladeStartPoint.hxx>
#include <NXOpen/CAM_CutSides.hxx>
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
        class BladeFinish;
    }
    namespace CAM
    {
        class Blade;
    }
    namespace CAM
    {
        class BladeFinishGeom;
    }
    namespace CAM
    {
        class BladeStartPoint;
    }
    namespace CAM
    {
        class CutSides;
    }
    namespace CAM
    {
        class _BladeFinishBuilder;
        class BladeFinishImpl;
        /** Represents a Blade Finish Drive Method Builder 
         <br>  Created in NX7.5.0.  <br>  
        */
        class NXOPENCPP_CAMEXPORT  BladeFinish : public CAM::Blade
        {
            private: BladeFinishImpl * m_bladefinish_impl;
            private: friend class  _BladeFinishBuilder;
            protected: BladeFinish();
            public: ~BladeFinish();
            /**Returns  the Start Point 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::CAM::BladeStartPoint * StartPoint
            (
            );
            /**Returns  the Sides to Cut 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::CAM::CutSides * SidesToCut
            (
            );
            /**Returns  the Geometry to Finish 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::CAM::BladeFinishGeom * GeometryToFinish
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
