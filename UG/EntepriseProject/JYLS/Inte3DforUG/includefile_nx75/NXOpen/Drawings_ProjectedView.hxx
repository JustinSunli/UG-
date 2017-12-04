#ifndef NXOpen_DRAWINGS_PROJECTEDVIEW_HXX_INCLUDED
#define NXOpen_DRAWINGS_PROJECTEDVIEW_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     Drawings_ProjectedView.ja
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
#include <NXOpen/Drawings_DraftingView.hxx>
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
        class ProjectedView;
    }
    namespace Drawings
    {
        class DraftingView;
    }
    namespace Drawings
    {
        class _ProjectedViewBuilder;
        class ProjectedViewImpl;
        /** Represents a Projected View. This can be Auxilary View or Orthographic View  <br> To create or edit an instance of this class, use @link Drawings::ProjectedViewBuilder Drawings::ProjectedViewBuilder@endlink  <br> 
         <br>  Created in NX5.0.0.  <br>  
        */
        class NXOPENCPP_DRAWINGSEXPORT  ProjectedView : public Drawings::DraftingView
        {
            private: ProjectedViewImpl * m_projectedview_impl;
            private: friend class  _ProjectedViewBuilder;
            protected: ProjectedView();
            public: ~ProjectedView();
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
