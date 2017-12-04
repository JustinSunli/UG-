#ifndef NXOpen_VALIDATIONPARTLISTSECTIONVALIDATOR_HXX_INCLUDED
#define NXOpen_VALIDATIONPARTLISTSECTIONVALIDATOR_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     ValidationPartListSectionValidator.ja
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
#include <NXOpen/ValidationTabnotSectionValidator.hxx>
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
    class ValidationPartListSectionValidator;
    class ValidationTabnotSectionValidator;
    class _ValidationPartListSectionValidatorBuilder;
    class ValidationPartListSectionValidatorImpl;
    /** validator for a parts list section  <br> This is a test class. <br> 
     <br>  Created in NX8.0.0.  <br>  
    */
    class NXOPENDEBUGSESSIONCPPEXPORT  ValidationPartListSectionValidator : public ValidationTabnotSectionValidator
    {
        private: ValidationPartListSectionValidatorImpl * m_validationpartlistsectionvalidator_impl;
        private: friend class  _ValidationPartListSectionValidatorBuilder;
        protected: ValidationPartListSectionValidator();
        public: ~ValidationPartListSectionValidator();
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
