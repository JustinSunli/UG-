#ifndef NXOpen_CAM_TOOLAXISVARIABLE_HXX_INCLUDED
#define NXOpen_CAM_TOOLAXISVARIABLE_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     CAM_ToolAxisVariable.ja
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
#include <NXOpen/CAM_ToolAxisBase.hxx>
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
        class ToolAxisVariable;
    }
    namespace CAM
    {
        class InterpolateAngle;
    }
    namespace CAM
    {
        class InterpolateVector;
    }
    namespace CAM
    {
        class ToolAxisBase;
    }
    class Direction;
    namespace CAM
    {
        class _ToolAxisVariableBuilder;
        class ToolAxisVariableImpl;
        /** Represents a Tool Axis Variable Builder 
         <br>  Created in NX7.5.0.  <br>  
        */
        class NXOPENCPP_CAMEXPORT  ToolAxisVariable : public CAM::ToolAxisBase
        {
            /** Available types for Tool Axis Variable */
            public: enum Types
            {
                TypesAwayFromPoint/** Away from Point */,
                TypesTowardPoint/** Toward Point */,
                TypesAwayFromLine/** Away from Line */,
                TypesTowardLine/** Toward Line */,
                TypesRelativeToVector/** Relative to Vector */,
                TypesNormalToPart/** Normal to Part */,
                TypesRelativeToPart/** Relative to Part */,
                TypesFourAxisNormalToPart/** 4-Axis Normal to Part */,
                TypesFourAxisRelativeToPart/** 4-Axis Relative to Part */,
                TypesDualFourAxisOnPart/** Dual 4-Axis on Part */,
                TypesInterpolateVector/** Interpolate Vector */,
                TypesInterpolateAngleToPart/** Interpolate Angle to Part */,
                TypesInterpolateAngleToDrive/** Interpolate Angle to Drive */,
                TypesOptimizedToDrive/** Optimized to Drive */,
                TypesNormalToDrive/** Normal to Drive */,
                TypesSwarfDrive/** Swarf Drive */,
                TypesRelativeToDrive/** Relative to Drive */,
                TypesFourAxisNormalToDrive/** 4-Axis Normal to Drive */,
                TypesFourAxisRelativeToDrive/** 4-Axis Relative to Drive */,
                TypesDualFourAxisOnDrive/** Dual 4-Axis on Drive */,
                TypesSameAsDrivePath/** Same as drive path */,
                TypesUserDefined/** User Defined */,
                TypesAutomatic/** Original VAP tool axis */,
                TypesAlignToEdges/** Align to almost straight edges */,
                TypesSwarfBaseUV/** Align to U or V parameter line */
            };

            /** Available types for Maximum Lead Angle */
            public: enum MaximumLeadAngleTypes
            {
                MaximumLeadAngleTypesNone/** None */,
                MaximumLeadAngleTypesSpecify/** Specify */
            };

            /** Available types for Nominal Lead Angle */
            public: enum NominalLeadAngleTypes
            {
                NominalLeadAngleTypesNone/** None */,
                NominalLeadAngleTypesSpecify/** Specify */
            };

            /** Available types for Ruling */
            public: enum RulingTypes
            {
                RulingTypesGridOrTrim/** Grid or Trim */,
                RulingTypesBaseUv/** Base UV */
            };

            private: ToolAxisVariableImpl * m_toolaxisvariable_impl;
            private: friend class  _ToolAxisVariableBuilder;
            protected: ToolAxisVariable();
            public: ~ToolAxisVariable();
            /**Returns  the tool axis type 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::CAM::ToolAxisVariable::Types ToolAxisType
            (
            );
            /**Sets  the tool axis type 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : cam_base ("CAM BASE") */
            public: void SetToolAxisType
            (
                NXOpen::CAM::ToolAxisVariable::Types toolAxis /** the tool axis type */
            );
            /**Returns  the Lead Angle
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: double LeadAngle
            (
            );
            /**Sets  the Lead Angle
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : cam_base ("CAM BASE") */
            public: void SetLeadAngle
            (
                double leadAngle /** the Lead Angle*/
            );
            /**Returns the Minimum the Lead Angle
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: double MinimumLeadAngle
            (
            );
            /**Sets the Minimum the Lead Angle
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : cam_base ("CAM BASE") */
            public: void SetMinimumLeadAngle
            (
                double minimumLeadAngle /** the Minimum Lead Angle*/
            );
            /**Returns the Maximum the Lead Angle
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: double MaximumLeadAngle
            (
            );
            /**Sets the Maximum the Lead Angle
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : cam_base ("CAM BASE") */
            public: void SetMaximumLeadAngle
            (
                double maximumLeadAngle /** the Maximum Lead Angle*/
            );
            /**Returns the Tilt Angle
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: double TiltAngle
            (
            );
            /**Sets the Tilt Angle
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : cam_base ("CAM BASE") */
            public: void SetTiltAngle
            (
                double tiltAngle /** the Tilt Angle*/
            );
            /**Returns the Minimum Tilt Angle
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: double MinimumTiltAngle
            (
            );
            /**Sets the Minimum Tilt Angle
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : cam_base ("CAM BASE") */
            public: void SetMinimumTiltAngle
            (
                double minimumTiltAngle /** the Minimum Tilt Angle*/
            );
            /**Returns the Maximum Tilt Angle
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: double MaximumTiltAngle
            (
            );
            /**Sets the Maximum Tilt Angle
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : cam_base ("CAM BASE") */
            public: void SetMaximumTiltAngle
            (
                double maximumTiltAngle /** the Maximum Tilt Angle*/
            );
            /**Returns  the Rotation Axis 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Direction * RotationAxis
            (
            );
            /**Sets  the Rotation Axis 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : cam_base ("CAM BASE") */
            public: void SetRotationAxis
            (
                NXOpen::Direction * vector /** the Rotation Axis */
            );
            /**Returns  the Zag Rotation Axis 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Direction * ZagRotationAxis
            (
            );
            /**Sets  the Zag Rotation Axis 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : cam_base ("CAM BASE") */
            public: void SetZagRotationAxis
            (
                NXOpen::Direction * vector /** the Zag Rotation Axis */
            );
            /**Returns the Rotation Angle
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: double RotationAngle
            (
            );
            /**Sets the Rotation Angle
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : cam_base ("CAM BASE") */
            public: void SetRotationAngle
            (
                double rotationAngle /** the Rotation Angle*/
            );
            /**Returns the Minimum Heel Clearance Distance
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: double MinimumHeelClearanceDistance
            (
            );
            /**Sets the Minimum Heel Clearance Distance
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : cam_base ("CAM BASE") */
            public: void SetMinimumHeelClearanceDistance
            (
                double minimumHeelClearanceDistance /** the Minimum Heel Clearance Distance*/
            );
            /**Returns  the Maximum Lead Angle type 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::CAM::ToolAxisVariable::MaximumLeadAngleTypes MaximumLeadAngleType
            (
            );
            /**Sets  the Maximum Lead Angle type 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : cam_base ("CAM BASE") */
            public: void SetMaximumLeadAngleType
            (
                NXOpen::CAM::ToolAxisVariable::MaximumLeadAngleTypes maximumLeadAngle /**the Maximum Lead Angle type */
            );
            /**Returns the Nominal Lead Angle type 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::CAM::ToolAxisVariable::NominalLeadAngleTypes NominalLeadAngleType
            (
            );
            /**Sets the Nominal Lead Angle type 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : cam_base ("CAM BASE") */
            public: void SetNominalLeadAngleType
            (
                NXOpen::CAM::ToolAxisVariable::NominalLeadAngleTypes nominalLeadAngle /**the Nominal Lead Angle type */
            );
            /**Returns the Nominal Lead Angle
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: double NominalLeadAngle
            (
            );
            /**Sets the Nominal Lead Angle
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : cam_base ("CAM BASE") */
            public: void SetNominalLeadAngle
            (
                double nominalLeadAngle /** the Nominal Lead Angle*/
            );
            /**Returns the Swarf Tilt Angle
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: double SwarfTiltAngle
            (
            );
            /**Sets the Swarf Tilt Angle
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : cam_base ("CAM BASE") */
            public: void SetSwarfTiltAngle
            (
                double swarfTiltAngle /** the Swarf Tilt Angle*/
            );
            /**Returns  the Apply Smoothing 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: bool ApplySmoothing
            (
            );
            /**Sets  the Apply Smoothing 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : cam_base ("CAM BASE") */
            public: void SetApplySmoothing
            (
                bool applySmoothing /**the Apply Smoothing */
            );
            /**Returns  the Ruling Type 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::CAM::ToolAxisVariable::RulingTypes RulingType
            (
            );
            /**Sets  the Ruling Type 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : cam_base ("CAM BASE") */
            public: void SetRulingType
            (
                NXOpen::CAM::ToolAxisVariable::RulingTypes rulingType /**the Ruling Type */
            );
            /**Returns the Zag Rotation Angle
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: double ZagRotationAngle
            (
            );
            /**Sets the Zag Rotation Angle
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : cam_base ("CAM BASE") */
            public: void SetZagRotationAngle
            (
                double zagAngle /** the Zag Angle*/
            );
            /**Returns the Zag Lead Angle
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: double ZagLeadAngle
            (
            );
            /**Sets the Zag Lead Angle
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : cam_base ("CAM BASE") */
            public: void SetZagLeadAngle
            (
                double zagLead /** the Zag Lead*/
            );
            /**Returns the Zag Tilt Angle
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: double ZagTiltAngle
            (
            );
            /**Sets the Zag Tilt Angle
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : cam_base ("CAM BASE") */
            public: void SetZagTiltAngle
            (
                double zagTilt /** the Zag Tilt*/
            );
            /**Returns  the Interpolate Vector builder  
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::CAM::InterpolateVector * InterpolateVector
            (
            );
            /**Returns  the Interpolate Angle to Part builder  
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::CAM::InterpolateAngle * InterpolateAngleToPart
            (
            );
            /**Returns  the Interpolate Angle to Drive builder  
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::CAM::InterpolateAngle * InterpolateAngleToDrive
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