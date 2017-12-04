#ifndef NXOpen_MEASUREPOLARAREA_HXX_INCLUDED
#define NXOpen_MEASUREPOLARAREA_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     MeasurePolarArea.ja
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
#include <NXOpen/MeasureManager.hxx>
#include <NXOpen/SingleMeasure.hxx>
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
    class MeasurePolarArea;
    class Measure;
    class Scalar;
    class SingleMeasure;
    class MeasurePolarAreaImpl;
    /** Represents a single valued polar area measurement 
     <br>  Created in NX8.5.0.  <br>  
    */
    class NXOPENCPPEXPORT  MeasurePolarArea : public SingleMeasure
    {
        private: MeasurePolarAreaImpl * m_measurepolararea_impl;
        /// \cond NX_NO_DOC 
        public: explicit MeasurePolarArea(void *ptr);
        /// \endcond 
        /** Creates and returns a measurement feature  @return  
         <br>  Created in NX8.5.0.  <br>  
         <br> License requirements : solid_modeling ("SOLIDS MODELING") */
        public: NXOpen::Measure * CreateFeature
        (
        );
        /** Creates an embedded measurement.
          The name of the measurement can be used in an expression formula.  @return  the measurement 
         <br>  Created in NX8.5.0.  <br>  
         <br> License requirements : solid_modeling ("SOLIDS MODELING") */
        public: NXOpen::Scalar * CreateEmbeddedObject
        (
            NXString* name /** the name of the measurement */
        );
    }; //lint !e1712 default constructor not defined for class  

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
