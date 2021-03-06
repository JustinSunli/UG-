#ifndef NXOpen_FACET_FACETEDFACE_HXX_INCLUDED
#define NXOpen_FACET_FACETEDFACE_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     Facet_FacetedFace.ja
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
#include <NXOpen/DisplayableObject.hxx>
#include <NXOpen/INXObject.hxx>
#include <NXOpen/IParameterizedSurface.hxx>
#include <NXOpen/libnxopencpp_facet_exports.hxx>

#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable:4996)
#endif
#ifdef __GNUC__
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

namespace NXOpen
{
    namespace Facet
    {
        class FacetedFace;
    }
    namespace Assemblies
    {
        class Component;
    }
    class BasePart;
    class DisplayableObject;
    class INXObject;
    class IParameterizedSurface;
    namespace Facet
    {
        class _FacetedFaceBuilder;
        class FacetedFaceImpl;
        /** Represents a faceted face. Instances of this class may be
                generated when recording a journal, but they cannot be created
                directly. 
            
         <br>  Created in NX5.0.0.  <br>  
        */
        class NXOPENCPP_FACETEXPORT  FacetedFace : public DisplayableObject, public virtual IParameterizedSurface
        {
            private: FacetedFaceImpl * m_facetedface_impl;
            private: friend class  _FacetedFaceBuilder;
            protected: FacetedFace();
            public: ~FacetedFace();
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
