#ifndef NXOpen_DRAWINGS_VIEWCOPYTO3DBUILDER_HXX_INCLUDED
#define NXOpen_DRAWINGS_VIEWCOPYTO3DBUILDER_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     Drawings_ViewCopyTo3dBuilder.ja
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
#include <NXOpen/Drawings_ViewCopyTo3dBuilder.hxx>
#include <NXOpen/Expression.hxx>
#include <NXOpen/SelectObject.hxx>
#include <NXOpen/SelectObjectList.hxx>
#include <NXOpen/libnxopencpp_drawings_exports.hxx>

#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable:4996)
#endif
#ifdef __GNUC__
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

namespace NXOpen
{
    namespace Drawings
    {
        class ViewCopyTo3dBuilder;
    }
    class Builder;
    namespace Drawings
    {
        class SelectDrawingView;
    }
    namespace Drawings
    {
        class SelectDrawingViewList;
    }
    class Expression;
    class SelectNXObjectList;
    namespace Drawings
    {
        class _ViewCopyTo3dBuilderBuilder;
        class ViewCopyTo3dBuilderImpl;
        /**
            Represents a @link Drawings::ViewCopyTo3dBuilder Drawings::ViewCopyTo3dBuilder@endlink .  This class
            is used to copy the contents of a drawing view to modeling space
             <br> To create a new instance of this class, use @link Drawings::DraftingViewCollection::CreateCopyTo3dBuilder Drawings::DraftingViewCollection::CreateCopyTo3dBuilder@endlink  <br> 
         <br>  Created in NX6.0.0.  <br>  
        */
        class NXOPENCPP_DRAWINGSEXPORT  ViewCopyTo3dBuilder : public Builder
        {
            /** The pre-NX7.5 option 
             <br>  @deprecated Deprecated in NX7.5.0.  Please use @link Drawings::ViewCopyTo3dBuilder::DistanceFromViewPlaneOption Drawings::ViewCopyTo3dBuilder::DistanceFromViewPlaneOption@endlink  instead. <br>  
            */
            public:  NX_DEPRECATED("Deprecated in NX7.5.0.  Please use Drawings::ViewCopyTo3dBuilder::DistanceFromViewPlaneOption instead.") enum Option
            {
                OptionAutomatic/** automatic */,
                OptionSpecify/** specify */
            };

            /** The option to get the distance */
            public: enum DistanceFromViewPlaneOption
            {
                DistanceFromViewPlaneOptionAutomatic/** automatic distance calculation */,
                DistanceFromViewPlaneOptionSpecify/** specify distance */
            };

            /** The type of copy to 3d selections */
            public: enum Types
            {
                TypesSelectedCurves/** selected curves */,
                TypesSelectedViews/** selected views  */
            };

            /** The bounding box options  */
            public: enum BoundingBoxOption
            {
                BoundingBoxOptionCurvesToCopy/** curves to copy */,
                BoundingBoxOptionEntireViews/** entire views */
            };

            /** The output options  */
            public: enum OutputOption
            {
                OutputOptionSketches/** sketches */,
                OutputOptionSimpleCurves/** simple curves */,
                OutputOptionSketchesSolid/** sketches and solid body */,
                OutputOptionPartsGroup/** component parts from groups */
            };

