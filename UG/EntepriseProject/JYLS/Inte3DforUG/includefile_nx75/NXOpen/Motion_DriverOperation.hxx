#ifndef NXOpen_MOTION_DRIVEROPERATION_HXX_INCLUDED
#define NXOpen_MOTION_DRIVEROPERATION_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     Motion_DriverOperation.ja
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
#include <NXOpen/Expression.hxx>
#include <NXOpen/Motion_DriverOperation.hxx>
#include <NXOpen/TaggedObject.hxx>
#include <NXOpen/libnxopencpp_motion_exports.hxx>

#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable:4996)
#endif
#ifdef __GNUC__
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

namespace NXOpen
{
    namespace Motion
    {
        class DriverOperation;
    }
    class Expression;
    namespace Motion
    {
        class PMDCMotor;
    }
    namespace Motion
    {
        class SignalChart;
    }
    class NXObject;
    namespace Motion
    {
        class _DriverOperationBuilder;
        class DriverOperationImpl;
        /** Represents a @link Motion::DriverOperation Motion::DriverOperation@endlink  
         <br>  Created in NX5.0.0.  <br>  
        */
        class NXOPENCPP_MOTIONEXPORT  DriverOperation : public TaggedObject
        {
            /** Driver operation type */
            public: enum Type
            {
                TypeUndefined/** Undefined */,
                TypeConstant/** Constant*/,
                TypeHarmonic/** Harmonic */,
                TypeFunction/** Function */,
                TypeArticulation/** Articulation */,
                TypeMotor/** Motor */
            };

            /** Integration type */
            public: enum IntegrationType
            {
                IntegrationTypeDisplacement/** Displacement */,
                IntegrationTypeVelocity/** Velocity */,
                IntegrationTypeAcceleration/** Acceleration */
            };

