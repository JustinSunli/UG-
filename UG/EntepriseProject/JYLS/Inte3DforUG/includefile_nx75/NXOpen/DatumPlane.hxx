#ifndef NXOpen_DATUMPLANE_HXX_INCLUDED
#define NXOpen_DATUMPLANE_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     DatumPlane.ja
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
#include <NXOpen/DisplayableObject.hxx>
#include <NXOpen/IBasePlane.hxx>
#include <NXOpen/INXObject.hxx>
#include <NXOpen/IOrientation.hxx>
#include <NXOpen/IReferenceAxis.hxx>
#include <NXOpen/ISurface.hxx>
#include <NXOpen/ugmath.hxx>
#include <NXOpen/libnxopencpp_exports.hxx>

#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable:4996)
#endif
#ifdef __GNUC__
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

namespace NXOpen
{
    class DatumPlane;
    namespace Assemblies
    {
        class Component;
    }
    class BasePart;
    class DisplayableObject;
    namespace Features
    {
        class Feature;
    }
    class IBasePlane;
    class INXObject;
    class IOrientation;
    class IReferenceAxis;
    class ISurface;
    class _DatumPlaneBuilder;
    class DatumPlaneImpl;
    /** Represents a datum plane  <br> This object can not be created by KF it's the display objet of the datum plane <br> 
     <br>  Created in NX3.0.0.  <br>  
    */
    class NXOPENCPPEXPORT  DatumPlane : public DisplayableObject, public virtual ISurface, public virtual IReferenceAxis, public virtual IOrientation, public virtual IBasePlane
    {
        private: DatumPlaneImpl * m_datumplane_impl;
        private: friend class  _DatumPlaneBuilder;
        protected: DatumPlane();
        public: ~DatumPlane();
        /**Returns  the origin of the datum plane 
         <br>  Created in NX3.0.0.  <br>  
         <br> License requirements : solid_modeling ("SOLIDS MODELING") */
        public: NXOpen::Point3d Origin
        (
        );
        /**Returns  the normal of the datum plane 
         <br>  Created in NX3.0.0.  <br>  
         <br> License requirements : solid_modeling ("SOLIDS MODELING") */
        public: NXOpen::Vector3d Normal
        (
        );
        /** Sets the corner points of the datum plane 
         <br>  Created in NX4.0.0.  <br>  
         <br> License requirements : solid_modeling ("SOLIDS MODELING") */
        public: void SetCornerPoints
        (
            const NXOpen::Point3d & point1 /** First corner point of the datum plane */,
            const NXOpen::Point3d & point2 /** Second corner point of the datum plane */,
            const NXOpen::Point3d & point3 /** Third corner point of the datum plane */,
            const NXOpen::Point3d & point4 /** Fourth corner point of the datum plane */
        );
        /** Gets the corner points of the datum plane 
         <br>  Created in NX3.0.0.  <br>  
         <br> License requirements : solid_modeling ("SOLIDS MODELING") */
        public: void GetCornerPoints
        (
            NXOpen::Point3d* point1 /** First corner point of the datum plane */,
            NXOpen::Point3d* point2 /** Second corner point of the datum plane */,
            NXOpen::Point3d* point3 /** Third corner point of the datum plane */,
            NXOpen::Point3d* point4 /** Fourth corner point of the datum plane */
        );
        /**Returns  the feature associated with the datum plane. Note that this is not valid for
                an occurrence. See @link INXObject::IsOccurrence INXObject::IsOccurrence@endlink .
            
         <br>  Created in NX3.0.0.  <br>  
         <br> License requirements : solid_modeling ("SOLIDS MODELING") */
        public: NXOpen::Features::Feature * Feature
        (
        );
        /** Sets the reverse section flag 
         <br>  Created in NX4.0.0.  <br>  
         <br> License requirements : solid_modeling ("SOLIDS MODELING") */
        public: void SetReverseSection
        (
            bool reverseSection /** Reverse section flag */
        );
        /**Returns  the reverse section flag 
         <br>  Created in NX4.0.0.  <br>  
         <br> License requirements : solid_modeling ("SOLIDS MODELING") */
        public: bool ReverseSection
        (
        );
    };
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
