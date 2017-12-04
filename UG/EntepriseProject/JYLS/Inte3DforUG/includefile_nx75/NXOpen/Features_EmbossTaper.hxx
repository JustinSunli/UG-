#ifndef NXOpen_FEATURES_EMBOSSTAPER_HXX_INCLUDED
#define NXOpen_FEATURES_EMBOSSTAPER_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     Features_EmbossTaper.ja
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
#include <NXOpen/Features_EmbossTaper.hxx>
#include <NXOpen/TaggedObject.hxx>
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
        class EmbossTaper;
    }
    class Expression;
    namespace Features
    {
        class _EmbossTaperBuilder;
        class EmbossTaperImpl;
        /** Represents a taper object. 
                This class provides methods to set and get taper angle. 
                 <br> 
                Following is default values:    
                 <br> 
                 
                 <br> 
                <b>Taper Angle</b>    5.0 degrees
                 <br> 

            
         <br>  Created in NX4.0.0.  <br>  
        */
        class NXOPENCPP_FEATURESEXPORT  EmbossTaper : public TaggedObject
        {
            private: EmbossTaperImpl * m_embosstaper_impl;
            private: friend class  _EmbossTaperBuilder;
            protected: EmbossTaper();
            public: ~EmbossTaper();
            /** Taper angle expression formula string 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : solid_modeling ("SOLIDS MODELING") */
            public: void SetAngle
            (
                const NXString & taperAngle /**Taper angle expression formula string*/
            );
            /** Taper angle expression formula string 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : solid_modeling ("SOLIDS MODELING") */
            void SetAngle
            (
                const char * taperAngle /**Taper angle expression formula string*/
            );
            /**Returns  the emboss taper angle
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Expression * Angle
            (
            );
            /**Returns the emboss back taper angle
                    the back angle expression 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Expression * BackAngle
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
