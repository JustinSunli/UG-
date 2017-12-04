#ifndef NXOpen_SKETCHINTERSECTIONPOINTBUILDER_HXX_INCLUDED
#define NXOpen_SKETCHINTERSECTIONPOINTBUILDER_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     SketchIntersectionPointBuilder.ja
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
#include <NXOpen/Section.hxx>
#include <NXOpen/SketchIntersectionPointBuilder.hxx>
#include <NXOpen/libnxopencpp_exports.hxx>

#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable:4996)
#endif
#ifdef __GNUC__
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

namespace NXOpen
{
    class SketchIntersectionPointBuilder;
    namespace Features
    {
        class FeatureBuilder;
    }
    class Section;
    class _SketchIntersectionPointBuilderBuilder;
    class SketchIntersectionPointBuilderImpl;
    /** Represents a @link SketchIntersectionPoint SketchIntersectionPoint@endlink  builder  <br> To obtain an instance of this class use @link SketchCollection::CreateIntersectionPointBuilder SketchCollection::CreateIntersectionPointBuilder@endlink . <br> 
     <br>  Created in NX5.0.0.  <br>  
    */
    class NXOPENCPPEXPORT  SketchIntersectionPointBuilder : public Features::FeatureBuilder
    {
        private: SketchIntersectionPointBuilderImpl * m_sketchintersectionpointbuilder_impl;
        private: friend class  _SketchIntersectionPointBuilderBuilder;
        protected: SketchIntersectionPointBuilder();
        public: ~SketchIntersectionPointBuilder();
        /**Returns the rail 
         <br>  Created in NX5.0.0.  <br>  
         <br> License requirements : None */
        public: NXOpen::Section * Rail
        (
        );
        /**  
         <br>  Created in NX5.0.0.  <br>  
         <br> License requirements : solid_modeling ("SOLIDS MODELING") */
        public: void UpdateData
        (
        );
        /** Method to get the next alternate solution 
         <br>  Created in NX5.0.0.  <br>  
         <br> License requirements : solid_modeling ("SOLIDS MODELING") */
        public: void Cycle
        (
        );
    };
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
