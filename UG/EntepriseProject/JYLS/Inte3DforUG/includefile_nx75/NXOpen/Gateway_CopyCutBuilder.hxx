#ifndef NXOpen_GATEWAY_COPYCUTBUILDER_HXX_INCLUDED
#define NXOpen_GATEWAY_COPYCUTBUILDER_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     Gateway_CopyCutBuilder.ja
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
#include <NXOpen/Gateway_CopyCutBuilder.hxx>
#include <NXOpen/ugmath.hxx>
#include <NXOpen/libnxopencpp_gateway_exports.hxx>

#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable:4996)
#endif
#ifdef __GNUC__
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

namespace NXOpen
{
    namespace Gateway
    {
        class CopyCutBuilder;
    }
    class Builder;
    class NXObject;
    namespace Gateway
    {
        class _CopyCutBuilderBuilder;
        class CopyCutBuilderImpl;
        /**
        Represents a @link Gateway::CopyCutBuilder Gateway::CopyCutBuilder@endlink 
         <br> To create a new instance of this class, use @link ClipboardOperationsManager::CreateCopyCutBuilder ClipboardOperationsManager::CreateCopyCutBuilder@endlink  <br> 
         <br>  Created in NX7.5.0.  <br>  
        */
        class NXOPENCPP_GATEWAYEXPORT  CopyCutBuilder : public Builder
        {
            /** Status of Copy or Cut Operation */
            public: enum Status
            {
                StatusNoObjectsCopied/** No objects were successfully copied */,
                StatusNonExportableObjects/** Certain non-exportable objects were not copied */,
                StatusPartExportFailed/** Error while exporting part with copied/cut objects */,
                StatusErrorDuringCut/** Error during the cut operation */,
                StatusAllObjectsCopied/** All objects were successfully copied */
            };

            private: CopyCutBuilderImpl * m_copycutbuilder_impl;
            private: friend class  _CopyCutBuilderBuilder;
            protected: CopyCutBuilder();
            public: ~CopyCutBuilder();
            /** Gets the status of copy-cut operation  @return  
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Gateway::CopyCutBuilder::Status GetCopyCutStatus
            (
            );
            /**Returns  a flag indicating whether it is a copy or cut operation 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: bool IsCut
            (
            );
            /**Sets  a flag indicating whether it is a copy or cut operation 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: void SetCut
            (
                bool isCut /** iscut */ 
            );
            /**Returns  a flag indicating whether copy cut to clipboard or copy cut to a file
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: bool ToClipboard
            (
            );
            /**Sets  a flag indicating whether copy cut to clipboard or copy cut to a file
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: void SetToClipboard
            (
                bool isToClipboard /** istoclipboard */ 
            );
            /**Returns  the string of the filename to which to copy or cut the objects to 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: NXString DestinationFilename
            (
            );
            /**Sets  the string of the filename to which to copy or cut the objects to 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: void SetDestinationFilename
            (
                const NXString & filename /** filename */ 
            );
            /**Sets  the string of the filename to which to copy or cut the objects to 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            void SetDestinationFilename
            (
                const char * filename /** filename */ 
            );
            /** Gets all non-exportable objects  @return  All the non-exportable objects 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: std::vector<NXOpen::NXObject *> GetNonExportableObjects
            (
            );
            /** Gets all objects to be copied or to be cut  @return  All the objects to be copied or to be cut
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: std::vector<NXOpen::NXObject *> GetObjects
            (
            );
            /** Sets all objects to be copied or to be cut 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: void SetObjects
            (
                const std::vector<NXOpen::NXObject *> & objects /** All the objects to be copied or to be cut*/
            );
            /**Returns  a flag indicating whether to copy as sketch curves or not 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: bool CanCopyAsSketch
            (
            );
            /**Sets  a flag indicating whether to copy as sketch curves or not 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: void SetCanCopyAsSketch
            (
                bool canCopyAsSketch /** cancopyassketch */ 
            );
            /**Returns  the initial copy location mainly used to define default copy location of sketch objects 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Point3d InitialCopyLocation
            (
            );
            /**Sets  the initial copy location mainly used to define default copy location of sketch objects 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: void SetInitialCopyLocation
            (
                const NXOpen::Point3d & copyLocation /** Copy location in absolute coordinates */
            );
            /** Reset the initial copy location. After this previously set initial copy location will not be used 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: void ResetInitialCopyLocation
            (
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
