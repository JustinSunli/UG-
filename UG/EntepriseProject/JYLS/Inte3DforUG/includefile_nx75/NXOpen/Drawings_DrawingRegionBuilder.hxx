#ifndef NXOpen_DRAWINGS_DRAWINGREGIONBUILDER_HXX_INCLUDED
#define NXOpen_DRAWINGS_DRAWINGREGIONBUILDER_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     Drawings_DrawingRegionBuilder.ja
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
#include <NXOpen/Drawings_DrawingRegionBuilder.hxx>
#include <NXOpen/Drawings_DrawingRegionRulesBuilder.hxx>
#include <NXOpen/Expression.hxx>
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
        class DrawingRegionBuilder;
    }
    class Builder;
    namespace Drawings
    {
        class DrawingRegion;
    }
    namespace Drawings
    {
        class DrawingRegionRulesBuilder;
    }
    class Expression;
    class Point;
    namespace Drawings
    {
        class _DrawingRegionBuilderBuilder;
        class DrawingRegionBuilderImpl;
        /** Represents a Drawing Region Builder  <br> To create a new instance of this class, use @link Drawings::DrawingRegionCollection::CreateDrawingRegionBuilder Drawings::DrawingRegionCollection::CreateDrawingRegionBuilder@endlink  <br> 
        Default values.
        <table border="1"> 
         
        <tr><th> 
        Property</th>  <th> 
        Value</th> </tr>
        <tr><td> 
         
        Gap </td> <td> 
         
        0 </td> </tr> 

        <tr><td> 
         
        GrowthDirection </td> <td> 
         
        RightfromTopLeft </td> </tr> 

        <tr><td> 
         
        Height.Value </td> <td> 
         
        0 (millimeters part), 0 (inches part) </td> </tr> 

        <tr><td> 
         
        HorizontalGrowthDirection </td> <td> 
         
        Left </td> </tr> 

        <tr><td> 
         
        Length.Value </td> <td> 
         
        0 (millimeters part), 0 (inches part) </td> </tr> 

        <tr><td> 
         
        MoveContent </td> <td> 
         
        All </td> </tr> 

        <tr><td> 
         
        ObjectType </td> <td> 
         
        View </td> </tr> 

        <tr><td> 
         
        Priority </td> <td> 
         
        0 </td> </tr> 

        <tr><td> 
         
        SpecifyContinuation </td> <td> 
         
        None </td> </tr> 

        <tr><td> 
         
        VerticalGrowthDirection </td> <td> 
         
        Up </td> </tr> 

        </table>  

         <br>  Created in NX8.0.0.  <br>  
        */
        class NXOPENCPP_DRAWINGSEXPORT  DrawingRegionBuilder : public Builder
        {
            /** Specifies the drafting object type */
            public: enum RegionDraftingObjectType
            {
                RegionDraftingObjectTypeView/** view */ ,
                RegionDraftingObjectTypeTable/** table */ ,
                RegionDraftingObjectTypeAnnotation/** annotation */ ,
                RegionDraftingObjectTypeSymbol/** symbol */ ,
                RegionDraftingObjectTypeBlank/** blank */ ,
                RegionDraftingObjectTypeNone/** none */ 
            };

            /** Specifies the region continuation type */
            public: enum RegionContinuation
            {
                RegionContinuationNone/** none */ ,
                RegionContinuationNewSheet/** new sheet */ ,
                RegionContinuationNextRegion/** next region */ ,
                RegionContinuationNewSheetRight/** new sheet right */ ,
                RegionContinuationNewSheetLeft/** new sheet left */ ,
                RegionContinuationNewSheetUp/** new sheet up */ ,
                RegionContinuationNewSheetDown/** new sheet down */ 
            };

            /** Specifies the region content to move */
            public: enum ContentToMove
            {
                ContentToMoveAll/** all */ ,
                ContentToMoveOnlyOverlapping/** only overlapping */ 
            };

            /** Specifies the region vertical growth direction */
            public: enum RegionVerticalGrowthDirection
            {
                RegionVerticalGrowthDirectionUp/** up */ ,
                RegionVerticalGrowthDirectionDown/** down */ 
            };

            /** Specifies the region horizontal growth direction */
            public: enum RegionHorizontalGrowthDirection
            {
                RegionHorizontalGrowthDirectionLeft/** left */ ,
                RegionHorizontalGrowthDirectionRight/** right */ 
            };

            /**Specifies the region growth direction (this is for @link Annotations::CustomSymbol Annotations::CustomSymbol@endlink  and @link Annotations::Note Annotations::Note@endlink ) */
            public: enum RegionGrowthDirection
            {
                RegionGrowthDirectionRightfromTopLeft/** rightfrom top left */ ,
                RegionGrowthDirectionRightfromBottomLeft/** rightfrom bottom left */ ,
                RegionGrowthDirectionLeftfromTopRight/** leftfrom top right */ ,
                RegionGrowthDirectionLeftfromBottomRight/** leftfrom bottom right */ ,
                RegionGrowthDirectionDownfromTopLeft/** downfrom top left */ ,
                RegionGrowthDirectionDownfromTopRight/** downfrom top right */ ,
                RegionGrowthDirectionUpfromBottomLeft/** upfrom bottom left */ ,
                RegionGrowthDirectionUpfromBottomRight/** upfrom bottom right */ ,
                RegionGrowthDirectionNone/** none */ 
            };

            private: DrawingRegionBuilderImpl * m_drawingregionbuilder_impl;
            private: friend class  _DrawingRegionBuilderBuilder;
            protected: DrawingRegionBuilder();
            public: ~DrawingRegionBuilder();
            /**Returns  the origin 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Point * Origin
            (
            );
            /**Sets  the origin 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : nx_drafting_plus ("DraftingPlus") */
            public: void SetOrigin
            (
                NXOpen::Point * origin /** origin */ 
            );
            /**Returns  the length 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Expression * Length
            (
            );
            /**Returns  the height 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Expression * Height
            (
            );
            /**Returns  the name 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : None */
            public: NXString Name
            (
            );
            /**Sets  the name 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : nx_drafting_plus ("DraftingPlus") */
            public: void SetName
            (
                const NXString & name /** name */ 
            );
            /**Sets  the name 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : nx_drafting_plus ("DraftingPlus") */
            void SetName
            (
                const char * name /** name */ 
            );
            /**Returns  the type 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : nx_drafting_plus ("DraftingPlus") */
            public: NXOpen::Drawings::DrawingRegionBuilder::RegionDraftingObjectType ObjectType
            (
            );
            /**Sets  the type 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : nx_drafting_plus ("DraftingPlus") */
            public: void SetObjectType
            (
                NXOpen::Drawings::DrawingRegionBuilder::RegionDraftingObjectType type /** type */ 
            );
            /**Returns  the continuation 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Drawings::DrawingRegionBuilder::RegionContinuation SpecifyContinuation
            (
            );
            /**Sets  the continuation 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : nx_drafting_plus ("DraftingPlus") */
            public: void SetSpecifyContinuation
            (
                NXOpen::Drawings::DrawingRegionBuilder::RegionContinuation specifyContinuation /** specifycontinuation */ 
            );
            /**Returns  the priority 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : None */
            public: int Priority
            (
            );
            /**Sets  the priority 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : nx_drafting_plus ("DraftingPlus") */
            public: void SetPriority
            (
                int priority /** priority */ 
            );
            /**Returns  the gap 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : None */
            public: double Gap
            (
            );
            /**Sets  the gap 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : nx_drafting_plus ("DraftingPlus") */
            public: void SetGap
            (
                double gap /** gap */ 
            );
            /**Returns  the move content 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Drawings::DrawingRegionBuilder::ContentToMove MoveContent
            (
            );
            /**Sets  the move content 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : nx_drafting_plus ("DraftingPlus") */
            public: void SetMoveContent
            (
                NXOpen::Drawings::DrawingRegionBuilder::ContentToMove moveContent /** movecontent */ 
            );
            /**Returns   the  vertical growth direction 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Drawings::DrawingRegionBuilder::RegionVerticalGrowthDirection VerticalGrowthDirection
            (
            );
            /**Sets   the  vertical growth direction 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : nx_drafting_plus ("DraftingPlus") */
            public: void SetVerticalGrowthDirection
            (
                NXOpen::Drawings::DrawingRegionBuilder::RegionVerticalGrowthDirection verticalGrowthDirection /** verticalgrowthdirection */ 
            );
            /**Returns  the horizantal growth direction 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Drawings::DrawingRegionBuilder::RegionHorizontalGrowthDirection HorizontalGrowthDirection
            (
            );
            /**Sets  the horizantal growth direction 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : nx_drafting_plus ("DraftingPlus") */
            public: void SetHorizontalGrowthDirection
            (
                NXOpen::Drawings::DrawingRegionBuilder::RegionHorizontalGrowthDirection horizontalGrowthDirection /** horizontalgrowthdirection */ 
            );
            /**Returns  the  growth direction (this is for @link Annotations::CustomSymbol Annotations::CustomSymbol@endlink  and @link Annotations::Note Annotations::Note@endlink ) 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Drawings::DrawingRegionBuilder::RegionGrowthDirection GrowthDirection
            (
            );
            /**Sets  the  growth direction (this is for @link Annotations::CustomSymbol Annotations::CustomSymbol@endlink  and @link Annotations::Note Annotations::Note@endlink ) 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : nx_drafting_plus ("DraftingPlus") */
            public: void SetGrowthDirection
            (
                NXOpen::Drawings::DrawingRegionBuilder::RegionGrowthDirection growthDirection /** growthdirection */ 
            );
            /** Set the next linked regions 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : nx_drafting_plus ("DraftingPlus") */
            public: void SetNextLinkedRegion
            (
                NXOpen::Drawings::DrawingRegion * nextLinkedRegion /** nextlinkedregion */ 
            );
            /**Returns  the DrawingRegionRules builder 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : nx_drafting_plus ("DraftingPlus") */
            public: NXOpen::Drawings::DrawingRegionRulesBuilder * DrawingRegionRulesBuilder
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
