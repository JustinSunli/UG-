#ifndef NXOpen_CAE_ASSYFEMPART_HXX_INCLUDED
#define NXOpen_CAE_ASSYFEMPART_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     CAE_AssyFemPart.ja
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
#include <NXOpen/CAE_BaseFemPart.hxx>
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
        class AssyFemPart;
    }
    namespace CAE
    {
        class BaseFemPart;
    }
    class Part;
    namespace CAE
    {
        class _AssyFemPartBuilder;
        class AssyFemPartImpl;
        /**  @brief  Represents an NX part of type .afm.  

           <br> Use the @link PartCollection PartCollection@endlink  class to load or create a part. <br> 
         <br>  Created in NX6.0.0.  <br>  
        */
        class NXOPENCPP_CAEEXPORT  AssyFemPart : public CAE::BaseFemPart
        {
            private: AssyFemPartImpl * m_assyfempart_impl;
            private: friend class  _AssyFemPartBuilder;
            protected: AssyFemPart();
            public: ~AssyFemPart();
            /** Finalizes the creation of the assembly fem part file. 
                        This method should be called immediately after
                        creating the assembly fem part file.
                        This method should be called only once for
                        each assembly fem part file. The second call to the
                        method will raise an error. 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : nx_masterfem ("Finite Element Modeling") OR nx_design_sim ("NX Design Simulation") */
            public: void FinalizeCreation
            (
                NXOpen::Part * cadPart /** the cad part to be associated with the fem part*/,
                const NXString & solverTypeName /** the name of the solver. Refer to NX help for more information   <br>  NOTE: The full Unicode character set is not supported for this parameter.  <br> */,
                const NXString & analysisTypeType /** the name of the analysis type. Refer to NX help for more information   <br>  NOTE: The full Unicode character set is not supported for this parameter.  <br> */,
                std::vector<NXString> & description /** description   <br>  NOTE: The full Unicode character set is not supported for this parameter.  <br> */
            );
            /** Finalizes the creation of the assembly fem part file. 
                        This method should be called immediately after
                        creating the assembly fem part file.
                        This method should be called only once for
                        each assembly fem part file. The second call to the
                        method will raise an error. 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : nx_masterfem ("Finite Element Modeling") OR nx_design_sim ("NX Design Simulation") */
            void FinalizeCreation
            (
                NXOpen::Part * cadPart /** the cad part to be associated with the fem part*/,
                const char * solverTypeName /** the name of the solver. Refer to NX help for more information   <br>  NOTE: The full Unicode character set is not supported for this parameter.  <br> */,
                const char * analysisTypeType /** the name of the analysis type. Refer to NX help for more information   <br>  NOTE: The full Unicode character set is not supported for this parameter.  <br> */,
                std::vector<NXString> & description /** description   <br>  NOTE: The full Unicode character set is not supported for this parameter.  <br> */
            );
            /**Returns  the master cad part associated with the assembly fem part
                    
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : nx_masterfem ("Finite Element Modeling") OR nx_design_sim ("NX Design Simulation") */
            public: NXOpen::Part * MasterCadPart
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
