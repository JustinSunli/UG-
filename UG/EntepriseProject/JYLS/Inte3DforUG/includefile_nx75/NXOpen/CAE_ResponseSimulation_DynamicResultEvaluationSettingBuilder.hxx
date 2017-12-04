#ifndef NXOpen_CAE_RESPONSESIMULATION_DYNAMICRESULTEVALUATIONSETTINGBUILDER_HXX_INCLUDED
#define NXOpen_CAE_RESPONSESIMULATION_DYNAMICRESULTEVALUATIONSETTINGBUILDER_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     CAE_ResponseSimulation_DynamicResultEvaluationSettingBuilder.ja
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
#include <NXOpen/libnxopencpp_cae_exports.hxx>

#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable:4996)
#endif
#ifdef __GNUC__
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

namespace NXOpen
{
    namespace CAE
    {
        namespace ResponseSimulation
        {
            class DynamicResultEvaluationSettingBuilder;
        }
    }
    class Builder;
    namespace CAE
    {
        namespace ResponseSimulation
        {
            class _DynamicResultEvaluationSettingBuilderBuilder;
            class DynamicResultEvaluationSettingBuilderImpl;
            /** Represents the abstract builder class of evaluation setting for all dynamic results evaluations.
                 <br> This is an abstract class, and cannot be created. <br> 
             <br>  Created in NX5.0.0.  <br>  
            */
            class NXOPENCPP_CAEEXPORT  DynamicResultEvaluationSettingBuilder : public Builder
            {
                private: DynamicResultEvaluationSettingBuilderImpl * m_dynamicresultevaluationsettingbuilder_impl;
                private: friend class  _DynamicResultEvaluationSettingBuilderBuilder;
                protected: DynamicResultEvaluationSettingBuilder();
                public: ~DynamicResultEvaluationSettingBuilder();
                /** Returns the description.  @return  
                 <br>  Created in NX5.0.0.  <br>  
                 <br> License requirements : nx_response_anlys ("NX Response Analysis") */
                public: std::vector<NXString> GetDescriptionString
                (
                );
                /** Sets the description 
                 <br>  Created in NX5.0.0.  <br>  
                 <br> License requirements : nx_response_anlys ("NX Response Analysis") */
                public: void SetDescriptionString
                (
                    const std::vector<NXString> & description /** description */ 
                );
            };
        }
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