            private: DriverOperationImpl * m_driveroperation_impl;
            private: friend class  _DriverOperationBuilder;
            protected: DriverOperation();
            public: ~DriverOperation();
            /**Returns  the type option 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Motion::DriverOperation::Type TypeOption
            (
            );
            /**Sets  the type option 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : mechanisms ("MECHANISMS") */
            public: void SetTypeOption
            (
                NXOpen::Motion::DriverOperation::Type typeOption /** typeoption */ 
            );
            /**Returns  the displacement 
             <br>  @deprecated Deprecated in NX8.0.0.  Obtain the expression using @link Motion::DriverOperation::DisplacementExpression Motion::DriverOperation::DisplacementExpression@endlink  to query or edit it. <br>  

             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : None */
            public:  NX_DEPRECATED("Deprecated in NX8.0.0.  Obtain the expression using Motion::DriverOperation::DisplacementExpression to query or edit it.") double Displacement
            (
            );
            /**Sets  the displacement 
             <br>  @deprecated Deprecated in NX8.0.0.  Obtain the expression using @link Motion::DriverOperation::DisplacementExpression Motion::DriverOperation::DisplacementExpression@endlink  to query or edit it. <br>  

             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : mechanisms ("MECHANISMS") */
            public:  NX_DEPRECATED("Deprecated in NX8.0.0.  Obtain the expression using Motion::DriverOperation::DisplacementExpression to query or edit it.") void SetDisplacement
            (
                double displacement /** displacement */ 
            );
            /**Returns  the velocity 
             <br>  @deprecated Deprecated in NX8.0.0.  Obtain the expression using @link Motion::DriverOperation::VelocityExpression Motion::DriverOperation::VelocityExpression@endlink  to query or edit it. <br>  

             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : None */
            public:  NX_DEPRECATED("Deprecated in NX8.0.0.  Obtain the expression using Motion::DriverOperation::VelocityExpression to query or edit it.") double Velocity
            (
            );
            /**Sets  the velocity 
             <br>  @deprecated Deprecated in NX8.0.0.  Obtain the expression using @link Motion::DriverOperation::VelocityExpression Motion::DriverOperation::VelocityExpression@endlink  to query or edit it. <br>  

             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : mechanisms ("MECHANISMS") */
            public:  NX_DEPRECATED("Deprecated in NX8.0.0.  Obtain the expression using Motion::DriverOperation::VelocityExpression to query or edit it.") void SetVelocity
            (
                double velocity /** velocity */ 
            );
            /**Returns  the acceleration 
             <br>  @deprecated Deprecated in NX8.0.0.  Obtain the expression using @link Motion::DriverOperation::AccelerationExpression Motion::DriverOperation::AccelerationExpression@endlink  to query or edit it. <br>  

             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : None */
            public:  NX_DEPRECATED("Deprecated in NX8.0.0.  Obtain the expression using Motion::DriverOperation::AccelerationExpression to query or edit it.") double Acceleration
            (
            );
            /**Sets  the acceleration 
             <br>  @deprecated Deprecated in NX8.0.0.  Obtain the expression using @link Motion::DriverOperation::AccelerationExpression Motion::DriverOperation::AccelerationExpression@endlink  to query or edit it. <br>  

             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : mechanisms ("MECHANISMS") */
            public:  NX_DEPRECATED("Deprecated in NX8.0.0.  Obtain the expression using Motion::DriverOperation::AccelerationExpression to query or edit it.") void SetAcceleration
            (
                double acceleration /** acceleration */ 
            );
            /**Returns  the amplitude 
             <br>  @deprecated Deprecated in NX8.0.0.  Obtain the expression using @link Motion::DriverOperation::AmplitudeExpression Motion::DriverOperation::AmplitudeExpression@endlink  to query or edit it. <br>  

             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : None */
            public:  NX_DEPRECATED("Deprecated in NX8.0.0.  Obtain the expression using Motion::DriverOperation::AmplitudeExpression to query or edit it.") double Amplitude
            (
            );
            /**Sets  the amplitude 
             <br>  @deprecated Deprecated in NX8.0.0.  Obtain the expression using @link Motion::DriverOperation::AmplitudeExpression Motion::DriverOperation::AmplitudeExpression@endlink  to query or edit it. <br>  

             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : mechanisms ("MECHANISMS") */
            public:  NX_DEPRECATED("Deprecated in NX8.0.0.  Obtain the expression using Motion::DriverOperation::AmplitudeExpression to query or edit it.") void SetAmplitude
            (
                double amplitude /** amplitude */ 
            );
            /**Returns  the frequency 
             <br>  @deprecated Deprecated in NX8.0.0.  Obtain the expression using @link Motion::DriverOperation::FrequencyExpression Motion::DriverOperation::FrequencyExpression@endlink  to query or edit it. <br>  

             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : None */
            public:  NX_DEPRECATED("Deprecated in NX8.0.0.  Obtain the expression using Motion::DriverOperation::FrequencyExpression to query or edit it.") double Frequency
            (
            );
            /**Sets  the frequency 
             <br>  @deprecated Deprecated in NX8.0.0.  Obtain the expression using @link Motion::DriverOperation::FrequencyExpression Motion::DriverOperation::FrequencyExpression@endlink  to query or edit it. <br>  

             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : mechanisms ("MECHANISMS") */
            public:  NX_DEPRECATED("Deprecated in NX8.0.0.  Obtain the expression using Motion::DriverOperation::FrequencyExpression to query or edit it.") void SetFrequency
            (
                double frequency /** frequency */ 
            );
            /**Returns  the phase angle 
             <br>  @deprecated Deprecated in NX8.0.0.  Obtain the expression using @link Motion::DriverOperation::PhaseAngleExpression Motion::DriverOperation::PhaseAngleExpression@endlink  to query or edit it. <br>  

             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : None */
            public:  NX_DEPRECATED("Deprecated in NX8.0.0.  Obtain the expression using Motion::DriverOperation::PhaseAngleExpression to query or edit it.") double PhaseAngle
            (
            );
            /**Sets  the phase angle 
             <br>  @deprecated Deprecated in NX8.0.0.  Obtain the expression using @link Motion::DriverOperation::PhaseAngleExpression Motion::DriverOperation::PhaseAngleExpression@endlink  to query or edit it. <br>  

             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : mechanisms ("MECHANISMS") */
            public:  NX_DEPRECATED("Deprecated in NX8.0.0.  Obtain the expression using Motion::DriverOperation::PhaseAngleExpression to query or edit it.") void SetPhaseAngle
            (
                double phaseAngle /** phaseangle */ 
            );
            /**Returns  the harmonic displacement 
             <br>  @deprecated Deprecated in NX8.0.0.  Obtain the expression using @link Motion::DriverOperation::HarmonicDisplacementExpression Motion::DriverOperation::HarmonicDisplacementExpression@endlink  to query or edit it. <br>  

             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : None */
            public:  NX_DEPRECATED("Deprecated in NX8.0.0.  Obtain the expression using Motion::DriverOperation::HarmonicDisplacementExpression to query or edit it.") double HarmonicDisplacement
            (
            );
            /**Sets  the harmonic displacement 
             <br>  @deprecated Deprecated in NX8.0.0.  Obtain the expression using @link Motion::DriverOperation::HarmonicDisplacementExpression Motion::DriverOperation::HarmonicDisplacementExpression@endlink  to query or edit it. <br>  

             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : mechanisms ("MECHANISMS") */
            public:  NX_DEPRECATED("Deprecated in NX8.0.0.  Obtain the expression using Motion::DriverOperation::HarmonicDisplacementExpression to query or edit it.") void SetHarmonicDisplacement
            (
                double harmonicDisplacement /** harmonicdisplacement */ 
            );
            /**Returns  the initial displacement 
             <br>  @deprecated Deprecated in NX8.0.0.  Obtain the expression using @link Motion::DriverOperation::InitialDisplacementExpression Motion::DriverOperation::InitialDisplacementExpression@endlink  to query or edit it. <br>  

             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : None */
            public:  NX_DEPRECATED("Deprecated in NX8.0.0.  Obtain the expression using Motion::DriverOperation::InitialDisplacementExpression to query or edit it.") double InitialDisplacement
            (
            );
            /**Sets  the initial displacement 
             <br>  @deprecated Deprecated in NX8.0.0.  Obtain the expression using @link Motion::DriverOperation::InitialDisplacementExpression Motion::DriverOperation::InitialDisplacementExpression@endlink  to query or edit it. <br>  

             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : mechanisms ("MECHANISMS") */
            public:  NX_DEPRECATED("Deprecated in NX8.0.0.  Obtain the expression using Motion::DriverOperation::InitialDisplacementExpression to query or edit it.") void SetInitialDisplacement
            (
                double initialDisplacement /** initialdisplacement */ 
            );
            /**Returns  the initial velocity 
             <br>  @deprecated Deprecated in NX8.0.0.  Obtain the expression using @link Motion::DriverOperation::InitialVelocityExpression Motion::DriverOperation::InitialVelocityExpression@endlink  to query or edit it. <br>  

             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : None */
            public:  NX_DEPRECATED("Deprecated in NX8.0.0.  Obtain the expression using Motion::DriverOperation::InitialVelocityExpression to query or edit it.") double InitialVelocity
            (
            );
            /**Sets  the initial velocity 
             <br>  @deprecated Deprecated in NX8.0.0.  Obtain the expression using @link Motion::DriverOperation::InitialVelocityExpression Motion::DriverOperation::InitialVelocityExpression@endlink  to query or edit it. <br>  

             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : mechanisms ("MECHANISMS") */
            public:  NX_DEPRECATED("Deprecated in NX8.0.0.  Obtain the expression using Motion::DriverOperation::InitialVelocityExpression to query or edit it.") void SetInitialVelocity
            (
                double initialVelocity /** initialvelocity */ 
            );
            /**Returns  the integration type option 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Motion::DriverOperation::IntegrationType IntegrationTypeOption
            (
            );
            /**Sets  the integration type option 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : mechanisms ("MECHANISMS") */
            public: void SetIntegrationTypeOption
            (
                NXOpen::Motion::DriverOperation::IntegrationType integrationTypeOption /** integrationtypeoption */ 
            );
            /**Returns  the function  
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::NXObject * Function
            (
            );
            /**Sets  the function  
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : mechanisms ("MECHANISMS") */
            public: void SetFunction
            (
                NXOpen::NXObject * function /** function */ 
            );
            /**Returns  the motor  
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Motion::PMDCMotor * Motor
            (
            );
            /**Sets  the motor  
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : mechanisms ("MECHANISMS") */
            public: void SetMotor
            (
                NXOpen::Motion::PMDCMotor * motor /** motor */ 
            );
            /**Returns  the signal chart  
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Motion::SignalChart * SignalChart
            (
            );
            /**Sets  the signal chart  
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : mechanisms ("MECHANISMS") */
            public: void SetSignalChart
            (
                NXOpen::Motion::SignalChart * signalChart /** signal chart */ 
            );
            /**Returns  the displacement expression 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Expression * DisplacementExpression
            (
            );
            /**Returns  the velocity expression
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Expression * VelocityExpression
            (
            );
            /**Returns  the acceleration expression 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Expression * AccelerationExpression
            (
            );
            /**Returns  the amplitude expression 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Expression * AmplitudeExpression
            (
            );
            /**Returns  the frequency expression
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Expression * FrequencyExpression
            (
            );
            /**Returns  the phase angle expression
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Expression * PhaseAngleExpression
            (
            );
            /**Returns  the harmonic displacement expression 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Expression * HarmonicDisplacementExpression
            (
            );
            /**Returns  the initial displacement expression
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Expression * InitialDisplacementExpression
            (
            );
            /**Returns  the initial velocity expression
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Expression * InitialVelocityExpression
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
