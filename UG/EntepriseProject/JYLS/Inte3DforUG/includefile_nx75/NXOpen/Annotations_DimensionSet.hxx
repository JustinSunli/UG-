#ifndef NXOpen_ANNOTATIONS_DIMENSIONSET_HXX_INCLUDED
#define NXOpen_ANNOTATIONS_DIMENSIONSET_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     Annotations_DimensionSet.ja
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
#include <NXOpen/Annotations_Annotation.hxx>
#include <NXOpen/Annotations_IContainer.hxx>
#include <NXOpen/Annotations_Associativity.hxx>
#include <NXOpen/Annotations_DimensionData.hxx>
#include <NXOpen/Annotations_PmiData.hxx>
#include <NXOpen/INXObject.hxx>
#include <NXOpen/ugmath.hxx>
#include <NXOpen/libnxopencpp_annotations_exports.hxx>

#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable:4996)
#endif
#ifdef __GNUC__
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

namespace NXOpen
{
    namespace Annotations
    {
        class DimensionSet;
    }
    namespace Annotations
    {
        class Annotation;
    }
    namespace Annotations
    {
        class Associativity;
    }
    namespace Annotations
    {
        class Dimension;
    }
    namespace Annotations
    {
        class DimensionData;
    }
    namespace Annotations
    {
        class IContainer;
    }
    namespace Annotations
    {
        class PmiData;
    }
    namespace Assemblies
    {
        class Component;
    }
    class BasePart;
    class INXObject;
    class NXObject;
    class Xform;
    namespace Annotations
    {
        class _DimensionSetBuilder;
        class DimensionSetImpl;
        /** Represents a dimension set  <br> This is an abstract class. <br> 
         <br>  Created in NX4.0.0.  <br>  
        */
        class NXOPENCPP_ANNOTATIONSEXPORT  DimensionSet : public Annotations::Annotation, public virtual Annotations::IContainer
        {
            private: DimensionSetImpl * m_dimensionset_impl;
            private: friend class  _DimensionSetBuilder;
            protected: DimensionSet();
            public: ~DimensionSet();
            /**Returns  the dimension offset 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : None */
            public: double DimensionOffset
            (
            );
            /**Sets  the dimension offset 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : geometric_tol ("GDT") OR drafting ("DRAFTING") */
            public: void SetDimensionOffset
            (
                double dimensionOffset /** dimension offset */ 
            );
            /** Adds a dimension to the set  @return  Dimension added to the set 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : drafting ("DRAFTING") */
            public: NXOpen::Annotations::Dimension * AddDimension
            (
                NXOpen::Annotations::DimensionData * dimensionData /** Dimension data */,
                const NXOpen::Point3d & origin /** Origin for the dimension */,
                bool autoAdjustNarrowDim /** If narrow dimension should be 
                                                     automatically adjusted */
            );
            /** Adds a PMI dimension to the PMI dimension set. The new dimension is created on the same plane
                        as the existing dimensions.  @return  Dimension added to the set 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : geometric_tol ("GDT") */
            public: NXOpen::Annotations::Dimension * AddPmiDimension
            (
                NXOpen::Annotations::DimensionData * dimensionData /** Dimension data */,
                NXOpen::Annotations::PmiData * pmiData /** PMI data */,
                const NXOpen::Point3d & origin /** Origin for the dimension */,
                bool autoAdjustNarrowDim /** If narrow dimension should be 
                                                     automatically adjusted */
            );
            /** Adds a PMI dimension to the PMI dimension set. The new dimension is created on the same plane
                        as the existing dimensions.  @return  Dimension added to the set 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : geometric_tol ("GDT") */
            public: NXOpen::Annotations::Dimension * AddPmiDimension
            (
                NXOpen::Annotations::DimensionData * dimensionData /** Dimension data */,
                NXOpen::Annotations::PmiData * pmiData /** PMI data */,
                NXOpen::Xform * annotationPlane /** Annotation plane on which the dimensions lie */,
                const NXOpen::Point3d & origin /** Origin for the dimension */,
                bool autoAdjustNarrowDim /** If narrow dimension should be 
                                                     automatically adjusted */
            );
            /** Reverse the offset of Baseline/Chain Dimension 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : geometric_tol ("GDT") */
            public: void ReverseOffset
            (
            );
            /** Returns all the sub dimensions of this set  @return   
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : None */
            public: std::vector<NXOpen::Annotations::Dimension *> GetAllSubDimensions
            (
            );
            /** Returns the objects in the container  @return  List of objects 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : None */
            public: virtual std::vector<NXOpen::NXObject *> GetObjects
            (
            );
            /** Removes an object in the container. The container object is deleted when
                        the last object in it is deleted 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : geometric_tol ("GDT") OR drafting ("DRAFTING") */
            public: virtual void RemoveObject
            (
                NXOpen::NXObject * object /** Object to remove */
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
