#ifndef NXOpen_ROUTING_ELECTRICAL_HARNESSDEVICE_HXX_INCLUDED
#define NXOpen_ROUTING_ELECTRICAL_HARNESSDEVICE_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     Routing_Electrical_HarnessDevice.ja
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
#include <NXOpen/Routing_SingleDevice.hxx>
#include <NXOpen/libnxopencpp_routing_exports.hxx>

#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable:4996)
#endif
#ifdef __GNUC__
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

namespace NXOpen
{
    namespace Routing
    {
        namespace Electrical
        {
            class HarnessDevice;
        }
    }
    namespace Routing
    {
        namespace Electrical
        {
            class HarnessDefinition;
        }
    }
    namespace Routing
    {
        class SingleDevice;
    }
    namespace Routing
    {
        namespace Electrical
        {
            class _HarnessDeviceBuilder;
            class HarnessDeviceImpl;
            /**
                        The Electrical HarnessDevice corresponds to a harness instance of the 
                        @link Routing::SingleDevice Routing::SingleDevice@endlink .
                     <br> To create a new instance of this class, use @link Routing::Electrical::HarnessDeviceCollection::CreateHarnessDevice Routing::Electrical::HarnessDeviceCollection::CreateHarnessDevice@endlink  <br> 
             <br>  Created in NX4.0.2.  <br>  
            */
            class NXOPENCPP_ROUTINGEXPORT  HarnessDevice : public Routing::SingleDevice
            {
                private: HarnessDeviceImpl * m_harnessdevice_impl;
                private: friend class  _HarnessDeviceBuilder;
                protected: HarnessDevice();
                public: ~HarnessDevice();
                /** Get harness definition.  @return  
                 <br>  Created in NX4.0.2.  <br>  
                 <br> License requirements : routing_advanced ("Routing Advanced"), routing_base ("Routing Basic") */
                public: NXOpen::Routing::Electrical::HarnessDefinition * GetHarnessDefinition
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
