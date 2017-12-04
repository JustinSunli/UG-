#ifndef NXOpen_CAM_NCMTRANSFERBUILDER_HXX_INCLUDED
#define NXOpen_CAM_NCMTRANSFERBUILDER_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     CAM_NcmTransferBuilder.ja
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
#include <NXOpen/CAM_UdeSet.hxx>
#include <NXOpen/TaggedObject.hxx>
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
        class NcmTransferBuilder;
    }
    namespace CAM
    {
        class InheritableToolDepBuilder;
    }
    namespace CAM
    {
        class NcmClearanceBuilder;
    }
    namespace CAM
    {
        class UdeSet;
    }
    class SmartObject;
    class TaggedObject;
    namespace CAM
    {
        class _NcmTransferBuilderBuilder;
        class NcmTransferBuilderImpl;
        /**
            Represents a @link CAM::NcmTransferBuilder CAM::NcmTransferBuilder@endlink 
            
         <br>  Created in NX5.0.0.  <br>  
        */
        class NXOPENCPP_CAMEXPORT  NcmTransferBuilder : public TaggedObject
        {
            /** Available methods for approach and departure */
            public: enum AppDepMethodTypes
            {
                AppDepMethodTypesSame/** use setting from transfer between regions */,
                AppDepMethodTypesNone/** none */,
                AppDepMethodTypesAlongToolAxis/** along tool axis */,
                AppDepMethodTypesAlongVector/** along vector */,
                AppDepMethodTypesToolAxisClearance/** along tool axis from/to clearance */,
                AppDepMethodTypesShortestDistanceClearance/** shortest distance from/to clearance */,
                AppDepMethodTypesVectorClearance/** along vector from/to clearance */,
                AppDepMethodTypesTangentClearance/** tangent from/to clearance */
            };

            /** Available options for tool axis behavior */
            public: enum AppDepToolAxisOptions
            {
                AppDepToolAxisOptionsNoChange/** tool axis remains unchanged */,
                AppDepToolAxisOptionsSpecify/** tool axis as specified */
            };

            /** Available types for traverse */
            public: enum TraverseTypes
            {
                TraverseTypesSame/** traverse setting from between regions */,
                TraverseTypesShortestToClearance/** traverse shortest to clearance */,
                TraverseTypesLowestSafeZ/** traverse at lowest safe z */,
                TraverseTypesDirect/** traverse direct */,
                TraverseTypesSmooth/** traverse smooth spline */
            };

            private: NcmTransferBuilderImpl * m_ncmtransferbuilder_impl;
            private: friend class  _NcmTransferBuilderBuilder;
            protected: NcmTransferBuilder();
            public: ~NcmTransferBuilder();
            /**Returns  the approach method
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::CAM::NcmTransferBuilder::AppDepMethodTypes ApproachMethod
            (
            );
            /**Sets  the approach method
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : cam_base ("CAM BASE") */
            public: void SetApproachMethod
            (
                NXOpen::CAM::NcmTransferBuilder::AppDepMethodTypes newValue /** newvalue */ 
            );
            /**Returns  the approach clearance builder 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::CAM::NcmClearanceBuilder * ApproachClearanceBuilder
            (
            );
            /**Returns  the approach vector 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::SmartObject * ApproachVector
            (
            );
            /**Sets  the approach vector 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : cam_base ("CAM BASE") */
            public: void SetApproachVector
            (
                NXOpen::SmartObject * newValue /** the approach vector */
            );
            /**Returns  the approach height builder 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::CAM::InheritableToolDepBuilder * ApproachHeightBuilder
            (
            );
            /**Returns  the approach length builder 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::CAM::InheritableToolDepBuilder * ApproachLengthBuilder
            (
            );
            /**Returns  the tool axis option for approach 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::CAM::NcmTransferBuilder::AppDepToolAxisOptions ApproachToolAxisOption
            (
            );
            /**Sets  the tool axis option for approach 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : cam_base ("CAM BASE") */
            public: void SetApproachToolAxisOption
            (
                NXOpen::CAM::NcmTransferBuilder::AppDepToolAxisOptions newValue /** newvalue */ 
            );
            /**Returns  the approach tool axis 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::SmartObject * ApproachToolAxis
            (
            );
            /**Sets  the approach tool axis 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : cam_base ("CAM BASE") */
            public: void SetApproachToolAxis
            (
                NXOpen::SmartObject * newValue /** the approach tool axis */
            );
            /**Returns  the approach post commands 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::TaggedObject * ApproachPostCommands
            (
            );
            /**Sets  the approach post commands 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : cam_base ("CAM BASE") */
            public: void SetApproachPostCommands
            (
                NXOpen::TaggedObject * newValue /** the approach post commands */
            );
            /**Returns  the departure method 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::CAM::NcmTransferBuilder::AppDepMethodTypes DepartureMethod
            (
            );
            /**Sets  the departure method 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : cam_base ("CAM BASE") */
            public: void SetDepartureMethod
            (
                NXOpen::CAM::NcmTransferBuilder::AppDepMethodTypes newValue /** newvalue */ 
            );
            /**Returns  the departure clearance 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::CAM::NcmClearanceBuilder * DepartureClearanceBuilder
            (
            );
            /**Returns  the departure vector 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::SmartObject * DepartureVector
            (
            );
            /**Sets  the departure vector 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : cam_base ("CAM BASE") */
            public: void SetDepartureVector
            (
                NXOpen::SmartObject * newValue /** the departure vector */
            );
            /**Returns  the departure height builder 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::CAM::InheritableToolDepBuilder * DepartureHeightBuilder
            (
            );
            /**Returns  the departure length builder 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::CAM::InheritableToolDepBuilder * DepartureLengthBuilder
            (
            );
            /**Returns  the tool axis option for departure 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::CAM::NcmTransferBuilder::AppDepToolAxisOptions DepartureToolAxisOption
            (
            );
            /**Sets  the tool axis option for departure 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : cam_base ("CAM BASE") */
            public: void SetDepartureToolAxisOption
            (
                NXOpen::CAM::NcmTransferBuilder::AppDepToolAxisOptions newValue /** newvalue */ 
            );
            /**Returns  the departure tool axis 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::SmartObject * DepartureToolAxis
            (
            );
            /**Sets  the departure tool axis 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : cam_base ("CAM BASE") */
            public: void SetDepartureToolAxis
            (
                NXOpen::SmartObject * newValue /** the departure tool axis */
            );
            /**Returns  the departure post commands 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::TaggedObject * DeparturePostCommands
            (
            );
            /**Sets  the departure post commands 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : cam_base ("CAM BASE") */
            public: void SetDeparturePostCommands
            (
                NXOpen::TaggedObject * newValue /** the departure post commands */
            );
            /**Returns  the traverse types 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::CAM::NcmTransferBuilder::TraverseTypes TraverseType
            (
            );
            /**Sets  the traverse types 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : cam_base ("CAM BASE") */
            public: void SetTraverseType
            (
                NXOpen::CAM::NcmTransferBuilder::TraverseTypes newValue /** newvalue */ 
            );
            /**Returns  the traverse clearance 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::CAM::NcmClearanceBuilder * TraverseClearanceBuilder
            (
            );
            /**Returns  the traverse distance builder 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::CAM::InheritableToolDepBuilder * TraverseDistanceBuilder
            (
            );
            /**Returns  the traverse post commands 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::TaggedObject * TraversePostCommands
            (
            );
            /**Sets  the traverse post commands 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : cam_base ("CAM BASE") */
            public: void SetTraversePostCommands
            (
                NXOpen::TaggedObject * newValue /** the traverse post commands */
            );
            /**Returns  the Approach UDE Set
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : cam_base ("CAM BASE") */
            public: NXOpen::CAM::UdeSet * AppUdeSet
            (
            );
            /**Returns  the Depature UDE Set
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : cam_base ("CAM BASE") */
            public: NXOpen::CAM::UdeSet * DepUdeSet
            (
            );
            /**Returns  the Traverse UDE Set
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : cam_base ("CAM BASE") */
            public: NXOpen::CAM::UdeSet * TraUdeSet
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
