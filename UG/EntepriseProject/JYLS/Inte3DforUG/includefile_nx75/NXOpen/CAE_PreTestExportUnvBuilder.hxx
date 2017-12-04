#ifndef NXOpen_CAE_PRETESTEXPORTUNVBUILDER_HXX_INCLUDED
#define NXOpen_CAE_PRETESTEXPORTUNVBUILDER_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     CAE_PreTestExportUnvBuilder.ja
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
#include <NXOpen/CAE_PreTestExportUnvBuilder.hxx>
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
        class PreTestExportUnvBuilder;
    }
    class Builder;
    namespace CAE
    {
        class _PreTestExportUnvBuilderBuilder;
        class PreTestExportUnvBuilderImpl;
        /** This is a manager to the @link CAE::PreTestExportUnvBuilder CAE::PreTestExportUnvBuilder@endlink  class. <br> To create a new instance of this class, use @link CAE::PreTestSolution::CreateExportUnvBuilder CAE::PreTestSolution::CreateExportUnvBuilder@endlink  <br> 
        Default values.
        <table border="1"> 
         
        <tr><th> 
        Property</th>  <th> 
        Value</th> </tr>
        <tr><td> 
         
        NativeFileUnits </td> <td> 
         
        Si </td> </tr> 

        </table>  

         <br>  Created in NX7.5.2.  <br>  
        */
        class NXOPENCPP_CAEEXPORT  PreTestExportUnvBuilder : public Builder
        {
            /** The unit type enum*/
            public: enum FileUnitsOption
            {
                FileUnitsOptionSi/** SI: Meter (newton)*/,
                FileUnitsOptionBg/** BG: Foot (pound f)*/,
                FileUnitsOptionMg/** MG: Meter (kilogram f)*/,
                FileUnitsOptionBa/** BA: Foot (poundal)*/,
                FileUnitsOptionMm/** MM: mm (milli newton)*/,
                FileUnitsOptionCm/** CM: cm (centi newton)*/,
                FileUnitsOptionIn/** IN: Inch (pound f)*/,
                FileUnitsOptionGm/** GM: mm (kilogram f)*/,
                FileUnitsOptionMn/** MN: mm (newton)*/
            };

            private: PreTestExportUnvBuilderImpl * m_pretestexportunvbuilder_impl;
            private: friend class  _PreTestExportUnvBuilderBuilder;
            protected: PreTestExportUnvBuilder();
            public: ~PreTestExportUnvBuilder();
            /**Returns  the native file units 
             <br>  Created in NX7.5.2.  <br>  
             <br> License requirements : None */
            public: NXOpen::CAE::PreTestExportUnvBuilder::FileUnitsOption NativeFileUnits
            (
            );
            /**Sets  the native file units 
             <br>  Created in NX7.5.2.  <br>  
             <br> License requirements : nx_correl_base ("FE Correlation") */
            public: void SetNativeFileUnits
            (
                NXOpen::CAE::PreTestExportUnvBuilder::FileUnitsOption nativeFileUnits /** nativefileunits */ 
            );
            /**Returns  the native file browser 
             <br>  Created in NX7.5.2.  <br>  
             <br> License requirements : None */
            public: NXString NativeFileBrowser
            (
            );
            /**Sets  the native file browser 
             <br>  Created in NX7.5.2.  <br>  
             <br> License requirements : nx_correl_base ("FE Correlation") */
            public: void SetNativeFileBrowser
            (
                const NXString & filename /** filename */ 
            );
            /**Sets  the native file browser 
             <br>  Created in NX7.5.2.  <br>  
             <br> License requirements : nx_correl_base ("FE Correlation") */
            void SetNativeFileBrowser
            (
                const char * filename /** filename */ 
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
