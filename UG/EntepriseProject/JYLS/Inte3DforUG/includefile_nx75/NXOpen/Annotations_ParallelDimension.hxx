#ifndef NXOpen_ANNOTATIONS_PARALLELDIMENSION_HXX_INCLUDED
#define NXOpen_ANNOTATIONS_PARALLELDIMENSION_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     Annotations_ParallelDimension.ja
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
#include <NXOpen/Annotations_BaseParallelDimension.hxx>
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
        class ParallelDimension;
    }
    namespace Annotations
    {
        class BaseParallelDimension;
    }
    namespace Annotations
    {
        class _ParallelDimensionBuilder;
        class ParallelDimensionImpl;
        /** Represents a parallel dimension  <br> To create a new instance of this class, use @link Annotations::DimensionCollection::CreateParallelDimension Annotations::DimensionCollection::CreateParallelDimension@endlink  <br> 
         <br>  Created in NX4.0.0.  <br>  
        */
        class NXOPENCPP_ANNOTATIONSEXPORT  ParallelDimension : public Annotations::BaseParallelDimension
        {
            private: ParallelDimensionImpl * m_paralleldimension_impl;
            private: friend class  _ParallelDimensionBuilder;
            protected: ParallelDimension();
            public: ~ParallelDimension();
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
