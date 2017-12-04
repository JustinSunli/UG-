#ifndef NXOpen_DISPLAY_CGFXATTRIBUTEVALUEFLOAT3BUILDER_HXX_INCLUDED
#define NXOpen_DISPLAY_CGFXATTRIBUTEVALUEFLOAT3BUILDER_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     Display_CgfxAttributeValueFloat3Builder.ja
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
#include <NXOpen/Display_CgfxAttributeValueFloat3Builder.hxx>
#include <NXOpen/libnxopencpp_display_exports.hxx>

#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable:4996)
#endif
#ifdef __GNUC__
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

namespace NXOpen
{
    namespace Display
    {
        class CgfxAttributeValueFloat3Builder;
    }
    class Builder;
    namespace Display
    {
        class _CgfxAttributeValueFloat3BuilderBuilder;
        class CgfxAttributeValueFloat3BuilderImpl;
        /** Represents a @link Display::CgfxAttributeValueFloat3Builder Display::CgfxAttributeValueFloat3Builder@endlink  builder 
             <br> This class is restricted to being called from a program running during an 
            Interactive NX session.  If run from a non-interactive session it will 
            return NULL. <br> 
             <br>  <br> 
         <br>  Created in NX5.0.0.  <br>  
        */
        class NXOPENCPP_DISPLAYEXPORT  CgfxAttributeValueFloat3Builder : public Builder
        {
            private: CgfxAttributeValueFloat3BuilderImpl * m_cgfxattributevaluefloat3builder_impl;
            private: friend class  _CgfxAttributeValueFloat3BuilderBuilder;
            protected: CgfxAttributeValueFloat3Builder();
            public: ~CgfxAttributeValueFloat3Builder();
            /** Gets the CgFX material attribute's array of 3 double values; these are float data types in a CgFX file  @return  array of 3 doubles 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : None */
            public: std::vector<double> GetFloat3Value
            (
            );
            /** Sets the CgFX material attribute's array of 3 double values; these are float data types in a CgFX file 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : None */
            public: void SetFloat3Value
            (
                const std::vector<double> & doubleTableValue /** array of 3 doubles */
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
