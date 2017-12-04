#ifndef NXOpen_CAE_DURABILITYRESULTPATH_HXX_INCLUDED
#define NXOpen_CAE_DURABILITYRESULTPATH_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     CAE_DurabilityResultPath.ja
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
#include <NXOpen/CAE_DurabilityExcitation.hxx>
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
        class DurabilityResultPath;
    }
    namespace CAE
    {
        class DurabilityExcitation;
    }
    namespace CAE
    {
        class _DurabilityResultPathBuilder;
        class DurabilityResultPathImpl;
        /** Represents a @link CAE::DurabilityResultPath CAE::DurabilityResultPath@endlink . 
         <br>  Created in NX8.0.0.  <br>  
        */
        class NXOPENCPP_CAEEXPORT  DurabilityResultPath : public CAE::DurabilityExcitation
        {
            private: DurabilityResultPathImpl * m_durabilityresultpath_impl;
            private: friend class  _DurabilityResultPathBuilder;
            protected: DurabilityResultPath();
            public: ~DurabilityResultPath();
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
