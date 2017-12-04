#ifndef NXOpen_FEATURES_HELIXBUILDER_HXX_INCLUDED
#define NXOpen_FEATURES_HELIXBUILDER_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     Features_HelixBuilder.ja
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
#include <NXOpen/Features_FeatureBuilder.hxx>
#include <NXOpen/Features_HelixBuilder.hxx>
#include <NXOpen/GeometricUtilities_LawBuilder.hxx>
#include <NXOpen/GeometricUtilities_OnPathDimensionBuilder.hxx>
#include <NXOpen/Section.hxx>
#include <NXOpen/libnxopencpp_features_exports.hxx>

#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable:4996)
#endif
#ifdef __GNUC__
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

namespace NXOpen
{
    namespace Features
    {
        class HelixBuilder;
    }
    class CoordinateSystem;
    class Expression;
    namespace Features
    {
        class FeatureBuilder;
    }
    namespace GeometricUtilities
    {
        class LawBuilder;
    }
    namespace GeometricUtilities
    {
        class OnPathDimensionBuilder;
    }
    class Section;
    namespace Features
    {
        class _HelixBuilderBuilder;
        class HelixBuilderImpl;
        /**
            Represents a @link Features::Helix Features::Helix@endlink  builder
             <br> To create a new instance of this class, use @link Features::FeatureCollection::CreateHelixBuilder Features::FeatureCollection::CreateHelixBuilder@endlink  <br> 
        Default values.
        <table border="1"> 
         
        <tr><th> 
        Property</th>  <th> 
        Value</th> </tr>
        <tr><td> 
         
        LengthMethod </td> <td> 
         
        Limits </td> </tr> 

        <tr><td> 
         
        PitchLaw.Function </td> <td> 
         
        ft </td> </tr> 

        <tr><td> 
         
        PitchLaw.LawType </td> <td> 
         
        Constant </td> </tr> 

        <tr><td> 
         
        PitchLaw.Parameter </td> <td> 
         
        t </td> </tr> 

        <tr><td> 
         
        SizeOption </td> <td> 
         
        Diameter </td> </tr> 

        <tr><td> 
         
        TurnDirection </td> <td> 
         
        RightHand </td> </tr> 

        <tr><td> 
         
        Type </td> <td> 
         
        AlongVector </td> </tr> 

        </table>  

         <br>  Created in NX8.5.0.  <br>  
        */
        class NXOPENCPP_FEATURESEXPORT  HelixBuilder : public Features::FeatureBuilder
        {
            /** Type of helix */
            public: enum Types
            {
                TypesAlongVector/** Along a vector */,
                TypesAlongSpine/** Along a spine */
            };

            /** Orientation options for along spine type */
            public: enum OrientationOptions
            {
                OrientationOptionsInferred/** Local coordinate system is inferred from spine, at the start */,
                OrientationOptionsSpecified/** Local coordinate system is specified by the user. The spine is transformed using this coordinate system. */
            };

            /** Option indicating how size is defined */
            public: enum SizeOptions
            {
                SizeOptionsDiameter/** Size by diameter */,
                SizeOptionsRadius/** Size by radius */
            };

            /** Method for defining the length */
            public: enum LengthMethods
            {
                LengthMethodsLimits/** Length by start and end limit */,
                LengthMethodsTurns/** Length by number of turns */
            };

            /** Option indicating direction of the turn */
            public: enum TurnDirections
            {
                TurnDirectionsRightHand/** Right handed helix */,
                TurnDirectionsLeftHand/** Left handed helix */
            };

            private: HelixBuilderImpl * m_helixbuilder_impl;
            private: friend class  _HelixBuilderBuilder;
            protected: HelixBuilder();
            public: ~HelixBuilder();
            /**Returns  the type 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Features::HelixBuilder::Types Type
            (
            );
            /**Sets  the type 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : solid_modeling ("SOLIDS MODELING") */
            public: void SetType
            (
                NXOpen::Features::HelixBuilder::Types type /** type */ 
            );
            /**Returns  the coordinate system 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::CoordinateSystem * CoordinateSystem
            (
            );
            /**Sets  the coordinate system 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : solid_modeling ("SOLIDS MODELING") */
            public: void SetCoordinateSystem
            (
                NXOpen::CoordinateSystem * coordinateSystem /** coordinatesystem */ 
            );
            /**Returns  the start angle 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Expression * StartAngle
            (
            );
            /**Returns  the length spine 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Section * Spine
            (
            );
            /**Returns  the orientation option 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Features::HelixBuilder::OrientationOptions OrientationOption
            (
            );
            /**Sets  the orientation option 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : solid_modeling ("SOLIDS MODELING") */
            public: void SetOrientationOption
            (
                NXOpen::Features::HelixBuilder::OrientationOptions orientationOption /** orientationoption */ 
            );
            /**Returns  the size option 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Features::HelixBuilder::SizeOptions SizeOption
            (
            );
            /**Sets  the size option 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : solid_modeling ("SOLIDS MODELING") */
            public: void SetSizeOption
            (
                NXOpen::Features::HelixBuilder::SizeOptions sizeOption /** sizeoption */ 
            );
            /**Returns  the size law 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::GeometricUtilities::LawBuilder * SizeLaw
            (
            );
            /**Returns  the pitch 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::GeometricUtilities::LawBuilder * PitchLaw
            (
            );
            /**Returns  the length method 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Features::HelixBuilder::LengthMethods LengthMethod
            (
            );
            /**Sets  the length method 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : solid_modeling ("SOLIDS MODELING") */
            public: void SetLengthMethod
            (
                NXOpen::Features::HelixBuilder::LengthMethods lengthMethod /** lengthmethod */ 
            );
            /**Returns  the number of turns 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : None */
            public: NXString NumberOfTurns
            (
            );
            /**Sets  the number of turns 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : solid_modeling ("SOLIDS MODELING") */
            public: void SetNumberOfTurns
            (
                const NXString & numberOfTurns /** numberofturns */ 
            );
            /**Sets  the number of turns 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : solid_modeling ("SOLIDS MODELING") */
            void SetNumberOfTurns
            (
                const char * numberOfTurns /** numberofturns */ 
            );
            /**Returns  the start limit 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::GeometricUtilities::OnPathDimensionBuilder * StartLimit
            (
            );
            /**Returns  the end limit 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::GeometricUtilities::OnPathDimensionBuilder * EndLimit
            (
            );
            /**Returns  the turn direction 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Features::HelixBuilder::TurnDirections TurnDirection
            (
            );
            /**Sets  the turn direction 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : solid_modeling ("SOLIDS MODELING") */
            public: void SetTurnDirection
            (
                NXOpen::Features::HelixBuilder::TurnDirections turnDirection /** turndirection */ 
            );
            /**Returns  the distance tolerance 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : None */
            public: double DistanceTolerance
            (
            );
            /**Sets  the distance tolerance 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : solid_modeling ("SOLIDS MODELING") */
            public: void SetDistanceTolerance
            (
                double distanceTolerance /** distancetolerance */ 
            );
            /**Returns  the angle tolerance 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : None */
            public: double AngleTolerance
            (
            );
            /**Sets  the angle tolerance 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : solid_modeling ("SOLIDS MODELING") */
            public: void SetAngleTolerance
            (
                double angleTolerance /** angletolerance */ 
            );
            /** Evaluates the curve 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : features_modeling ("FEATURES MODELING") */
            public: void Evaluate
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
