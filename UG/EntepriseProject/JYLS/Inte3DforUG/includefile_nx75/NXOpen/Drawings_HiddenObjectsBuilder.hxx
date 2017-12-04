#ifndef NXOpen_DRAWINGS_HIDDENOBJECTSBUILDER_HXX_INCLUDED
#define NXOpen_DRAWINGS_HIDDENOBJECTSBUILDER_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     Drawings_HiddenObjectsBuilder.ja
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
#include <NXOpen/Drawings_HiddenObjectsBuilder.hxx>
#include <NXOpen/GeometricUtilities_IComponentBuilder.hxx>
#include <NXOpen/SelectObjectList.hxx>
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
        class HiddenObjectsBuilder;
    }
    namespace GeometricUtilities
    {
        class IComponentBuilder;
    }
    class SelectNXObjectList;
    namespace Drawings
    {
        class _HiddenObjectsBuilderBuilder;
        class HiddenObjectsBuilderImpl;
        /** This builder allows the user to select a view in which
                component objects can be designated as hidden or shown 
         <br>  Created in NX6.0.0.  <br>  
        */
        class NXOPENCPP_DRAWINGSEXPORT  HiddenObjectsBuilder : public TaggedObject, public virtual GeometricUtilities::IComponentBuilder
        {
            private: HiddenObjectsBuilderImpl * m_hiddenobjectsbuilder_impl;
            private: friend class  _HiddenObjectsBuilderBuilder;
            protected: HiddenObjectsBuilder();
            public: ~HiddenObjectsBuilder();
            /**Returns  the objects 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::SelectNXObjectList * Objects
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
