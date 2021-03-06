#ifndef NXOpen_CAM_INSPECTIONSURFACEFEATUREBUILDER_HXX_INCLUDED
#define NXOpen_CAM_INSPECTIONSURFACEFEATUREBUILDER_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     CAM_InspectionSurfaceFeatureBuilder.ja
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
#include <NXOpen/CAM_InspectionSurfaceFeatureBuilder.hxx>
#include <NXOpen/SelectObject.hxx>
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
        class InspectionSurfaceFeatureBuilder;
    }
    namespace CAM
    {
        class OperationBuilder;
    }
    class SelectFace;
    namespace CAM
    {
        class _InspectionSurfaceFeatureBuilderBuilder;
        class InspectionSurfaceFeatureBuilderImpl;
        /** Represents a CMM Inspection Curve Feature builder  <br> To create a new instance of this class, use @link CAM::InspectionOperationCollection::CreateInspectionSurfaceFeatureBuilder CAM::InspectionOperationCollection::CreateInspectionSurfaceFeatureBuilder@endlink  <br> 
         <br>  Created in NX7.0.0.  <br>  
        */
        class NXOPENCPP_CAMEXPORT  InspectionSurfaceFeatureBuilder : public CAM::OperationBuilder
        {
            private: InspectionSurfaceFeatureBuilderImpl * m_inspectionsurfacefeaturebuilder_impl;
            private: friend class  _InspectionSurfaceFeatureBuilderBuilder;
            protected: InspectionSurfaceFeatureBuilder();
            public: ~InspectionSurfaceFeatureBuilder();
            /**Returns  the selected face 
             <br>  Created in NX7.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::SelectFace * SelectedFace
            (
            );
            /**Returns  the reverse direction 
             <br>  Created in NX7.0.0.  <br>  
             <br> License requirements : None */
            public: bool ReverseDirection
            (
            );
            /**Sets  the reverse direction 
             <br>  Created in NX7.0.0.  <br>  
             <br> License requirements : insp_programming ("INSPECTION PROGRAMMING") */
            public: void SetReverseDirection
            (
                bool reverseDirection /** reversedirection */ 
            );
            /**Returns  the name 
             <br>  Created in NX7.0.0.  <br>  
             <br> License requirements : None */
            public: NXString Name
            (
            );
            /**Sets  the name 
             <br>  Created in NX7.0.0.  <br>  
             <br> License requirements : insp_programming ("INSPECTION PROGRAMMING") */
            public: void SetName
            (
                const NXString & name /** name */ 
            );
            /**Sets  the name 
             <br>  Created in NX7.0.0.  <br>  
             <br> License requirements : insp_programming ("INSPECTION PROGRAMMING") */
            void SetName
            (
                const char * name /** name */ 
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
