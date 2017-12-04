#ifndef NXOpen_VALIDATIONMODELINGVIEWSEARCHVALIDATOR_HXX_INCLUDED
#define NXOpen_VALIDATIONMODELINGVIEWSEARCHVALIDATOR_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     ValidationModelingViewSearchValidator.ja
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
#include <NXOpen/ValidationModelingViewValidator.hxx>
#include <NXOpen/libnxopendebugsessioncpp_exports.hxx>

#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable:4996)
#endif
#ifdef __GNUC__
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

namespace NXOpen
{
    class ValidationModelingViewSearchValidator;
    class ValidationModelingViewValidator;
    class _ValidationModelingViewSearchValidatorBuilder;
    class ValidationModelingViewSearchValidatorImpl;
    /** validator for a modeling view  <br> This is a test class. <br> 
     <br>  Created in NX8.0.3.  <br>  
    */
    class NXOPENDEBUGSESSIONCPPEXPORT  ValidationModelingViewSearchValidator : public ValidationModelingViewValidator
    {
        private: ValidationModelingViewSearchValidatorImpl * m_validationmodelingviewsearchvalidator_impl;
        private: friend class  _ValidationModelingViewSearchValidatorBuilder;
        protected: ValidationModelingViewSearchValidator();
        public: ~ValidationModelingViewSearchValidator();
    };
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
