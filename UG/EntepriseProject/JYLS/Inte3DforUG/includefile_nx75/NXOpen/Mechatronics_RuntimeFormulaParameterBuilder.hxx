#ifndef NXOpen_MECHATRONICS_RUNTIMEFORMULAPARAMETERBUILDER_HXX_INCLUDED
#define NXOpen_MECHATRONICS_RUNTIMEFORMULAPARAMETERBUILDER_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     Mechatronics_RuntimeFormulaParameterBuilder.ja
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
#include <NXOpen/Mechatronics_RuntimeFormulaParameterBuilder.hxx>
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
        class RuntimeFormulaParameterBuilder;
    }
    class Builder;
    class NXObject;
    namespace Mechatronics
    {
        class _RuntimeFormulaParameterBuilderBuilder;
        class RuntimeFormulaParameterBuilderImpl;
        /** Represents a @link Mechatronics::RuntimeFormulaParameterBuilder Mechatronics::RuntimeFormulaParameterBuilder@endlink  builder  <br> To create a new instance of this class, use @link Mechatronics::RuntimeFormulaCollection::CreateRuntimeFormulaParameterBuilder Mechatronics::RuntimeFormulaCollection::CreateRuntimeFormulaParameterBuilder@endlink  <br> 
         <br>  Created in NX8.5.0.  <br>  
        */
        class NXOPENCPP_MECHATRONICSEXPORT  RuntimeFormulaParameterBuilder : public Builder
        {
            private: RuntimeFormulaParameterBuilderImpl * m_runtimeformulaparameterbuilder_impl;
            private: friend class  _RuntimeFormulaParameterBuilderBuilder;
            protected: RuntimeFormulaParameterBuilder();
            public: ~RuntimeFormulaParameterBuilder();
            /**Returns  the ParameterPhysics
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : nx_mcd_core ("MECHATRONICS CONCEPT DESIGNER") */
            public: NXOpen::NXObject * ParameterPhysics
            (
            );
            /**Sets  the ParameterPhysics
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : nx_mcd_core ("MECHATRONICS CONCEPT DESIGNER") */
            public: void SetParameterPhysics
            (
                NXOpen::NXObject * praram /** praram */ 
            );
            /**Returns  the RuntimePropertyIndex
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : nx_mcd_core ("MECHATRONICS CONCEPT DESIGNER") */
            public: int RuntimePropertyTag
            (
            );
            /**Sets  the RuntimePropertyIndex
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : nx_mcd_core ("MECHATRONICS CONCEPT DESIGNER") */
            public: void SetRuntimePropertyTag
            (
                int tagProp /** tagprop */ 
            );
            /**Returns  the Alias
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : nx_mcd_core ("MECHATRONICS CONCEPT DESIGNER") */
            public: NXString Alias
            (
            );
            /**Sets  the Alias
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : nx_mcd_core ("MECHATRONICS CONCEPT DESIGNER") */
            public: void SetAlias
            (
                const NXString & name /** name */ 
            );
            /**Sets  the Alias
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : nx_mcd_core ("MECHATRONICS CONCEPT DESIGNER") */
            void SetAlias
            (
                const char * name /** name */ 
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
