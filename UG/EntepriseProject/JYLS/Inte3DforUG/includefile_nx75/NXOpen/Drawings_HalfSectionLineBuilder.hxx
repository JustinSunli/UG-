#ifndef NXOpen_DRAWINGS_HALFSECTIONLINEBUILDER_HXX_INCLUDED
#define NXOpen_DRAWINGS_HALFSECTIONLINEBUILDER_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     Drawings_HalfSectionLineBuilder.ja
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
#include <NXOpen/Drawings_HalfSectionLineBuilder.hxx>
#include <NXOpen/GeometricUtilities_IComponentBuilder.hxx>
#include <NXOpen/TaggedObject.hxx>
#include <NXOpen/libnxopencpp_drawings_exports.hxx>

#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable:4996)
#endif
#ifdef __GNUC__
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

namespace NXOpen
{
    namespace Drawings
    {
        class HalfSectionLineBuilder;
    }
    namespace GeometricUtilities
    {
        class IComponentBuilder;
    }
    class Point;
    namespace Drawings
    {
        class _HalfSectionLineBuilderBuilder;
        class HalfSectionLineBuilderImpl;
        /** Represents a @link Drawings::HalfSectionLineBuilder Drawings::HalfSectionLineBuilder@endlink .
                This class is used to create or edit a
                @link Drawings::HalfSectionLine Drawings::HalfSectionLine@endlink . 
         <br>  Created in NX6.0.0.  <br>  
        */
        class NXOPENCPP_DRAWINGSEXPORT  HalfSectionLineBuilder : public TaggedObject, public virtual GeometricUtilities::IComponentBuilder
        {
            private: HalfSectionLineBuilderImpl * m_halfsectionlinebuilder_impl;
            private: friend class  _HalfSectionLineBuilderBuilder;
            protected: HalfSectionLineBuilder();
            public: ~HalfSectionLineBuilder();
            /**Returns  the cut location 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Point * CutLocation
            (
            );
            /**Sets  the cut location 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : drafting ("DRAFTING") */
            public: void SetCutLocation
            (
                NXOpen::Point * cutLocation /** cutlocation */ 
            );
            /**Returns  the bend location 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Point * BendLocation
            (
            );
            /**Sets  the bend location 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : drafting ("DRAFTING") */
            public: void SetBendLocation
            (
                NXOpen::Point * bendLocation /** bendlocation */ 
            );
            /**Returns  the arrow location 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Point * EndLocation1
            (
            );
            /**Sets  the arrow location 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : drafting ("DRAFTING") */
            public: void SetEndLocation1
            (
                NXOpen::Point * endLocation1 /** endlocation1 */ 
            );
            /** Validate whether the inputs to the component are sufficient for 
                        commit to be called.  If the component is not in a state to commit
                        then an exception is thrown.  For example, if the component requires
                        you to set some property, this method will throw an exception if
                        you haven't set it.  This method throws a not-yet-implemented
                        NXException for some components.
                     @return  Was self validation successful 
             <br>  Created in NX3.0.1.  <br>  
             <br> License requirements : None */
            public: virtual bool Validate
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
