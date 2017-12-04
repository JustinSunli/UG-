#ifndef NXOpen_DRAWINGS_SMOOTHEDGESVIEWSTYLE_HXX_INCLUDED
#define NXOpen_DRAWINGS_SMOOTHEDGESVIEWSTYLE_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     Drawings_SmoothEdgesViewStyle.ja
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
#include <NXOpen/Preferences_ISmoothEdgesViewPreferences.hxx>
#include <NXOpen/Preferences_ViewStylePreferencesData.hxx>
#include <NXOpen/TaggedObject.hxx>
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
        class SmoothEdgesViewStyle;
    }
    namespace Drawings
    {
        class ViewStyle;
    }
    namespace Preferences
    {
        class ISmoothEdgesViewPreferences;
    }
    namespace Drawings
    {
        class SmoothEdgesViewStyleImpl;
        /** Represents set of Smooth Edges View Style Preferences applicable to drafting views.  <br> To obtain an instance of this class use @link Drawings::ViewStyle::SmoothEdges Drawings::ViewStyle::SmoothEdges@endlink  <br> 
         <br>  Created in NX5.0.0.  <br>  
        */
        class NXOPENCPP_DRAWINGSEXPORT  SmoothEdgesViewStyle: public virtual Preferences::ISmoothEdgesViewPreferences
        {
            private: SmoothEdgesViewStyleImpl * m_smoothedgesviewstyle_impl;
            private: NXOpen::Drawings::ViewStyle* m_owner;
            /// \cond NX_NO_DOC 
            public: explicit SmoothEdgesViewStyle(NXOpen::Drawings::ViewStyle *owner);


            /// \endcond 
            public: 
            /**Returns the tag of this object.  */
            tag_t Tag() const; 
            public: ~SmoothEdgesViewStyle();
            /**Sets  the status of smooth edge. If True then it enables the smooth edge options. 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : drafting ("DRAFTING") */
            public: void SetSmoothEdge
            (
                bool smoothEdge /** smooth edge */ 
            );
            /**Returns  the status of smooth edge. If True then it enables the smooth edge options. 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : None */
            public: bool SmoothEdge
            (
            );
            /**Sets  the color of smooth edge. The value should be between 1 and 216.
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : drafting ("DRAFTING") */
            public: void SetSmoothEdgeColor
            (
                int smoothEdgeColor /** smooth edge color */ 
            );
            /**Returns  the color of smooth edge. The value should be between 1 and 216.
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : None */
            public: int SmoothEdgeColor
            (
            );
            /**Sets  the font of smooth edge.
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : drafting ("DRAFTING") */
            public: void SetSmoothEdgeFont
            (
                NXOpen::Preferences::Font smoothEdgeFont /** smooth edge font */ 
            );
            /**Returns  the font of smooth edge.
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Preferences::Font SmoothEdgeFont
            (
            );
            /**Sets  the width of smooth edge.
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : drafting ("DRAFTING") */
            public: void SetSmoothEdgeWidth
            (
                NXOpen::Preferences::Width smoothEdgeWidth /** smooth edge width */ 
            );
            /**Returns  the width of smooth edge.
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Preferences::Width SmoothEdgeWidth
            (
            );
            /**Sets  the status of smooth edge end gaps. If True, the visible ends are suppressed from the display.
                        The length of the suppressed end is in drawing units and is controlled by the value set in 
                        the End Gap field. If False, the visible ends are not suppressed from the display.
                     
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : drafting ("DRAFTING") */
            public: void SetSmoothEdgeEndGaps
            (
                bool smoothEdgeEndGaps /** smooth edge end gaps */ 
            );
            /**Returns  the status of smooth edge end gaps. If True, the visible ends are suppressed from the display.
                        The length of the suppressed end is in drawing units and is controlled by the value set in 
                        the End Gap field. If False, the visible ends are not suppressed from the display.
                     
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : None */
            public: bool SmoothEdgeEndGaps
            (
            );
            /**Sets  the value of smooth edge end gaps.
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : drafting ("DRAFTING") */
            public: void SetSmoothEdgeEndGapsData
            (
                double smoothEdgeEndGapsData /** smooth edge end gaps data */ 
            );
            /**Returns  the value of smooth edge end gaps.
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : None */
            public: double SmoothEdgeEndGapsData
            (
            );
            /**Sets  the status of smooth edge angle tolerance. If True, the value set in 
                        the Tolerance Data field is used. If False, the system default tolerance is used.
                     
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : drafting ("DRAFTING") */
            public: void SetSmoothEdgeTolerance
            (
                bool smoothEdgeTolerance /** smooth edge tolerance */ 
            );
            /**Returns  the status of smooth edge angle tolerance. If True, the value set in 
                        the Tolerance Data field is used. If False, the system default tolerance is used.
                     
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: bool SmoothEdgeTolerance
            (
            );
            /**Sets  the value of smooth edge angle tolerance in degrees.
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : drafting ("DRAFTING") */
            public: void SetSmoothEdgeToleranceData
            (
                double smoothEdgeToleranceData /** smooth edge tolerance data */ 
            );
            /**Returns  the value of smooth edge angle tolerance in degrees.
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: double SmoothEdgeToleranceData
            (
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
