#ifndef NXOpen_DRAWINGS_PERSPECTIVEVIEWSTYLE_HXX_INCLUDED
#define NXOpen_DRAWINGS_PERSPECTIVEVIEWSTYLE_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     Drawings_PerspectiveViewStyle.ja
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
#include <NXOpen/Preferences_IPerspectiveViewPreferences.hxx>
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
        class PerspectiveViewStyle;
    }
    namespace Drawings
    {
        class ViewStyle;
    }
    namespace Preferences
    {
        class IPerspectiveViewPreferences;
    }
    namespace Drawings
    {
        class PerspectiveViewStyleImpl;
        /** Represents set of PerspectiveViewStyle applicable to drafting views.  <br> To obtain an instance of this class use @link Drawings::ViewStyle::Perspective Drawings::ViewStyle::Perspective@endlink  <br> 
         <br>  Created in NX5.0.0.  <br>  
        */
        class NXOPENCPP_DRAWINGSEXPORT  PerspectiveViewStyle: public virtual Preferences::IPerspectiveViewPreferences
        {
            private: PerspectiveViewStyleImpl * m_perspectiveviewstyle_impl;
            private: NXOpen::Drawings::ViewStyle* m_owner;
            /// \cond NX_NO_DOC 
            public: explicit PerspectiveViewStyle(NXOpen::Drawings::ViewStyle *owner);


            /// \endcond 
            public: 
            /**Returns the tag of this object.  */
            tag_t Tag() const; 
            public: ~PerspectiveViewStyle();
            /**Returns  the status of front clipping 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : None */
            public: bool FrontClipping
            (
            );
            /**Sets  the status of front clipping 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : drafting ("DRAFTING") */
            public: void SetFrontClipping
            (
                bool frontClipping /** front clipping */ 
            );
            /**Returns  the value of front clipping distance 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : None */
            public: double FrontClippingDistance
            (
            );
            /**Sets  the value of front clipping distance 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : drafting ("DRAFTING") */
            public: void SetFrontClippingDistance
            (
                double frontClippingDistance /** front clipping distance */ 
            );
            /**Returns  the status of back clipping 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : None */
            public: bool BackClipping
            (
            );
            /**Sets  the status of back clipping 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : drafting ("DRAFTING") */
            public: void SetBackClipping
            (
                bool backClipping /** back clipping */ 
            );
            /**Returns  the value of back clipping distance 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : None */
            public: double BackClippingDistance
            (
            );
            /**Sets  the value of back clipping distance 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : drafting ("DRAFTING") */
            public: void SetBackClippingDistance
            (
                double backClippingDistance /** back clipping distance */ 
            );
            /**Returns  the status of perspective 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : None */
            public: bool Perspective
            (
            );
            /**Sets  the status of perspective 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : drafting ("DRAFTING") */
            public: void SetPerspective
            (
                bool perspective /** perspective */ 
            );
            /**Returns  the value of perspective distance 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : None */
            public: double PerspectiveDistance
            (
            );
            /**Sets  the value of perspective distance 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : drafting ("DRAFTING") */
            public: void SetPerspectiveDistance
            (
                double perspectiveDistance /** perspective distance */ 
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
