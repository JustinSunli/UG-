#ifndef NXOpen_ROUTING_CONNECTEDCURVESBUILDER_HXX_INCLUDED
#define NXOpen_ROUTING_CONNECTEDCURVESBUILDER_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     Routing_ConnectedCurvesBuilder.ja
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
#include <NXOpen/Routing_ConnectedCurvesBuilder.hxx>
#include <NXOpen/SelectObjectList.hxx>
#include <NXOpen/libnxopencpp_routing_exports.hxx>

#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable:4996)
#endif
#ifdef __GNUC__
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

namespace NXOpen
{
    namespace Routing
    {
        class ConnectedCurvesBuilder;
    }
    class Builder;
    class Curve;
    class SelectCurveList;
    namespace Routing
    {
        class _ConnectedCurvesBuilderBuilder;
        class ConnectedCurvesBuilderImpl;
        /** Builder for creating automatically creating segments on end-to-end connected
                curves.  <br> To create a new instance of this class, use @link Routing::RouteManager::CreateConnectedCurvesBuilder Routing::RouteManager::CreateConnectedCurvesBuilder@endlink  <br> 
        Default values.
        <table border="1"> 
         
        <tr><th> 
        Property</th>  <th> 
        Value</th> </tr>
        <tr><td> 
         
        AllowArcs </td> <td> 
         
        1 </td> </tr> 

        <tr><td> 
         
        AllowLines </td> <td> 
         
        1 </td> </tr> 

        <tr><td> 
         
        AllowOccs </td> <td> 
         
        1 </td> </tr> 

        <tr><td> 
         
        AllowSplines </td> <td> 
         
        1 </td> </tr> 

        </table>  

         <br>  Created in NX6.0.0.  <br>  
        */
        class NXOPENCPP_ROUTINGEXPORT  ConnectedCurvesBuilder : public Builder
        {
            private: ConnectedCurvesBuilderImpl * m_connectedcurvesbuilder_impl;
            private: friend class  _ConnectedCurvesBuilderBuilder;
            protected: ConnectedCurvesBuilder();
            public: ~ConnectedCurvesBuilder();
            /**Returns  the list of selected curves. 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : routing_base ("Routing Basic") */
            public: NXOpen::SelectCurveList * CurveSelection
            (
            );
            /**Returns  the flag that allows traversal of lines when finding connected
                        curves. If False, the traversal will stop when it hits a line curve.  In addition
                        the curve selection list will not allow lines to be added to the list.
                        
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : routing_base ("Routing Basic") */
            public: bool AllowLines
            (
            );
            /**Sets  the flag that allows traversal of lines when finding connected
                        curves. If False, the traversal will stop when it hits a line curve.  In addition
                        the curve selection list will not allow lines to be added to the list.
                        
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : routing_base ("Routing Basic") */
            public: void SetAllowLines
            (
                bool allowLines /** allowlines */ 
            );
            /**Returns  the flag that allows traversal of arcs when finding connected
                        curves. If False, the traversal will stop when it hits an arc curve.  In addition
                        the curve selection list will not allow arcs to be added to the list.
                        
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : routing_base ("Routing Basic") */
            public: bool AllowArcs
            (
            );
            /**Sets  the flag that allows traversal of arcs when finding connected
                        curves. If False, the traversal will stop when it hits an arc curve.  In addition
                        the curve selection list will not allow arcs to be added to the list.
                        
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : routing_base ("Routing Basic") */
            public: void SetAllowArcs
            (
                bool allowArcs /** allowarcs */ 
            );
            /**Returns  the flag that allows traversal of splines when finding connected
                        curves. If False, the traversal will stop when it hits an spline curve.  In addition
                        the curve selection list will not allow splines to be added to the list.
                        
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : routing_base ("Routing Basic") */
            public: bool AllowSplines
            (
            );
            /**Sets  the flag that allows traversal of splines when finding connected
                        curves. If False, the traversal will stop when it hits an spline curve.  In addition
                        the curve selection list will not allow splines to be added to the list.
                        
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : routing_base ("Routing Basic") */
            public: void SetAllowSplines
            (
                bool allowSplines /** allowsplines */ 
            );
            /**Returns  the flag that allows traversal of curve occurrences when finding connected
                        curves. If False, the traversal will stop when it hits a curve occurrence.  In 
                        addition the curve selection list will not allow curve occurrences to be added 
                        to the list.
                        
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : routing_base ("Routing Basic") */
            public: bool AllowOccs
            (
            );
            /**Sets  the flag that allows traversal of curve occurrences when finding connected
                        curves. If False, the traversal will stop when it hits a curve occurrence.  In 
                        addition the curve selection list will not allow curve occurrences to be added 
                        to the list.
                        
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : routing_base ("Routing Basic") */
            public: void SetAllowOccs
            (
                bool allowOccs /** allowoccs */ 
            );
            /** Finds all curves attached end-to-end with the current list of selected
                        curves.  The returned list of curves includes the selected curves.  @return  
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : routing_base ("Routing Basic") */
            public: std::vector<NXOpen::Curve *> ChainSelectedCurves
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