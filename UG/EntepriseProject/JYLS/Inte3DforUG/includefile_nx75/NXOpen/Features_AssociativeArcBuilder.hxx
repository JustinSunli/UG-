#ifndef NXOpen_FEATURES_ASSOCIATIVEARCBUILDER_HXX_INCLUDED
#define NXOpen_FEATURES_ASSOCIATIVEARCBUILDER_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     Features_AssociativeArcBuilder.ja
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
#include <NXOpen/Features_AssociativeArcBuilder.hxx>
#include <NXOpen/GeometricUtilities_CurveLimitsData.hxx>
#include <NXOpen/GeometricUtilities_SupportPlaneData.hxx>
#include <NXOpen/SelectObject.hxx>
#include <NXOpen/ugmath.hxx>
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
        class AssociativeArcBuilder;
    }
    class Expression;
    namespace Features
    {
        class FeatureBuilder;
    }
    namespace GeometricUtilities
    {
        class CurveLimitsData;
    }
    namespace GeometricUtilities
    {
        class SupportPlaneData;
    }
    class SelectCartesianCoordinateSystem;
    class SelectDisplayableObject;
    class SelectObject;
    class SelectPoint;
    namespace Features
    {
        class _AssociativeArcBuilderBuilder;
        class AssociativeArcBuilderImpl;
        /** Represents a @link Features::AssociativeArc Features::AssociativeArc@endlink  builder  <br> To create a new instance of this class, use @link Features::BaseFeatureCollection::CreateAssociativeArcBuilder Features::BaseFeatureCollection::CreateAssociativeArcBuilder@endlink  <br> 
        Default values.
        <table border="1"> 
         
        <tr><th> 
        Property</th>  <th> 
        Value</th> </tr>
        <tr><td> 
         
        Associative </td> <td> 
         
        True </td> </tr> 

        <tr><td> 
         
        Limits.EndLimit.LimitOption </td> <td> 
         
        AtPoint </td> </tr> 

        <tr><td> 
         
        SupportPlaneData.SupportPlaneLockStatus </td> <td> 
         
        No </td> </tr> 

        </table>  

         <br>  Created in NX5.0.0.  <br>  
        */
        class NXOPENCPP_FEATURESEXPORT  AssociativeArcBuilder : public Features::FeatureBuilder
        {
            /** Represents arc type. */
            public: enum Types
            {
                TypesThreePointArc/** Three point arc */,
                TypesArcFromCenter/** Arc from center */
            };

            /** Represents start point options type */
            public: enum StartOption
            {
                StartOptionInferred/** Inferred */,
                StartOptionPoint/** Point */,
                StartOptionTangent/** Tangent */
            };

            /** Represents references for start point */
            public: enum StartReference
            {
                StartReferenceWcs/** WCS */,
                StartReferenceAbsolute/** Absolute CSYS */,
                StartReferenceCordinatesSystem/** CSYS */
            };

            /** Represents references for center point */
            public: enum CenterReference
            {
                CenterReferenceWcs/** WCS */,
                CenterReferenceAbsolute/** Absolute CSYS */,
                CenterReferenceCordinatesSystem/** CSYS */
            };

            /** Represents end point options type */
            public: enum EndOption
            {
                EndOptionInferred/** Inferred */,
                EndOptionPoint/** Point */,
                EndOptionTangent/** Tangent */,
                EndOptionRadius/** Radius */,
                EndOptionDiameter/** Diameter */
            };

            /** Represents references for end point */
            public: enum EndReference
            {
                EndReferenceWcs/** WCS */,
                EndReferenceAbsolute/** Absolute CSYS */,
                EndReferenceCordinatesSystem/** CSYS */
            };

            /** Represents mid point options type */
            public: enum MidOption
            {
                MidOptionInferred/** Inferred */,
                MidOptionPoint/** Point */,
                MidOptionTangent/** Tangent */,
                MidOptionRadius/** Radius */,
                MidOptionDiameter/** Diameter */
            };

            /** Represents references for mid point */
            public: enum MidReference
            {
                MidReferenceWcs/** WCS */,
                MidReferenceAbsolute/** Absolute CSYS */,
                MidReferenceCordinatesSystem/** CSYS */
            };

            private: AssociativeArcBuilderImpl * m_associativearcbuilder_impl;
            private: friend class  _AssociativeArcBuilderBuilder;
            protected: AssociativeArcBuilder();
            public: ~AssociativeArcBuilder();
            /**Returns  the type option 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Features::AssociativeArcBuilder::Types Type
            (
            );
            /**Sets  the type option 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : solid_modeling ("SOLIDS MODELING") OR drafting ("DRAFTING") */
            public: void SetType
            (
                NXOpen::Features::AssociativeArcBuilder::Types type /** type */ 
            );
            /**Returns  the start point options 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Features::AssociativeArcBuilder::StartOption StartPointOptions
            (
            );
            /**Sets  the start point options 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : solid_modeling ("SOLIDS MODELING") OR drafting ("DRAFTING") */
            public: void SetStartPointOptions
            (
                NXOpen::Features::AssociativeArcBuilder::StartOption startPointOptions /** startpointoptions */ 
            );
            /**Returns  the start inferred constraint 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::SelectObject * StartInferredConstraint
            (
            );
            /**Returns  the start point reference 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Features::AssociativeArcBuilder::StartReference StartPointReference
            (
            );
            /**Sets  the start point reference 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : solid_modeling ("SOLIDS MODELING") OR drafting ("DRAFTING") */
            public: void SetStartPointReference
            (
                NXOpen::Features::AssociativeArcBuilder::StartReference startPointReference /** startpointreference */ 
            );
            /**Returns  the start reference coordinate system 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::SelectCartesianCoordinateSystem * StartReferenceCsys
            (
            );
            /**Returns  the start point 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::SelectPoint * StartPoint
            (
            );
            /**Returns  the start tangent 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::SelectDisplayableObject * StartTangent
            (
            );
            /**Returns  the center point reference 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Features::AssociativeArcBuilder::CenterReference CenterPointReference
            (
            );
            /**Sets  the center point reference 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : solid_modeling ("SOLIDS MODELING") OR drafting ("DRAFTING") */
            public: void SetCenterPointReference
            (
                NXOpen::Features::AssociativeArcBuilder::CenterReference centerPointReference /** centerpointreference */ 
            );
            /**Returns  the center point reference coordinate system 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::SelectCartesianCoordinateSystem * CenterPointReferenceCsys
            (
            );
            /**Returns  the center point 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::SelectPoint * CenterPoint
            (
            );
            /**Returns  the end point options 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Features::AssociativeArcBuilder::EndOption EndPointOptions
            (
            );
            /**Sets  the end point options 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : solid_modeling ("SOLIDS MODELING") OR drafting ("DRAFTING") */
            public: void SetEndPointOptions
            (
                NXOpen::Features::AssociativeArcBuilder::EndOption endPointOptions /** endpointoptions */ 
            );
            /**Returns  the end inferred constraint 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::SelectObject * EndInferredConstraint
            (
            );
            /**Returns  the end point reference 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Features::AssociativeArcBuilder::EndReference EndPointReference
            (
            );
            /**Sets  the end point reference 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : solid_modeling ("SOLIDS MODELING") OR drafting ("DRAFTING") */
            public: void SetEndPointReference
            (
                NXOpen::Features::AssociativeArcBuilder::EndReference endPointReference /** endpointreference */ 
            );
            /**Returns  the end reference coordinate system 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::SelectCartesianCoordinateSystem * EndReferenceCsys
            (
            );
            /**Returns  the end point 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::SelectPoint * EndPoint
            (
            );
            /**Returns  the end tangent 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::SelectDisplayableObject * EndTangent
            (
            );
            /**Returns  the mid point options 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Features::AssociativeArcBuilder::MidOption MidPointOptions
            (
            );
            /**Sets  the mid point options 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : solid_modeling ("SOLIDS MODELING") OR drafting ("DRAFTING") */
            public: void SetMidPointOptions
            (
                NXOpen::Features::AssociativeArcBuilder::MidOption midPointOptions /** midpointoptions */ 
            );
            /**Returns  the mid inferred constraint 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::SelectObject * MidInferredConstraint
            (
            );
            /**Returns  the mid point reference 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Features::AssociativeArcBuilder::MidReference MidPointReference
            (
            );
            /**Sets  the mid point reference 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : solid_modeling ("SOLIDS MODELING") OR drafting ("DRAFTING") */
            public: void SetMidPointReference
            (
                NXOpen::Features::AssociativeArcBuilder::MidReference midPointReference /** midpointreference */ 
            );
            /**Returns  the mid reference coordinate system 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::SelectCartesianCoordinateSystem * MidReferenceCsys
            (
            );
            /**Returns  the mid point 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::SelectPoint * MidPoint
            (
            );
            /**Returns  the mid tangent 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::SelectDisplayableObject * MidTangent
            (
            );
            /**Returns  the radius of arc
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Expression * Radius
            (
            );
            /**Returns  the diameter of arc
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Expression * Diameter
            (
            );
            /**Returns  the support plane data 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::GeometricUtilities::SupportPlaneData * SupportPlaneData
            (
            );
            /**Returns  the limits 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::GeometricUtilities::CurveLimitsData * Limits
            (
            );
            /**Returns  the associative 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : None */
            public: bool Associative
            (
            );
            /**Sets  the associative 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : solid_modeling ("SOLIDS MODELING") OR drafting ("DRAFTING") */
            public: void SetAssociative
            (
                bool associative /** associative */ 
            );
            /**Returns  the zone point for point-point radius. 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Point3d ZonePoint
            (
            );
            /**Sets  the zone point for point-point radius. 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : solid_modeling ("SOLIDS MODELING") OR drafting ("DRAFTING") */
            public: void SetZonePoint
            (
                const NXOpen::Point3d & zonePoint /** zonepoint */ 
            );
            /**Returns  the plane direction for arc type center radius when lock status is @link GeometricUtilities::SupportPlaneData::LockPlaneStatusCenterPointDirection GeometricUtilities::SupportPlaneData::LockPlaneStatusCenterPointDirection@endlink  
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Vector3d CenterRadiusLockedPlaneDirection
            (
            );
            /**Sets  the plane direction for arc type center radius when lock status is @link GeometricUtilities::SupportPlaneData::LockPlaneStatusCenterPointDirection GeometricUtilities::SupportPlaneData::LockPlaneStatusCenterPointDirection@endlink  
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : solid_modeling ("SOLIDS MODELING") OR drafting ("DRAFTING") */
            public: void SetCenterRadiusLockedPlaneDirection
            (
                const NXOpen::Vector3d & direction /** direction */ 
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
