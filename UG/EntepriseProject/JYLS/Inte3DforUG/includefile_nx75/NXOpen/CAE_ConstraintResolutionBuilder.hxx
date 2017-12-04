#ifndef NXOpen_CAE_CONSTRAINTRESOLUTIONBUILDER_HXX_INCLUDED
#define NXOpen_CAE_CONSTRAINTRESOLUTIONBUILDER_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     CAE_ConstraintResolutionBuilder.ja
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
#include <NXOpen/CAE_ConstraintResolutionBuilder.hxx>
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
        class ConstraintResolutionBuilder;
    }
    class Builder;
    namespace CAE
    {
        class PropertyTable;
    }
    namespace CAE
    {
        class _ConstraintResolutionBuilderBuilder;
        class ConstraintResolutionBuilderImpl;
        /** Represents a @link CAE::ConstraintResolutionBuilder CAE::ConstraintResolutionBuilder@endlink  builder which can resolve conflicts between the two input constraints by a specified rule  <br> To create a new instance of this class, use @link CAE::SimSolution::CreateConstraintResolutionBuilder CAE::SimSolution::CreateConstraintResolutionBuilder@endlink  <br> 
         <br>  Created in NX8.0.0.  <br>  
        */
        class NXOPENCPP_CAEEXPORT  ConstraintResolutionBuilder : public Builder
        {
            /**  Constraint Resolution Rule */
            public: enum Rule
            {
                RuleApplyFirstConstraint/** apply first constraint on the intersection  */,
                RuleApplySecondConstraint/** apply second constraint on the intersection  */,
                RuleAverageDofValues/** average dof values on the intersection  */,
                RuleAddDofValues/** add dof values on the intersection  */,
                RuleSpecifyDofValues/** specify dof values on the intersection  */,
                RuleIgnoreConflict/** specify dof values on the intersection  */
            };

            private: ConstraintResolutionBuilderImpl * m_constraintresolutionbuilder_impl;
            private: friend class  _ConstraintResolutionBuilderBuilder;
            protected: ConstraintResolutionBuilder();
            public: ~ConstraintResolutionBuilder();
            /**Returns  the new Constraint's property table which can be used to update its property 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::CAE::PropertyTable * PropertyTable
            (
            );
            /**Returns  the resolution rule which will be used to resolve the conflict between the two input constraints 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::CAE::ConstraintResolutionBuilder::Rule ResolveRule
            (
            );
            /**Sets  the resolution rule which will be used to resolve the conflict between the two input constraints 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : nx_masterfem ("Finite Element Modeling") */
            public: void SetResolveRule
            (
                NXOpen::CAE::ConstraintResolutionBuilder::Rule resolutionRule /** resolutionrule */ 
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
