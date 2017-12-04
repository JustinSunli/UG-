#ifndef NXOpen_PDM_OPERATIONERRORS_HXX_INCLUDED
#define NXOpen_PDM_OPERATIONERRORS_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     PDM_OperationErrors.ja
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
#include <NXOpen/TransientObject.hxx>
#include <NXOpen/libnxopencpp_pdm_exports.hxx>

#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable:4996)
#endif
#ifdef __GNUC__
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

namespace NXOpen
{
    namespace PDM
    {
        class OperationErrors;
    }
    namespace PDM
    {
        class OperationErrorsImpl;
        /** Represents Operation Errors to be returned in TCIN related operations 
         <br>  Created in NX8.5.0.  <br>  
        */
        class NXOPENCPP_PDMEXPORT  OperationErrors : public TransientObject
        {
            private: OperationErrorsImpl * m_operationerrors_impl;
            /// \cond NX_NO_DOC 
            public: explicit OperationErrors(void *ptr);
            /// \endcond 
            /** Frees the object from memory.  After this method is called,
                    it is illegal to use the object.  In .NET, this method is automatically
                    called when the object is deleted by the garbage collector.  
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : None */
            public: virtual ~OperationErrors();
        }; //lint !e1712 default constructor not defined for class  

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
