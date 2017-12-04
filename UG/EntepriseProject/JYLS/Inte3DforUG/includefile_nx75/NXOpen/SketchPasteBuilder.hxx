#ifndef NXOpen_SKETCHPASTEBUILDER_HXX_INCLUDED
#define NXOpen_SKETCHPASTEBUILDER_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     SketchPasteBuilder.ja
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
#include <NXOpen/Features_MoveObjectBuilder.hxx>
#include <NXOpen/SketchPasteBuilder.hxx>
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
    class SketchPasteBuilder;
    class Builder;
    namespace Features
    {
        class MoveObjectBuilder;
    }
    class _SketchPasteBuilderBuilder;
    class SketchPasteBuilderImpl;
    /** Represents a @link SketchPasteBuilder SketchPasteBuilder@endlink   <br> To create a new instance of this class, use @link SketchCollection::CreateSketchPasteBuilder SketchCollection::CreateSketchPasteBuilder@endlink  <br> 
    Default values.
    <table border="1"> 
     
    <tr><th> 
    Property</th>  <th> 
    Value</th> </tr>
    <tr><td> 
     
    MoveObject.Associative </td> <td> 
     
    false </td> </tr> 

    <tr><td> 
     
    MoveObject.CreateTraceLines </td> <td> 
     
    false </td> </tr> 

    <tr><td> 
     
    MoveObject.Divisions </td> <td> 
     
    1 </td> </tr> 

    <tr><td> 
     
    MoveObject.LayerOption </td> <td> 
     
    Original </td> </tr> 

    <tr><td> 
     
    MoveObject.MoveObjectResult </td> <td> 
     
    MoveOriginal </td> </tr> 

    <tr><td> 
     
    MoveObject.MoveParents </td> <td> 
     
    true </td> </tr> 

    <tr><td> 
     
    MoveObject.NumberOfCopies </td> <td> 
     
    1 </td> </tr> 

    <tr><td> 
     
    MoveObject.TransformMotion.DeltaEnum </td> <td> 
     
    ReferenceWcsWorkPart </td> </tr> 

    <tr><td> 
     
    MoveObject.TransformMotion.DeltaXc.Value </td> <td> 
     
    0.0 </td> </tr> 

    <tr><td> 
     
    MoveObject.TransformMotion.DeltaYc.Value </td> <td> 
     
    0.0 </td> </tr> 

    <tr><td> 
     
    MoveObject.TransformMotion.DeltaZc.Value </td> <td> 
     
    0.0 </td> </tr> 

    <tr><td> 
     
    MoveObject.TransformMotion.Option </td> <td> 
     
    Dynamic </td> </tr> 

    </table>  

     <br>  Created in NX7.5.0.  <br>  
    */
    class NXOPENCPPEXPORT  SketchPasteBuilder : public Builder
    {
        private: SketchPasteBuilderImpl * m_sketchpastebuilder_impl;
        private: friend class  _SketchPasteBuilderBuilder;
        protected: SketchPasteBuilder();
        public: ~SketchPasteBuilder();
        /**Returns  the move object 
         <br>  Created in NX7.5.0.  <br>  
         <br> License requirements : None */
        public: NXOpen::Features::MoveObjectBuilder * MoveObject
        (
        );
        /**Returns  the initial paste location, this is mainly used to define default paste location of sketch objects 
         <br>  Created in NX7.5.0.  <br>  
         <br> License requirements : None */
        public: NXOpen::Point3d InitialPasteLocation
        (
        );
        /**Sets  the initial paste location, this is mainly used to define default paste location of sketch objects 
         <br>  Created in NX7.5.0.  <br>  
         <br> License requirements : solid_modeling ("SOLIDS MODELING") OR drafting ("DRAFTING") */
        public: void SetInitialPasteLocation
        (
            const NXOpen::Point3d & dropLocation /** Drop location coordinates in absolute */
        );
        /** Reset the initial paste location, after this previously set initial paste location will not be used 
         <br>  Created in NX7.5.0.  <br>  
         <br> License requirements : solid_modeling ("SOLIDS MODELING") OR drafting ("DRAFTING") */
        public: void ResetInitialPasteLocation
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
