#ifndef NXOpen_GEOMETRICANALYSIS_SURFACECONTINUITYANALYSISBUILDER_HXX_INCLUDED
#define NXOpen_GEOMETRICANALYSIS_SURFACECONTINUITYANALYSISBUILDER_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     GeometricAnalysis_SurfaceContinuityAnalysisBuilder.ja
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
#include <NXOpen/GeometricAnalysis_SurfaceContinuityAnalysisBuilder.hxx>
#include <NXOpen/GeometricUtilities_CombOptionsBuilder.hxx>
#include <NXOpen/SelectObjectList.hxx>
#include <NXOpen/ugmath.hxx>
#include <NXOpen/libnxopencpp_geometricanalysis_exports.hxx>

#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable:4996)
#endif
#ifdef __GNUC__
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

namespace NXOpen
{
    namespace GeometricAnalysis
    {
        class SurfaceContinuityAnalysisBuilder;
    }
    class Builder;
    class DisplayableObject;
    class Face;
    namespace GeometricUtilities
    {
        class CombOptionsBuilder;
    }
    class SelectNXObjectList;
    namespace GeometricAnalysis
    {
        class _SurfaceContinuityAnalysisBuilderBuilder;
        class SurfaceContinuityAnalysisBuilderImpl;
        /** Represents a @link GeometricAnalysis::SurfaceContinuityAnalysis GeometricAnalysis::SurfaceContinuityAnalysis@endlink  builder  <br> To create a new instance of this class, use @link GeometricAnalysis::AnalysisObjectCollection::CreateSurfaceContinuityAnalysisBuilder GeometricAnalysis::AnalysisObjectCollection::CreateSurfaceContinuityAnalysisBuilder@endlink  <br> 
        Default values.
        <table border="1"> 
         
        <tr><th> 
        Property</th>  <th> 
        Value</th> </tr>
        <tr><td> 
         
        CurvatureCheck </td> <td> 
         
        Sectional </td> </tr> 

        <tr><td> 
         
        G0 </td> <td> 
         
        True </td> </tr> 

        <tr><td> 
         
        G1 </td> <td> 
         
        False </td> </tr> 

        <tr><td> 
         
        G2 </td> <td> 
         
        False </td> </tr> 

        <tr><td> 
         
        G3 </td> <td> 
         
        False </td> </tr> 

        </table>  

         <br>  Created in NX6.0.0.  <br>  
        */
        class NXOPENCPP_GEOMETRICANALYSISEXPORT  SurfaceContinuityAnalysisBuilder : public Builder
        {
            /** Two possible types for the dialog */
            public: enum Types
            {
                TypesEdgeToEdge/** edge to edge */ ,
                TypesEdgeToFace/** edge to face */ 
            };

            /** Curvature types */
            public: enum CurvatureType
            {
                CurvatureTypeSectional/** sectional */ ,
                CurvatureTypeGaussian/** gaussian */ ,
                CurvatureTypeMean/** mean */ ,
                CurvatureTypeAbsolute/** absolute */ 
            };

            private: SurfaceContinuityAnalysisBuilderImpl * m_surfacecontinuityanalysisbuilder_impl;
            private: friend class  _SurfaceContinuityAnalysisBuilderBuilder;
            protected: SurfaceContinuityAnalysisBuilder();
            public: ~SurfaceContinuityAnalysisBuilder();
            /**Returns  the first edges or faces 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::SelectNXObjectList * FirstEdge
            (
            );
            /**Returns  the second edges or faces. Used only if the type is EdgeEdge 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::SelectNXObjectList * SecondEdge
            (
            );
            /**Returns  the (second) faces. Used only if the type is EdgeFace 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::SelectNXObjectList * Face
            (
            );
            /**Returns  the g0 toggle 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: bool G0
            (
            );
            /**Sets  the g0 toggle 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : gateway ("UG GATEWAY") */
            public: void SetG0
            (
                bool g0 /** g0 */ 
            );
            /**Returns  the g1 toggle 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: bool G1
            (
            );
            /**Sets  the g1 toggle 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : gateway ("UG GATEWAY") */
            public: void SetG1
            (
                bool g1 /** g1 */ 
            );
            /**Returns  the g2 toggle 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: bool G2
            (
            );
            /**Sets  the g2 toggle 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : gateway ("UG GATEWAY") */
            public: void SetG2
            (
                bool g2 /** g2 */ 
            );
            /**Returns  the g3 toggle 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: bool G3
            (
            );
            /**Sets  the g3 toggle 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : gateway ("UG GATEWAY") */
            public: void SetG3
            (
                bool g3 /** g3 */ 
            );
            /**Returns  the curvature check 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::GeometricAnalysis::SurfaceContinuityAnalysisBuilder::CurvatureType CurvatureCheck
            (
            );
            /**Sets  the curvature check 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : gateway ("UG GATEWAY") */
            public: void SetCurvatureCheck
            (
                NXOpen::GeometricAnalysis::SurfaceContinuityAnalysisBuilder::CurvatureType curvatureCheck /** curvaturecheck */ 
            );
            /**Returns  the comb display block options 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::GeometricUtilities::CombOptionsBuilder * CombOptions
            (
            );
            /**Returns  the type of analysis to perform 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::GeometricAnalysis::SurfaceContinuityAnalysisBuilder::Types Type
            (
            );
            /**Sets  the type of analysis to perform 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : gateway ("UG GATEWAY") */
            public: void SetType
            (
                NXOpen::GeometricAnalysis::SurfaceContinuityAnalysisBuilder::Types type /** type */ 
            );
            /** The user selects or deselects first edge or face, update builder m_edge1, m_face1 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : gateway ("UG GATEWAY") */
            public: void UpdateFirstEdgeFace
            (
                NXOpen::DisplayableObject * edgeOrFace /** the parent of Face or Edge */,
                const NXOpen::Point3d & selectionPoint /** selection point */ 
            );
            /** User selects or deselects second edge or face, update builder m_edge2, m_face2 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : gateway ("UG GATEWAY") */
            public: void UpdateSecondEdgeFace
            (
                NXOpen::DisplayableObject * edgeOrFace /** the parent of Face or Edge */,
                const NXOpen::Point3d & selectionPoint /** selection point */ 
            );
            /** User selects or deselects face, update builder m_edge2, m_face2 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : gateway ("UG GATEWAY") */
            public: void UpdateFace
            (
                NXOpen::Face * face /** face */ ,
                const NXOpen::Point3d & selectionPoint /** selection point */ 
            );
            /** Returns the edge1 array not used  @return  
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: std::vector<NXOpen::Face *> GetFace1Array
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
