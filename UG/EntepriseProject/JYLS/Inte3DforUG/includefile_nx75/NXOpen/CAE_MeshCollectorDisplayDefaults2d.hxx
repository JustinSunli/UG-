#ifndef NXOpen_CAE_MESHCOLLECTORDISPLAYDEFAULTS2D_HXX_INCLUDED
#define NXOpen_CAE_MESHCOLLECTORDISPLAYDEFAULTS2D_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     CAE_MeshCollectorDisplayDefaults2d.ja
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
#include <NXOpen/CAE_MeshCollectorDisplayDefaults.hxx>
#include <NXOpen/CAE_MeshDisplayTypes.hxx>
#include <NXOpen/DisplayableObject.hxx>
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
        class MeshCollectorDisplayDefaults2d;
    }
    namespace CAE
    {
        class MeshCollectorDisplayDefaults;
    }
    class NXColor;
    namespace CAE
    {
    }
    namespace CAE
    {
        class MeshCollectorDisplayDefaults2dImpl;
        /** Represents 2d Mesh Display Settings  <br> To obtain an instance of this class use 
                                   CAE::MeshCollector, or CAE::MeshCollectorOccurrence classes <br> 
         <br>  Created in NX8.5.0.  <br>  
        */
        class NXOPENCPP_CAEEXPORT  MeshCollectorDisplayDefaults2d : public CAE::MeshCollectorDisplayDefaults
        {
            private: MeshCollectorDisplayDefaults2dImpl * m_meshcollectordisplaydefaults2d_impl;
            /// \cond NX_NO_DOC 
            public: explicit MeshCollectorDisplayDefaults2d(void *ptr);
            /// \endcond 
            /** Frees the object from memory.  After this method is called,
                    it is illegal to use the object.  In .NET, this method is automatically
                    called when the object is deleted by the garbage collector.  
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : None */
            public: virtual ~MeshCollectorDisplayDefaults2d();
            /**Returns  the line width of the element. 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : nx_masterfem ("Finite Element Modeling") OR nx_design_sim ("NX Design Simulation") */
            public: NXOpen::DisplayableObject::ObjectWidth LineWidth
            (
            );
            /**Sets  the line width of the element. 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : nx_masterfem ("Finite Element Modeling") OR nx_design_sim ("NX Design Simulation") */
            public: void SetLineWidth
            (
                NXOpen::DisplayableObject::ObjectWidth width /** width */ 
            );
            /**Returns  the element shrink percentage (0 to 100). 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : nx_masterfem ("Finite Element Modeling") OR nx_design_sim ("NX Design Simulation") */
            public: int ElementShrinkPercent
            (
            );
            /**Sets  the element shrink percentage (0 to 100). 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : nx_masterfem ("Finite Element Modeling") OR nx_design_sim ("NX Design Simulation") */
            public: void SetElementShrinkPercent
            (
                int shrink /** shrink */ 
            );
            /**Returns  the element shaded edge visibility. 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : nx_masterfem ("Finite Element Modeling") OR nx_design_sim ("NX Design Simulation") */
            public: bool DisplayShadedEdges
            (
            );
            /**Sets  the element shaded edge visibility. 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : nx_masterfem ("Finite Element Modeling") OR nx_design_sim ("NX Design Simulation") */
            public: void SetDisplayShadedEdges
            (
                bool visibility /** visibility */ 
            );
            /**Returns  the element shaded edge color. 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : nx_masterfem ("Finite Element Modeling") OR nx_design_sim ("NX Design Simulation") */
            public: NXOpen::NXColor * ShadedEdgeColor
            (
            );
            /**Sets  the element shaded edge color. 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : nx_masterfem ("Finite Element Modeling") OR nx_design_sim ("NX Design Simulation") */
            public: void SetShadedEdgeColor
            (
                NXOpen::NXColor * color /** color */ 
            );
            /**Returns  the element thick shell display setting. 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : nx_masterfem ("Finite Element Modeling") OR nx_design_sim ("NX Design Simulation") */
            public: bool DisplayThickShell
            (
            );
            /**Sets  the element thick shell display setting. 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : nx_masterfem ("Finite Element Modeling") OR nx_design_sim ("NX Design Simulation") */
            public: void SetDisplayThickShell
            (
                bool visibility /** visibility */ 
            );
            /**Returns  the element normals display setting. 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : nx_masterfem ("Finite Element Modeling") OR nx_design_sim ("NX Design Simulation") */
            public: NXOpen::CAE::ElementNormalsType ElementNormals
            (
            );
            /**Sets  the element normals display setting. 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : nx_masterfem ("Finite Element Modeling") OR nx_design_sim ("NX Design Simulation") */
            public: void SetElementNormals
            (
                NXOpen::CAE::ElementNormalsType normals /** normals */ 
            );
            /**Returns  the element normals color. 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : nx_masterfem ("Finite Element Modeling") OR nx_design_sim ("NX Design Simulation") */
            public: NXOpen::NXColor * NormalsColor
            (
            );
            /**Sets  the element normals color. 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : nx_masterfem ("Finite Element Modeling") OR nx_design_sim ("NX Design Simulation") */
            public: void SetNormalsColor
            (
                NXOpen::NXColor * color /** color */ 
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
