#ifndef NXOpen_GEOMETRICUTILITIES_GENERALPATTERN_HXX_INCLUDED
#define NXOpen_GEOMETRICUTILITIES_GENERALPATTERN_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     GeometricUtilities_GeneralPattern.ja
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
#include <NXOpen/GeometricUtilities_IComponentBuilder.hxx>
#include <NXOpen/GeometricUtilities_GeneralPattern.hxx>
#include <NXOpen/Section.hxx>
#include <NXOpen/SelectObject.hxx>
#include <NXOpen/SelectObjectList.hxx>
#include <NXOpen/TaggedObject.hxx>
#include <NXOpen/libnxopencpp_geometricutilities_exports.hxx>

#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable:4996)
#endif
#ifdef __GNUC__
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

namespace NXOpen
{
    namespace GeometricUtilities
    {
        class GeneralPattern;
    }
    class CoordinateSystem;
    namespace GeometricUtilities
    {
        class IComponentBuilder;
    }
    class Point;
    class Section;
    class SelectCoordinateSystemList;
    class SelectNXObject;
    namespace GeometricUtilities
    {
        class _GeneralPatternBuilder;
        class GeneralPatternImpl;
        /** the General pattern definition.  
         <br>  Created in NX8.0.0.  <br>  
        */
        class NXOPENCPP_GEOMETRICUTILITIESEXPORT  GeneralPattern : public TaggedObject, public virtual GeometricUtilities::IComponentBuilder
        {
            /** the from location options. */
            public: enum FromLocationOptions
            {
                FromLocationOptionsPoint/** point */,
                FromLocationOptionsCsys/** csys */
            };

            private: GeneralPatternImpl * m_generalpattern_impl;
            private: friend class  _GeneralPatternBuilder;
            protected: GeneralPattern();
            public: ~GeneralPattern();
            /**Returns  the from location point 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Point * FromLocationPoint
            (
            );
            /**Sets  the from location point 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : None */
            public: void SetFromLocationPoint
            (
                NXOpen::Point * point /** point */ 
            );
            /**Returns  the from location 3d csys 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::CoordinateSystem * FromLocationCsys3d
            (
            );
            /**Sets  the from location 3d csys 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : None */
            public: void SetFromLocationCsys3d
            (
                NXOpen::CoordinateSystem * csys /** csys */ 
            );
            /**Returns  the from location 2d csys 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::SelectNXObject * FromLocationCsys2d
            (
            );
            /**Returns  the from location type 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::GeometricUtilities::GeneralPattern::FromLocationOptions FromLocationType
            (
            );
            /**Sets  the from location type 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : solid_modeling ("SOLIDS MODELING") */
            public: void SetFromLocationType
            (
                NXOpen::GeometricUtilities::GeneralPattern::FromLocationOptions fromLocationType /** fromlocationtype */ 
            );
            /**Returns  the to points  
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Section * ToPoints
            (
            );
            /**Returns  the to csys list  
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::SelectCoordinateSystemList * ToCsysList
            (
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
