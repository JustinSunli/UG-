#ifndef NXOpen_BLOCKSTYLER_EXPRESSIONBLOCK_HXX_INCLUDED
#define NXOpen_BLOCKSTYLER_EXPRESSIONBLOCK_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     BlockStyler_ExpressionBlock.ja
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
#include <NXOpen/BlockStyler_UIBlock.hxx>
#include <NXOpen/BlockStyler_ExpressionBlock.hxx>
#include <NXOpen/libnxopenuicpp_exports.hxx>

#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable:4996)
#endif
#ifdef __GNUC__
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

namespace NXOpen
{
    namespace BlockStyler
    {
        class ExpressionBlock;
    }
    namespace BlockStyler
    {
        class UIBlock;
    }
    class TaggedObject;
    namespace BlockStyler
    {
        class _ExpressionBlockBuilder;
        class ExpressionBlockImpl;
        /** Represents an Expression block
         <br>  Created in NX8.5.0.  <br>  
        */
        class NXOPENUICPPEXPORT  ExpressionBlock : public BlockStyler::UIBlock
        {
            private: ExpressionBlockImpl * m_expressionblock_impl;
            private: friend class  _ExpressionBlockBuilder;
            protected: ExpressionBlock();
            public: ~ExpressionBlock();
            /**Returns  the BalloonTooltipImage
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : None */
            public: NXString BalloonTooltipImage
            (
            );
            /**Sets  the BalloonTooltipImage
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : None */
            public: void SetBalloonTooltipImage
            (
                const NXString & imageString /** image string */ 
            );
            /**Sets  the BalloonTooltipImage
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : None */
            void SetBalloonTooltipImage
            (
                const char * imageString /** image string */ 
            );
            /**Returns  the BalloonTooltipLayout as string
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : None */
            public: NXString BalloonTooltipLayoutAsString
            (
            );
            /**Sets  the BalloonTooltipLayout as string
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : None */
            public: void SetBalloonTooltipLayoutAsString
            (
                const NXString & enumString /** enumstring */ 
            );
            /**Sets  the BalloonTooltipLayout as string
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : None */
            void SetBalloonTooltipLayoutAsString
            (
                const char * enumString /** enumstring */ 
            );
            /** Gets the BalloonTooltipLayout members  @return Value to get from the property.
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : None */
            public: std::vector<NXString> GetBalloonTooltipLayoutMembers
            (
            );
            /**Returns  the BalloonTooltipText
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : None */
            public: NXString BalloonTooltipText
            (
            );
            /**Sets  the BalloonTooltipText
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : None */
            public: void SetBalloonTooltipText
            (
                const NXString & balloonTooltipText /** balloon tooltip text */ 
            );
            /**Sets  the BalloonTooltipText
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : None */
            void SetBalloonTooltipText
            (
                const char * balloonTooltipText /** balloon tooltip text */ 
            );
            /**Returns  the  Dimensionality as string. It specifies the type of quantity that the expression represents.
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : None */
            public: NXString DimensionalityAsString
            (
            );
            /**Sets  the  Dimensionality as string. It specifies the type of quantity that the expression represents.
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : None */
            public: void SetDimensionalityAsString
            (
                const NXString & enumString /** enum string */ 
            );
            /**Sets  the  Dimensionality as string. It specifies the type of quantity that the expression represents.
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : None */
            void SetDimensionalityAsString
            (
                const char * enumString /** enum string */ 
            );
            /**Gets the members of Dimensionality enum. @return Value to get from the property. 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : None */
            public: std::vector<NXString> GetDimensionalityMembers
            (
            );
            /**Returns  the ExpressionObject
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::TaggedObject * ExpressionObject
            (
            );
            /**Sets  the ExpressionObject
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : None */
            public: void SetExpressionObject
            (
                NXOpen::TaggedObject * expressionObject /** expression object */ 
            );
            /**Returns  the Formula for the expression
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : None */
            public: NXString Formula
            (
            );
            /**Sets  the Formula for the expression
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : None */
            public: void SetFormula
            (
                const NXString & formulaString /** formula string */ 
            );
            /**Sets  the Formula for the expression
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : None */
            void SetFormula
            (
                const char * formulaString /** formula string */ 
            );
            /**Returns  the HasUnitsMenu. If true, indicates that a menu will be displayed allowing the user to change units.
                    This property is relevant only when the Dimensionality property is set to a value that is not without units.
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : None */
            public: bool HasUnitsMenu
            (
            );
            /**Sets  the HasUnitsMenu. If true, indicates that a menu will be displayed allowing the user to change units.
                    This property is relevant only when the Dimensionality property is set to a value that is not without units.
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : None */
            public: void SetHasUnitsMenu
            (
                bool hasMenu /** has menu */ 
            );
            /**Returns  the MaximumValue
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : None */
            public: double MaximumValue
            (
            );
            /**Sets  the MaximumValue
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : None */
            public: void SetMaximumValue
            (
                double maxValue /** max value */ 
            );
            /**Returns  the MaxInclusive
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : None */
            public: bool MaxInclusive
            (
            );
            /**Sets  the MaxInclusive
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : None */
            public: void SetMaxInclusive
            (
                bool maxInclusive /** max inclusive */ 
            );
            /**Returns  the MinimumValue
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : None */
            public: double MinimumValue
            (
            );
            /**Sets  the MinimumValue
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : None */
            public: void SetMinimumValue
            (
                double minValue /** min value */ 
            );
            /**Returns  the MinInclusive
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : None */
            public: bool MinInclusive
            (
            );
            /**Sets  the MinInclusive
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : None */
            public: void SetMinInclusive
            (
                bool minInclusive /** min inclusive */ 
            );
            /**Returns  the Units for the expression 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::TaggedObject * Units
            (
            );
            /**Sets  the Units for the expression 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : None */
            public: void SetUnits
            (
                NXOpen::TaggedObject * units /** units */ 
            );
            /**Returns  the Value.
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : None */
            public: double Value
            (
            );
            /**Sets  the Value.
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : None */
            public: void SetValue
            (
                double expressionValue /** expression value */ 
            );
            /**Returns  the WithScale. If true, the slider bar is shown.
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : None */
            public: bool WithScale
            (
            );
            /**Sets  the WithScale. If true, the slider bar is shown.
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : None */
            public: void SetWithScale
            (
                bool withScale /** with scale */ 
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
