#ifndef NXOpen_CAE_OPTIMIZATION_TBSTOPOLOGYOPTIMIZATIONSOLUTIONBUILDER_HXX_INCLUDED
#define NXOpen_CAE_OPTIMIZATION_TBSTOPOLOGYOPTIMIZATIONSOLUTIONBUILDER_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     CAE_Optimization_TBSTopologyOptimizationSolutionBuilder.ja
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
#include <NXOpen/CAE_Optimization_TBSOptimizationSolutionBuilder.hxx>
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
        namespace Optimization
        {
            class TBSTopologyOptimizationSolutionBuilder;
        }
    }
    namespace CAE
    {
        namespace Optimization
        {
            class TBSOptimizationSolutionBuilder;
        }
    }
    namespace CAE
    {
        namespace Optimization
        {
            class _TBSTopologyOptimizationSolutionBuilderBuilder;
            class TBSTopologyOptimizationSolutionBuilderImpl;
            /** Represents the builder of @link CAE::Optimization::TBSTopologyOptimizationSolution CAE::Optimization::TBSTopologyOptimizationSolution@endlink . <br> To create a new instance of this class, use @link CAE::Optimization::TBSOptimizationManager::CreateTopologyOptimizationSolutionBuilder CAE::Optimization::TBSOptimizationManager::CreateTopologyOptimizationSolutionBuilder@endlink  <br> 
             <br>  Created in NX8.0.0.  <br>  
            */
            class NXOPENCPP_CAEEXPORT  TBSTopologyOptimizationSolutionBuilder : public CAE::Optimization::TBSOptimizationSolutionBuilder
            {
                private: TBSTopologyOptimizationSolutionBuilderImpl * m_tbstopologyoptimizationsolutionbuilder_impl;
                private: friend class  _TBSTopologyOptimizationSolutionBuilderBuilder;
                protected: TBSTopologyOptimizationSolutionBuilder();
                public: ~TBSTopologyOptimizationSolutionBuilder();
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
