#ifndef NXOpen_TOOLING_MOLDCSYSBUILDER_HXX_INCLUDED
#define NXOpen_TOOLING_MOLDCSYSBUILDER_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     Tooling_MoldCsysBuilder.ja
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
#include <NXOpen/SelectObjectList.hxx>
#include <NXOpen/Tooling_MoldCsysBuilder.hxx>
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
        class MoldCsysBuilder;
    }
    class Builder;
    class SelectFaceList;
    namespace Tooling
    {
        class _MoldCsysBuilderBuilder;
        class MoldCsysBuilderImpl;
        /** Mold Wizard MoldCsys project builder  <br> To create a new instance of this class, use @link Tooling::MoldCsysCollection::CreateMoldCsysBuilder Tooling::MoldCsysCollection::CreateMoldCsysBuilder@endlink  <br> 
        Default values.
        <table border="1"> 
         
        <tr><th> 
        Property</th>  <th> 
        Value</th> </tr>
        <tr><td> 
         
        Lockx </td> <td> 
         
        0 </td> </tr> 

        <tr><td> 
         
        Locky </td> <td> 
         
        0 </td> </tr> 

        <tr><td> 
         
        Lockz </td> <td> 
         
        1 </td> </tr> 

        <tr><td> 
         
        Wcstype </td> <td> 
         
        CurrentWcs </td> </tr> 

        </table>  

         <br>  Created in NX6.0.0.  <br>  
        */
        class NXOPENCPP_TOOLINGEXPORT  MoldCsysBuilder : public Builder
        {
            /**Represents the method to computer the WCS positino*/
            public: enum Wcsposition
            {
                WcspositionCurrentWcs/**current wcs position*/,
                WcspositionProductBodyCenter/**product body center position*/,
                WcspositionBoundaryFaceCenter/**boundary face center position*/
            };

            private: MoldCsysBuilderImpl * m_moldcsysbuilder_impl;
            private: friend class  _MoldCsysBuilderBuilder;
            protected: MoldCsysBuilder();
            public: ~MoldCsysBuilder();
            /**Returns  the wcs type to decide the method to get csys position
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Tooling::MoldCsysBuilder::Wcsposition Wcstype
            (
            );
            /**Sets  the wcs type to decide the method to get csys position
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: void SetWcstype
            (
                NXOpen::Tooling::MoldCsysBuilder::Wcsposition wcstype /** wcstype */ 
            );
            /**Returns  the selected faces are used to create a bounding box whose center
                        will be the new origin of WCS 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::SelectFaceList * Prod
            (
            );
            /**Returns  the product doesn't move along X to the new position of WCS if lockx is true 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: bool Lockx
            (
            );
            /**Sets  the product doesn't move along X to the new position of WCS if lockx is true 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: void SetLockx
            (
                bool lockx /** lockx */ 
            );
            /**Returns  the product doesn't move along Y to the new position of WCS if locky is true 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: bool Locky
            (
            );
            /**Sets  the product doesn't move along Y to the new position of WCS if locky is true 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: void SetLocky
            (
                bool locky /** locky */ 
            );
            /**Returns  the product doesn't move along Z to the new position of WCS if lockz is true 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: bool Lockz
            (
            );
            /**Sets  the product doesn't move along Z to the new position of WCS if lockz is true 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: void SetLockz
            (
                bool lockz /** lockz */ 
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
