#ifndef NXOpen_SKETCHPROJECTBUILDER_HXX_INCLUDED
#define NXOpen_SKETCHPROJECTBUILDER_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     SketchProjectBuilder.ja
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
#include <NXOpen/Features_EmbeddedOperationBuilder.hxx>
#include <NXOpen/Section.hxx>
#include <NXOpen/SelectObjectList.hxx>
#include <NXOpen/SketchProjectBuilder.hxx>
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
    class SketchProjectBuilder;
    namespace Features
    {
        class EmbeddedOperationBuilder;
    }
    class Section;
    class SelectNXObjectList;
    class _SketchProjectBuilderBuilder;
    class SketchProjectBuilderImpl;
    /**
    Represents a @link SketchProjectBuilder SketchProjectBuilder@endlink  builder
     <br> To create a new instance of this class, use @link SketchCollection::CreateProjectBuilder SketchCollection::CreateProjectBuilder@endlink  <br> 
    Default values.
    <table border="1"> 
     
    <tr><th> 
    Property</th>  <th> 
    Value</th> </tr>
    <tr><td> 
     
    Associativity </td> <td> 
     
    True </td> </tr> 

    <tr><td> 
     
    CurveType </td> <td> 
     
    Original </td> </tr> 

    </table>  

     <br>  Created in NX5.0.0.  <br>  
    */
    class NXOPENCPPEXPORT  SketchProjectBuilder : public Features::EmbeddedOperationBuilder
    {
        /** This enum represents the kind of output curves */
        public: enum OutputCurve
        {
            OutputCurveOriginal/** original curve output*/,
            OutputCurveSplineSegment/** spline segment output */,
            OutputCurveSingleSpline/** single spline output */
        };

        private: SketchProjectBuilderImpl * m_sketchprojectbuilder_impl;
        private: friend class  _SketchProjectBuilderBuilder;
        protected: SketchProjectBuilder();
        public: ~SketchProjectBuilder();
        /**Returns  the section. The curves to project should be added to the section if they do not belong to multiple parts. All the curves to be projected should either go to the
            section or the curve list depending on their owning parts.
         <br>  Created in NX5.0.0.  <br>  
         <br> License requirements : None */
        public: NXOpen::Section * Section
        (
        );
        /**Returns  the curve list. The curves to project should be added to this list only if they belong to multiple parts
            and they are to be projected in non associative manner. All the curves to be projected should either go to the
            section or the curve list depending on their owning parts.
         <br>  Created in NX5.0.0.  <br>  
         <br> License requirements : None */
        public: NXOpen::SelectNXObjectList * CurveList
        (
        );
        /**Returns  the associativity of projection. If this variable is turned on, the output curves will always
            depend on the input curves. So that when the input curves change, the output curves will change 
            accordingly. If this variable is set to false, the output curves derive their shape from current stage
            of the input curves and then become independent of the input curves. In drafting mode, one can not 
            project curves in associative manner. Also if the curves belong to multiple parts, they can not be projected
            in associative manner.
         <br>  Created in NX5.0.0.  <br>  
         <br> License requirements : None */
        public: bool Associativity
        (
        );
        /**Sets  the associativity of projection. If this variable is turned on, the output curves will always
            depend on the input curves. So that when the input curves change, the output curves will change 
            accordingly. If this variable is set to false, the output curves derive their shape from current stage
            of the input curves and then become independent of the input curves. In drafting mode, one can not 
            project curves in associative manner. Also if the curves belong to multiple parts, they can not be projected
            in associative manner.
         <br>  Created in NX5.0.0.  <br>  
         <br> License requirements : solid_modeling ("SOLIDS MODELING") */
        public: void SetAssociativity
        (
            bool associativity /** associativity */ 
        );
        /**Returns  the output curve type generated by the projection. Depending on this value, the projected
            curve can have the same geometry as the input curves or it can be a single spline curve
            or a set of splines. 
         <br>  Created in NX5.0.0.  <br>  
         <br> License requirements : None */
        public: NXOpen::SketchProjectBuilder::OutputCurve CurveType
        (
        );
        /**Sets  the output curve type generated by the projection. Depending on this value, the projected
            curve can have the same geometry as the input curves or it can be a single spline curve
            or a set of splines. 
         <br>  Created in NX5.0.0.  <br>  
         <br> License requirements : solid_modeling ("SOLIDS MODELING") */
        public: void SetCurveType
        (
            NXOpen::SketchProjectBuilder::OutputCurve curveType /** curve type */ 
        );
        /**Returns  the tolerance value used for the projection. The same value is used for
             the tolerances related to the section.
         <br>  Created in NX5.0.0.  <br>  
         <br> License requirements : None */
        public: double Tolerance
        (
        );
        /**Sets  the tolerance value used for the projection. The same value is used for
             the tolerances related to the section.
         <br>  Created in NX5.0.0.  <br>  
         <br> License requirements : solid_modeling ("SOLIDS MODELING") */
        public: void SetTolerance
        (
            double tolerance /** tolerance */ 
        );
        /**Returns  the flag to indicate if the projection output needs to be converted to dumb fully fixed curves in the sketch.
                This flag overrides the associativity flag i.e. if both projectAsDumbFixed and associativity are set to true,
            the result will be dumb fixed curves and not an associative projection. 
         <br>  Created in NX7.5.0.  <br>  
         <br> License requirements : solid_modeling ("SOLIDS MODELING") */
        public: bool ProjectAsDumbFixedCurves
        (
        );
        /**Sets  the flag to indicate if the projection output needs to be converted to dumb fully fixed curves in the sketch.
                This flag overrides the associativity flag i.e. if both projectAsDumbFixed and associativity are set to true,
            the result will be dumb fixed curves and not an associative projection. 
         <br>  Created in NX7.5.0.  <br>  
         <br> License requirements : solid_modeling ("SOLIDS MODELING") */
        public: void SetProjectAsDumbFixedCurves
        (
            bool projectAsDumbFixed /** projectasdumbfixed */ 
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
