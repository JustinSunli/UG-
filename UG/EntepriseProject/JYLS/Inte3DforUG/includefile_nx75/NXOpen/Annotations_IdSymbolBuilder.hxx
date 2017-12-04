#ifndef NXOpen_ANNOTATIONS_IDSYMBOLBUILDER_HXX_INCLUDED
#define NXOpen_ANNOTATIONS_IDSYMBOLBUILDER_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     Annotations_IdSymbolBuilder.ja
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
#include <NXOpen/Annotations_AnnotationPlacement.hxx>
#include <NXOpen/Annotations_IdSymbolBuilder.hxx>
#include <NXOpen/Annotations_LeaderBuilder.hxx>
#include <NXOpen/Annotations_OriginBuilder.hxx>
#include <NXOpen/Annotations_StyleBuilder.hxx>
#include <NXOpen/Builder.hxx>
#include <NXOpen/SelectObject.hxx>
#include <NXOpen/libnxopencpp_annotations_exports.hxx>

#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable:4996)
#endif
#ifdef __GNUC__
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

namespace NXOpen
{
    namespace Annotations
    {
        class IdSymbolBuilder;
    }
    namespace Annotations
    {
        class AnnotationPlacement;
    }
    namespace Annotations
    {
        class IdSymbol;
    }
    namespace Annotations
    {
        class LeaderBuilder;
    }
    namespace Annotations
    {
        class OriginBuilder;
    }
    namespace Annotations
    {
        class StyleBuilder;
    }
    class Builder;
    class SelectObject;
    namespace Annotations
    {
        class _IdSymbolBuilderBuilder;
        class IdSymbolBuilderImpl;
        /** Represents a @link Annotations::IdSymbol Annotations::IdSymbol@endlink  builder  <br> To create a new instance of this class, use @link Annotations::IdSymbolCollection::CreateIdSymbolBuilder Annotations::IdSymbolCollection::CreateIdSymbolBuilder@endlink  <br> 
        Default values.
        <table border="1"> 
         
        <tr><th> 
        Property</th>  <th> 
        Value</th> </tr>
        <tr><td> 
         
        Size </td> <td> 
         
        0 </td> </tr> 

        </table>  

         <br>  Created in NX5.0.0.  <br>  
        */
        class NXOPENCPP_ANNOTATIONSEXPORT  IdSymbolBuilder : public Builder
        {
            /** the valid types for an id symbol */
            public: enum SymbolTypes
            {
                SymbolTypesCircle/** Circle                   */,
                SymbolTypesDividedCircle/** Divided circle           */,
                SymbolTypesTriangle/** Triangle with point down */,
                SymbolTypesTriangleUp/** Triangle with point up   */,
                SymbolTypesSquare/** Square                   */,
                SymbolTypesDividedSquare/** Divided square           */,
                SymbolTypesHexagon/** Hexagon                  */,
                SymbolTypesDividedHexagon/** Divided hexagon          */,
                SymbolTypesQuadrantCircle/** Quadrant circle          */,
                SymbolTypesRoundedBox/** Rounded box              */,
                SymbolTypesUnderline/** Underline                */
            };

