#ifndef NXOpen_MECHATRONICS_ADDCOMPONENTBUILDER_HXX_INCLUDED
#define NXOpen_MECHATRONICS_ADDCOMPONENTBUILDER_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     Mechatronics_AddComponentBuilder.ja
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
        class AddComponentBuilder;
    }
    class Builder;
    namespace Mechatronics
    {
        class _AddComponentBuilderBuilder;
        class AddComponentBuilderImpl;
        /** Represents a @link Mechatronics::AddComponentBuilder Mechatronics::AddComponentBuilder@endlink   <br> To create a new instance of this class, use @link Mechatronics::FunctionObjectCollection::CreateAddComponentBuilder Mechatronics::FunctionObjectCollection::CreateAddComponentBuilder@endlink  <br> 
         <br>  Created in NX7.5.1.  <br>  
        */
        class NXOPENCPP_MECHATRONICSEXPORT  AddComponentBuilder : public Builder
        {
            private: AddComponentBuilderImpl * m_addcomponentbuilder_impl;
            private: friend class  _AddComponentBuilderBuilder;
            protected: AddComponentBuilder();
            public: ~AddComponentBuilder();
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
