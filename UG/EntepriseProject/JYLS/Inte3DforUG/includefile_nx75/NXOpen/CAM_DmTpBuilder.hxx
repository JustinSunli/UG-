#ifndef NXOpen_CAM_DMTPBUILDER_HXX_INCLUDED
#define NXOpen_CAM_DMTPBUILDER_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     CAM_DmTpBuilder.ja
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
#include <NXOpen/CAM_DmTpBuilder.hxx>
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
        class DmTpBuilder;
    }
    namespace CAM
    {
        class _DmTpBuilderBuilder;
        class DmTpBuilderImpl;
        /** Represents a tool path Drive Method Builder  <br> This is an abstract class and cannot be instantiated. <br> 
         <br>  Created in NX5.0.0.  <br>  
        */
        class NXOPENCPP_CAMEXPORT  DmTpBuilder : public TaggedObject
        {
            private: DmTpBuilderImpl * m_dmtpbuilder_impl;
            private: friend class  _DmTpBuilderBuilder;
            protected: DmTpBuilder();
            public: ~DmTpBuilder();
            /** Specifies the clsf file, including both the directory path and file name. 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : cam_base ("CAM BASE") */
            public: void SpecifyClsf
            (
                const NXString & clsfFileName /**the clsf file name   <br>  NOTE: The full Unicode character set is not supported for this parameter.  <br> */
            );
            /** Specifies the clsf file, including both the directory path and file name. 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : cam_base ("CAM BASE") */
            void SpecifyClsf
            (
                const char * clsfFileName /**the clsf file name   <br>  NOTE: The full Unicode character set is not supported for this parameter.  <br> */
            );
            /** Specifies the tool path name. 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : cam_base ("CAM BASE") */
            public: void SpecifyToolPath
            (
                const NXString & toolPathName /**the tool path name   <br>  NOTE: The full Unicode character set is not supported for this parameter.  <br> */
            );
            /** Specifies the tool path name. 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : cam_base ("CAM BASE") */
            void SpecifyToolPath
            (
                const char * toolPathName /**the tool path name   <br>  NOTE: The full Unicode character set is not supported for this parameter.  <br> */
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
