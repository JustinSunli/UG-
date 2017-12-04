#ifndef NXOpen_VALIDATE_OVERRIDEBUILDER_HXX_INCLUDED
#define NXOpen_VALIDATE_OVERRIDEBUILDER_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     Validate_OverrideBuilder.ja
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
#include <NXOpen/Validate_OverrideBuilder.hxx>
#include <NXOpen/libnxopencpp_validate_exports.hxx>

#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable:4996)
#endif
#ifdef __GNUC__
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

namespace NXOpen
{
    namespace Validate
    {
        class OverrideBuilder;
    }
    class Builder;
    namespace Validate
    {
        class _OverrideBuilderBuilder;
        class OverrideBuilderImpl;
        /** Represents a @link Validate::Override Validate::Override@endlink  builder  <br> To create a new instance of this class, use @link Validate::ResultObject::CreateOverrideBuilder Validate::ResultObject::CreateOverrideBuilder@endlink  <br> 
        Default values.
        <table border="1"> 
         
        <tr><th> 
        Property</th>  <th> 
        Value</th> </tr>
        <tr><td> 
         
        RequestType </td> <td> 
         
        Permanent </td> </tr> 

        <tr><td> 
         
        ToState </td> <td> 
         
        Passed </td> </tr> 

        </table>  

         <br>  Created in NX8.5.0.  <br>  
        */
        class NXOPENCPP_VALIDATEEXPORT  OverrideBuilder : public Builder
        {
            /** Represents the override request type */
            public: enum RequestTypes
            {
                RequestTypesPermanent/** permanent */ ,
                RequestTypesTemporary/** temporary */ 
            };

            /** Represents the override request to state */
            public: enum ToStates
            {
                ToStatesPassed/** passed */ ,
                ToStatesFailed/** failed */ 
            };

            /** Represents the override request decision action */
            public: enum DecisionActions
            {
                DecisionActionsApproved/** approved */ ,
                DecisionActionsRejected/** rejected */ ,
                DecisionActionsPending/** pending */ 
            };

            private: OverrideBuilderImpl * m_overridebuilder_impl;
            private: friend class  _OverrideBuilderBuilder;
            protected: OverrideBuilder();
            public: ~OverrideBuilder();
            /**Returns  the type of override request
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Validate::OverrideBuilder::RequestTypes RequestType
            (
            );
            /**Sets  the type of override request
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : ug_checkmate ("UG Check Mate") */
            public: void SetRequestType
            (
                NXOpen::Validate::OverrideBuilder::RequestTypes requestType /** requesttype */ 
            );
            /**Returns  the to state of override request 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Validate::OverrideBuilder::ToStates ToState
            (
            );
            /**Sets  the to state of override request 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : ug_checkmate ("UG Check Mate") */
            public: void SetToState
            (
                NXOpen::Validate::OverrideBuilder::ToStates toState /** tostate */ 
            );
            /**Returns  the category of override request.
                        The category is optional unless override reason configuration is mandatory in Teamcenter.
                    
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : None */
            public: NXString Category
            (
            );
            /**Sets  the category of override request.
                        The category is optional unless override reason configuration is mandatory in Teamcenter.
                    
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : ug_checkmate ("UG Check Mate") */
            public: void SetCategory
            (
                const NXString & category /** category */ 
            );
            /**Sets  the category of override request.
                        The category is optional unless override reason configuration is mandatory in Teamcenter.
                    
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : ug_checkmate ("UG Check Mate") */
            void SetCategory
            (
                const char * category /** category */ 
            );
            /**Returns  the reason of override request.
                        The reason is optional unless override reason configuration is mandatory in Teamcenter.
                    
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : None */
            public: NXString Reason
            (
            );
            /**Sets  the reason of override request.
                        The reason is optional unless override reason configuration is mandatory in Teamcenter.
                    
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : ug_checkmate ("UG Check Mate") */
            public: void SetReason
            (
                const NXString & reason /** reason */ 
            );
            /**Sets  the reason of override request.
                        The reason is optional unless override reason configuration is mandatory in Teamcenter.
                    
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : ug_checkmate ("UG Check Mate") */
            void SetReason
            (
                const char * reason /** reason */ 
            );
            /** Returns the detail reason  @return  
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : None */
            public: std::vector<NXString> GetDetailReason
            (
            );
            /** Sets the detail reason 
                        The detail reason is optional unless override reason configuration is mandatory in Teamcenter.
                    
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : ug_checkmate ("UG Check Mate") */
            public: void SetDetailReason
            (
                const std::vector<NXString> & detailReason /** detailreason */ 
            );
            /**Returns  the decision user 
                        The decision user is a Teamcenter user in the Validation Administration group. If the decision user is empty, it means thant any user in the group can review override request.
                    
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : None */
            public: NXString DecisionUser
            (
            );
            /**Sets  the decision user 
                        The decision user is a Teamcenter user in the Validation Administration group. If the decision user is empty, it means thant any user in the group can review override request.
                    
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : ug_checkmate ("UG Check Mate") */
            public: void SetDecisionUser
            (
                const NXString & decisionUser /** decisionuser */ 
            );
            /**Sets  the decision user 
                        The decision user is a Teamcenter user in the Validation Administration group. If the decision user is empty, it means thant any user in the group can review override request.
                    
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : ug_checkmate ("UG Check Mate") */
            void SetDecisionUser
            (
                const char * decisionUser /** decisionuser */ 
            );
            /**Returns  the decision action of override request
                        The decision action is automatically pending while override request is created. If any property of override request is changed, the decision action will be pending.
                    
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Validate::OverrideBuilder::DecisionActions DecisionAction
            (
            );
            /**Sets  the decision action of override request
                        The decision action is automatically pending while override request is created. If any property of override request is changed, the decision action will be pending.
                    
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : ug_checkmate ("UG Check Mate") */
            public: void SetDecisionAction
            (
                NXOpen::Validate::OverrideBuilder::DecisionActions decisionAction /** decisionaction */ 
            );
            /** Returns the decision comments  @return  
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : None */
            public: std::vector<NXString> GetDecisionComments
            (
            );
            /** Sets the decision comments 
                        The decision comments is optional.
                    
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : ug_checkmate ("UG Check Mate") */
            public: void SetDecisionComments
            (
                const std::vector<NXString> & decisionComments /** decisioncomments */ 
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
