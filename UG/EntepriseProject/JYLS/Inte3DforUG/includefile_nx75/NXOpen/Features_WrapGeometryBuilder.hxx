#ifndef NXOpen_FEATURES_WRAPGEOMETRYBUILDER_HXX_INCLUDED
#define NXOpen_FEATURES_WRAPGEOMETRYBUILDER_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     Features_WrapGeometryBuilder.ja
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
#include <NXOpen/Features_WrapGeometryBuilder.hxx>
#include <NXOpen/ObjectList.hxx>
#include <NXOpen/SelectObjectList.hxx>
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
        class WrapGeometryBuilder;
    }
    class Expression;
    namespace Features
    {
        class FeatureBuilder;
    }
    class PlaneList;
    class SelectDisplayableObjectList;
    namespace Features
    {
        class _WrapGeometryBuilderBuilder;
        class WrapGeometryBuilderImpl;
        /**
            Represents a @link Features::WrapGeometry Features::WrapGeometry@endlink  builder
             <br> To create a new instance of this class, use @link Features::FeatureCollection::CreateWrapGeometryBuilder Features::FeatureCollection::CreateWrapGeometryBuilder@endlink  <br> 
        Default values.
        <table border="1"> 
         
        <tr><th> 
        Property</th>  <th> 
        Value</th> </tr>
        <tr><td> 
         
        AddOffset.Value </td> <td> 
         
        0 (millimeters part), 0 (inches part) </td> </tr> 

        <tr><td> 
         
        Associative </td> <td> 
         
        1 </td> </tr> 

        <tr><td> 
         
        CloseGaps </td> <td> 
         
        Sharp </td> </tr> 

        <tr><td> 
         
        DistTol </td> <td> 
         
        2.54 </td> </tr> 

        <tr><td> 
         
        IsInterpart </td> <td> 
         
        0 </td> </tr> 

        <tr><td> 
         
        SplitOffset.Value </td> <td> 
         
        0 (millimeters part), 0 (inches part) </td> </tr> 

        </table>  

         <br>  Created in NX6.0.0.  <br>  
        */
        class NXOPENCPP_FEATURESEXPORT  WrapGeometryBuilder : public Features::FeatureBuilder
        {
            /** Represents the close gap type */
            public: enum CloseGapType
            {
                CloseGapTypeSharp/** sharp */ ,
                CloseGapTypeBeveled/** beveled */ ,
                CloseGapTypeNoOffset/** no offset */ 
            };

            private: WrapGeometryBuilderImpl * m_wrapgeometrybuilder_impl;
            private: friend class  _WrapGeometryBuilderBuilder;
            protected: WrapGeometryBuilder();
            public: ~WrapGeometryBuilder();
            /**Returns  the geometry to be wrapped (solid, sheet, curve, point) 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::SelectDisplayableObjectList * Geometry
            (
            );
            /**Returns  the Planes to split the geometry, tightens the wrap along this plane 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::PlaneList * PlanesList
            (
            );
            /**Returns   the  Remove parms switch 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: bool Associative
            (
            );
            /**Sets   the  Remove parms switch 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : solid_modeling ("SOLIDS MODELING") */
            public: void SetAssociative
            (
                bool associative /** associative */ 
            );
            /**Returns  the  Method used to close the gaps after offset of the wrap 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Features::WrapGeometryBuilder::CloseGapType CloseGaps
            (
            );
            /**Sets  the  Method used to close the gaps after offset of the wrap 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : solid_modeling ("SOLIDS MODELING") */
            public: void SetCloseGaps
            (
                NXOpen::Features::WrapGeometryBuilder::CloseGapType closeGaps /** closegaps */ 
            );
            /**Returns  the  Additional offset. Will expand the wrap. 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Expression * AddOffset
            (
            );
            /**Returns   the Offset applied to both sides of the splitting planes. 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Expression * SplitOffset
            (
            );
            /**Returns  the Distance tolerance used to facet the solids. Also used for default offset calculation. 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: double DistTol
            (
            );
            /**Sets  the Distance tolerance used to facet the solids. Also used for default offset calculation. 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : solid_modeling ("SOLIDS MODELING") */
            public: void SetDistTol
            (
                double distTol /** disttol */ 
            );
            /**Returns  the Setting that determines if this feature have interpart references 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: bool IsInterpart
            (
            );
            /**Sets  the Setting that determines if this feature have interpart references 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : solid_modeling ("SOLIDS MODELING") */
            public: void SetInterpart
            (
                bool isInterpart /** isinterpart */ 
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
