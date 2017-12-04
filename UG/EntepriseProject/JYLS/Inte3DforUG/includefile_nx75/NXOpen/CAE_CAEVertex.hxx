#ifndef NXOpen_CAE_CAEVERTEX_HXX_INCLUDED
#define NXOpen_CAE_CAEVERTEX_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     CAE_CAEVertex.ja
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
#include <NXOpen/libnxopencpp_cae_exports.hxx>

#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable:4996)
#endif
#ifdef __GNUC__
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

namespace NXOpen
{
    namespace CAE
    {
        class CAEVertex;
    }
    class DisplayableObject;
    namespace CAE
    {
        class _CAEVertexBuilder;
        class CAEVertexImpl;
        /**  @brief  Represents a CAE vertex geometry  

          
         <br>  Created in NX4.0.0.  <br>  
        */
        class NXOPENCPP_CAEEXPORT  CAEVertex : public DisplayableObject
        {
            private: CAEVertexImpl * m_caevertex_impl;
            private: friend class  _CAEVertexBuilder;
            protected: CAEVertex();
            public: ~CAEVertex();
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