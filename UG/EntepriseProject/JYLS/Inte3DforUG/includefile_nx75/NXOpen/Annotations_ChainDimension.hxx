#ifndef NXOpen_ANNOTATIONS_CHAINDIMENSION_HXX_INCLUDED
#define NXOpen_ANNOTATIONS_CHAINDIMENSION_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     Annotations_ChainDimension.ja
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
        class ChainDimension;
    }
    namespace Annotations
    {
        class DimensionSet;
    }
    namespace Annotations
    {
        class _ChainDimensionBuilder;
        class ChainDimensionImpl;
        /** Represents a chain dimension. It is a set of horizontal or vertical
                dimensions.  <br> To create a new instance of this class, use @link Annotations::DimensionSetCollection::CreateHorizontalChainDimension Annotations::DimensionSetCollection::CreateHorizontalChainDimension@endlink  <br> 
         <br>  Created in NX4.0.0.  <br>  
        */
        class NXOPENCPP_ANNOTATIONSEXPORT  ChainDimension : public Annotations::DimensionSet
        {
            private: ChainDimensionImpl * m_chaindimension_impl;
            private: friend class  _ChainDimensionBuilder;
            protected: ChainDimension();
            public: ~ChainDimension();
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
