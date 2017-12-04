#ifndef NXOpen_DRAWINGS_VIEWSTYLESECTIONCONSTRAINTSBUILDER_HXX_INCLUDED
#define NXOpen_DRAWINGS_VIEWSTYLESECTIONCONSTRAINTSBUILDER_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     Drawings_ViewStyleSectionConstraintsBuilder.ja
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
#include <NXOpen/Drawings_ViewStyleSectionConstraintsBuilder.hxx>
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
        class ViewStyleSectionConstraintsBuilder;
    }
    namespace GeometricUtilities
    {
        class IComponentBuilder;
    }
    namespace Drawings
    {
        class _ViewStyleSectionConstraintsBuilderBuilder;
        class ViewStyleSectionConstraintsBuilderImpl;
        /** Represents the SECTION CONSTRAINTS tab on the View Style Dialog (Drawings.ViewStyleSectionConstraintsBuilder)
            
         <br>  Created in NX6.0.0.  <br>  
        */
        class NXOPENCPP_DRAWINGSEXPORT  ViewStyleSectionConstraintsBuilder : public TaggedObject, public virtual GeometricUtilities::IComponentBuilder
        {
            private: ViewStyleSectionConstraintsBuilderImpl * m_viewstylesectionconstraintsbuilder_impl;
            private: friend class  _ViewStyleSectionConstraintsBuilderBuilder;
            protected: ViewStyleSectionConstraintsBuilder();
            public: ~ViewStyleSectionConstraintsBuilder();
            /**Returns  the scale toggle on the SECTION CONSTRAINTS tab of the View Style Dialog 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: bool Scale
            (
            );
            /**Sets  the scale toggle on the SECTION CONSTRAINTS tab of the View Style Dialog 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : drafting ("DRAFTING") */
            public: void SetScale
            (
                bool scaleToggle /** Sets a new scale toggle value on the section constraints sub-builder */
            );
            /**Returns  the orient toggle on the SECTION CONSTRAINTS tab of the View Style Dialog 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: bool Orient
            (
            );
            /**Sets  the orient toggle on the SECTION CONSTRAINTS tab of the View Style Dialog 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : drafting ("DRAFTING") */
            public: void SetOrient
            (
                bool orientToggle /** Sets a new orient toggle value on the section constraints sub-builder */
            );
            /**Returns  the align toggle on the SECTION CONSTRAINTS tab of the View Style Dialog 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: bool Align
            (
            );
            /**Sets  the align toggle on the SECTION CONSTRAINTS tab of the View Style Dialog 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : drafting ("DRAFTING") */
            public: void SetAlign
            (
                bool alignToggle /** Sets a new align toggle value on the section constraints sub-builder */
            );
            /**Returns  the offset toggle on the SECTION CONSTRAINTS tab of the View Style Dialog 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: bool Offset
            (
            );
            /**Sets  the offset toggle on the SECTION CONSTRAINTS tab of the View Style Dialog 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : drafting ("DRAFTING") */
            public: void SetOffset
            (
                bool offsetToggle /** Sets a new offset toggle value on the section constraints sub-builder */
            );
            /**Returns  the sheet toggle on the SECTION CONSTRAINTS tab of the View Style Dialog 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: bool Sheet
            (
            );
            /**Sets  the sheet toggle on the SECTION CONSTRAINTS tab of the View Style Dialog 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : drafting ("DRAFTING") */
            public: void SetSheet
            (
                bool sheetToggle /** Sets a new sheet toggle value on the section constraints sub-builder */
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
