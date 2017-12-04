#ifndef NXOpen_CAM_NCMCTPARTMOUNTINGBUILDER_HXX_INCLUDED
#define NXOpen_CAM_NCMCTPARTMOUNTINGBUILDER_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     CAM_NcmctPartMountingBuilder.ja
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
#include <NXOpen/SelectObjectList.hxx>
#include <NXOpen/libnxopencpp_cam_exports.hxx>

#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable:4996)
#endif
#ifdef __GNUC__
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

namespace NXOpen
{
    namespace CAM
    {
        class NcmctPartMountingBuilder;
    }
    class Builder;
    class CartesianCoordinateSystem;
    class SelectNXObjectList;
    namespace CAM
    {
        class _NcmctPartMountingBuilderBuilder;
        class NcmctPartMountingBuilderImpl;
        /**
            Represents a @link CAM::NcmctPartMountingBuilder CAM::NcmctPartMountingBuilder@endlink 
            a "commit" of this object will perform the Part Mounting and no object is returned.
             <br> To create a new instance of this class, use @link CAM::CAMSetup::CreateNcmctPartMountingBuilder CAM::CAMSetup::CreateNcmctPartMountingBuilder@endlink  <br> 
         <br>  Created in NX8.0.0.  <br>  
        */
        class NXOPENCPP_CAMEXPORT  NcmctPartMountingBuilder : public Builder
        {
            /** Available types for positioning */
            public: enum PositioningTypes
            {
                PositioningTypesOrientMachineZeroToMainMcs/** Orient Machine Zero to main MCS */,
                PositioningTypesUseAssemblyPositioning/** Use Assembly Positioning */,
                PositioningTypesUsePartMountJunction/** Use Part Mount Junction*/,
                PositioningTypesUseOldMachineTransformation/** Use Old Machine Transformation*/,
                PositioningTypesKeepAssemblyConstraints/** Keep Assembly Constraints*/
            };

            /** Available types for layer options */
            public: enum LayerTypes
            {
                LayerTypesOriginal/** Original */,
                LayerTypesOriginalMakeVisible/** Original - Make Visible */,
                LayerTypesWork/** Work */,
                LayerTypesAsSpecified/** As Specified */
            };

            private: NcmctPartMountingBuilderImpl * m_ncmctpartmountingbuilder_impl;
            private: friend class  _NcmctPartMountingBuilderBuilder;
            protected: NcmctPartMountingBuilder();
            public: ~NcmctPartMountingBuilder();
            /**Returns  the positioning type 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::CAM::NcmctPartMountingBuilder::PositioningTypes Positioning
            (
            );
            /**Sets  the positioning type 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : cam_base ("CAM BASE") */
            public: void SetPositioning
            (
                NXOpen::CAM::NcmctPartMountingBuilder::PositioningTypes posType /** the positioning type */
            );
            /**Returns  the layer type 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::CAM::NcmctPartMountingBuilder::LayerTypes LayerOptions
            (
            );
            /**Sets  the layer type 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : cam_base ("CAM BASE") */
            public: void SetLayerOptions
            (
                NXOpen::CAM::NcmctPartMountingBuilder::LayerTypes layerType /** the layer options */
            );
            /**Returns  the layer 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : None */
            public: int Layer
            (
            );
            /**Sets  the layer 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : cam_base ("CAM BASE") */
            public: void SetLayer
            (
                int layer /** the layer */
            );
            /**Returns  the CSYS associated with the junction 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::CartesianCoordinateSystem * PartMountJunction
            (
            );
            /**Sets  the CSYS associated with the junction 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : cam_base ("CAM BASE") */
            public: void SetPartMountJunction
            (
                NXOpen::CartesianCoordinateSystem * csys /** the part mount junction */
            );
            /**Returns  the selected part geometry list. 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::SelectNXObjectList * Geometry
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
