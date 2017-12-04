#ifndef NXOpen_BLOCKSTYLER_SPECIFYAXIS_HXX_INCLUDED
#define NXOpen_BLOCKSTYLER_SPECIFYAXIS_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     BlockStyler_SpecifyAxis.ja
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
#include <NXOpen/BlockStyler_SpecifyAxis.hxx>
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
        class SpecifyAxis;
    }
    namespace BlockStyler
    {
        class UIBlock;
    }
    class TaggedObject;
    namespace BlockStyler
    {
        class _SpecifyAxisBuilder;
        class SpecifyAxisImpl;
        /** Represents a Specify Axis block
         <br>  Created in NX8.5.0.  <br>  
        */
        class NXOPENUICPPEXPORT  SpecifyAxis : public BlockStyler::UIBlock
        {
            private: SpecifyAxisImpl * m_specifyaxis_impl;
            private: friend class  _SpecifyAxisBuilder;
            protected: SpecifyAxis();
            public: ~SpecifyAxis();
            /**Returns  the BalloonTooltipPointImage
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : None */
            public: NXString BalloonTooltipPointImage
            (
            );
            /**Sets  the BalloonTooltipPointImage
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : None */
            public: void SetBalloonTooltipPointImage
            (
                const NXString & imageString /** image string */ 
            );
            /**Sets  the BalloonTooltipPointImage
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : None */
            void SetBalloonTooltipPointImage
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
            /**Returns  the BalloonTooltipPointText
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : None */
            public: NXString BalloonTooltipPointText
            (
            );
            /**Sets  the BalloonTooltipPointText
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : None */
            public: void SetBalloonTooltipPointText
            (
                const NXString & balloonTooltipText /** balloon tooltip text */ 
            );
            /**Sets  the BalloonTooltipPointText
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : None */
            void SetBalloonTooltipPointText
            (
                const char * balloonTooltipText /** balloon tooltip text */ 
            );
            /** Gets the SelectedObjects @return Value to get from the property
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : None */
            public: std::vector<NXOpen::TaggedObject *> GetSelectedObjects
            (
            );
            /** Sets the SelectedObjects
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : None */
            public: void SetSelectedObjects
            (
                const std::vector<NXOpen::TaggedObject *> & objectVector /**Value to set for the property*/
            );
            /**Returns  the BalloonTooltipVectorImage
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : None */
            public: NXString BalloonTooltipVectorImage
            (
            );
            /**Sets  the BalloonTooltipVectorImage
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : None */
            public: void SetBalloonTooltipVectorImage
            (
                const NXString & imageString /** image string */ 
            );
            /**Sets  the BalloonTooltipVectorImage
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : None */
            void SetBalloonTooltipVectorImage
            (
                const char * imageString /** image string */ 
            );
            /**Returns  the BalloonTooltipVectorText
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : None */
            public: NXString BalloonTooltipVectorText
            (
            );
            /**Sets  the BalloonTooltipVectorText
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : None */
            public: void SetBalloonTooltipVectorText
            (
                const NXString & tooltipText /** tooltip text */ 
            );
            /**Sets  the BalloonTooltipVectorText
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : None */
            void SetBalloonTooltipVectorText
            (
                const char * tooltipText /** tooltip text */ 
            );
            /**Returns  the StepStatus as string
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : None */
            public: NXString StepStatusAsString
            (
            );
            /**Sets  the StepStatus as string
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : None */
            public: void SetStepStatusAsString
            (
                const NXString & enumString /** enumstring */ 
            );
            /**Sets  the StepStatus as string
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : None */
            void SetStepStatusAsString
            (
                const char * enumString /** enumstring */ 
            );
            /** Gets the StepStatus members @return Value to get from the property
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : None */
            public: std::vector<NXString> GetStepStatusMembers
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
