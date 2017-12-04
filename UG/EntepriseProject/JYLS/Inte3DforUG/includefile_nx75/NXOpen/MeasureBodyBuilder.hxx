#ifndef NXOpen_MEASUREBODYBUILDER_HXX_INCLUDED
#define NXOpen_MEASUREBODYBUILDER_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     MeasureBodyBuilder.ja
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
#include <NXOpen/MeasureBodyBuilder.hxx>
#include <NXOpen/MeasureBuilder.hxx>
#include <NXOpen/ScCollector.hxx>
#include <NXOpen/SelectObjectList.hxx>
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
    class MeasureBodyBuilder;
    class MeasureBuilder;
    class ScCollector;
    class SelectDisplayableObjectList;
    class _MeasureBodyBuilderBuilder;
    class MeasureBodyBuilderImpl;
    /**
    Represents a @link MeasureBodyBuilder MeasureBodyBuilder@endlink 
     <br> To create a new instance of this class, use @link MeasureManager::CreateMeasureBodyBuilder MeasureManager::CreateMeasureBodyBuilder@endlink  <br> 
     <br>  Created in NX5.0.0.  <br>  
    */
    class NXOPENCPPEXPORT  MeasureBodyBuilder : public MeasureBuilder
    {
        private: MeasureBodyBuilderImpl * m_measurebodybuilder_impl;
        private: friend class  _MeasureBodyBuilderBuilder;
        protected: MeasureBodyBuilder();
        public: ~MeasureBodyBuilder();
        /**Returns  the body objects 
         <br>  Created in NX5.0.0.  <br>  
         <br> License requirements : None */
        public: NXOpen::SelectDisplayableObjectList * BodyObjects
        (
        );
        /**Returns  the body collector 
         <br>  Created in NX8.5.0.  <br>  
         <br> License requirements : None */
        public: NXOpen::ScCollector * BodyCollector
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
