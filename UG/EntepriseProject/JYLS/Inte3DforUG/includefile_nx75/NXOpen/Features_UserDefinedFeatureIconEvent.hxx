#ifndef NXOpen_FEATURES_USERDEFINEDFEATUREICONEVENT_HXX_INCLUDED
#define NXOpen_FEATURES_USERDEFINEDFEATUREICONEVENT_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     Features_UserDefinedFeatureIconEvent.ja
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
#include <NXOpen/TaggedObject.hxx>
#include <NXOpen/libnxopencpp_features_exports.hxx>

#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable:4996)
#endif
#ifdef __GNUC__
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

namespace NXOpen
{
    namespace Features
    {
        class UserDefinedFeatureIconEvent;
    }
    namespace Features
    {
        class Feature;
    }
    namespace Features
    {
        class _UserDefinedFeatureIconEventBuilder;
        class UserDefinedFeatureIconEventImpl;
        /** JA interface for the UserDefinedFeatureIconEvent object  <br> This calls cannot be created <br> 
         <br>  Created in NX8.0.0.  <br>  
        */
        class NXOPENCPP_FEATURESEXPORT  UserDefinedFeatureIconEvent : public TaggedObject
        {
            private: UserDefinedFeatureIconEventImpl * m_userdefinedfeatureiconevent_impl;
            private: friend class  _UserDefinedFeatureIconEventBuilder;
            protected: UserDefinedFeatureIconEvent();
            public: ~UserDefinedFeatureIconEvent();
            /**Returns  the UDF instantiation feature 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Features::Feature * Instantiation
            (
            );
            /**Returns  the class name 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : None */
            public: NXString ClassName
            (
            );
            /**Returns  the icon name 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : None */
            public: NXString IconName
            (
            );
            /**Sets  the icon name 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : None */
            public: void SetIconName
            (
                const NXString & className /** class name */ 
            );
            /**Sets  the icon name 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : None */
            void SetIconName
            (
                const char * className /** class name */ 
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
