#ifndef NXOpen_CAM_WEDMUSERDEFINED_HXX_INCLUDED
#define NXOpen_CAM_WEDMUSERDEFINED_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     CAM_WedmUserDefined.ja
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
#include <NXOpen/CAM_UserDefinedOpr.hxx>
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
        class WedmUserDefined;
    }
    namespace CAM
    {
        class UserDefinedOpr;
    }
    namespace CAM
    {
        class _WedmUserDefinedBuilder;
        class WedmUserDefinedImpl;
        /** Represents a User Defined WEDM operation  <br> To create or edit an instance of this class, use @link CAM::WedmUserDefinedBuilder CAM::WedmUserDefinedBuilder@endlink  <br> 
         <br>  Created in NX7.5.0.  <br>  
        */
        class NXOPENCPP_CAMEXPORT  WedmUserDefined : public CAM::UserDefinedOpr
        {
            private: WedmUserDefinedImpl * m_wedmuserdefined_impl;
            private: friend class  _WedmUserDefinedBuilder;
            protected: WedmUserDefined();
            public: ~WedmUserDefined();
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
