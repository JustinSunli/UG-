#ifndef NXOpen_ANNOTATIONS_PMICENTERLINE3DBUILDER_HXX_INCLUDED
#define NXOpen_ANNOTATIONS_PMICENTERLINE3DBUILDER_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     Annotations_PmiCenterline3dBuilder.ja
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
#include <NXOpen/Annotations_BaseCenterline3dBuilder.hxx>
#include <NXOpen/Annotations_AssociatedObjectsBuilder.hxx>
#include <NXOpen/Annotations_PmiCenterline3dBuilder.hxx>
#include <NXOpen/libnxopencpp_annotations_exports.hxx>

#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable:4996)
#endif
#ifdef __GNUC__
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

namespace NXOpen
{
    namespace Annotations
    {
        class PmiCenterline3dBuilder;
    }
    namespace Annotations
    {
        class AssociatedObjectsBuilder;
    }
    namespace Annotations
    {
        class BaseCenterline3dBuilder;
    }
    namespace Annotations
    {
        class _PmiCenterline3dBuilderBuilder;
        class PmiCenterline3dBuilderImpl;
        /** Builder for creating Pmi 3D Centerline. It creates or edits Pmi 3D Centerlines  <br> To create a new instance of this class, use @link Annotations::CenterlineCollection::CreatePmiCenterline3dBuilder Annotations::CenterlineCollection::CreatePmiCenterline3dBuilder@endlink  <br> 
         <br>  Created in NX7.5.0.  <br>  
        */
        class NXOPENCPP_ANNOTATIONSEXPORT  PmiCenterline3dBuilder : public Annotations::BaseCenterline3dBuilder
        {
            private: PmiCenterline3dBuilderImpl * m_pmicenterline3dbuilder_impl;
            private: friend class  _PmiCenterline3dBuilderBuilder;
            protected: PmiCenterline3dBuilder();
            public: ~PmiCenterline3dBuilder();
            /**Returns  the associated objects for the 3D Centerline
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Annotations::AssociatedObjectsBuilder * AssociatedObjects
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
