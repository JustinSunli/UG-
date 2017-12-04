#ifndef NXOpen_CAE_COMPANIONRESULT_HXX_INCLUDED
#define NXOpen_CAE_COMPANIONRESULT_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     CAE_CompanionResult.ja
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
#include <NXOpen/CAE_CompanionResult.hxx>
#include <NXOpen/TaggedObject.hxx>
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
        class CompanionResult;
    }
    namespace CAE
    {
        class _CompanionResultBuilder;
        class CompanionResultImpl;
        /**    @brief  Represents additional results data that will augment a primary set of Analysis results associated to a  
                 @link CAE::SimSolution CAE::SimSolution@endlink .  

          
               <br> 
              Companion results do not have to have any FE Model data ( Nodes/Elements). Companion results will use FE Model data from primary results assosicated
              with the solution.  To create/edit a CompanionResult you can use the @link CAE::CompanionResultBuilder CAE::CompanionResultBuilder@endlink  Object. 
               <br> 
             
              <br> To create or edit an instance of this class, use @link CAE::CompanionResultBuilder CAE::CompanionResultBuilder@endlink  <br> 
         <br>  Created in NX7.5.0.  <br>  
        */
        class NXOPENCPP_CAEEXPORT  CompanionResult : public TaggedObject
        {
            private: CompanionResultImpl * m_companionresult_impl;
            private: friend class  _CompanionResultBuilder;
            protected: CompanionResult();
            public: ~CompanionResult();
            /**Returns  the name given to this Solutions Companion Result object.  Used for user display 
                        and identification purposes.
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: NXString Name
            (
            );
            /**Sets  the name given to this Solutions Companion Result object.  Used for user display 
                        and identification purposes.
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : nx_masterfem ("Finite Element Modeling") */
            public: void SetName
            (
                const NXString & name /** name */ 
            );
            /**Sets  the name given to this Solutions Companion Result object.  Used for user display 
                        and identification purposes.
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : nx_masterfem ("Finite Element Modeling") */
            void SetName
            (
                const char * name /** name */ 
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
