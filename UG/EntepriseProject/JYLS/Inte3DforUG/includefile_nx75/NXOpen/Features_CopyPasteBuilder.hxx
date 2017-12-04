#ifndef NXOpen_FEATURES_COPYPASTEBUILDER_HXX_INCLUDED
#define NXOpen_FEATURES_COPYPASTEBUILDER_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     Features_CopyPasteBuilder.ja
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
#include <NXOpen/Features_CopyPasteBuilder.hxx>
#include <NXOpen/Features_FeatureReferencesBuilder.hxx>
#include <NXOpen/libnxopencpp_features_exports.hxx>

#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable:4996)
#endif
#ifdef __GNUC__
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

namespace NXOpen
{
    namespace Features
    {
        class CopyPasteBuilder;
    }
    class Builder;
    namespace Features
    {
        class FeatureReferencesBuilder;
    }
    namespace Features
    {
        class _CopyPasteBuilderBuilder;
        class CopyPasteBuilderImpl;
        /**
            Represents a @link Features::CopyPasteBuilder Features::CopyPasteBuilder@endlink 
             <br> To create a new instance of this class, use @link Features::FeatureCollection::CreateCopyPasteBuilder2 Features::FeatureCollection::CreateCopyPasteBuilder2@endlink  <br> 
         <br>  Created in NX6.0.0.  <br>  
        */
        class NXOPENCPP_FEATURESEXPORT  CopyPasteBuilder : public Builder
        {
            /** Types of version number */
            public: enum BuilderVersion
            {
                BuilderVersionOriginal/** original */ ,
                BuilderVersionExposeOnflySo/** expose onfly so */ ,
                BuilderVersionExposeBody/** expose body */ 
            };

            /** Types of expression transfer mode */
            public: enum ExpressionTransferOption
            {
                ExpressionTransferOptionCreateNew/** New */,
                ExpressionTransferOptionLinkToOriginal/** Link to Original */,
                ExpressionTransferOptionOriginalInstance/** Instance of Original */
            };

            /** Types of parent transfer mode */
            public: enum ParentTransferOption
            {
                ParentTransferOptionPromptForNew/** Copy Original Curves */,
                ParentTransferOptionCopyOriginalCurve/** Prompt for New */,
                ParentTransferOptionOriginalInstance/** Instance of Original */
            };

            private: CopyPasteBuilderImpl * m_copypastebuilder_impl;
            private: friend class  _CopyPasteBuilderBuilder;
            protected: CopyPasteBuilder();
            public: ~CopyPasteBuilder();
            /**Returns  the expression option 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Features::CopyPasteBuilder::ExpressionTransferOption ExpressionOption
            (
            );
            /**Sets  the expression option 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : solid_modeling ("SOLIDS MODELING") */
            public: void SetExpressionOption
            (
                NXOpen::Features::CopyPasteBuilder::ExpressionTransferOption expressionOption /** expressionoption */ 
            );
            /**Returns  the parent option 
             <br>  @deprecated Deprecated in NX8.0.0.  This functionality is no longer supported. <br>  

             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public:  NX_DEPRECATED("Deprecated in NX8.0.0.  This functionality is no longer supported.") NXOpen::Features::CopyPasteBuilder::ParentTransferOption ParentOption
            (
            );
            /**Sets  the parent option 
             <br>  @deprecated Deprecated in NX8.0.0.  This functionality is no longer supported. <br>  

             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : solid_modeling ("SOLIDS MODELING") */
            public:  NX_DEPRECATED("Deprecated in NX8.0.0.  This functionality is no longer supported.") void SetParentOption
            (
                NXOpen::Features::CopyPasteBuilder::ParentTransferOption parentOption /** parentoption */ 
            );
            /** Returns the feature references builder @return  
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Features::FeatureReferencesBuilder * GetFeatureReferences
            (
            );
            /**Returns  the copy resolving geometry toggle 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : None */
            public: bool CopyResolveGeometry
            (
            );
            /**Sets  the copy resolving geometry toggle 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : solid_modeling ("SOLIDS MODELING") */
            public: void SetCopyResolveGeometry
            (
                bool copyResolveGeometry /** copyresolvegeometry */ 
            );
            /**Returns  the associative toggle 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : None */
            public: bool Associative
            (
            );
            /**Sets  the associative toggle 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : solid_modeling ("SOLIDS MODELING") */
            public: void SetAssociative
            (
                bool associative /** associative */ 
            );
            /** The update builder function, needs to be called after expression option is reset 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : solid_modeling ("SOLIDS MODELING") */
            public: void UpdateBuilder
            (
            );
            /** The builder version getting function  @return  
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : solid_modeling ("SOLIDS MODELING") */
            public: NXOpen::Features::CopyPasteBuilder::BuilderVersion GetBuilderVersion
            (
            );
            /** The builder version setting function 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : solid_modeling ("SOLIDS MODELING") */
            public: void SetBuilderVersion
            (
                NXOpen::Features::CopyPasteBuilder::BuilderVersion version /** version */ 
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
