#ifndef NXOpen_CAE_CORRELBASEBUILDER_HXX_INCLUDED
#define NXOpen_CAE_CORRELBASEBUILDER_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     CAE_CorrelBaseBuilder.ja
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
        class CorrelBaseBuilder;
    }
    class Builder;
    namespace CAE
    {
        class _CorrelBaseBuilderBuilder;
        class CorrelBaseBuilderImpl;
        /** Represents the abstract builder class for all objects defined in correl meta solution  <br> This is an abstract class, and cannot be created. <br> 
         <br>  Created in NX6.0.0.  <br>  
        */
        class NXOPENCPP_CAEEXPORT  CorrelBaseBuilder : public Builder
        {
            private: CorrelBaseBuilderImpl * m_correlbasebuilder_impl;
            private: friend class  _CorrelBaseBuilderBuilder;
            protected: CorrelBaseBuilder();
            public: ~CorrelBaseBuilder();
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