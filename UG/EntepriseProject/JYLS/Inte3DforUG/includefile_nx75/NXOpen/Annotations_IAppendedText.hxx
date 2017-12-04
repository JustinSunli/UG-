#ifndef NXOpen_ANNOTATIONS_IAPPENDEDTEXT_HXX_INCLUDED
#define NXOpen_ANNOTATIONS_IAPPENDEDTEXT_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     Annotations_IAppendedText.ja
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
#include <NXOpen/Annotations_AppendedText.hxx>
#include <NXOpen/INXObject.hxx>
#include <NXOpen/libnxopencpp_annotations_exports.hxx>

#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable:4996)
#endif
#ifdef __GNUC__
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

namespace NXOpen
{
    namespace Annotations
    {
        class IAppendedText;
    }
    namespace Annotations
    {
        class AppendedText;
    }
    class INXObject;
    namespace Annotations
    {
        /** Represents an object that has appended text 
         <br>  Created in NX4.0.0.  <br>  
        */
        class NXOPENCPP_ANNOTATIONSEXPORT  IAppendedText : public virtual INXObject
        {
            public: virtual ~IAppendedText() {}
            /** Returns the appended text  @return  Appended text 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : None */
            public: virtual NXOpen::Annotations::AppendedText * GetAppendedText
            (
            ) = 0;
            /** Sets the appended text 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : geometric_tol ("GDT") OR drafting ("DRAFTING") */
            public: virtual void SetAppendedText
            (
                NXOpen::Annotations::AppendedText * appendedText /** Appended text */
            ) = 0;
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
