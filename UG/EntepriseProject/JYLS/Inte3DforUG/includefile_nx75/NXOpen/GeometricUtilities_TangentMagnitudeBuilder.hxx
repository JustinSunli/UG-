#ifndef NXOpen_GEOMETRICUTILITIES_TANGENTMAGNITUDEBUILDER_HXX_INCLUDED
#define NXOpen_GEOMETRICUTILITIES_TANGENTMAGNITUDEBUILDER_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     GeometricUtilities_TangentMagnitudeBuilder.ja
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
#include <NXOpen/GeometricUtilities_IComponentBuilder.hxx>
#include <NXOpen/GeometricUtilities_TangentMagnitudeBuilder.hxx>
#include <NXOpen/TaggedObject.hxx>
#include <NXOpen/libnxopencpp_geometricutilities_exports.hxx>

#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable:4996)
#endif
#ifdef __GNUC__
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

namespace NXOpen
{
    namespace GeometricUtilities
    {
        class TangentMagnitudeBuilder;
    }
    class Expression;
    namespace GeometricUtilities
    {
        class IComponentBuilder;
    }
    namespace GeometricUtilities
    {
        class _TangentMagnitudeBuilderBuilder;
        class TangentMagnitudeBuilderImpl;
        /**
                This class provides ability to specify the start and end
                tangent magnitude values.
            
         <br>  Created in NX6.0.0.  <br>  
        */
        class NXOPENCPP_GEOMETRICUTILITIESEXPORT  TangentMagnitudeBuilder : public TaggedObject, public virtual GeometricUtilities::IComponentBuilder
        {
            private: TangentMagnitudeBuilderImpl * m_tangentmagnitudebuilder_impl;
            private: friend class  _TangentMagnitudeBuilderBuilder;
            protected: TangentMagnitudeBuilder();
            public: ~TangentMagnitudeBuilder();
            /**Returns  the start tangent magnitude 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Expression * StartTangentMagnitude
            (
            );
            /**Returns  the end tangent magnitude 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Expression * EndTangentMagnitude
            (
            );
            /** Validate whether the inputs to the component are sufficient for 
                        commit to be called.  If the component is not in a state to commit
                        then an exception is thrown.  For example, if the component requires
                        you to set some property, this method will throw an exception if
                        you haven't set it.  This method throws a not-yet-implemented
                        NXException for some components.
                     @return  Was self validation successful 
             <br>  Created in NX3.0.1.  <br>  
             <br> License requirements : None */
            public: virtual bool Validate
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
