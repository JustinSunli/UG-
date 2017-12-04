#ifndef NXOpen_CAE_BEAMSECTIONOFFSETOPTIONS_HXX_INCLUDED
#define NXOpen_CAE_BEAMSECTIONOFFSETOPTIONS_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     CAE_BeamSectionOffsetOptions.ja
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
#include <NXOpen/TransientObject.hxx>
#include <NXOpen/libnxopencpp_cae_exports.hxx>

#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable:4996)
#endif
#ifdef __GNUC__
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

namespace NXOpen
{
    namespace CAE
    {
        class BeamSectionOffsetOptions;
    }
    class Expression;
    namespace CAE
    {
        class BeamSectionOffsetOptionsImpl;
        /**  @brief   

           <br> To create a new instance of this class, use @link CAE::CaePart::NewBeamSectionOffsetOptions CAE::CaePart::NewBeamSectionOffsetOptions@endlink  <br> 
         <br>  Created in NX7.5.0.  <br>  
        */
        class NXOPENCPP_CAEEXPORT  BeamSectionOffsetOptions : public TransientObject
        {
            /** Represents the offset definition method */
            public: enum Method
            {
                MethodNeutral/** The offset coordindate system is defined in neutral way */,
                MethodLanguageSpecific/** The offset coordindate system is defined in language-specific way. Only available to Nastran*/
            };

             /** Represents the offset value */
            public:
            struct  Offset
            {
                public: /** y eccentric */ double YEccentric;
                public: /** z eccentric */ double ZEccentric;
                public: /** The expression to define offset in X component */NXOpen::Expression * OffsetX;
                public: /** The expression to define offset in Y component */NXOpen::Expression * OffsetY;
                public: /** The expression to define offset in Z component */NXOpen::Expression * OffsetZ;
                public: Offset() :
                    YEccentric(),
                    ZEccentric(),
                    OffsetX(),
                    OffsetY(),
                    OffsetZ()
                {
                }
                /** Constructor for the Offset struct. */ 
                public: Offset(double yEccentricInitial /** y eccentric */ , 
                        double zEccentricInitial /** z eccentric */ , 
                        NXOpen::Expression * offsetXInitial /** The expression to define offset in X component */, 
                        NXOpen::Expression * offsetYInitial /** The expression to define offset in Y component */, 
                        NXOpen::Expression * offsetZInitial /** The expression to define offset in Z component */) :
                    YEccentric(yEccentricInitial),
                    ZEccentric(zEccentricInitial),
                    OffsetX(offsetXInitial),
                    OffsetY(offsetYInitial),
                    OffsetZ(offsetZInitial)
                {
                }
            };

            private: BeamSectionOffsetOptionsImpl * m_beamsectionoffsetoptions_impl;
            /// \cond NX_NO_DOC 
            public: explicit BeamSectionOffsetOptions(void *ptr);
            /// \endcond 
            /**Returns  the flag indicating whether the offset is specified 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: bool IsOffsetSpecified
            (
            );
            /**Sets  the flag indicating whether the offset is specified 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : nx_masterfem ("Finite Element Modeling") OR nx_design_sim ("NX Design Simulation") */
            public: void SetOffsetSpecified
            (
                bool isOffsetSpecified /** isoffsetspecified */ 
            );
            /**Returns  the flag indicating whether the offset on both fore end and aft end are consistent 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: bool SameEndOffsets
            (
            );
            /**Sets  the flag indicating whether the offset on both fore end and aft end are consistent 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : nx_masterfem ("Finite Element Modeling") OR nx_design_sim ("NX Design Simulation") */
            public: void SetSameEndOffsets
            (
                bool isSameEndOffsets /** issameendoffsets */ 
            );
            /**Returns  the method to define beam end offsets 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::CAE::BeamSectionOffsetOptions::Method OffsetMethodType
            (
            );
            /**Sets  the method to define beam end offsets 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : nx_masterfem ("Finite Element Modeling") OR nx_design_sim ("NX Design Simulation") */
            public: void SetOffsetMethodType
            (
                NXOpen::CAE::BeamSectionOffsetOptions::Method method /** method */ 
            );
            /**Returns  the fore offsets 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::CAE::BeamSectionOffsetOptions::Offset ForeOffset
            (
            );
            /**Sets  the fore offsets 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : nx_masterfem ("Finite Element Modeling") OR nx_design_sim ("NX Design Simulation") */
            public: void SetForeOffset
            (
                const NXOpen::CAE::BeamSectionOffsetOptions::Offset & foreOffsets /** foreoffsets */ 
            );
            /**Returns  the aft offsets 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::CAE::BeamSectionOffsetOptions::Offset AftOffset
            (
            );
            /**Sets  the aft offsets 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : nx_masterfem ("Finite Element Modeling") OR nx_design_sim ("NX Design Simulation") */
            public: void SetAftOffset
            (
                const NXOpen::CAE::BeamSectionOffsetOptions::Offset & aftOffsets /** aftoffsets */ 
            );
            /** Destroys the object 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: virtual ~BeamSectionOffsetOptions();
        }; //lint !e1712 default constructor not defined for class  

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
