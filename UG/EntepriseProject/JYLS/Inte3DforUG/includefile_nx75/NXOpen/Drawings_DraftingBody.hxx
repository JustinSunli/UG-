#ifndef NXOpen_DRAWINGS_DRAFTINGBODY_HXX_INCLUDED
#define NXOpen_DRAWINGS_DRAFTINGBODY_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     Drawings_DraftingBody.ja
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
        class DraftingBody;
    }
    class DisplayableObject;
    namespace Drawings
    {
        class DraftingCurveCollection;
    }
    namespace Drawings
    {
        class _DraftingBodyBuilder;
        class DraftingBodyImpl;
        /** Represents a drafting body.  <br> An instance of this class can be obtained by using @link Drawings::DraftingBodyCollection Drawings::DraftingBodyCollection@endlink  <br> 
         <br>  Created in NX8.5.0.  <br>  
        */
        class NXOPENCPP_DRAWINGSEXPORT  DraftingBody : public DisplayableObject
        {
            private: DraftingBodyImpl * m_draftingbody_impl;
            private: friend class  _DraftingBodyBuilder;
            protected: DraftingBody();
            public: ~DraftingBody();


            /** Returns the DraftingCurveCollection 
             <br>  Created in NX8.5.0.  <br>  
            */
            public: NXOpen::Drawings::DraftingCurveCollection *DraftingCurves();
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
