#ifndef NXOpen_CAE_MESH2DBUILDER_HXX_INCLUDED
#define NXOpen_CAE_MESH2DBUILDER_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     CAE_Mesh2dBuilder.ja
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
#include <NXOpen/Builder.hxx>
#include <NXOpen/CAE_ElementTypeBuilder.hxx>
#include <NXOpen/CAE_Mesh2dBuilder.hxx>
#include <NXOpen/SelectObjectList.hxx>
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
        class Mesh2dBuilder;
    }
    class Builder;
    namespace CAE
    {
        class ElementTypeBuilder;
    }
    namespace CAE
    {
        class Mesh;
    }
    namespace CAE
    {
        class PropertyTable;
    }
    class SelectDisplayableObjectList;
    namespace CAE
    {
        class _Mesh2dBuilderBuilder;
        class Mesh2dBuilderImpl;
        /** Represents 2D Mesh
             *  Used to create a @link CAE::Mesh2d CAE::Mesh2d@endlink 
             <br> To create a new instance of this class, use @link CAE::MeshManager::CreateMesh2dBuilder CAE::MeshManager::CreateMesh2dBuilder@endlink  <br> 
         <br>  Created in NX6.0.0.  <br>  
        */
        class NXOPENCPP_CAEEXPORT  Mesh2dBuilder : public Builder
        {
            /** the geometry usage type */
            public: enum GeometryType
            {
                GeometryTypeMain/** main geometry*/,
                GeometryTypeFillet/** Fillet */,
                GeometryTypeCylinder/** Cylinder */
            };

            private: Mesh2dBuilderImpl * m_mesh2dbuilder_impl;
            private: friend class  _Mesh2dBuilderBuilder;
            protected: Mesh2dBuilder();
            public: ~Mesh2dBuilder();
            /**Returns  the type of geometry to mesh 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : nx_masterfem ("Finite Element Modeling") */
            public: NXOpen::CAE::Mesh2dBuilder::GeometryType GeometryUsageType
            (
            );
            /**Sets  the type of geometry to mesh 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : nx_masterfem ("Finite Element Modeling") */
            public: void SetGeometryUsageType
            (
                NXOpen::CAE::Mesh2dBuilder::GeometryType type /** type */ 
            );
            /**Returns  the selection objects 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : nx_masterfem ("Finite Element Modeling") */
            public: NXOpen::SelectDisplayableObjectList * SelectionList
            (
            );
            /**Returns  the element type builder.  
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : nx_masterfem ("Finite Element Modeling") */
            public: NXOpen::CAE::ElementTypeBuilder * ElementType
            (
            );
            /**Returns  the property table associated with the mesh. 
                        The property table contains the parameters needed for the generation
                        of the mesh.  
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : nx_masterfem ("Finite Element Modeling") */
            public: NXOpen::CAE::PropertyTable * PropertyTable
            (
            );
            /**Returns  the auto reset geometry option. All manually performed edits will be removed if this option is true.
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : nx_masterfem ("Finite Element Modeling") */
            public: bool AutoResetOption
            (
            );
            /**Sets  the auto reset geometry option. All manually performed edits will be removed if this option is true.
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : nx_masterfem ("Finite Element Modeling") */
            public: void SetAutoResetOption
            (
                bool fAutoReset /** fautoreset */ 
            );
            /** Commits the creation of the 
                                     @link CAE::Mesh0d CAE::Mesh0d@endlink ,
                                     @link CAE::Mesh1d CAE::Mesh1d@endlink ,
                                     @link CAE::Mesh2d CAE::Mesh2d@endlink ,
                                     @link CAE::Mesh3d CAE::Mesh3d@endlink  object
                        or Commits the changes made to the @link CAE::Mesh0d CAE::Mesh0d@endlink ,
                                     @link CAE::Mesh1d CAE::Mesh1d@endlink ,
                                     @link CAE::Mesh2d CAE::Mesh2d@endlink ,
                                     @link CAE::Mesh3d CAE::Mesh3d@endlink  object.
                      @return  
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : nx_masterfem ("Finite Element Modeling") */
            public: std::vector<NXOpen::CAE::Mesh *> CommitMesh
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
