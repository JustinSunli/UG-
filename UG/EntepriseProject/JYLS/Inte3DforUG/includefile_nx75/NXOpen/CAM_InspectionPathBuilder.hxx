#ifndef NXOpen_CAM_INSPECTIONPATHBUILDER_HXX_INCLUDED
#define NXOpen_CAM_INSPECTIONPATHBUILDER_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     CAM_InspectionPathBuilder.ja
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
#include <NXOpen/CAM_InspectionPathBuilder.hxx>
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
        class InspectionPathBuilder;
    }
    namespace CAM
    {
        class InheritableDoubleBuilder;
    }
    namespace CAM
    {
        class InheritableIntBuilder;
    }
    namespace CAM
    {
        class InspectionGroup;
    }
    namespace CAM
    {
        class InspectionSetup;
    }
    namespace CAM
    {
        class OperationBuilder;
    }
    class NXObject;
    class SelectNXObjectList;
    namespace CAM
    {
        class _InspectionPathBuilderBuilder;
        class InspectionPathBuilderImpl;
        /** Represents the builder for a CMM Inspection path.  <br> To create a new instance of this class, use @link CAM::InspectionOperationCollection::CreateInspectionPathBuilder CAM::InspectionOperationCollection::CreateInspectionPathBuilder@endlink  <br> 
         <br>  Created in NX7.0.0.  <br>  
        */
        class NXOPENCPP_CAMEXPORT  InspectionPathBuilder : public CAM::OperationBuilder
        {
            /** the inspection mode */
            public: enum InspectModeType
            {
                InspectModeTypeDefault/** Default from method */,
                InspectModeTypeProgram/** Specified by program */,
                InspectModeTypeManual/** Manual */,
                InspectModeTypeAuto/** Auto determined by application */
            };

            /** the path point sequence optimization method */
            public: enum SequenceType
            {
                SequenceTypeNone/** None */,
                SequenceTypeNearest/** Nearest neighbor */,
                SequenceTypeUStrip/** U strip */,
                SequenceTypeVStrip/** V strip */
            };

            /** the entry/exit flag */
            public: enum EntryExitType
            {
                EntryExitTypeEntry/** Entry Point */,
                EntryExitTypeExit/** Exit Point */
            };

            /** the first/last flag */
            public: enum FirstLastType
            {
                FirstLastTypeFirst/** First Point */,
                FirstLastTypeLast/** Last Point */
            };

            private: InspectionPathBuilderImpl * m_inspectionpathbuilder_impl;
            private: friend class  _InspectionPathBuilderBuilder;
            protected: InspectionPathBuilder();
            public: ~InspectionPathBuilder();
            /**Returns  the selector for the inspection feature 
             <br>  Created in NX7.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::SelectNXObjectList * SelectFeature
            (
            );
            /**Returns  the inspection feature operation name 
             <br>  Created in NX7.0.0.  <br>  
             <br> License requirements : None */
            public: NXString FeatureOpName
            (
            );
            /**Sets  the inspection feature operation name 
             <br>  Created in NX7.0.0.  <br>  
             <br> License requirements : insp_programming ("INSPECTION PROGRAMMING") */
            public: void SetFeatureOpName
            (
                const NXString & featureOpName /** featureopname */ 
            );
            /**Sets  the inspection feature operation name 
             <br>  Created in NX7.0.0.  <br>  
             <br> License requirements : insp_programming ("INSPECTION PROGRAMMING") */
            void SetFeatureOpName
            (
                const char * featureOpName /** featureopname */ 
            );
            /** Gets the approach direction vector values  @return  the approach direction values 
             <br>  Created in NX7.0.0.  <br>  
             <br> License requirements : None */
            public: std::vector<double> GetApproachDirection
            (
            );
            /** Sets the approach direction vector values 
             <br>  Created in NX7.0.0.  <br>  
             <br> License requirements : insp_programming ("INSPECTION PROGRAMMING") */
            public: void SetApproachDirection
            (
                const std::vector<double> & direction /** the approach direction values */
            );
            /** Flips the approach direction vector 
             <br>  Created in NX7.0.0.  <br>  
             <br> License requirements : insp_programming ("INSPECTION PROGRAMMING") */
            public: void FlipApproachDirection
            (
            );
            /**Returns  the inspection path operation name 
             <br>  Created in NX7.0.0.  <br>  
             <br> License requirements : None */
            public: NXString PathOpName
            (
            );
            /**Sets  the inspection path operation name 
             <br>  Created in NX7.0.0.  <br>  
             <br> License requirements : insp_programming ("INSPECTION PROGRAMMING") */
            public: void SetPathOpName
            (
                const NXString & pathOpName /** pathopname */ 
            );
            /**Sets  the inspection path operation name 
             <br>  Created in NX7.0.0.  <br>  
             <br> License requirements : insp_programming ("INSPECTION PROGRAMMING") */
            void SetPathOpName
            (
                const char * pathOpName /** pathopname */ 
            );
            /**Returns  the number of points in the path 
             <br>  Created in NX7.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::CAM::InheritableIntBuilder * NumPoints
            (
            );
            /**Returns  the inspection mode setting 
             <br>  Created in NX7.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::CAM::InspectionPathBuilder::InspectModeType InspectionMode
            (
            );
            /**Sets  the inspection mode setting 
             <br>  Created in NX7.0.0.  <br>  
             <br> License requirements : insp_programming ("INSPECTION PROGRAMMING") */
            public: void SetInspectionMode
            (
                NXOpen::CAM::InspectionPathBuilder::InspectModeType inspectMode /** inspectmode */ 
            );
            /**Returns  the path point sequence optimization setting 
             <br>  Created in NX7.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::CAM::InspectionPathBuilder::SequenceType SequenceOptimization
            (
            );
            /**Sets  the path point sequence optimization setting 
             <br>  Created in NX7.0.0.  <br>  
             <br> License requirements : insp_programming ("INSPECTION PROGRAMMING") */
            public: void SetSequenceOptimization
            (
                NXOpen::CAM::InspectionPathBuilder::SequenceType sequenceOpt /** sequenceopt */ 
            );
            /**Returns  a flag to indicate if an entry point is required 
             <br>  Created in NX7.0.0.  <br>  
             <br> License requirements : None */
            public: bool CreateEntryPoint
            (
            );
            /**Sets  a flag to indicate if an entry point is required 
             <br>  Created in NX7.0.0.  <br>  
             <br> License requirements : insp_programming ("INSPECTION PROGRAMMING") */
            public: void SetCreateEntryPoint
            (
                bool createPoint /** createpoint */ 
            );
            /**Returns  a flag to indicate if collision avoidance is required at entry 
             <br>  Created in NX7.0.0.  <br>  
             <br> License requirements : None */
            public: bool UseEntryAvoidance
            (
            );
            /**Sets  a flag to indicate if collision avoidance is required at entry 
             <br>  Created in NX7.0.0.  <br>  
             <br> License requirements : insp_programming ("INSPECTION PROGRAMMING") */
            public: void SetUseEntryAvoidance
            (
                bool useAvoidance /** useavoidance */ 
            );
            /**Returns  a flag to indicate if start point is created in safe plane 
             <br>  Created in NX7.0.0.  <br>  
             <br> License requirements : None */
            public: bool ProjectStartPointToSafePlane
            (
            );
            /**Sets  a flag to indicate if start point is created in safe plane 
             <br>  Created in NX7.0.0.  <br>  
             <br> License requirements : insp_programming ("INSPECTION PROGRAMMING") */
            public: void SetProjectStartPointToSafePlane
            (
                bool projectPoint /** projectpoint */ 
            );
            /**Returns  a flag to indicate if an exit point is required 
             <br>  Created in NX7.0.0.  <br>  
             <br> License requirements : None */
            public: bool CreateExitPoint
            (
            );
            /**Sets  a flag to indicate if an exit point is required 
             <br>  Created in NX7.0.0.  <br>  
             <br> License requirements : insp_programming ("INSPECTION PROGRAMMING") */
            public: void SetCreateExitPoint
            (
                bool createPoint /** createpoint */ 
            );
            /**Returns  a flag to indicate if collision avoidance is required at exit 
             <br>  Created in NX7.0.0.  <br>  
             <br> License requirements : None */
            public: bool UseExitAvoidance
            (
            );
            /**Sets  a flag to indicate if collision avoidance is required at exit 
             <br>  Created in NX7.0.0.  <br>  
             <br> License requirements : insp_programming ("INSPECTION PROGRAMMING") */
            public: void SetUseExitAvoidance
            (
                bool useAvoidance /** useavoidance */ 
            );
            /**Returns  a flag to indicate if last point is created in safe plane 
             <br>  Created in NX7.0.0.  <br>  
             <br> License requirements : None */
            public: bool ProjectLastPointToSafePlane
            (
            );
            /**Sets  a flag to indicate if last point is created in safe plane 
             <br>  Created in NX7.0.0.  <br>  
             <br> License requirements : insp_programming ("INSPECTION PROGRAMMING") */
            public: void SetProjectLastPointToSafePlane
            (
                bool projectPoint /** projectpoint */ 
            );
            /**Returns  the height above feature for entry and exit points 
             <br>  Created in NX7.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::CAM::InheritableDoubleBuilder * HeightAboveFeature
            (
            );
            /**Returns  the safe plane 
             <br>  Created in NX7.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::NXObject * SafePlaneXform
            (
            );
            /**Sets  the safe plane 
             <br>  Created in NX7.0.0.  <br>  
             <br> License requirements : insp_programming ("INSPECTION PROGRAMMING") */
            public: void SetSafePlaneXform
            (
                NXOpen::NXObject * planeXform /** planexform */ 
            );
            /** ReGenerate first or last point in safe plane  @return  
             <br>  Created in NX7.5.1.  <br>  
             <br> License requirements : insp_programming ("INSPECTION PROGRAMMING") */
            public: bool ReGenerateInSafePlane
            (
                NXOpen::CAM::InspectionPathBuilder::FirstLastType firstLast /** Type of point to recreate */
            );
            /** ReGenerate entry or exit point  @return  
             <br>  Created in NX7.5.1.  <br>  
             <br> License requirements : insp_programming ("INSPECTION PROGRAMMING") */
            public: bool ReGenerateEntryExit
            (
                NXOpen::CAM::InspectionPathBuilder::EntryExitType entryExit /** Type of point to recreate */
            );
            /** Update sensor definitions 
             <br>  Created in NX7.5.1.  <br>  
             <br> License requirements : insp_programming ("INSPECTION PROGRAMMING") */
            public: void UpdateSensors
            (
                NXOpen::CAM::InspectionSetup * setup /** the setup */,
                NXOpen::CAM::InspectionGroup * parentProgramGroup /** the parent program group */,
                NXOpen::CAM::InspectionGroup * parentMethodGroup /** the parent method group */,
                NXOpen::CAM::InspectionGroup * parentToolGroup /** the parent tool group */,
                NXOpen::CAM::InspectionGroup * parentGeometryGroup /** the parent geometry group */,
                const NXString & typeName /** the name of the template type   <br>  NOTE: The full Unicode character set is not supported for this parameter.  <br> */
            );
            /** Update sensor definitions 
             <br>  Created in NX7.5.1.  <br>  
             <br> License requirements : insp_programming ("INSPECTION PROGRAMMING") */
            void UpdateSensors
            (
                NXOpen::CAM::InspectionSetup * setup /** the setup */,
                NXOpen::CAM::InspectionGroup * parentProgramGroup /** the parent program group */,
                NXOpen::CAM::InspectionGroup * parentMethodGroup /** the parent method group */,
                NXOpen::CAM::InspectionGroup * parentToolGroup /** the parent tool group */,
                NXOpen::CAM::InspectionGroup * parentGeometryGroup /** the parent geometry group */,
                const char * typeName /** the name of the template type   <br>  NOTE: The full Unicode character set is not supported for this parameter.  <br> */
            );
            /** Update Inspection path based on selected feature. 
             <br>  Created in NX7.5.1.  <br>  
             <br> License requirements : insp_programming ("INSPECTION PROGRAMMING") */
            public: void UpdateParameters
            (
            );
            /** Edit first or last point in safe plane 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : insp_programming ("INSPECTION PROGRAMMING") */
            public: void EditStartEndPoints
            (
                bool regenerate /** regenerate */ 
            );
            /** Edit entry or exit point 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : insp_programming ("INSPECTION PROGRAMMING") */
            public: void EditEntryExitPoints
            (
                bool regenerate /** regenerate */ 
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