            private: ViewCopyTo3dBuilderImpl * m_viewcopyto3dbuilder_impl;
            private: friend class  _ViewCopyTo3dBuilderBuilder;
            protected: ViewCopyTo3dBuilder();
            public: ~ViewCopyTo3dBuilder();
            /**Returns  the selected view for previous single view selection  
             <br>  @deprecated Deprecated in NX7.5.0.  This method is no longer relevant and calls to this can be safely removed. <br>  

             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : nx_drafting_plus ("DraftingPlus") */
            public:  NX_DEPRECATED("Deprecated in NX7.5.0.  This method is no longer relevant and calls to this can be safely removed.") NXOpen::Drawings::SelectDrawingView * View
            (
            );
            /**Returns  the selected views for multiple views selection 
             <br>  Created in NX6.0.1.  <br>  
             <br> License requirements : nx_drafting_plus ("DraftingPlus") */
            public: NXOpen::Drawings::SelectDrawingViewList * Views
            (
            );
            /** Commits any edits that have been applied to the builder. Returns the object being
                   edited, or a new object if the builder is being used in creation mode.

                   In certain cases this method may not return an object, please consult the particular class's documentation to see if this method has a different behavior.

                 @return  The object being edited, or the new object. 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::NXObject * Commit
            (
            );
            /** The copy of the selected view to modeling 
             <br>  @deprecated Deprecated in NX7.5.0.  This method is no longer relevant and calls to this can be safely removed. <br>  

             <br>  Created in NX6.0.1.  <br>  
             <br> License requirements : nx_drafting_plus ("DraftingPlus") */
            public:  NX_DEPRECATED("Deprecated in NX7.5.0.  This method is no longer relevant and calls to this can be safely removed.") void Commit
            (
                double offset /** offset from origin */,
                bool curves /** process curves */,
                bool sketches /** process sketch curves */,
                int option /** option of automatic or specify  */
            );
            /**Returns  the flag indicating to process sketch curves 
             <br>  @deprecated Deprecated in NX8.0.0.  This method is no longer relevant and calls to this can be safely removed. <br>  

             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public:  NX_DEPRECATED("Deprecated in NX8.0.0.  This method is no longer relevant and calls to this can be safely removed.") bool ProcessSketchCurves
            (
            );
            /**Sets  the flag indicating to process sketch curves 
             <br>  @deprecated Deprecated in NX8.0.0.  This method is no longer relevant and calls to this can be safely removed. <br>  

             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : nx_drafting_plus ("DraftingPlus") */
            public:  NX_DEPRECATED("Deprecated in NX8.0.0.  This method is no longer relevant and calls to this can be safely removed.") void SetProcessSketchCurves
            (
                bool option /** option */ 
            );
            /**Returns  the flag indicating to process view curves 
             <br>  @deprecated Deprecated in NX8.0.0.  This method is no longer relevant and calls to this can be safely removed. <br>  

             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public:  NX_DEPRECATED("Deprecated in NX8.0.0.  This method is no longer relevant and calls to this can be safely removed.") bool ProcessViewCurves
            (
            );
            /**Sets  the flag indicating to process view curves 
             <br>  @deprecated Deprecated in NX8.0.0.  <br>  

             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : nx_drafting_plus ("DraftingPlus") */
            public:  NX_DEPRECATED("Deprecated in NX8.0.0") void SetProcessViewCurves
            (
                bool option /** option */ 
            );
            /**Returns  the select curves for source group 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::SelectNXObjectList * Curves
            (
            );
            /**Returns  the path to the destination part 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : nx_drafting_plus ("DraftingPlus") */
            public: NXString DestinationPart
            (
            );
            /**Sets  the path to the destination part 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : nx_drafting_plus ("DraftingPlus") */
            public: void SetDestinationPart
            (
                const NXString & filename /** filename */ 
            );
            /**Sets  the path to the destination part 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : nx_drafting_plus ("DraftingPlus") */
            void SetDestinationPart
            (
                const char * filename /** filename */ 
            );
            /**Returns  the option specifying the distance from the view plane 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Drawings::ViewCopyTo3dBuilder::DistanceFromViewPlaneOption DistanceFromViewPlane
            (
            );
            /**Sets  the option specifying the distance from the view plane 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : nx_drafting_plus ("DraftingPlus") */
            public: void SetDistanceFromViewPlane
            (
                NXOpen::Drawings::ViewCopyTo3dBuilder::DistanceFromViewPlaneOption option /** option */ 
            );
            /**Returns  the expression of clearance 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Expression * Offset
            (
            );
            /**Returns  the type of bounding box  
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Drawings::ViewCopyTo3dBuilder::BoundingBoxOption BoundingBox
            (
            );
            /**Sets  the type of bounding box  
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : nx_drafting_plus ("DraftingPlus") */
            public: void SetBoundingBox
            (
                NXOpen::Drawings::ViewCopyTo3dBuilder::BoundingBoxOption option /** option */ 
            );
            /**Returns  the select views in the placement group 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Drawings::SelectDrawingViewList * BoundingViews
            (
            );
            /**Returns  the flag indicating to create sketches in Modeling
             <br>  @deprecated Deprecated in NX8.0.0.  This method is no longer relevant and calls to this can be safely removed. <br>  

             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public:  NX_DEPRECATED("Deprecated in NX8.0.0.  This method is no longer relevant and calls to this can be safely removed.") bool CreateSketches
            (
            );
            /**Sets  the flag indicating to create sketches in Modeling
             <br>  @deprecated Deprecated in NX8.0.0.  This method is no longer relevant and calls to this can be safely removed. <br>  

             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : nx_drafting_plus ("DraftingPlus") */
            public:  NX_DEPRECATED("Deprecated in NX8.0.0.  This method is no longer relevant and calls to this can be safely removed.") void SetCreateSketches
            (
                bool option /** option */ 
            );
            /**Returns  the flag that indicates whether to extrude solid 
             <br>  @deprecated Deprecated in NX8.0.0.  This method is no longer relevant and calls to this can be safely removed. <br>  

             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public:  NX_DEPRECATED("Deprecated in NX8.0.0.  This method is no longer relevant and calls to this can be safely removed.") bool ExtrudeSolidBody
            (
            );
            /**Sets  the flag that indicates whether to extrude solid 
             <br>  @deprecated Deprecated in NX8.0.0.  This method is no longer relevant and calls to this can be safely removed. <br>  

             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : nx_drafting_plus ("DraftingPlus") */
            public:  NX_DEPRECATED("Deprecated in NX8.0.0.  This method is no longer relevant and calls to this can be safely removed.") void SetExtrudeSolidBody
            (
                bool option /** option */ 
            );
            /**Returns  the flag that indicates whether to automatically reposition geometry 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : None */
            public: bool RepositionGeometry
            (
            );
            /**Sets  the flag that indicates whether to automatically reposition geometry 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : nx_drafting_plus ("DraftingPlus") */
            public: void SetRepositionGeometry
            (
                bool option /** option */ 
            );
            /**Returns  the option of output in the setting group  
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Drawings::ViewCopyTo3dBuilder::OutputOption Output
            (
            );
            /**Sets  the option of output in the setting group  
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : nx_drafting_plus ("DraftingPlus") */
            public: void SetOutput
            (
                NXOpen::Drawings::ViewCopyTo3dBuilder::OutputOption option /** option */ 
            );
            /**Returns  the type of copy 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Drawings::ViewCopyTo3dBuilder::Types Type
            (
            );
            /**Sets  the type of copy 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : nx_drafting_plus ("DraftingPlus") */
            public: void SetType
            (
                NXOpen::Drawings::ViewCopyTo3dBuilder::Types type /** type */ 
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
