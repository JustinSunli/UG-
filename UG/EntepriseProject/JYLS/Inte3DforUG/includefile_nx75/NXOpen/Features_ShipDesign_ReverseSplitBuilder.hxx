#ifndef NXOpen_FEATURES_SHIPDESIGN_REVERSESPLITBUILDER_HXX_INCLUDED
#define NXOpen_FEATURES_SHIPDESIGN_REVERSESPLITBUILDER_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     Features_ShipDesign_ReverseSplitBuilder.ja
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
#include <NXOpen/Features_FeatureBuilder.hxx>
#include <NXOpen/Features_ShipDesign_ReverseSplitBuilder.hxx>
#include <NXOpen/SelectObjectList.hxx>
#include <NXOpen/libnxopencpp_features_exports.hxx>

#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable:4996)
#endif
#ifdef __GNUC__
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

namespace NXOpen
{
    namespace Features
    {
        namespace ShipDesign
        {
            class ReverseSplitBuilder;
        }
    }
    namespace Features
    {
        class FeatureBuilder;
    }
    class SelectNXObjectList;
    namespace Features
    {
        namespace ShipDesign
        {
            class _ReverseSplitBuilderBuilder;
            class ReverseSplitBuilderImpl;
            /**
                This class is used to provide the capability to reverse the split interaction between
                ship structures. When committed those structures that are split by the splitting structure
                will now split the splitting structure.
                 <br> To create a new instance of this class, use @link Features::ShipCollection::CreateReverseSplitBuilder Features::ShipCollection::CreateReverseSplitBuilder@endlink  <br> 
             <br>  Created in NX8.0.0.  <br>  
            */
            class NXOPENCPP_FEATURESEXPORT  ReverseSplitBuilder : public Features::FeatureBuilder
            {
                private: ReverseSplitBuilderImpl * m_reversesplitbuilder_impl;
                private: friend class  _ReverseSplitBuilderBuilder;
                protected: ReverseSplitBuilder();
                public: ~ReverseSplitBuilder();
                /**Returns  the seam created by an intersection seam feature, and whose behavior is to be reversed. 
                 <br>  Created in NX8.0.0.  <br>  
                 <br> License requirements : None */
                public: NXOpen::SelectNXObjectList * IntersectionSeam
                (
                );
            };
        }
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
