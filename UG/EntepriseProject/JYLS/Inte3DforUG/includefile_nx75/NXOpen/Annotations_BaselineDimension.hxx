#ifndef NXOpen_ANNOTATIONS_BASELINEDIMENSION_HXX_INCLUDED
#define NXOpen_ANNOTATIONS_BASELINEDIMENSION_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     Annotations_BaselineDimension.ja
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
#include <NXOpen/Annotations_DimensionSet.hxx>
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
        class BaselineDimension;
    }
    namespace Annotations
    {
        class DimensionSet;
    }
    namespace Annotations
    {
        class _BaselineDimensionBuilder;
        class BaselineDimensionImpl;
        /** Represents a baseline dimension. It is a set of horizontal or vertical
                dimensions.  <br> To create a new instance of this class, use @link Annotations::DimensionSetCollection::CreateHorizontalBaselineDimension Annotations::DimensionSetCollection::CreateHorizontalBaselineDimension@endlink  <br> 
         <br>  Created in NX4.0.0.  <br>  
        */
        class NXOPENCPP_ANNOTATIONSEXPORT  BaselineDimension : public Annotations::DimensionSet
        {
            private: BaselineDimensionImpl * m_baselinedimension_impl;
            private: friend class  _BaselineDimensionBuilder;
            protected: BaselineDimension();
            public: ~BaselineDimension();
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
