#ifndef NXOpen_CAM_CYLINDERMILLINGBUILDER_HXX_INCLUDED
#define NXOpen_CAM_CYLINDERMILLINGBUILDER_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     CAM_CylinderMillingBuilder.ja
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
#include <NXOpen/CAM_OperationBuilder.hxx>
#include <NXOpen/CAM_CylinderMillingBuilder.hxx>
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
        class CylinderMillingBuilder;
    }
    namespace CAM
    {
        class CylinderMillingCutParameters;
    }
    namespace CAM
    {
        class FeedsBuilder;
    }
    namespace CAM
    {
        class InheritableDoubleBuilder;
    }
    namespace CAM
    {
        class InheritableToolDepBuilder;
    }
    namespace CAM
    {
        class NcmHoleMachining;
    }
    namespace CAM
    {
        class OperationBuilder;
    }
    namespace CAM
    {
        class OppositeDirection;
    }
    namespace CAM
    {
        class StepoverBuilder;
    }
    namespace CAM
    {
        class _CylinderMillingBuilderBuilder;
        class CylinderMillingBuilderImpl;
        /** Represents a CylinderMillingBuilder Builder  <br> To create a new instance of this class, use @link CAM::OperationCollection::CreateCylinderMillingBuilder CAM::OperationCollection::CreateCylinderMillingBuilder@endlink  <br> 
         <br>  Created in NX8.0.0.  <br>  
        */
        class NXOPENCPP_CAMEXPORT  CylinderMillingBuilder : public CAM::OperationBuilder
        {
            /** cut pattern options 
             <br>  Created in NX8.0.0.  <br>  
            */
            public: enum CutPatternTypes
            {
                CutPatternTypesSpiral/** Spiral */,
                CutPatternTypesHelical/** Helical */,
                CutPatternTypesHelicalAndSpiral/** Helical/Spiral */
            };

            /** Diameter for Helix 
             <br>  Created in NX8.0.0.  <br>  
            */
            public: enum DiameterForHelixTypes
            {
                DiameterForHelixTypesDiameter/** Spiral Thickness */,
                DiameterForHelixTypesSpiralThickness/** Helix Diameter */
            };

            /** Depth Per Revolution options 
             <br>  Created in NX8.0.0.  <br>  
            */
            public: enum DepthPerRevolutionTypes
            {
                DepthPerRevolutionTypesDistance/** Distance */,
                DepthPerRevolutionTypesRampAngle/** Ramp Angle */
            };

            /** blank diamter options 
             <br>  Created in NX8.0.0.  <br>  
            */
            public: enum BlankDiameterTypes
            {
                BlankDiameterTypesDiameter/** Diameter */,
                BlankDiameterTypesDistance/** distance */
            };

            private: CylinderMillingBuilderImpl * m_cylindermillingbuilder_impl;
            private: friend class  _CylinderMillingBuilderBuilder;
            protected: CylinderMillingBuilder();
            public: ~CylinderMillingBuilder();
            /**Returns  the non-cutting moves builder  
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::CAM::NcmHoleMachining * NonCuttingBuilder
            (
            );
            /**Returns  the Axial Stepover builder 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::CAM::StepoverBuilder * AxialStepover
            (
            );
            /**Returns  the Radial Stepover builder 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::CAM::StepoverBuilder * RadialStepover
            (
            );
            /**Returns  the Cylinder Milling Cut Parameters 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::CAM::CylinderMillingCutParameters * CutParameters
            (
            );
            /**Returns  the cut pattern  
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::CAM::CylinderMillingBuilder::CutPatternTypes CutPattern
            (
            );
            /**Sets  the cut pattern  
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : cam_base ("CAM BASE") */
            public: void SetCutPattern
            (
                NXOpen::CAM::CylinderMillingBuilder::CutPatternTypes newValue /** the cut pattern type */
            );
            /**Returns  the start location  
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::CAM::CylinderMillingBuilder::BlankDiameterTypes BlankDiameter
            (
            );
            /**Sets  the start location  
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : cam_base ("CAM BASE") */
            public: void SetBlankDiameter
            (
                NXOpen::CAM::CylinderMillingBuilder::BlankDiameterTypes newValue /** the start location type */
            );
            /**Returns  the Start Diameter  
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::CAM::InheritableToolDepBuilder * StartDiameter
            (
            );
            /**Returns  the Wall Thickness  
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::CAM::InheritableToolDepBuilder * BlankDistance
            (
            );
            /**Returns  the opposite direction  
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : None */
            public: bool OppositeDirection
            (
            );
            /**Sets  the opposite direction  
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : cam_base ("CAM BASE") */
            public: void SetOppositeDirection
            (
                bool newValue /** the opposite direction */
            );
            /**Returns  the Depth per Revolution  
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::CAM::CylinderMillingBuilder::DepthPerRevolutionTypes DepthPerRevolution
            (
            );
            /**Sets  the Depth per Revolution  
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : cam_base ("CAM BASE") */
            public: void SetDepthPerRevolution
            (
                NXOpen::CAM::CylinderMillingBuilder::DepthPerRevolutionTypes newValue /** the Depth per Revolution type */
            );
            /**Returns  the distance builder for Depth per Revolution  
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::CAM::InheritableToolDepBuilder * AxialDistance
            (
            );
            /**Returns  the Ramp Angle 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::CAM::InheritableDoubleBuilder * RampAngle
            (
            );
            /**Returns  the Diameter for Helix  
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::CAM::CylinderMillingBuilder::DiameterForHelixTypes DiameterForHelix
            (
            );
            /**Sets  the Diameter for Helix  
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : cam_base ("CAM BASE") */
            public: void SetDiameterForHelix
            (
                NXOpen::CAM::CylinderMillingBuilder::DiameterForHelixTypes newValue /** the Diameter for Helix type */
            );
            /**Returns  the Helix Diamter  
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::CAM::InheritableToolDepBuilder * HelixDiameter
            (
            );
            /**Returns  the Spiral Thickness  
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::CAM::InheritableToolDepBuilder * SpiralThickness
            (
            );
            /**Returns  the Minimum Helix Diameter 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::CAM::InheritableToolDepBuilder * MinimumHelixDiameter
            (
            );
            /**Returns  the Cleanup Passes  
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : None */
            public: bool CleanupPasses
            (
            );
            /**Sets  the Cleanup Passes  
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : cam_base ("CAM BASE") */
            public: void SetCleanupPasses
            (
                bool newValue /** the Cleanup Passes */
            );
            /**Returns  the feeds and speeds builder 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::CAM::FeedsBuilder * FeedsBuilder
            (
            );
            /**Returns  the opposite direction builder 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::CAM::OppositeDirection * OppositeDirectionBuilder
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
