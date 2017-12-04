#ifndef NXOpen_CAE_DURABILITYSTATICEVENTBUILDER_HXX_INCLUDED
#define NXOpen_CAE_DURABILITYSTATICEVENTBUILDER_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     CAE_DurabilityStaticEventBuilder.ja
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
#include <NXOpen/CAE_DurabilityEventBuilder.hxx>
#include <NXOpen/CAE_DurabilityStaticEventBuilder.hxx>
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
        class DurabilityStaticEventBuilder;
    }
    namespace CAE
    {
        class DurabilityEventBuilder;
    }
    namespace CAE
    {
        class _DurabilityStaticEventBuilderBuilder;
        class DurabilityStaticEventBuilderImpl;
        /** Represents the builder for the static durability event.  <br> There is no kf creator for this. <br> 
         <br>  Created in NX7.5.0.  <br>  
        */
        class NXOPENCPP_CAEEXPORT  DurabilityStaticEventBuilder : public CAE::DurabilityEventBuilder
        {
            /** the static excitation type.*/
            public: enum ExcitationTypeEnum
            {
                ExcitationTypeEnumPattern/** Pattern */,
                ExcitationTypeEnumResultPath/** Result Path */,
                ExcitationTypeEnumFunction/** Function */
            };

            private: DurabilityStaticEventBuilderImpl * m_durabilitystaticeventbuilder_impl;
            private: friend class  _DurabilityStaticEventBuilderBuilder;
            protected: DurabilityStaticEventBuilder();
            public: ~DurabilityStaticEventBuilder();
            /**Returns  the excitation type. 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : nx_adv_durability ("NX Advanced Durability") */
            public: NXOpen::CAE::DurabilityStaticEventBuilder::ExcitationTypeEnum ExcitationType
            (
            );
            /**Sets  the excitation type. 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : nx_adv_durability ("NX Advanced Durability") */
            public: void SetExcitationType
            (
                NXOpen::CAE::DurabilityStaticEventBuilder::ExcitationTypeEnum excitationType /** excitationtype */ 
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
