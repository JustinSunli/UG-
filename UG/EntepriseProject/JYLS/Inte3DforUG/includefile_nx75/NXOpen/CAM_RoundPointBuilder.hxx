#ifndef NXOpen_CAM_ROUNDPOINTBUILDER_HXX_INCLUDED
#define NXOpen_CAM_ROUNDPOINTBUILDER_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     CAM_RoundPointBuilder.ja
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
        class RoundPointBuilder;
    }
    namespace CAM
    {
        class _RoundPointBuilderBuilder;
        class RoundPointBuilderImpl;
        /** Represents the round Point Builder 
         <br>  Created in NX5.0.0.  <br>  
        */
        class NXOPENCPP_CAMEXPORT  RoundPointBuilder : public TaggedObject
        {
            /** the decimal places */
            public: enum Output
            {
                OutputNoRounding/** No Rounding */,
                OutputThousand/** nearest thousand */,
                OutputHundred/** nearest hundred */,
                OutputTen/** nearest ten  */,
                OutputOne/** no decimals */,
                OutputTenth/** nearest tenth */,
                OutputHundredth/** nearest hundredth */,
                OutputThousandth/** nearest thousandth */,
                OutputTenThousandth/** nearest ten thousandth */,
                OutputHundredThousandth/** nearest hundred thousandth */,
                OutputMillionth/** nearest millionth */,
                OutputTenMillionth/** nearest ten millionth */
            };

            private: RoundPointBuilderImpl * m_roundpointbuilder_impl;
            private: friend class  _RoundPointBuilderBuilder;
            protected: RoundPointBuilder();
            public: ~RoundPointBuilder();
            /**Returns  the rounding status 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : None */
            public: bool Rounding
            (
            );
            /**Sets  the rounding status 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : None */
            public: void SetRounding
            (
                bool rounding /** rounding */ 
            );
            /**Returns  the decimal places 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::CAM::RoundPointBuilder::Output Decimals
            (
            );
            /**Sets  the decimal places 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : None */
            public: void SetDecimals
            (
                NXOpen::CAM::RoundPointBuilder::Output decimals /** decimals */ 
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
