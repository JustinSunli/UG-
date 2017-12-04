#ifndef NXOpen_MECHATRONICS_ADAPTERFORMULABUILDER_HXX_INCLUDED
#define NXOpen_MECHATRONICS_ADAPTERFORMULABUILDER_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     Mechatronics_AdapterFormulaBuilder.ja
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
#include <NXOpen/Mechatronics_RuntimeFormulaBuilder.hxx>
#include <NXOpen/Mechatronics_AdapterFormulaBuilder.hxx>
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
        class AdapterFormulaBuilder;
    }
    namespace Mechatronics
    {
        class RuntimeFormulaBuilder;
    }
    namespace Mechatronics
    {
        class _AdapterFormulaBuilderBuilder;
        class AdapterFormulaBuilderImpl;
        /**
            Represents a @link Mechatronics::AdapterFormulaBuilder Mechatronics::AdapterFormulaBuilder@endlink .
             <br> To create a new instance of this class, use @link Mechatronics::AdapterFormulaCollection::CreateAdapterFormulaBuilder Mechatronics::AdapterFormulaCollection::CreateAdapterFormulaBuilder@endlink  <br> 
         <br>  Created in NX8.5.0.  <br>  
        */
        class NXOPENCPP_MECHATRONICSEXPORT  AdapterFormulaBuilder : public Mechatronics::RuntimeFormulaBuilder
        {
            private: AdapterFormulaBuilderImpl * m_adapterformulabuilder_impl;
            private: friend class  _AdapterFormulaBuilderBuilder;
            protected: AdapterFormulaBuilder();
            public: ~AdapterFormulaBuilder();
            /**Returns  the formula comment. 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : nx_mcd_core ("MECHATRONICS CONCEPT DESIGNER") */
            public: NXString FormulaComment
            (
            );
            /**Sets  the formula comment. 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : nx_mcd_core ("MECHATRONICS CONCEPT DESIGNER") */
            public: void SetFormulaComment
            (
                const NXString & formulaComment /** formulacomment */ 
            );
            /**Sets  the formula comment. 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : nx_mcd_core ("MECHATRONICS CONCEPT DESIGNER") */
            void SetFormulaComment
            (
                const char * formulaComment /** formulacomment */ 
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
