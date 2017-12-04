#ifndef NXOpen_CAE_RESPONSESIMULATION_STRAINGAGEEVALUATIONSETTING_HXX_INCLUDED
#define NXOpen_CAE_RESPONSESIMULATION_STRAINGAGEEVALUATIONSETTING_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     CAE_ResponseSimulation_StrainGageEvaluationSetting.ja
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
#include <NXOpen/CAE_ResponseSimulation_DynamicResultEvaluationSetting.hxx>
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
            class StrainGageEvaluationSetting;
        }
    }
    namespace CAE
    {
        namespace ResponseSimulation
        {
            class DynamicResultEvaluationSetting;
        }
    }
    namespace CAE
    {
        namespace ResponseSimulation
        {
            class _StrainGageEvaluationSettingBuilder;
            class StrainGageEvaluationSettingImpl;
            /** Represents the parameters setting for strain gage evaluation.  For more information, see the 
                Response Simulation section of the Gateway Help  <br> To create or edit an instance of this class, use @link CAE::ResponseSimulation::StrainGageEvaluationSettingBuilder CAE::ResponseSimulation::StrainGageEvaluationSettingBuilder@endlink  <br> 
             <br>  Created in NX6.0.0.  <br>  
            */
            class NXOPENCPP_CAEEXPORT  StrainGageEvaluationSetting : public CAE::ResponseSimulation::DynamicResultEvaluationSetting
            {
                private: StrainGageEvaluationSettingImpl * m_straingageevaluationsetting_impl;
                private: friend class  _StrainGageEvaluationSettingBuilder;
                protected: StrainGageEvaluationSetting();
                public: ~StrainGageEvaluationSetting();
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
