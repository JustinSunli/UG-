#ifndef NXOpen_MECHATRONICS_COLLISIONSHAPEBUILDER_HXX_INCLUDED
#define NXOpen_MECHATRONICS_COLLISIONSHAPEBUILDER_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     Mechatronics_CollisionShapeBuilder.ja
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
#include <NXOpen/Expression.hxx>
#include <NXOpen/Mechatronics_CollisionShapeBuilder.hxx>
#include <NXOpen/libnxopencpp_mechatronics_exports.hxx>

#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable:4996)
#endif
#ifdef __GNUC__
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

namespace NXOpen
{
    namespace Mechatronics
    {
        class CollisionShapeBuilder;
    }
    class Builder;
    class CoordinateSystem;
    class Expression;
    class Point;
    namespace Mechatronics
    {
        class _CollisionShapeBuilderBuilder;
        class CollisionShapeBuilderImpl;
        /** This is an abstract class, and cannot be created.  <br> This is an abstract class, and cannot be created. <br> 
         <br>  Created in NX7.5.1.  <br>  
        */
        class NXOPENCPP_MECHATRONICSEXPORT  CollisionShapeBuilder : public Builder
        {
            private: CollisionShapeBuilderImpl * m_collisionshapebuilder_impl;
            private: friend class  _CollisionShapeBuilderBuilder;
            protected: CollisionShapeBuilder();
            public: ~CollisionShapeBuilder();
            /**Returns  the center point. Valid to all collsion shape types except 
                    @link Mechatronics::CollisionBodyBuilder::CollisionShape Mechatronics::CollisionBodyBuilder::CollisionShape@endlink  is set 
                    to @link Mechatronics::CollisionBodyBuilder::CollisionShapeTypesConvex Mechatronics::CollisionBodyBuilder::CollisionShapeTypesConvex@endlink . 
             <br>  Created in NX7.5.1.  <br>  
             <br> License requirements : nx_mcd_core ("MECHATRONICS CONCEPT DESIGNER") */
            public: NXOpen::Point * CenterPoint
            (
            );
            /**Sets  the center point. Valid to all collsion shape types except 
                    @link Mechatronics::CollisionBodyBuilder::CollisionShape Mechatronics::CollisionBodyBuilder::CollisionShape@endlink  is set 
                    to @link Mechatronics::CollisionBodyBuilder::CollisionShapeTypesConvex Mechatronics::CollisionBodyBuilder::CollisionShapeTypesConvex@endlink . 
             <br>  Created in NX7.5.1.  <br>  
             <br> License requirements : nx_mcd_core ("MECHATRONICS CONCEPT DESIGNER") */
            public: void SetCenterPoint
            (
                NXOpen::Point * centerPoint /** centerpoint */ 
            );
            /**Returns  the orientation. Valid if @link Mechatronics::CollisionBodyBuilder::CollisionShape Mechatronics::CollisionBodyBuilder::CollisionShape@endlink  is set 
                    to @link Mechatronics::CollisionBodyBuilder::CollisionShapeTypesBox Mechatronics::CollisionBodyBuilder::CollisionShapeTypesBox@endlink  
                    or @link Mechatronics::CollisionBodyBuilder::CollisionShapeTypesCapsule Mechatronics::CollisionBodyBuilder::CollisionShapeTypesCapsule@endlink 
                    or @link Mechatronics::CollisionSensorBuilder::CollisionShape Mechatronics::CollisionSensorBuilder::CollisionShape@endlink  is set 
                    to @link Mechatronics::CollisionSensorBuilder::CollisionShapeTypesBox Mechatronics::CollisionSensorBuilder::CollisionShapeTypesBox@endlink 
                    or @link Mechatronics::CollisionSensorBuilder::CollisionShapeTypesLine Mechatronics::CollisionSensorBuilder::CollisionShapeTypesLine@endlink . 
             <br>  Created in NX7.5.1.  <br>  
             <br> License requirements : nx_mcd_core ("MECHATRONICS CONCEPT DESIGNER") */
            public: NXOpen::CoordinateSystem * Orientation
            (
            );
            /**Sets  the orientation. Valid if @link Mechatronics::CollisionBodyBuilder::CollisionShape Mechatronics::CollisionBodyBuilder::CollisionShape@endlink  is set 
                    to @link Mechatronics::CollisionBodyBuilder::CollisionShapeTypesBox Mechatronics::CollisionBodyBuilder::CollisionShapeTypesBox@endlink  
                    or @link Mechatronics::CollisionBodyBuilder::CollisionShapeTypesCapsule Mechatronics::CollisionBodyBuilder::CollisionShapeTypesCapsule@endlink 
                    or @link Mechatronics::CollisionSensorBuilder::CollisionShape Mechatronics::CollisionSensorBuilder::CollisionShape@endlink  is set 
                    to @link Mechatronics::CollisionSensorBuilder::CollisionShapeTypesBox Mechatronics::CollisionSensorBuilder::CollisionShapeTypesBox@endlink 
                    or @link Mechatronics::CollisionSensorBuilder::CollisionShapeTypesLine Mechatronics::CollisionSensorBuilder::CollisionShapeTypesLine@endlink . 
             <br>  Created in NX7.5.1.  <br>  
             <br> License requirements : nx_mcd_core ("MECHATRONICS CONCEPT DESIGNER") */
            public: void SetOrientation
            (
                NXOpen::CoordinateSystem * orientation /** orientation */ 
            );
            /**Returns  the length. Valid if @link Mechatronics::CollisionBodyBuilder::CollisionShape Mechatronics::CollisionBodyBuilder::CollisionShape@endlink  is set 
                    to @link Mechatronics::CollisionBodyBuilder::CollisionShapeTypesBox Mechatronics::CollisionBodyBuilder::CollisionShapeTypesBox@endlink  
                    or @link Mechatronics::CollisionBodyBuilder::CollisionShapeTypesCapsule Mechatronics::CollisionBodyBuilder::CollisionShapeTypesCapsule@endlink 
                    or @link Mechatronics::CollisionSensorBuilder::CollisionShape Mechatronics::CollisionSensorBuilder::CollisionShape@endlink  is set 
                    to @link Mechatronics::CollisionSensorBuilder::CollisionShapeTypesBox Mechatronics::CollisionSensorBuilder::CollisionShapeTypesBox@endlink 
                    or @link Mechatronics::CollisionSensorBuilder::CollisionShapeTypesLine Mechatronics::CollisionSensorBuilder::CollisionShapeTypesLine@endlink .
             <br>  Created in NX7.5.1.  <br>  
             <br> License requirements : nx_mcd_core ("MECHATRONICS CONCEPT DESIGNER") */
            public: NXOpen::Expression * Length
            (
            );
            /**Returns  the width. Valid if @link Mechatronics::CollisionBodyBuilder::CollisionShape Mechatronics::CollisionBodyBuilder::CollisionShape@endlink  is set 
                    to @link Mechatronics::CollisionBodyBuilder::CollisionShapeTypesBox Mechatronics::CollisionBodyBuilder::CollisionShapeTypesBox@endlink  
                    or @link Mechatronics::CollisionSensorBuilder::CollisionShape Mechatronics::CollisionSensorBuilder::CollisionShape@endlink  is set 
                    to @link Mechatronics::CollisionSensorBuilder::CollisionShapeTypesBox Mechatronics::CollisionSensorBuilder::CollisionShapeTypesBox@endlink .
             <br>  Created in NX7.5.1.  <br>  
             <br> License requirements : nx_mcd_core ("MECHATRONICS CONCEPT DESIGNER") */
            public: NXOpen::Expression * Width
            (
            );
            /**Returns  the height. Valid if @link Mechatronics::CollisionBodyBuilder::CollisionShape Mechatronics::CollisionBodyBuilder::CollisionShape@endlink  is set 
                    to @link Mechatronics::CollisionBodyBuilder::CollisionShapeTypesBox Mechatronics::CollisionBodyBuilder::CollisionShapeTypesBox@endlink  
                    or @link Mechatronics::CollisionSensorBuilder::CollisionShape Mechatronics::CollisionSensorBuilder::CollisionShape@endlink  is set 
                    to @link Mechatronics::CollisionSensorBuilder::CollisionShapeTypesBox Mechatronics::CollisionSensorBuilder::CollisionShapeTypesBox@endlink . 
             <br>  Created in NX7.5.1.  <br>  
             <br> License requirements : nx_mcd_core ("MECHATRONICS CONCEPT DESIGNER") */
            public: NXOpen::Expression * Height
            (
            );
            /**Returns  the radius. Valid if @link Mechatronics::CollisionBodyBuilder::CollisionShape Mechatronics::CollisionBodyBuilder::CollisionShape@endlink  is set 
                    to @link Mechatronics::CollisionBodyBuilder::CollisionShapeTypesSphere Mechatronics::CollisionBodyBuilder::CollisionShapeTypesSphere@endlink  
                    or @link Mechatronics::CollisionSensorBuilder::CollisionShape Mechatronics::CollisionSensorBuilder::CollisionShape@endlink  is set 
                    to @link Mechatronics::CollisionSensorBuilder::CollisionShapeTypesSphere Mechatronics::CollisionSensorBuilder::CollisionShapeTypesSphere@endlink . 
             <br>  Created in NX7.5.1.  <br>  
             <br> License requirements : nx_mcd_core ("MECHATRONICS CONCEPT DESIGNER") */
            public: NXOpen::Expression * Radius
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
