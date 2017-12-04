#ifndef NXOpen_CAM_SOLIDTOOLBUILDER_HXX_INCLUDED
#define NXOpen_CAM_SOLIDTOOLBUILDER_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     CAM_SolidToolBuilder.ja
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
#include <NXOpen/CAM_ToolBuilder.hxx>
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
        class SolidToolBuilder;
    }
    namespace CAM
    {
        class ToolBuilder;
    }
    class NXObject;
    namespace CAM
    {
        class _SolidToolBuilderBuilder;
        class SolidToolBuilderImpl;
        /** Represents a SolidTool Builder  <br> This is an abstract class, and cannot be instantiated. <br> 
         <br>  Created in NX5.0.0.  <br>  
        */
        class NXOPENCPP_CAMEXPORT  SolidToolBuilder : public CAM::ToolBuilder
        {
            private: SolidToolBuilderImpl * m_solidtoolbuilder_impl;
            private: friend class  _SolidToolBuilderBuilder;
            protected: SolidToolBuilder();
            public: ~SolidToolBuilder();
            /**Sets  the T1 mounting junction 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : None */
            public: void SetTlMountingJunction
            (
                NXOpen::NXObject * tlMountingJunction /** tl mounting junction */ 
            );
            /**Returns  the T1 mounting junction 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::NXObject * TlMountingJunction
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