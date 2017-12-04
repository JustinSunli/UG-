#ifndef NXOpen_DISPLAY_ENTITYSELECTIONPLANE_HXX_INCLUDED
#define NXOpen_DISPLAY_ENTITYSELECTIONPLANE_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     Display_EntitySelectionPlane.ja
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
#include <NXOpen/DisplayableObject.hxx>
#include <NXOpen/libnxopencpp_display_exports.hxx>

#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable:4996)
#endif
#ifdef __GNUC__
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

namespace NXOpen
{
    namespace Display
    {
        class EntitySelectionPlane;
    }
    class DisplayableObject;
    namespace Display
    {
        class _EntitySelectionPlaneBuilder;
        class EntitySelectionPlaneImpl;
        /** Represents a grid on a datum plane  <br> Entity selection planes are not supported in KF. <br> 
         <br>  Created in NX8.0.0.  <br>  
        */
        class NXOPENCPP_DISPLAYEXPORT  EntitySelectionPlane : public DisplayableObject
        {
            private: EntitySelectionPlaneImpl * m_entityselectionplane_impl;
            private: friend class  _EntitySelectionPlaneBuilder;
            protected: EntitySelectionPlane();
            public: ~EntitySelectionPlane();
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
