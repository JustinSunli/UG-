#ifndef NXOpen_VALIDATIONVIEWCOLLECTIONVALIDATOR_HXX_INCLUDED
#define NXOpen_VALIDATIONVIEWCOLLECTIONVALIDATOR_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     ValidationViewCollectionValidator.ja
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
#include <NXOpen/ValidationObjectCollectionValidator.hxx>
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
    class ValidationViewCollectionValidator;
    class ValidationObjectCollectionValidator;
    class _ValidationViewCollectionValidatorBuilder;
    class ValidationViewCollectionValidatorImpl;
    /** validator for all drafting views  <br> This is a test class. <br> 
     <br>  Created in NX7.5.1.  <br>  
    */
    class NXOPENDEBUGSESSIONCPPEXPORT  ValidationViewCollectionValidator : public ValidationObjectCollectionValidator
    {
        private: ValidationViewCollectionValidatorImpl * m_validationviewcollectionvalidator_impl;
        private: friend class  _ValidationViewCollectionValidatorBuilder;
        protected: ValidationViewCollectionValidator();
        public: ~ValidationViewCollectionValidator();
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
