#ifndef NXOpen_TRACELINE_HXX_INCLUDED
#define NXOpen_TRACELINE_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     Traceline.ja
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
    class Traceline;
    namespace Assemblies
    {
        class Explosion;
    }
    class Curve;
    class DisplayableObject;
    class _TracelineBuilder;
    class TracelineImpl;
    /** Represents a traceline. Where a traceline is a graphically indication of how
        components are to be moved; either to pull an assembly apart or to put it together.
     <br> Use the @link TracelineCollection TracelineCollection@endlink  to create a traceline. <br> 
     <br>  Created in NX4.0.0.  <br>  
    */
    class NXOPENCPPEXPORT  Traceline : public DisplayableObject
    {
        private: TracelineImpl * m_traceline_impl;
        private: friend class  _TracelineBuilder;
        protected: Traceline();
        public: ~Traceline();
        /** Returns the object used to represent the shape of the traceline  @return  Traceline shape 
         <br>  Created in NX4.0.0.  <br>  
         <br> License requirements : assemblies ("ASSEMBLIES MODULE") */
        public: NXOpen::Curve * AskShape
        (
        );
        /** Returns the explosion that the traceline has been created in  @return  Explosion 
         <br>  Created in NX4.0.0.  <br>  
         <br> License requirements : assemblies ("ASSEMBLIES MODULE") */
        public: NXOpen::Assemblies::Explosion * AskExplosion
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
