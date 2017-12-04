#ifndef NXOpen_CAE_LAMINATEMETASOLBUILDER_HXX_INCLUDED
#define NXOpen_CAE_LAMINATEMETASOLBUILDER_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     CAE_LaminateMetaSolBuilder.ja
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
#include <NXOpen/CAE_LaminateMetaSolBuilder.hxx>
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
        class LaminateMetaSolBuilder;
    }
    class Builder;
    namespace CAE
    {
        class _LaminateMetaSolBuilderBuilder;
        class LaminateMetaSolBuilderImpl;
        /** Represents a @link CAE::LaminateMetaSol CAE::LaminateMetaSol@endlink  builder  <br> To create a new instance of this class, use @link CAE::SimSimulation::CreateLaminateMetaSolBuilder CAE::SimSimulation::CreateLaminateMetaSolBuilder@endlink  <br> 
        Default values.
        <table border="1"> 
         
        <tr><th> 
        Property</th>  <th> 
        Value</th> </tr>
        <tr><td> 
         
        FailureIndexEnum </td> <td> 
         
        AbsMax </td> </tr> 

        <tr><td> 
         
        Index </td> <td> 
         
        True </td> </tr> 

        <tr><td> 
         
        InputType </td> <td> 
         
        SolverShellStressResultant </td> </tr> 

        <tr><td> 
         
        Margin </td> <td> 
         
        False </td> </tr> 

        <tr><td> 
         
        MarginEnum </td> <td> 
         
        Min </td> </tr> 

        <tr><td> 
         
        PlyStrain </td> <td> 
         
        False </td> </tr> 

        <tr><td> 
         
        PlyStrainEnum </td> <td> 
         
        MaxMin </td> </tr> 

        <tr><td> 
         
        PlyStress </td> <td> 
         
        False </td> </tr> 

        <tr><td> 
         
        PlyStressEnum </td> <td> 
         
        MaxMin </td> </tr> 

        </table>  

         <br>  Created in NX6.0.0.  <br>  
        */
        class NXOPENCPP_CAEEXPORT  LaminateMetaSolBuilder : public Builder
        {
            /** Type of input  */
            public: enum MyInputType
            {
                MyInputTypeSolverShellStressResultant/** solver shell stress resultant */ ,
                MyInputTypeSolverPlyStressesandStrains/** solver ply stressesand strains */ 
            };

            /** Results Envelope Types */
            public: enum PlyStressType
            {
                PlyStressTypeMaxMin/** Max and Min */,
                PlyStressTypeMin/** Min */,
                PlyStressTypeMax/** Max */,
                PlyStressTypeAbsMax/** Absolute Max */
            };

            /** Results Envelope Types */
            public: enum PlyStrainType
            {
                PlyStrainTypeMaxMin/** Max and Min */,
                PlyStrainTypeMin/** Min */,
                PlyStrainTypeMax/** Max */,
                PlyStrainTypeAbsMax/** Absolute Max */
            };

            /** Results Envelope Types */
            public: enum FailureIndexType
            {
                FailureIndexTypeMaxMin/** Max and Min */,
                FailureIndexTypeMin/** Min */,
                FailureIndexTypeMax/** Max */,
                FailureIndexTypeAbsMax/** Absolute Max */
            };

            /** Results Envelope Types */
            public: enum MarginType
            {
                MarginTypeMaxMin/** Max and Min */,
                MarginTypeMin/** Min */,
                MarginTypeMax/** Max */,
                MarginTypeAbsMax/** Absolute Max */
            };

            private: LaminateMetaSolBuilderImpl * m_laminatemetasolbuilder_impl;
            private: friend class  _LaminateMetaSolBuilderBuilder;
            protected: LaminateMetaSolBuilder();
            public: ~LaminateMetaSolBuilder();
            /**Returns  the metasol name 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: NXString MetasolName
            (
            );
            /**Sets  the metasol name 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : nx_lam_composites ("Laminate Composites") */
            public: void SetMetasolName
            (
                const NXString & metasolName /** metasolname */ 
            );
            /**Sets  the metasol name 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : nx_lam_composites ("Laminate Composites") */
            void SetMetasolName
            (
                const char * metasolName /** metasolname */ 
            );
            /**Returns  the solution list 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: int RefSolIndex
            (
            );
            /**Sets  the solution list 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : nx_lam_composites ("Laminate Composites") */
            public: void SetRefSolIndex
            (
                int index /** index */ 
            );
            /**Returns  the input type 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::CAE::LaminateMetaSolBuilder::MyInputType InputType
            (
            );
            /**Sets  the input type 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : nx_lam_composites ("Laminate Composites") */
            public: void SetInputType
            (
                NXOpen::CAE::LaminateMetaSolBuilder::MyInputType inputType /** inputtype */ 
            );
            /**Returns  the ply stresses 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: bool PlyStress
            (
            );
            /**Sets  the ply stresses 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : nx_lam_composites ("Laminate Composites") */
            public: void SetPlyStress
            (
                bool plyStress /** plystress */ 
            );
            /**Returns  the ply strains 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: bool PlyStrain
            (
            );
            /**Sets  the ply strains 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : nx_lam_composites ("Laminate Composites") */
            public: void SetPlyStrain
            (
                bool plyStrain /** plystrain */ 
            );
            /**Returns  the indices 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: bool Index
            (
            );
            /**Sets  the indices 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : nx_lam_composites ("Laminate Composites") */
            public: void SetIndex
            (
                bool index /** index */ 
            );
            /**Returns  the margins 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: bool Margin
            (
            );
            /**Sets  the margins 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : nx_lam_composites ("Laminate Composites") */
            public: void SetMargin
            (
                bool margin /** margin */ 
            );
            /** Returns the margins  @return  
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: int GetSelectedResultSet
            (
                int index /** failure index */
            );
            /** Sets the selected result set. 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : nx_lam_composites ("Laminate Composites") */
            public: void SetSelectedResultSet
            (
                int index /** failure index */,
                int selectedResultSet /** selected result set */ 
            );
            /**Returns  the ply stress value 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::CAE::LaminateMetaSolBuilder::PlyStressType PlyStressEnum
            (
            );
            /**Sets  the ply stress value 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : nx_lam_composites ("Laminate Composites") */
            public: void SetPlyStressEnum
            (
                NXOpen::CAE::LaminateMetaSolBuilder::PlyStressType plystress /** plystress */ 
            );
            /**Returns  the ply strain value 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::CAE::LaminateMetaSolBuilder::PlyStrainType PlyStrainEnum
            (
            );
            /**Sets  the ply strain value 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : nx_lam_composites ("Laminate Composites") */
            public: void SetPlyStrainEnum
            (
                NXOpen::CAE::LaminateMetaSolBuilder::PlyStrainType plystrain /** plystrain */ 
            );
            /**Returns  the ply failure index value 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::CAE::LaminateMetaSolBuilder::FailureIndexType FailureIndexEnum
            (
            );
            /**Sets  the ply failure index value 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : nx_lam_composites ("Laminate Composites") */
            public: void SetFailureIndexEnum
            (
                NXOpen::CAE::LaminateMetaSolBuilder::FailureIndexType falureindex /** falureindex */ 
            );
            /**Returns  the ply margin value 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::CAE::LaminateMetaSolBuilder::MarginType MarginEnum
            (
            );
            /**Sets  the ply margin value 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : nx_lam_composites ("Laminate Composites") */
            public: void SetMarginEnum
            (
                NXOpen::CAE::LaminateMetaSolBuilder::MarginType margin /** margin */ 
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