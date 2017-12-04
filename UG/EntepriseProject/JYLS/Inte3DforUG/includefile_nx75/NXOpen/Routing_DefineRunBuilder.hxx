#ifndef NXOpen_ROUTING_DEFINERUNBUILDER_HXX_INCLUDED
#define NXOpen_ROUTING_DEFINERUNBUILDER_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     Routing_DefineRunBuilder.ja
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
#include <NXOpen/ObjectList.hxx>
#include <NXOpen/Routing_DefineRunBuilder.hxx>
#include <NXOpen/Routing_RouteObjectCollector.hxx>
#include <NXOpen/Routing_RunItemsBuilder.hxx>
#include <NXOpen/libnxopencpp_routing_exports.hxx>

#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable:4996)
#endif
#ifdef __GNUC__
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

namespace NXOpen
{
    namespace Routing
    {
        class DefineRunBuilder;
    }
    class Builder;
    namespace Routing
    {
        class RouteObjectCollector;
    }
    namespace Routing
    {
        class RunItemsBuilder;
    }
    namespace Routing
    {
        class RunItemsBuilderList;
    }
    class TaggedObject;
    namespace Routing
    {
        class _DefineRunBuilderBuilder;
        class DefineRunBuilderImpl;
        /** Builder Class for DefineRun Object  <br> To create a new instance of this class, use @link Routing::RouteManager::CreateDefineRunBuilder Routing::RouteManager::CreateDefineRunBuilder@endlink  <br> 
         <br>  Created in NX8.5.0.  <br>  
        */
        class NXOPENCPP_ROUTINGEXPORT  DefineRunBuilder : public Builder
        {
            private: DefineRunBuilderImpl * m_definerunbuilder_impl;
            private: friend class  _DefineRunBuilderBuilder;
            protected: DefineRunBuilder();
            public: ~DefineRunBuilder();
            /**Returns  the FROM items list of the run.
                         The list consists of @link Routing::DefineRunBuilder  Routing::DefineRunBuilder @endlink  objects. 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : routing_advanced ("Routing Advanced"), routing_base ("Routing Basic") */
            public: NXOpen::Routing::RunItemsBuilderList * FromItemsList
            (
            );
            /**Returns  the TO items list of the run .
                    The list consists of @link Routing::DefineRunBuilder  Routing::DefineRunBuilder @endlink  objects. 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : routing_advanced ("Routing Advanced"), routing_base ("Routing Basic") */
            public: NXOpen::Routing::RunItemsBuilderList * ToItemsList
            (
            );
            /**Returns   the MEMBER items of the run. 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : routing_advanced ("Routing Advanced"), routing_base ("Routing Basic") */
            public: NXOpen::Routing::RouteObjectCollector * MemberItems
            (
            );
            /**Returns  the run identifier 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : routing_advanced ("Routing Advanced"), routing_base ("Routing Basic") */
            public: NXString RunIdentifier
            (
            );
            /**Sets  the run identifier 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : routing_advanced ("Routing Advanced"), routing_base ("Routing Basic") */
            public: void SetRunIdentifier
            (
                const NXString & runIdentifier /** runidentifier */ 
            );
            /**Sets  the run identifier 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : routing_advanced ("Routing Advanced"), routing_base ("Routing Basic") */
            void SetRunIdentifier
            (
                const char * runIdentifier /** runidentifier */ 
            );
            /**Returns  the run type 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : routing_advanced ("Routing Advanced"), routing_base ("Routing Basic") */
            public: NXString RunType
            (
            );
            /**Sets  the run type 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : routing_advanced ("Routing Advanced"), routing_base ("Routing Basic") */
            public: void SetRunType
            (
                const NXString & runType /** runtype */ 
            );
            /**Sets  the run type 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : routing_advanced ("Routing Advanced"), routing_base ("Routing Basic") */
            void SetRunType
            (
                const char * runType /** runtype */ 
            );
            /**Returns  the specification of the run. 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : routing_advanced ("Routing Advanced"), routing_base ("Routing Basic") */
            public: NXString SpecificationOption
            (
            );
            /**Sets  the specification of the run. 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : routing_advanced ("Routing Advanced"), routing_base ("Routing Basic") */
            public: void SetSpecificationOption
            (
                const NXString & specificationOption /** specificationoption */ 
            );
            /**Sets  the specification of the run. 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : routing_advanced ("Routing Advanced"), routing_base ("Routing Basic") */
            void SetSpecificationOption
            (
                const char * specificationOption /** specificationoption */ 
            );
            /** UnifyPath of the run.
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : routing_advanced ("Routing Advanced"), routing_base ("Routing Basic") */
            public: void UnifyPath
            (
            );
            /** Creates a RunItems  used to create list item for DefineRun  @return   runItems builder
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : routing_advanced ("Routing Advanced"), routing_base ("Routing Basic") */
            public: NXOpen::Routing::RunItemsBuilder * CreateRunItemsBuilder
            (
            );
            /** Append a member item  to the list in the builder for DefineRun 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : routing_advanced ("Routing Advanced"), routing_base ("Routing Basic") */
            public: void AddMemberItems
            (
                NXOpen::TaggedObject * memberItem /**  run member item */
            );
            /** Remove a member item  from the list in the builder for DefineRun 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : routing_advanced ("Routing Advanced"), routing_base ("Routing Basic") */
            public: void RemoveMemberItems
            (
                const std::vector<NXOpen::TaggedObject *> & memberItems /** member items to be removed from the run. */
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
