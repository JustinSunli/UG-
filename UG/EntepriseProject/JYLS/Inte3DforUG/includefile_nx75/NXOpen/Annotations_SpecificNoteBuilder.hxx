#ifndef NXOpen_ANNOTATIONS_SPECIFICNOTEBUILDER_HXX_INCLUDED
#define NXOpen_ANNOTATIONS_SPECIFICNOTEBUILDER_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     Annotations_SpecificNoteBuilder.ja
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
#include <NXOpen/Annotations_SpecificNoteBuilder.hxx>
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
        class SpecificNoteBuilder;
    }
    namespace Annotations
    {
        class PmiAttributeBuilder;
    }
    namespace Annotations
    {
        class _SpecificNoteBuilderBuilder;
        class SpecificNoteBuilderImpl;
        /** Represents a @link Annotations::SpecificNote Annotations::SpecificNote@endlink  builder  <br> To create a new instance of this class, use @link Annotations::PmiAttributeCollection::CreateSpecificNoteBuilder Annotations::PmiAttributeCollection::CreateSpecificNoteBuilder@endlink  <br> 
         <br>  Created in NX6.0.0.  <br>  
        */
        class NXOPENCPP_ANNOTATIONSEXPORT  SpecificNoteBuilder : public Annotations::PmiAttributeBuilder
        {
            private: SpecificNoteBuilderImpl * m_specificnotebuilder_impl;
            private: friend class  _SpecificNoteBuilderBuilder;
            protected: SpecificNoteBuilder();
            public: ~SpecificNoteBuilder();
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
            /**Returns  the category 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: NXString Category
            (
            );
            /**Sets  the category 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: void SetCategory
            (
                const NXString & category /** category */ 
            );
            /**Sets  the category 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            void SetCategory
            (
                const char * category /** category */ 
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
            /** Returns the text  @return  
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: std::vector<NXString> GetText
            (
            );
            /** Sets the text 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: void SetText
            (
                const std::vector<NXString> & text /** text */ 
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
