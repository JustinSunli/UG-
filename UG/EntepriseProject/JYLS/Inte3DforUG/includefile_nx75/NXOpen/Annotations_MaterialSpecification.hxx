#ifndef NXOpen_ANNOTATIONS_MATERIALSPECIFICATION_HXX_INCLUDED
#define NXOpen_ANNOTATIONS_MATERIALSPECIFICATION_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     Annotations_MaterialSpecification.ja
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
#include <NXOpen/Annotations_PmiAttribute.hxx>
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
        class MaterialSpecification;
    }
    namespace Annotations
    {
        class PmiAttribute;
    }
    namespace Annotations
    {
        class _MaterialSpecificationBuilder;
        class MaterialSpecificationImpl;
        /** Represents a Material Specification  <br> To create or edit an instance of this class, use @link Annotations::MaterialSpecificationBuilder Annotations::MaterialSpecificationBuilder@endlink  <br> 
         <br>  Created in NX6.0.0.  <br>  
        */
        class NXOPENCPP_ANNOTATIONSEXPORT  MaterialSpecification : public Annotations::PmiAttribute
        {
            private: MaterialSpecificationImpl * m_materialspecification_impl;
            private: friend class  _MaterialSpecificationBuilder;
            protected: MaterialSpecification();
            public: ~MaterialSpecification();
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
