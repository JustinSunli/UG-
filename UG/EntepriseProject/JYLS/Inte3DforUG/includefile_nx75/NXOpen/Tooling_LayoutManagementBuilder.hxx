#ifndef NXOpen_TOOLING_LAYOUTMANAGEMENTBUILDER_HXX_INCLUDED
#define NXOpen_TOOLING_LAYOUTMANAGEMENTBUILDER_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     Tooling_LayoutManagementBuilder.ja
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
#include <NXOpen/GeometricUtilities_ModlMotion.hxx>
#include <NXOpen/SelectObjectList.hxx>
#include <NXOpen/Tooling_LayoutManagementBuilder.hxx>
#include <NXOpen/libnxopencpp_tooling_exports.hxx>

#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable:4996)
#endif
#ifdef __GNUC__
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

namespace NXOpen
{
    namespace Tooling
    {
        class LayoutManagementBuilder;
    }
    class Builder;
    class Direction;
    namespace GeometricUtilities
    {
        class ModlMotion;
    }
    class SelectBodyList;
    class SelectNXObjectList;
    namespace Tooling
    {
        class _LayoutManagementBuilderBuilder;
        class LayoutManagementBuilderImpl;
        /** Layout Management Builder of Engineering Die Wizard  <br> To create a new instance of this class, use @link Tooling::LayoutManagementCollection::CreateLayoutManagementBuilder Tooling::LayoutManagementCollection::CreateLayoutManagementBuilder@endlink  <br> 
        Default values.
        <table border="1"> 
         
        <tr><th> 
        Property</th>  <th> 
        Value</th> </tr>
        <tr><td> 
         
        RepositionMotion.DeltaEnum </td> <td> 
         
        ReferenceWcsWorkPart </td> </tr> 

        <tr><td> 
         
        RepositionMotion.DeltaXc.Value </td> <td> 
         
        0.0 </td> </tr> 

        <tr><td> 
         
        RepositionMotion.DeltaYc.Value </td> <td> 
         
        0.0 </td> </tr> 

        <tr><td> 
         
        RepositionMotion.DeltaZc.Value </td> <td> 
         
        0.0 </td> </tr> 

        <tr><td> 
         
        StationDistance </td> <td> 
         
        0 </td> </tr> 

        <tr><td> 
         
        StationEnum </td> <td> 
         
        One </td> </tr> 

        <tr><td> 
         
        StationNameStr </td> <td> 
         
        station </td> </tr> 

        <tr><td> 
         
        StationNumber </td> <td> 
         
        3 </td> </tr> 

        </table>  

         <br>  Created in NX8.0.0.  <br>  
        */
        class NXOPENCPP_TOOLINGEXPORT  LayoutManagementBuilder : public Builder
        {
            /** Specifies the station items */
            public: enum StationItems
            {
                StationItemsOne/** Define station number -- 01 */,
                StationItemsTwo/** Define station number -- 02 */,
                StationItemsThree/** Define station number -- 03 */
            };

            private: LayoutManagementBuilderImpl * m_layoutmanagementbuilder_impl;
            private: friend class  _LayoutManagementBuilderBuilder;
            protected: LayoutManagementBuilder();
            public: ~LayoutManagementBuilder();
            /**Returns  the total station number of engineering die layout
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : None */
            public: int StationNumber
            (
            );
            /**Sets  the total station number of engineering die layout
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : None */
            public: void SetStationNumber
            (
                int stationNumber /** stationnumber */ 
            );
            /**Returns  the station distance of engineering die
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : None */
            public: double StationDistance
            (
            );
            /**Sets  the station distance of engineering die
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : None */
            public: void SetStationDistance
            (
                double stationDistance /** stationdistance */ 
            );
            /**Returns  the station number definition of engineering die 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Tooling::LayoutManagementBuilder::StationItems StationEnum
            (
            );
            /**Sets  the station number definition of engineering die 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : None */
            public: void SetStationEnum
            (
                NXOpen::Tooling::LayoutManagementBuilder::StationItems stationEnum /** stationenum */ 
            );
            /**Returns  the station name definition of engineering die 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : None */
            public: NXString StationNameStr
            (
            );
            /**Sets  the station name definition of engineering die 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : None */
            public: void SetStationNameStr
            (
                const NXString & stationNameStr /** stationnamestr */ 
            );
            /**Sets  the station name definition of engineering die 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : None */
            void SetStationNameStr
            (
                const char * stationNameStr /** stationnamestr */ 
            );
            /**Returns  the select entity to add into the station 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::SelectNXObjectList * SelectEntityAdd
            (
            );
            /**Returns  the select entity to remove from the station 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::SelectNXObjectList * SelectEntityRemove
            (
            );
            /**Returns  the specify die tip to define the forming direction
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Direction * SpecifyDieTip
            (
            );
            /**Sets  the specify die tip to define the forming direction
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : None */
            public: void SetSpecifyDieTip
            (
                NXOpen::Direction * specifyDieTip /** specifydietip */ 
            );
            /**Returns  the select bodies to reposition 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::SelectBodyList * BodiesReposition
            (
            );
            /**Returns  the reposition motion 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::GeometricUtilities::ModlMotion * RepositionMotion
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