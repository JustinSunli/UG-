#ifndef NXOpen_ANNOTATIONS_PROCESSSPECIFICATIONBUILDER_HXX_INCLUDED
#define NXOpen_ANNOTATIONS_PROCESSSPECIFICATIONBUILDER_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     Annotations_ProcessSpecificationBuilder.ja
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
#include <NXOpen/Annotations_PmiAttributeBuilder.hxx>
#include <NXOpen/Annotations_ProcessSpecificationBuilder.hxx>
#include <NXOpen/libnxopencpp_annotations_exports.hxx>

#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable:4996)
#endif
#ifdef __GNUC__
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

namespace NXOpen
{
    namespace Annotations
    {
        class ProcessSpecificationBuilder;
    }
    namespace Annotations
    {
        class PmiAttributeBuilder;
    }
    namespace Annotations
    {
        class _ProcessSpecificationBuilderBuilder;
        class ProcessSpecificationBuilderImpl;
        /** Represents a @link Annotations::ProcessSpecification Annotations::ProcessSpecification@endlink  builder  <br> To create a new instance of this class, use @link Annotations::PmiAttributeCollection::CreateProcessSpecificationBuilder Annotations::PmiAttributeCollection::CreateProcessSpecificationBuilder@endlink  <br> 
         <br>  Created in NX6.0.0.  <br>  
        */
        class NXOPENCPP_ANNOTATIONSEXPORT  ProcessSpecificationBuilder : public Annotations::PmiAttributeBuilder
        {
            private: ProcessSpecificationBuilderImpl * m_processspecificationbuilder_impl;
            private: friend class  _ProcessSpecificationBuilderBuilder;
            protected: ProcessSpecificationBuilder();
            public: ~ProcessSpecificationBuilder();
            /**Returns  the str title 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: NXString Title
            (
            );
            /**Sets  the str title 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: void SetTitle
            (
                const NXString & title /** title */ 
            );
            /**Sets  the str title 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            void SetTitle
            (
                const char * title /** title */ 
            );
            /**Returns  the identifier 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: NXString Identifier
            (
            );
            /**Sets  the identifier 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: void SetIdentifier
            (
                const NXString & identifier /** identifier */ 
            );
            /**Sets  the identifier 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            void SetIdentifier
            (
                const char * identifier /** identifier */ 
            );
            /**Returns  the revision 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: NXString Revision
            (
            );
            /**Sets  the revision 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: void SetRevision
            (
                const NXString & revision /** revision */ 
            );
            /**Sets  the revision 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            void SetRevision
            (
                const char * revision /** revision */ 
            );
            /** Returns the nomenclature  @return  
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: std::vector<NXString> GetNomenclature
            (
            );
            /** Sets the nomenclature 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: void SetNomenclature
            (
                const std::vector<NXString> & nomenclature /** nomenclature */ 
            );
            /** Returns the open field  @return  
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: std::vector<NXString> GetOpenField
            (
            );
            /** Sets the open field 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: void SetOpenField
            (
                const std::vector<NXString> & openField /** openfield */ 
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
