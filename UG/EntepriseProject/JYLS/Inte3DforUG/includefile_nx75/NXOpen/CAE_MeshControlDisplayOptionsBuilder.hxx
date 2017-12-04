#ifndef NXOpen_CAE_MESHCONTROLDISPLAYOPTIONSBUILDER_HXX_INCLUDED
#define NXOpen_CAE_MESHCONTROLDISPLAYOPTIONSBUILDER_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     CAE_MeshControlDisplayOptionsBuilder.ja
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
#include <NXOpen/CAE_MeshControlDisplayOptionsBuilder.hxx>
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
        class MeshControlDisplayOptionsBuilder;
    }
    class Builder;
    namespace CAE
    {
        class _MeshControlDisplayOptionsBuilderBuilder;
        class MeshControlDisplayOptionsBuilderImpl;
        /**
            Represents a @link CAE::MeshControlDisplayOptionsBuilder CAE::MeshControlDisplayOptionsBuilder@endlink 
             <br> To create a new instance of this class, use @link CAE::MeshControlDisplayManager::CreateBuilder CAE::MeshControlDisplayManager::CreateBuilder@endlink  <br> 
         <br>  Created in NX5.0.0.  <br>  
        */
        class NXOPENCPP_CAEEXPORT  MeshControlDisplayOptionsBuilder : public Builder
        {
            private: MeshControlDisplayOptionsBuilderImpl * m_meshcontroldisplayoptionsbuilder_impl;
            private: friend class  _MeshControlDisplayOptionsBuilderBuilder;
            protected: MeshControlDisplayOptionsBuilder();
            public: ~MeshControlDisplayOptionsBuilder();
            /**Returns  the edge density size 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : None */
            public: int EdgeDensitySize
            (
            );
            /**Sets  the edge density size 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : nx_masterfem ("Finite Element Modeling") */
            public: void SetEdgeDensitySize
            (
                int edgeDensitySize /** edgedensitysize */ 
            );
            /**Returns  the dependent edge density size 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : None */
            public: int DependentEdgeDensitySize
            (
            );
            /**Sets  the dependent edge density size 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : nx_masterfem ("Finite Element Modeling") */
            public: void SetDependentEdgeDensitySize
            (
                int dependentEdgeDensitySize /** dependentedgedensitysize */ 
            );
            /**Returns  the face density size 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : None */
            public: int FaceDensitySize
            (
            );
            /**Sets  the face density size 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : nx_masterfem ("Finite Element Modeling") */
            public: void SetFaceDensitySize
            (
                int faceDensitySize /** facedensitysize */ 
            );
            /**Returns  the mesh mate size 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : None */
            public: int MeshMateSize
            (
            );
            /**Sets  the mesh mate size 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : nx_masterfem ("Finite Element Modeling") */
            public: void SetMeshMateSize
            (
                int meshMateSize /** meshmatesize */ 
            );
            /**Returns  the show through display 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : None */
            public: bool ShowThroughDisplay
            (
            );
            /**Sets  the show through display 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : nx_masterfem ("Finite Element Modeling") */
            public: void SetShowThroughDisplay
            (
                bool showThroughDisplay /** showthroughdisplay */ 
            );
            /**Returns  the shade symbols 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : None */
            public: bool ShadeSymbols
            (
            );
            /**Sets  the shade symbols 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : nx_masterfem ("Finite Element Modeling") */
            public: void SetShadeSymbols
            (
                bool shadeSymbols /** shadesymbols */ 
            );
            /**Returns  the text display 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : None */
            public: bool TextDisplay
            (
            );
            /**Sets  the text display 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : nx_masterfem ("Finite Element Modeling") */
            public: void SetTextDisplay
            (
                bool textDisplay /** textdisplay */ 
            );
            /**Returns  the weld row density size 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : nx_masterfem ("Finite Element Modeling") */
            public: int WeldRowSize
            (
            );
            /**Sets  the weld row density size 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : nx_masterfem ("Finite Element Modeling") */
            public: void SetWeldRowSize
            (
                int weldRowSize /** weldrowsize */ 
            );
            /**Returns  the mapped holes size 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : None */
            public: int MappedHoleSize
            (
            );
            /**Sets  the mapped holes size 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : nx_masterfem ("Finite Element Modeling") */
            public: void SetMappedHoleSize
            (
                int mappedHoleSize /** mappedholesize */ 
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