            private: IdSymbolBuilderImpl * m_idsymbolbuilder_impl;
            private: friend class  _IdSymbolBuilderBuilder;
            protected: IdSymbolBuilder();
            public: ~IdSymbolBuilder();
            /**Returns  the symbol type 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Annotations::IdSymbolBuilder::SymbolTypes Type
            (
            );
            /**Sets  the symbol type 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : drafting ("DRAFTING") OR geometric_tol ("GDT") */
            public: void SetType
            (
                NXOpen::Annotations::IdSymbolBuilder::SymbolTypes type /** type */ 
            );
            /**Returns  the symbol type 
             <br>  @deprecated Deprecated in NX6.0.0.  Use @link Annotations::IdSymbolBuilder::Type Annotations::IdSymbolBuilder::Type@endlink  instead. <br>  

             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : None */
            public:  NX_DEPRECATED("Deprecated in NX6.0.0.  Use Annotations::IdSymbolBuilder::Type instead.") NXOpen::Annotations::IdSymbolBuilder::SymbolTypes SymbolType
            (
            );
            /**Sets  the symbol type 
             <br>  @deprecated Deprecated in NX6.0.0.  Use @link Annotations::IdSymbolBuilder::SetType Annotations::IdSymbolBuilder::SetType@endlink  instead. <br>  

             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : drafting ("DRAFTING") OR geometric_tol ("GDT") */
            public:  NX_DEPRECATED("Deprecated in NX6.0.0.  Use Annotations::IdSymbolBuilder::SetType instead.") void SetSymbolType
            (
                NXOpen::Annotations::IdSymbolBuilder::SymbolTypes symbolType /** symboltype */ 
            );
            /**Returns  the upper text 
                     The text displayed in the upper portion of the divided symbol    
                     In case Quadrant Circle symbol, the upper text is placed in      
                     the upper left quadrant just above the horizontal dividing line. 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : None */
            public: NXString UpperText
            (
            );
            /**Sets  the upper text 
                     The text displayed in the upper portion of the divided symbol    
                     In case Quadrant Circle symbol, the upper text is placed in      
                     the upper left quadrant just above the horizontal dividing line. 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : drafting ("DRAFTING") OR geometric_tol ("GDT") */
            public: void SetUpperText
            (
                const NXString & upperText /** uppertext */ 
            );
            /**Sets  the upper text 
                     The text displayed in the upper portion of the divided symbol    
                     In case Quadrant Circle symbol, the upper text is placed in      
                     the upper left quadrant just above the horizontal dividing line. 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : drafting ("DRAFTING") OR geometric_tol ("GDT") */
            void SetUpperText
            (
                const char * upperText /** uppertext */ 
            );
            /**Returns  the lower text 
                     The text displayed in the lower portion of the divided symbol    
                     In case Quadrant Circle symbol, the lower text is placed in      
                     the lower right quadrant just above the horizontal dividing line. 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : None */
            public: NXString LowerText
            (
            );
            /**Sets  the lower text 
                     The text displayed in the lower portion of the divided symbol    
                     In case Quadrant Circle symbol, the lower text is placed in      
                     the lower right quadrant just above the horizontal dividing line. 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : drafting ("DRAFTING") OR geometric_tol ("GDT") */
            public: void SetLowerText
            (
                const NXString & lowerText /** lowertext */ 
            );
            /**Sets  the lower text 
                     The text displayed in the lower portion of the divided symbol    
                     In case Quadrant Circle symbol, the lower text is placed in      
                     the lower right quadrant just above the horizontal dividing line. 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : drafting ("DRAFTING") OR geometric_tol ("GDT") */
            void SetLowerText
            (
                const char * lowerText /** lowertext */ 
            );
            /**Returns  the origin, where the symbol is going to be displayed 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Annotations::OriginBuilder * Origin
            (
            );
            /**Returns  the @link Annotations::LeaderBuilder Annotations::LeaderBuilder@endlink  for the annotation 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Annotations::LeaderBuilder * Leader
            (
            );
            /**Returns  the inherit 
                    The id symbol from which the style properties are inherited 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::SelectObject * Inherit
            (
            );
            /**Returns  the size 
                    The circle symbols are measured by diameter, the rounded box   
                    is measured by length, and all other symbols are measured by a 
                    circumscribed circle                                           
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : None */
            public: double Size
            (
            );
            /**Sets  the size 
                    The circle symbols are measured by diameter, the rounded box   
                    is measured by length, and all other symbols are measured by a 
                    circumscribed circle                                           
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : drafting ("DRAFTING") OR geometric_tol ("GDT") */
            public: void SetSize
            (
                double size /** size */ 
            );
            /**Returns  the style 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Annotations::StyleBuilder * Style
            (
            );
            /**Returns  an annotation placement object 
             <br>  @deprecated Deprecated in NX6.0.0.  This functionality is no longer supported. <br>  

             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : None */
            public:  NX_DEPRECATED("Deprecated in NX6.0.0.  This functionality is no longer supported.") NXOpen::Annotations::AnnotationPlacement * Placement
            (
            );
            /** Sets the preview object for dialog creation of id symbols 
             <br>  @deprecated Deprecated in NX6.0.0.  This functionality is no longer supported. <br>  

             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : None */
            public:  NX_DEPRECATED("Deprecated in NX6.0.0.  This functionality is no longer supported.") void SetPreviewObject
            (
                NXOpen::Annotations::IdSymbol * symbol /** rubberbanding symbol */
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
