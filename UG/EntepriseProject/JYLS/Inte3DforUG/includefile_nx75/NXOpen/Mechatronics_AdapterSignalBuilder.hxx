#ifndef NXOpen_MECHATRONICS_ADAPTERSIGNALBUILDER_HXX_INCLUDED
#define NXOpen_MECHATRONICS_ADAPTERSIGNALBUILDER_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     Mechatronics_AdapterSignalBuilder.ja
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
#include <NXOpen/Mechatronics_ProxyObjectBuilder.hxx>
#include <NXOpen/Mechatronics_AdapterSignalBuilder.hxx>
#include <NXOpen/libnxopencpp_mechatronics_exports.hxx>

#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable:4996)
#endif
#ifdef __GNUC__
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

namespace NXOpen
{
    namespace Mechatronics
    {
        class AdapterSignalBuilder;
    }
    namespace Mechatronics
    {
        class AdapterFormula;
    }
    namespace Mechatronics
    {
        class ProxyObjectBuilder;
    }
    namespace Mechatronics
    {
        class _AdapterSignalBuilderBuilder;
        class AdapterSignalBuilderImpl;
        /**
            Represents a @link Mechatronics::AdapterSignalBuilder Mechatronics::AdapterSignalBuilder@endlink .
             <br> To create a new instance of this class, use @link Mechatronics::AdapterSignalCollection::CreateAdapterSignalBuilder Mechatronics::AdapterSignalCollection::CreateAdapterSignalBuilder@endlink  <br> 
         <br>  Created in NX8.5.0.  <br>  
        */
        class NXOPENCPP_MECHATRONICSEXPORT  AdapterSignalBuilder : public Mechatronics::ProxyObjectBuilder
        {
            private: AdapterSignalBuilderImpl * m_adaptersignalbuilder_impl;
            private: friend class  _AdapterSignalBuilderBuilder;
            protected: AdapterSignalBuilder();
            public: ~AdapterSignalBuilder();
            /**Returns  the input/output (0 - Input, 1 - Output). 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : nx_mcd_core ("MECHATRONICS CONCEPT DESIGNER") */
            public: int InputOutput
            (
            );
            /**Sets  the input/output (0 - Input, 1 - Output). 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : nx_mcd_core ("MECHATRONICS CONCEPT DESIGNER") */
            public: void SetInputOutput
            (
                int inputOutput /** inputoutput */ 
            );
            /**Returns  the assigned formula. 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : nx_mcd_core ("MECHATRONICS CONCEPT DESIGNER") */
            public: NXOpen::Mechatronics::AdapterFormula * AssignedFormula
            (
            );
            /**Sets  the assigned formula. 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : nx_mcd_core ("MECHATRONICS CONCEPT DESIGNER") */
            public: void SetAssignedFormula
            (
                NXOpen::Mechatronics::AdapterFormula * assignedFormula /** assignedformula */ 
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
