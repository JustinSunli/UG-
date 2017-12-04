#ifndef NXOpen_CAE_MODELCHECK_FACECLEARANCECHECKBUILDER_HXX_INCLUDED
#define NXOpen_CAE_MODELCHECK_FACECLEARANCECHECKBUILDER_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     CAE_ModelCheck_FaceClearanceCheckBuilder.ja
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
#include <NXOpen/CAE_ModelCheck_FaceClearanceCheckBuilder.hxx>
#include <NXOpen/Expression.hxx>
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
        namespace ModelCheck
        {
            class FaceClearanceCheckBuilder;
        }
    }
    class Builder;
    namespace CAE
    {
        class CaeGroup;
    }
    class Expression;
    namespace CAE
    {
        namespace ModelCheck
        {
            class _FaceClearanceCheckBuilderBuilder;
            class FaceClearanceCheckBuilderImpl;
            /**Represents a @link CAE::ModelCheck::FaceClearanceCheckBuilder CAE::ModelCheck::FaceClearanceCheckBuilder@endlink  to perform polygon face
                interference or clearance check. You can do the check by @link Builder::Commit Builder::Commit@endlink  or 
                @link CAE::ModelCheck::FaceClearanceCheckBuilder::DoCheck CAE::ModelCheck::FaceClearanceCheckBuilder::DoCheck@endlink . @link Builder::Commit Builder::Commit@endlink 
                performs the check and displays the failed faces in graphics window. @link CAE::ModelCheck::FaceClearanceCheckBuilder::DoCheck CAE::ModelCheck::FaceClearanceCheckBuilder::DoCheck@endlink 
                performs the check and if faces are detected violating the check, returns the output group containing the failed faces.
                 <br> Not support KF <br> 
             <br>  Created in NX8.5.0.  <br>  
            */
            class NXOPENCPP_CAEEXPORT  FaceClearanceCheckBuilder : public Builder
            {
                private: FaceClearanceCheckBuilderImpl * m_faceclearancecheckbuilder_impl;
                private: friend class  _FaceClearanceCheckBuilderBuilder;
                protected: FaceClearanceCheckBuilder();
                public: ~FaceClearanceCheckBuilder();
                /**Returns  Define the clearance. If the clearance value is zero, an intersection check between faces will be
                        performed. If the clearance value is non-zero, a clearance check will be performed. If a negative
                        non-zero clearance is set, the absolute value will be used 
                 <br>  Created in NX8.5.0.  <br>  
                 <br> License requirements : nx_masterfem ("Finite Element Modeling") */
                public: NXOpen::Expression * Clearance
                (
                );
                /** Perform the clearance check. All polygon faces on the current display are considered for
                        the check. If polygon faces are detected as intersecting or violating the given clearance, they
                        are placed in a group, which would be returned  @return  the group contains the failed faces 
                 <br>  Created in NX8.5.0.  <br>  
                 <br> License requirements : nx_masterfem ("Finite Element Modeling") */
                public: NXOpen::CAE::CaeGroup * DoCheck
                (
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
