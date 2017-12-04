#ifndef NXOpen_CAM_INHERITABLEINTBUILDER_HXX_INCLUDED
#define NXOpen_CAM_INHERITABLEINTBUILDER_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     CAM_InheritableIntBuilder.ja
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
#include <NXOpen/CAM_InheritableBuilder.hxx>
#include <NXOpen/CAM_InheritableIntBuilder.hxx>
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
        class InheritableIntBuilder;
    }
    namespace CAM
    {
        class InheritableBuilder;
    }
    namespace CAM
    {
        class _InheritableIntBuilderBuilder;
        class InheritableIntBuilderImpl;
        /** Represents a builder for an inheritable integer value in of a CAM.CAMObject 
         <br>  Created in NX5.0.0.  <br>  
        */
        class NXOPENCPP_CAMEXPORT  InheritableIntBuilder : public CAM::InheritableBuilder
        {
            private: InheritableIntBuilderImpl * m_inheritableintbuilder_impl;
            private: friend class  _InheritableIntBuilderBuilder;
            protected: InheritableIntBuilder();
            public: ~InheritableIntBuilder();
            /**Returns  the current value 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : None */
            public: int Value
            (
            );
            /**Sets  the current value 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : cam_base ("CAM BASE") */
            public: void SetValue
            (
                int newValue /** the new value */
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
