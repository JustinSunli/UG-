#ifndef NXOpen_FEATURES_SHIPDESIGN_PROFILEBUILDER_HXX_INCLUDED
#define NXOpen_FEATURES_SHIPDESIGN_PROFILEBUILDER_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     Features_ShipDesign_ProfileBuilder.ja
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
#include <NXOpen/EndCutBlockBuilder.hxx>
#include <NXOpen/Expression.hxx>
#include <NXOpen/Features_FeatureBuilder.hxx>
#include <NXOpen/Features_ShipDesign_ProfileBuilder.hxx>
#include <NXOpen/ScCollector.hxx>
#include <NXOpen/Section.hxx>
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
        namespace ShipDesign
        {
            class ProfileBuilder;
        }
    }
    class Direction;
    class EndCutBlockBuilder;
    class Expression;
    namespace Features
    {
        class FeatureBuilder;
    }
    namespace Features
    {
        class SelectFeatureList;
    }
    namespace GeometricUtilities
    {
        class CurveLengthData;
    }
    class ScCollector;
    class Section;
    namespace Features
    {
        namespace ShipDesign
        {
            class _ProfileBuilderBuilder;
            class ProfileBuilderImpl;
            /**
                    Represents a @link Features::ShipDesign::Profile Features::ShipDesign::Profile@endlink  builder
                     <br> To create a new instance of this class, use @link Features::ShipCollection::CreateProfileBuilder Features::ShipCollection::CreateProfileBuilder@endlink  <br> 
            Default values.
            <table border="1"> 
             
            <tr><th> 
            Property</th>  <th> 
            Value</th> </tr>
            <tr><td> 
             
            AngleOfRotation.Value </td> <td> 
             
            0 </td> </tr> 

            <tr><td> 
             
            AngularTolerance </td> <td> 
             
            0.5 </td> </tr> 

            <tr><td> 
             
            BeltAlignment </td> <td> 
             
            Center </td> </tr> 

            <tr><td> 
             
            DistanceTolerance </td> <td> 
             
            0.0254 (millimeters part), 0.001 (inches part) </td> </tr> 

            <tr><td> 
             
            EndCutType </td> <td> 
             
            None </td> </tr> 

            <tr><td> 
             
            EndEndCutBlock.Angle.Value </td> <td> 
             
            0 </td> </tr> 

            <tr><td> 
             
            EndEndCutBlock.Offset.Value </td> <td> 
             
            0 </td> </tr> 

            <tr><td> 
             
            EndEndCutBlock.SketchBlock.Exp1.Value </td> <td> 
             
            0 </td> </tr> 

            <tr><td> 
             
            EndEndCutBlock.SketchBlock.Exp10.Value </td> <td> 
             
            0 </td> </tr> 

            <tr><td> 
             
            EndEndCutBlock.SketchBlock.Exp11.Value </td> <td> 
             
            0 </td> </tr> 

            <tr><td> 
             
            EndEndCutBlock.SketchBlock.Exp12.Value </td> <td> 
             
            0 </td> </tr> 

            <tr><td> 
             
            EndEndCutBlock.SketchBlock.Exp2.Value </td> <td> 
             
            0 </td> </tr> 

            <tr><td> 
             
            EndEndCutBlock.SketchBlock.Exp3.Value </td> <td> 
             
            0 </td> </tr> 

            <tr><td> 
             
            EndEndCutBlock.SketchBlock.Exp4.Value </td> <td> 
             
            0 </td> </tr> 

            <tr><td> 
             
            EndEndCutBlock.SketchBlock.Exp5.Value </td> <td> 
             
            0 </td> </tr> 

            <tr><td> 
             
            EndEndCutBlock.SketchBlock.Exp6.Value </td> <td> 
             
            0 </td> </tr> 

            <tr><td> 
             
            EndEndCutBlock.SketchBlock.Exp7.Value </td> <td> 
             
            0 </td> </tr> 

            <tr><td> 
             
            EndEndCutBlock.SketchBlock.Exp8.Value </td> <td> 
             
            0 </td> </tr> 

            <tr><td> 
             
            EndEndCutBlock.SketchBlock.Exp9.Value </td> <td> 
             
            0 </td> </tr> 

            <tr><td> 
             
            EndEndCutBlock.SketchBlock.Sketches </td> <td> 
             
            EndCut1 </td> </tr> 

            <tr><td> 
             
            EndEndCutBlock.TaperType </td> <td> 
             
            Trim </td> </tr> 

            <tr><td> 
             
            FaceOffsetExpression.Value </td> <td> 
             
            0 </td> </tr> 

            <tr><td> 
             
            GuideOffsetExpression.Value </td> <td> 
             
            0 </td> </tr> 

            <tr><td> 
             
            KeepFace </td> <td> 
             
            0 </td> </tr> 

            <tr><td> 
             
            KeepGuide </td> <td> 
             
            0 </td> </tr> 

            <tr><td> 
             
            OrientType </td> <td> 
             
            FaceNormal </td> </tr> 

            <tr><td> 
             
            PlateHeight.Value </td> <td> 
             
            0 </td> </tr> 

            <tr><td> 
             
            PlateWIdth.Value </td> <td> 
             
            0 </td> </tr> 

            <tr><td> 
             
            SectionType </td> <td> 
             
            Profile </td> </tr> 

            </table>  

             <br>  Created in NX7.5.0.  <br>  
            */
            class NXOPENCPP_FEATURESEXPORT  ProfileBuilder : public Features::FeatureBuilder
            {
                /** Creation type either a belt or a profile */
                public: enum TypeOption
                {
                    TypeOptionProfile/** profile */ ,
                    TypeOptionBelt/** belt */ 
                };

                /** Creation of profile from the library or a plate */
                public: enum SectionOption
                {
                    SectionOptionPlate/** plate */ ,
                    SectionOptionProfile/** profile */ 
                };

                /** Creation method used to define the placement of the profile this
                                is disabled for belt creation */
                public: enum OrientationOption
                {
                    OrientationOptionFaceNormal/** face normal */ ,
                    OrientationOptionDatumCsys/** datum csys */ ,
                    OrientationOptionVector/** vector */ 
                };

                /** Creation method used to define the placement of the belt this
                                is disabled for profiles*/
                public: enum Alignment
                {
                    AlignmentCenter/** center */ ,
                    AlignmentGuideEdge/** guide edge */ ,
                    AlignmentOppositeGuide/** opposite guide */ 
                };

                /** Creation method used to define the end cut type */
                public: enum EndCutOption
                {
                    EndCutOptionNone/** none */ ,
                    EndCutOptionSymmetric/** symmetric */ ,
                    EndCutOptionTwoSided/** two sided */ 
                };

                private: ProfileBuilderImpl * m_profilebuilder_impl;
                private: friend class  _ProfileBuilderBuilder;
                protected: ProfileBuilder();
                public: ~ProfileBuilder();
                /**Returns  the type belt or profile 
                 <br>  Created in NX7.5.0.  <br>  
                 <br> License requirements : None */
                public: NXOpen::Features::ShipDesign::ProfileBuilder::TypeOption Type
                (
                );
                /**Sets  the type belt or profile 
                 <br>  Created in NX7.5.0.  <br>  
                 <br> License requirements : nx_ship_concept ("Ship Concept") */
                public: void SetType
                (
                    NXOpen::Features::ShipDesign::ProfileBuilder::TypeOption type /** type */ 
                );
                /**Returns  the section type 
                 <br>  Created in NX7.5.0.  <br>  
                 <br> License requirements : None */
                public: NXOpen::Features::ShipDesign::ProfileBuilder::SectionOption SectionType
                (
                );
                /**Sets  the section type 
                 <br>  Created in NX7.5.0.  <br>  
                 <br> License requirements : nx_ship_concept ("Ship Concept") */
                public: void SetSectionType
                (
                    NXOpen::Features::ShipDesign::ProfileBuilder::SectionOption sectionType /** sectiontype */ 
                );
                /**Returns  the orient type 
                 <br>  Created in NX7.5.0.  <br>  
                 <br> License requirements : None */
                public: NXOpen::Features::ShipDesign::ProfileBuilder::OrientationOption OrientType
                (
                );
                /**Sets  the orient type 
                 <br>  Created in NX7.5.0.  <br>  
                 <br> License requirements : nx_ship_concept ("Ship Concept") */
                public: void SetOrientType
                (
                    NXOpen::Features::ShipDesign::ProfileBuilder::OrientationOption orientType /** orienttype */ 
                );
                /**Returns  the belt alignment 
                 <br>  Created in NX7.5.0.  <br>  
                 <br> License requirements : None */
                public: NXOpen::Features::ShipDesign::ProfileBuilder::Alignment BeltAlignment
                (
                );
                /**Sets  the belt alignment 
                 <br>  Created in NX7.5.0.  <br>  
                 <br> License requirements : nx_ship_concept ("Ship Concept") */
                public: void SetBeltAlignment
                (
                    NXOpen::Features::ShipDesign::ProfileBuilder::Alignment beltAlignment /** beltalignment */ 
                );
                /**Returns  the end cut type 
                 <br>  Created in NX7.5.0.  <br>  
                 <br> License requirements : None */
                public: NXOpen::Features::ShipDesign::ProfileBuilder::EndCutOption EndCutType
                (
                );
                /**Sets  the end cut type 
                 <br>  Created in NX7.5.0.  <br>  
                 <br> License requirements : nx_ship_concept ("Ship Concept") */
                public: void SetEndCutType
                (
                    NXOpen::Features::ShipDesign::ProfileBuilder::EndCutOption endCutType /** endcuttype */ 
                );
                /**Returns  the placement faces or datum plane 
                 <br>  Created in NX7.5.0.  <br>  
                 <br> License requirements : None */
                public: NXOpen::ScCollector * SelectFace
                (
                );
                /**Returns  the toggle which allows re-use of the selected faces 
                 <br>  Created in NX7.5.0.  <br>  
                 <br> License requirements : None */
                public: bool KeepFace
                (
                );
                /**Sets  the toggle which allows re-use of the selected faces 
                 <br>  Created in NX7.5.0.  <br>  
                 <br> License requirements : nx_ship_concept ("Ship Concept") */
                public: void SetKeepFace
                (
                    bool keepFace /** keepface */ 
                );
                /**Returns  the angle of rotation 
                 <br>  Created in NX7.5.1.  <br>  
                 <br> License requirements : None */
                public: NXOpen::Expression * AngleOfRotation
                (
                );
                /**Returns  the face offset expression 
                 <br>  Created in NX7.5.0.  <br>  
                 <br> License requirements : None */
                public: NXOpen::Expression * FaceOffsetExpression
                (
                );
                /**Returns  the face offset vector 
                 <br>  Created in NX7.5.0.  <br>  
                 <br> License requirements : None */
                public: bool FaceOffsetVector
                (
                );
                /**Sets  the face offset vector 
                 <br>  Created in NX7.5.0.  <br>  
                 <br> License requirements : nx_ship_concept ("Ship Concept") */
                public: void SetFaceOffsetVector
                (
                    bool faceOffsetVector /** faceoffsetvector */ 
                );
                /**Returns  the select edge 
                 <br>  Created in NX7.5.0.  <br>  
                 <br> License requirements : None */
                public: NXOpen::Section * GuideSection
                (
                );
                /**Returns  the toggle which allows re-use of the selected edges or curves 
                 <br>  Created in NX7.5.0.  <br>  
                 <br> License requirements : None */
                public: bool KeepGuide
                (
                );
                /**Sets  the toggle which allows re-use of the selected edges or curves 
                 <br>  Created in NX7.5.0.  <br>  
                 <br> License requirements : nx_ship_concept ("Ship Concept") */
                public: void SetKeepGuide
                (
                    bool keepGuide /** keepguide */ 
                );
                /**Returns  the guide offset expression 
                 <br>  Created in NX7.5.0.  <br>  
                 <br> License requirements : None */
                public: NXOpen::Expression * GuideOffsetExpression
                (
                );
                /**Returns  the guide offset vector 
                 <br>  Created in NX7.5.0.  <br>  
                 <br> License requirements : None */
                public: bool GuideOffsetVector
                (
                );
                /**Sets  the guide offset vector 
                 <br>  Created in NX7.5.0.  <br>  
                 <br> License requirements : nx_ship_concept ("Ship Concept") */
                public: void SetGuideOffsetVector
                (
                    bool guideOffsetVector /** guideoffsetvector */ 
                );
                /**Returns  the select csys 
                 <br>  Created in NX7.5.0.  <br>  
                 <br> License requirements : None */
                public: NXOpen::Features::SelectFeatureList * SelectCsys
                (
                );
                /**Returns  the plate height 
                 <br>  Created in NX7.5.0.  <br>  
                 <br> License requirements : None */
                public: NXOpen::Expression * PlateHeight
                (
                );
                /**Returns  the plate width 
                 <br>  Created in NX7.5.0.  <br>  
                 <br> License requirements : None */
                public: NXOpen::Expression * PlateWIdth
                (
                );
                /**Returns  the name attribute value 
                 <br>  Created in NX7.5.0.  <br>  
                 <br> License requirements : None */
                public: int AttributeName
                (
                );
                /**Sets  the name attribute value 
                 <br>  Created in NX7.5.0.  <br>  
                 <br> License requirements : nx_ship_concept ("Ship Concept") */
                public: void SetAttributeName
                (
                    int name /** name */ 
                );
                /** Returns the list of available name attributes  @return  Array of available attribute names.
                                                                              These names are specified in the customer
                                                                              defaults file.  
                 <br>  Created in NX7.5.0.  <br>  
                 <br> License requirements : None */
                public: std::vector<NXString> GetAvailableAttributeNames
                (
                );
                /**Returns  the material attribute 
                 <br>  Created in NX7.5.0.  <br>  
                 <br> License requirements : None */
                public: int AttributeMaterial
                (
                );
                /**Sets  the material attribute 
                 <br>  Created in NX7.5.0.  <br>  
                 <br> License requirements : nx_ship_concept ("Ship Concept") */
                public: void SetAttributeMaterial
                (
                    int material /** material */ 
                );
                /** Returns the list of available material attributes  @return  Array of available attribute materials.
                                                                              These materials are specified in the customer
                                                                              defaults file.  
                 <br>  Created in NX7.5.0.  <br>  
                 <br> License requirements : None */
                public: std::vector<NXString> GetAvailableAttributeMaterials
                (
                );
                /**Returns  the belt type options 
                 <br>  Created in NX7.5.0.  <br>  
                 <br> License requirements : None */
                public: int BeltType
                (
                );
                /**Sets  the belt type options 
                 <br>  Created in NX7.5.0.  <br>  
                 <br> License requirements : nx_ship_concept ("Ship Concept") */
                public: void SetBeltType
                (
                    int type /** type */ 
                );
                /** Returns the list of available material attributes  @return  Array of available belt types derived
                                                                               from the belt library.  
                 <br>  Created in NX7.5.0.  <br>  
                 <br> License requirements : None */
                public: std::vector<NXString> GetAvailableBeltTypes
                (
                );
                /**Returns  the belt size options 
                 <br>  Created in NX7.5.0.  <br>  
                 <br> License requirements : None */
                public: int BeltSize
                (
                );
                /**Sets  the belt size options 
                 <br>  Created in NX7.5.0.  <br>  
                 <br> License requirements : nx_ship_concept ("Ship Concept") */
                public: void SetBeltSize
                (
                    int size /** size */ 
                );
                /** Returns the list of available material attributes  @return  Array of available belt types derived
                                                                               from the belt library.  
                 <br>  Created in NX7.5.0.  <br>  
                 <br> License requirements : None */
                public: std::vector<NXString> GetAvailableBeltSizes
                (
                );
                /**Returns  the profile type options 
                 <br>  Created in NX7.5.0.  <br>  
                 <br> License requirements : None */
                public: int ProfileType
                (
                );
                /**Sets  the profile type options 
                 <br>  Created in NX7.5.0.  <br>  
                 <br> License requirements : nx_ship_concept ("Ship Concept") */
                public: void SetProfileType
                (
                    int type /** type */ 
                );
                /** Returns the list of available material attributes  @return  Array of available profile types derived
                                                                               from the profile library.  
                 <br>  Created in NX7.5.0.  <br>  
                 <br> License requirements : None */
                public: std::vector<NXString> GetAvailableProfileTypes
                (
                );
                /**Returns  the profile size options 
                 <br>  Created in NX7.5.0.  <br>  
                 <br> License requirements : None */
                public: int ProfileSize
                (
                );
                /**Sets  the profile size options 
                 <br>  Created in NX7.5.0.  <br>  
                 <br> License requirements : nx_ship_concept ("Ship Concept") */
                public: void SetProfileSize
                (
                    int size /** size */ 
                );
                /** Returns the list of available material attributes  @return  Array of available profile types derived
                                                                               from the profile library.  
                 <br>  Created in NX7.5.0.  <br>  
                 <br> License requirements : None */
                public: std::vector<NXString> GetAvailableProfileSizes
                (
                );
                /**Returns  the start end cut block  
                 <br>  Created in NX7.5.0.  <br>  
                 <br> License requirements : None */
                public: NXOpen::EndCutBlockBuilder * StartEndCutBlock
                (
                );
                /**Returns  the end end cut block  
                 <br>  Created in NX7.5.0.  <br>  
                 <br> License requirements : None */
                public: NXOpen::EndCutBlockBuilder * EndEndCutBlock
                (
                );
                /**Returns  the curve length data  
                 <br>  Created in NX7.5.0.  <br>  
                 <br> License requirements : None */
                public: NXOpen::GeometricUtilities::CurveLengthData * CurveLengthData
                (
                );
                /**Returns  the distance tolerance (part units). 
                 <br>  Created in NX8.0.0.  <br>  
                 <br> License requirements : None */
                public: double DistanceTolerance
                (
                );
                /**Sets  the distance tolerance (part units). 
                 <br>  Created in NX8.0.0.  <br>  
                 <br> License requirements : nx_ship_concept ("Ship Concept") */
                public: void SetDistanceTolerance
                (
                    double distanceTolerance /** distancetolerance */ 
                );
                /**Returns  the angular tolerance (degrees). 
                 <br>  Created in NX8.0.0.  <br>  
                 <br> License requirements : None */
                public: double AngularTolerance
                (
                );
                /**Sets  the angular tolerance (degrees). 
                 <br>  Created in NX8.0.0.  <br>  
                 <br> License requirements : nx_ship_concept ("Ship Concept") */
                public: void SetAngularTolerance
                (
                    double angularTolerance /** angulartolerance */ 
                );
                /**Returns  the orientation vector 
                 <br>  Created in NX7.5.4.  <br>  
                 <br> License requirements : None */
                public: NXOpen::Direction * OrientationVector
                (
                );
                /**Sets  the orientation vector 
                 <br>  Created in NX7.5.4.  <br>  
                 <br> License requirements : nx_ship_concept ("Ship Concept") */
                public: void SetOrientationVector
                (
                    NXOpen::Direction * orientationVector /** orientationvector */ 
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
