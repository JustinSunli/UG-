#ifndef NXOpen_ANNOTATIONS_FCFDATA_HXX_INCLUDED
#define NXOpen_ANNOTATIONS_FCFDATA_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     Annotations_FcfData.ja
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
#include <NXOpen/Annotations_FcfFrameData.hxx>
#include <NXOpen/Annotations_SimpleDraftingAidPreferences.hxx>
#include <NXOpen/TransientObject.hxx>
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
        class FcfData;
    }
    namespace Annotations
    {
        class FcfFrameData;
    }
    namespace Annotations
    {
        class SimpleDraftingAidPreferences;
    }
    namespace Annotations
    {
    }
    namespace Annotations
    {
        class FcfDataImpl;
        /** Represents FCF data 
         <br>  Created in NX4.0.0.  <br>  
        */
        class NXOPENCPP_ANNOTATIONSEXPORT  FcfData : public TransientObject
        {
            private: FcfDataImpl * m_fcfdata_impl;
            /// \cond NX_NO_DOC 
            public: explicit FcfData(void *ptr);
            /// \endcond 
            /** Frees the object from memory.  After this method is called,
                    it is illegal to use the object.  In .NET, this method is automatically
                    called when the object is deleted by the garbage collector.  
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : None */
            public: virtual ~FcfData();
            /** Returns the FCF frames data.  @return  FCF frame data 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Annotations::FcfFrameData * GetFrameData
            (
            );
            /** Sets the FCF frames data. 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : None */
            public: void SetFrameData
            (
                NXOpen::Annotations::FcfFrameData * frameData /** New FCF frame data */
            );
            /** Returns the FCF preferences.  @return  FCF preferences 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Annotations::SimpleDraftingAidPreferences * GetSimpleDraftingAidPreferences
            (
            );
            /** Sets the FCF preferences. 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : None */
            public: void SetSimpleDraftingAidPreferences
            (
                NXOpen::Annotations::SimpleDraftingAidPreferences * preferences /** New FCF preferences */
            );
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
