#ifndef NXOpen_CAE_DEPENDENTMESH_HXX_INCLUDED
#define NXOpen_CAE_DEPENDENTMESH_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     CAE_DependentMesh.ja
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
#include <NXOpen/CAE_Mesh2d.hxx>
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
        class DependentMesh;
    }
    namespace CAE
    {
        class Mesh2d;
    }
    namespace CAE
    {
        class _DependentMeshBuilder;
        class DependentMeshImpl;
        /** Represents Mesh Recipe  <br> To create or edit an instance of this class, use @link CAE::DependentMeshBuilder CAE::DependentMeshBuilder@endlink  <br> 
         <br>  Created in NX5.0.0.  <br>  
        */
        class NXOPENCPP_CAEEXPORT  DependentMesh : public CAE::Mesh2d
        {
            private: DependentMeshImpl * m_dependentmesh_impl;
            private: friend class  _DependentMeshBuilder;
            protected: DependentMesh();
            public: ~DependentMesh();
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
