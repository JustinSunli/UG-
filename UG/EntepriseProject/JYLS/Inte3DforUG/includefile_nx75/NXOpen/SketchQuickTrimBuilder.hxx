#ifndef NXOpen_SKETCHQUICKTRIMBUILDER_HXX_INCLUDED
#define NXOpen_SKETCHQUICKTRIMBUILDER_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     SketchQuickTrimBuilder.ja
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
#include <NXOpen/Builder.hxx>
#include <NXOpen/SelectObjectList.hxx>
#include <NXOpen/SketchQuickTrimBuilder.hxx>
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
    class SketchQuickTrimBuilder;
    class Builder;
    class SelectCurveList;
    class _SketchQuickTrimBuilderBuilder;
    class SketchQuickTrimBuilderImpl;
    /**
        Represents a @link SketchQuickTrimBuilder SketchQuickTrimBuilder@endlink 
         <br> To create a new instance of this class, use @link SketchCollection::CreateQuickTrimBuilder SketchCollection::CreateQuickTrimBuilder@endlink  <br> 
    Default values.
    <table border="1"> 
     
    <tr><th> 
    Property</th>  <th> 
    Value</th> </tr>
    <tr><td> 
     
    ExtendBound </td> <td> 
     
    True </td> </tr> 

    </table>  

     <br>  Created in NX5.0.0.  <br>  
    */
    class NXOPENCPPEXPORT  SketchQuickTrimBuilder : public Builder
    {
        private: SketchQuickTrimBuilderImpl * m_sketchquicktrimbuilder_impl;
        private: friend class  _SketchQuickTrimBuilderBuilder;
        protected: SketchQuickTrimBuilder();
        public: ~SketchQuickTrimBuilder();
        /**Returns  the trimmed curves 
         <br>  Created in NX5.0.0.  <br>  
         <br> License requirements : None */
        public: NXOpen::SelectCurveList * TrimmedCurves
        (
        );
        /**Returns  the boundary curves 
         <br>  Created in NX5.0.0.  <br>  
         <br> License requirements : None */
        public: NXOpen::SelectCurveList * BoundaryCurves
        (
        );
        /**Returns  the flag to control the ability to trim to extension of the boundary 
         <br>  Created in NX6.0.0.  <br>  
         <br> License requirements : None */
        public: bool ExtendBound
        (
        );
        /**Sets  the flag to control the ability to trim to extension of the boundary 
         <br>  Created in NX6.0.0.  <br>  
         <br> License requirements : None */
        public: void SetExtendBound
        (
            bool extendBound /** extendbound */ 
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
