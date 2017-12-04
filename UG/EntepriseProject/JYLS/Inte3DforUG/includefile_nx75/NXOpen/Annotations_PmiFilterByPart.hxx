#ifndef NXOpen_ANNOTATIONS_PMIFILTERBYPART_HXX_INCLUDED
#define NXOpen_ANNOTATIONS_PMIFILTERBYPART_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     Annotations_PmiFilterByPart.ja
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
#include <NXOpen/Annotations_PmiFilter.hxx>
#include <NXOpen/libnxopencpp_annotations_exports.hxx>

#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable:4996)
#endif
#ifdef __GNUC__
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

namespace NXOpen
{
    namespace Annotations
    {
        class PmiFilterByPart;
    }
    namespace Annotations
    {
        class PmiFilter;
    }
    namespace Annotations
    {
        class _PmiFilterByPartBuilder;
        class PmiFilterByPartImpl;
        /** Represents a PMI filter defined by a set of parts. 
         <br>  Created in NX4.0.0.  <br>  
        */
        class NXOPENCPP_ANNOTATIONSEXPORT  PmiFilterByPart : public Annotations::PmiFilter
        {
            private: PmiFilterByPartImpl * m_pmifilterbypart_impl;
            private: friend class  _PmiFilterByPartBuilder;
            protected: PmiFilterByPart();
            public: ~PmiFilterByPart();
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