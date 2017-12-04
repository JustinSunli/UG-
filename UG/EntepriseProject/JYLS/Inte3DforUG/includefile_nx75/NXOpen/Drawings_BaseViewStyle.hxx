#ifndef NXOpen_DRAWINGS_BASEVIEWSTYLE_HXX_INCLUDED
#define NXOpen_DRAWINGS_BASEVIEWSTYLE_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     Drawings_BaseViewStyle.ja
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
#include <NXOpen/Preferences_IBaseViewPreferences.hxx>
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
        class BaseViewStyle;
    }
    namespace Drawings
    {
        class ViewStyle;
    }
    namespace Preferences
    {
        class IBaseViewPreferences;
    }
    namespace Drawings
    {
        class BaseViewStyleImpl;
        /** Represents set of Base View Style Preferences applicable to drafting views. 
              <br> To obtain an instance of this class use @link Drawings::ViewStyle::BaseView Drawings::ViewStyle::BaseView@endlink  <br> 
         <br>  Created in NX5.0.0.  <br>  
        */
        class NXOPENCPP_DRAWINGSEXPORT  BaseViewStyle: public virtual Preferences::IBaseViewPreferences
        {
            private: BaseViewStyleImpl * m_baseviewstyle_impl;
            private: NXOpen::Drawings::ViewStyle* m_owner;
            /// \cond NX_NO_DOC 
            public: explicit BaseViewStyle(NXOpen::Drawings::ViewStyle *owner);


            /// \endcond 
            public: 
            /**Returns the tag of this object.  */
            tag_t Tag() const; 
            public: ~BaseViewStyle();
            /** The status of faceted representation, if True the clipping bounds are inherited, else 
                        the imported model view is placed on the drawing with an Automatic Rectangular Boundary.
                     
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : drafting ("DRAFTING") */
            public: void SetFacetedRepresentation
            (
                bool isFacetedRepresentation /** is faceted representation */ 
            );
            /** The status of inherit clipping boundary, if True the model view's 
                        clipping boundary are inherited when model view is imported onto the drawing, else 
                        the imported model view is placed on the drawing with an Automatic Rectangular Boundary.
                     
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : drafting ("DRAFTING") */
            public: void SetInheritClippingBoundary
            (
                bool isInheritClippingBoundary /** Inherit XY clipping boundaries of model */
            );
            /** The status of transfer annotation controls whether or not annotations created in 
                        a model view are transferred to the drawing when a view is imported.
                     
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : drafting ("DRAFTING") */
            public: void SetTransferAnnotation
            (
                bool isTransferAnnotation /** is transfer annotation */ 
            );
            /** Sets the configuration for the arrangement in assembly after an 
                        arrangement part file is loaded.
                     
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : drafting ("DRAFTING") */
            public: void SetAssemblyArrangement
            (
                const NXString & config /** name of the configuration for the arrangement  <br>  NOTE: The full Unicode character set is not supported for this parameter.  <br> */
            );
            /** Sets the configuration for the arrangement in assembly after an 
                        arrangement part file is loaded.
                     
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : drafting ("DRAFTING") */
            void SetAssemblyArrangement
            (
                const char * config /** name of the configuration for the arrangement  <br>  NOTE: The full Unicode character set is not supported for this parameter.  <br> */
            );
            /** To load the assemblies arrangement part file. If the logical argument is True, 
                        the part would be loaded.
                     
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : drafting ("DRAFTING") */
            public: void LoadModelFromPart
            (
                const NXString & loadPartName /** name of the loaded part  <br>  NOTE: The full Unicode character set is not supported for this parameter.  <br> */,
                bool loadPartToggle /** True or False status for loading the part.*/
            );
            /** To load the assemblies arrangement part file. If the logical argument is True, 
                        the part would be loaded.
                     
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : drafting ("DRAFTING") */
            void LoadModelFromPart
            (
                const char * loadPartName /** name of the loaded part  <br>  NOTE: The full Unicode character set is not supported for this parameter.  <br> */,
                bool loadPartToggle /** True or False status for loading the part.*/
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
