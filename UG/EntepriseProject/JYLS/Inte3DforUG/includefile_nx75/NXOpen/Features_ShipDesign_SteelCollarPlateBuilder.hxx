#ifndef NXOpen_FEATURES_SHIPDESIGN_STEELCOLLARPLATEBUILDER_HXX_INCLUDED
#define NXOpen_FEATURES_SHIPDESIGN_STEELCOLLARPLATEBUILDER_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     Features_ShipDesign_SteelCollarPlateBuilder.ja
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
#include <NXOpen/Features_FeatureBuilder.hxx>
#include <NXOpen/Features_ShipDesign_SteelCollarPlateBuilder.hxx>
#include <NXOpen/SelectObject.hxx>
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
        namespace ShipDesign
        {
            class SteelCollarPlateBuilder;
        }
    }
    namespace Features
    {
        class FeatureBuilder;
    }
    class SelectBody;
    class SelectFace;
    namespace Features
    {
        namespace ShipDesign
        {
            class _SteelCollarPlateBuilderBuilder;
            class SteelCollarPlateBuilderImpl;
            /**
                    Represents a @link Features::ShipDesign::SteelCollarPlate Features::ShipDesign::SteelCollarPlate@endlink  builder
                     <br> To create a new instance of this class, use @link Features::ShipCollection::CreateSteelCollarPlateBuilder Features::ShipCollection::CreateSteelCollarPlateBuilder@endlink  <br> 
            Default values.
            <table border="1"> 
             
            <tr><th> 
            Property</th>  <th> 
            Value</th> </tr>
            <tr><td> 
             
            IsInternal </td> <td> 
             
            0 </td> </tr> 

            <tr><td> 
             
            KeepSelectFace </td> <td> 
             
            0 </td> </tr> 

            <tr><td> 
             
            KeepSelectProfileBody </td> <td> 
             
            0 </td> </tr> 

            </table>  

             <br>  Created in NX7.5.0.  <br>  
            */
            class NXOPENCPP_FEATURESEXPORT  SteelCollarPlateBuilder : public Features::FeatureBuilder
            {
                private: SteelCollarPlateBuilderImpl * m_steelcollarplatebuilder_impl;
                private: friend class  _SteelCollarPlateBuilderBuilder;
                protected: SteelCollarPlateBuilder();
                public: ~SteelCollarPlateBuilder();
                /**Returns  the select profile body.  
                            The profile body determines what sizes of collar plate features are available,
                            and where to place the collar plate feature. 
                 <br>  Created in NX7.5.0.  <br>  
                 <br> License requirements : None */
                public: NXOpen::SelectBody * SelectProfileBody
                (
                );
                /**Returns  the keep select profile body. 
                            Determines whether or not we should reuse the same selected profile body on apply. 
                 <br>  Created in NX7.5.0.  <br>  
                 <br> License requirements : None */
                public: bool KeepSelectProfileBody
                (
                );
                /**Sets  the keep select profile body. 
                            Determines whether or not we should reuse the same selected profile body on apply. 
                 <br>  Created in NX7.5.0.  <br>  
                 <br> License requirements : nx_ship_concept ("Ship Concept") */
                public: void SetKeepSelectProfileBody
                (
                    bool keepSelectProfileBody /** keepselectprofilebody */ 
                );
                /**Returns  the plate size. Note: when the selected profile body changes, the available sizes will also change.
                            Therefore, after changing the selected profile, you must call GetAvailablePlateSizes before you can set this PlateSize value. 
                 <br>  Created in NX7.5.0.  <br>  
                 <br> License requirements : None */
                public: int PlateSize
                (
                );
                /**Sets  the plate size. Note: when the selected profile body changes, the available sizes will also change.
                            Therefore, after changing the selected profile, you must call GetAvailablePlateSizes before you can set this PlateSize value. 
                 <br>  Created in NX7.5.0.  <br>  
                 <br> License requirements : nx_ship_concept ("Ship Concept") */
                public: void SetPlateSize
                (
                    int plateSize /** platesize */ 
                );
                /** The list of available plate sizes.  Note this list will change every time the selected
                            profile body changes.  @return  Array of available plate sizes.
                                                                              These names are specified by a special
                                                                              sketch naming convention for sketches
                                                                              loaded in the profile library.  
                 <br>  Created in NX7.5.0.  <br>  
                 <br> License requirements : None */
                public: std::vector<NXString> GetAvailablePlateSizes
                (
                );
                /**Returns  the select face.  The face is used along with the profile body to determine the placement of the collar plate feature.
                            Typically this face will already have a profile cutout feature and the collar plate is used to "fill the gap" caused by the profile cutout. 
                 <br>  Created in NX7.5.0.  <br>  
                 <br> License requirements : None */
                public: NXOpen::SelectFace * SelectFace
                (
                );
                /**Returns  the keep select face.
                            Determines whether or not we should reuse the same selected face on apply. 
                 <br>  Created in NX7.5.0.  <br>  
                 <br> License requirements : None */
                public: bool KeepSelectFace
                (
                );
                /**Sets  the keep select face.
                            Determines whether or not we should reuse the same selected face on apply. 
                 <br>  Created in NX7.5.0.  <br>  
                 <br> License requirements : nx_ship_concept ("Ship Concept") */
                public: void SetKeepSelectFace
                (
                    bool keepSelectFace /** keepselectface */ 
                );
                /**Returns  the is internal toggle.
                            Is this plate inside the profile cutout, or slapped onto the outside of the placement face? 
                 <br>  Created in NX7.5.0.  <br>  
                 <br> License requirements : None */
                public: bool IsInternal
                (
                );
                /**Sets  the is internal toggle.
                            Is this plate inside the profile cutout, or slapped onto the outside of the placement face? 
                 <br>  Created in NX7.5.0.  <br>  
                 <br> License requirements : nx_ship_concept ("Ship Concept") */
                public: void SetInternal
                (
                    bool isInternal /** isinternal */ 
                );
            };
        }
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
