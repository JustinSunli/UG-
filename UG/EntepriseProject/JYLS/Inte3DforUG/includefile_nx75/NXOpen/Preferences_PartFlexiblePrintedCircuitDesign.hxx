#ifndef NXOpen_PREFERENCES_PARTFLEXIBLEPRINTEDCIRCUITDESIGN_HXX_INCLUDED
#define NXOpen_PREFERENCES_PARTFLEXIBLEPRINTEDCIRCUITDESIGN_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     Preferences_PartFlexiblePrintedCircuitDesign.ja
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
#include <NXOpen/NXColor.hxx>
#include <NXOpen/SheetmetalFeatureProperty.hxx>
#include <NXOpen/TaggedObject.hxx>
#include <NXOpen/libnxopencpp_preferences_exports.hxx>

#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable:4996)
#endif
#ifdef __GNUC__
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

namespace NXOpen
{
    namespace Preferences
    {
        class PartFlexiblePrintedCircuitDesign;
    }
    namespace Preferences
    {
        class PartPreferences;
    }
    class Expression;
    class NXColor;
    namespace Preferences
    {
        class PartFlexiblePrintedCircuitDesignImpl;
        /** Represents the Flexible Printed Circuit Design preferences applicable to part  <br> Preferences are in control of the part. They can not be created but can only be changed. <br> 
         <br>  Created in NX4.0.0.  <br>  
        */
        class NXOPENCPP_PREFERENCESEXPORT  PartFlexiblePrintedCircuitDesign
        {
            /** The members of the following enumerated type are used to identify
                        object types to the FlatPattern API. These are not the usual
                        NX object types; they are ordinary NX objects that are known to
                        the flat pattern feature for the type of outline they provide to
                        a bend region, joggle region, or lightening hole. */
            public: enum FlatPatternObjectType
            {
                FlatPatternObjectTypeBendCenterLine/** Deprecated */,
                FlatPatternObjectTypeBendUpCenterLine/** bend up center line */ ,
                FlatPatternObjectTypeBendDownCenterLine/** bend down center line */ ,
                FlatPatternObjectTypeBendTangentLine/** bend tangent line */ ,
                FlatPatternObjectTypeOuterMoldLine/** outer mold line */ ,
                FlatPatternObjectTypeInnerMoldLine/** inner mold line */ ,
                FlatPatternObjectTypeExteriorCurves/** exterior curves */ ,
                FlatPatternObjectTypeInteriorCurves/** Deprecated */,
                FlatPatternObjectTypeInteriorCutoutCurves/** interior cutout curves */ ,
                FlatPatternObjectTypeInteriorFeatureCurves/** interior feature curves */ ,
                FlatPatternObjectTypeLighteningHoleCenter/** lightening hole center */ ,
                FlatPatternObjectTypeJoggleLine/** joggle line */ ,
                FlatPatternObjectTypeAddedTopGeometry/** added top geometry */ ,
                FlatPatternObjectTypeAddedBottomGeometry/** added bottom geometry */ ,
                FlatPatternObjectTypeToolMarker/** tool marker */ 
            };

             /** The members of the following structure are the display data for an
                        object in a flat pattern drawing member view. */
            public:
            struct  FlatPatternObjectTypeDisplay
            {
                public: /** Object type */NXOpen::Preferences::PartFlexiblePrintedCircuitDesign::FlatPatternObjectType Type;
                public: /** Enabled status for the object type */int IsEnabled;
                public: /** Object color */NXColor* Color;
                public: /** Object Layer */int Layer;
                public: /** Object font */NXOpen::DisplayableObject::ObjectFont Font;
                public: /** Object width */NXOpen::DisplayableObject::ObjectWidth Width;
                public: FlatPatternObjectTypeDisplay() :
                    Type((NXOpen::Preferences::PartFlexiblePrintedCircuitDesign::FlatPatternObjectType)0),
                    IsEnabled(),
                    Color(),
                    Layer(),
                    Font((NXOpen::DisplayableObject::ObjectFont)0),
                    Width((NXOpen::DisplayableObject::ObjectWidth)0)
                {
                }
                /** Constructor for the FlatPatternObjectTypeDisplay struct. */ 
                public: FlatPatternObjectTypeDisplay(NXOpen::Preferences::PartFlexiblePrintedCircuitDesign::FlatPatternObjectType typeInitial /** Object type */, 
                        int isEnabledInitial /** Enabled status for the object type */, 
                        NXColor* colorInitial /** Object color */, 
                        int layerInitial /** Object Layer */, 
                        NXOpen::DisplayableObject::ObjectFont fontInitial /** Object font */, 
                        NXOpen::DisplayableObject::ObjectWidth widthInitial /** Object width */) :
                    Type(typeInitial),
                    IsEnabled(isEnabledInitial),
                    Color(colorInitial),
                    Layer(layerInitial),
                    Font(fontInitial),
                    Width(widthInitial)
                {
                }
            };

             /** The members of the following structure are the display data for a
                        callout in a flat pattern drawing member view. */
            public:
            struct  FlatPatternCalloutTypeDisplay
            {
                public: /** The name of the callout type.
                                    The string is one returned by the 
                                    get_callout_data method, or can
                                    be hand-coded as the application name 'dot' the callout
                                    name, like this:
                                    "FlatPatternView.BendRadius". Neither name is
                                    case sensitive and blanks are not significant. This type
                                    of hand-coded callout type is usable as long as the
                                    callout type name is unique within the application name. 
                                    Beware of changing the defaults and loading old parts. */NXString Type;
                public: /** Enabled status for the callout type. */int IsEnabled;
                public: /** dialog name for the callout type. */NXString Name;
                public: FlatPatternCalloutTypeDisplay() :
                    Type(),
                    IsEnabled(),
                    Name()
                {
                }
                /** Constructor for the FlatPatternCalloutTypeDisplay struct. */ 
                public: FlatPatternCalloutTypeDisplay(const NXString &typeInitial /** The name of the callout type.
                                            The string is one returned by the 
                                            get_callout_data method, or can
                                            be hand-coded as the application name 'dot' the callout
                                            name, like this:
                                            "FlatPatternView.BendRadius". Neither name is
                                            case sensitive and blanks are not significant. This type
                                            of hand-coded callout type is usable as long as the
                                            callout type name is unique within the application name. 
                                            Beware of changing the defaults and loading old parts. */, 
                        int isEnabledInitial /** Enabled status for the callout type. */, 
                        const NXString &nameInitial /** dialog name for the callout type. */) :
                    Type(typeInitial),
                    IsEnabled(isEnabledInitial),
                    Name(nameInitial)
                {
                }
            };

            /** This enum represents the face that is the contact face
                        of the Flexible Cable. */
            public: enum FlexibleCableContactFaceOptions
            {
                FlexibleCableContactFaceOptionsTopFace/** Top face. */,
                FlexibleCableContactFaceOptionsBottomFace/** Bottom face. */
            };

            private: PartFlexiblePrintedCircuitDesignImpl * m_partflexibleprintedcircuitdesign_impl;
            private: NXOpen::Preferences::PartPreferences* m_owner;
            /// \cond NX_NO_DOC 
            public: explicit PartFlexiblePrintedCircuitDesign(NXOpen::Preferences::PartPreferences *owner);


            /// \endcond 
            public: 
            /**Returns the tag of this object.  */
            tag_t Tag() const; 
            public: ~PartFlexiblePrintedCircuitDesign();
            /** Returns the thickness expression  @return  expression object for sheet thickness 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : nx_flexible_pcb ("NX Flexible PCB") */
            public: NXOpen::Expression * GetThickness
            (
            );
            /** Sets the thickness value string 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : nx_flexible_pcb ("NX Flexible PCB") */
            public: void SetThickness
            (
                bool updateModel /** Specifies whether the solid model be recomputed immediately*/,
                const NXString & thickness /** default thickness value for NX Sheetmetal solids   <br>  NOTE: The full Unicode character set is not supported for this parameter.  <br> */
            );
            /** Sets the thickness value string 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : nx_flexible_pcb ("NX Flexible PCB") */
            void SetThickness
            (
                bool updateModel /** Specifies whether the solid model be recomputed immediately*/,
                const char * thickness /** default thickness value for NX Sheetmetal solids   <br>  NOTE: The full Unicode character set is not supported for this parameter.  <br> */
            );
            /** Returns the bend radius expression  @return  expression object for radius of bend faces
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : nx_flexible_pcb ("NX Flexible PCB") */
            public: NXOpen::Expression * GetBendRadius
            (
            );
            /** Sets the bend radius value 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : nx_flexible_pcb ("NX Flexible PCB") */
            public: void SetBendRadius
            (
                bool updateModel /** Specifies whether the solid model be recomputed immediately*/,
                const NXString & bendRadius /** default bend radius value for bend faces   <br>  NOTE: The full Unicode character set is not supported for this parameter.  <br> */
            );
            /** Sets the bend radius value 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : nx_flexible_pcb ("NX Flexible PCB") */
            void SetBendRadius
            (
                bool updateModel /** Specifies whether the solid model be recomputed immediately*/,
                const char * bendRadius /** default bend radius value for bend faces   <br>  NOTE: The full Unicode character set is not supported for this parameter.  <br> */
            );
            /** Returns the bend relief depth  @return  expression object for depth of bend relief 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : nx_flexible_pcb ("NX Flexible PCB") */
            public: NXOpen::Expression * GetBendReliefDepth
            (
            );
            /** Sets the bend relief depth value 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : nx_flexible_pcb ("NX Flexible PCB") */
            public: void SetBendReliefDepth
            (
                bool updateModel /** Specifies whether the solid model be recomputed immediately*/,
                const NXString & bendReliefDepth /** default depth value for bend relief   <br>  NOTE: The full Unicode character set is not supported for this parameter.  <br> */
            );
            /** Sets the bend relief depth value 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : nx_flexible_pcb ("NX Flexible PCB") */
            void SetBendReliefDepth
            (
                bool updateModel /** Specifies whether the solid model be recomputed immediately*/,
                const char * bendReliefDepth /** default depth value for bend relief   <br>  NOTE: The full Unicode character set is not supported for this parameter.  <br> */
            );
            /** Returns the bend relief width  @return  expression object for width of bend relief 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : nx_flexible_pcb ("NX Flexible PCB") */
            public: NXOpen::Expression * GetBendReliefWidth
            (
            );
            /** Sets the bend relief depth value 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : nx_flexible_pcb ("NX Flexible PCB") */
            public: void SetBendReliefWidth
            (
                bool updateModel /** Specifies whether the solid model be recomputed immediately*/,
                const NXString & bendReliefWidth /** default width value for bend relief   <br>  NOTE: The full Unicode character set is not supported for this parameter.  <br> */
            );
            /** Sets the bend relief depth value 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : nx_flexible_pcb ("NX Flexible PCB") */
            void SetBendReliefWidth
            (
                bool updateModel /** Specifies whether the solid model be recomputed immediately*/,
                const char * bendReliefWidth /** default width value for bend relief   <br>  NOTE: The full Unicode character set is not supported for this parameter.  <br> */
            );
            /** Returns the neutral factor  @return  expression object for neutral factor of bend areas 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : nx_flexible_pcb ("NX Flexible PCB") */
            public: NXOpen::Expression * GetNeutralFactor
            (
            );
            /** Sets the bend relief depth value 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : nx_flexible_pcb ("NX Flexible PCB") */
            public: void SetNeutralFactor
            (
                bool updateModel /** Specifies whether the solid model be recomputed immediately*/,
                const NXString & neutralFactor /** default neutral factor value for bend relief   <br>  NOTE: The full Unicode character set is not supported for this parameter.  <br> */
            );
            /** Sets the bend relief depth value 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : nx_flexible_pcb ("NX Flexible PCB") */
            void SetNeutralFactor
            (
                bool updateModel /** Specifies whether the solid model be recomputed immediately*/,
                const char * neutralFactor /** default neutral factor value for bend relief   <br>  NOTE: The full Unicode character set is not supported for this parameter.  <br> */
            );
            /** Returns the out corner treatment value for Flat as Solid operations  @return  expression object for out corner treatment value 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : nx_flexible_pcb ("NX Flexible PCB") */
            public: NXOpen::Expression * GetOuterCornerTreatmentValue
            (
            );
            /** Sets the outer corner treatment value for Flat as Solid operations 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : nx_flexible_pcb ("NX Flexible PCB") */
            public: void SetOuterCornerTreatmentValue
            (
                bool updateModel /** Specifies whether the solid model be recomputed immediately*/,
                const NXString & outerCornerTreatment /** default value for out corner treatment   <br>  NOTE: The full Unicode character set is not supported for this parameter.  <br> */
            );
            /** Sets the outer corner treatment value for Flat as Solid operations 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : nx_flexible_pcb ("NX Flexible PCB") */
            void SetOuterCornerTreatmentValue
            (
                bool updateModel /** Specifies whether the solid model be recomputed immediately*/,
                const char * outerCornerTreatment /** default value for out corner treatment   <br>  NOTE: The full Unicode character set is not supported for this parameter.  <br> */
            );
            /** Returns the outer corner treatment type in Flat as Solid operation  @return  outer corner treatment type 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : nx_flexible_pcb ("NX Flexible PCB") */
            public: NXOpen::Features::SheetMetal::FeatureProperty GetOuterCornerTreatmentType
            (
            );
            /** Sets the the outer corner treatment type in Flat as Solid operation 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : nx_flexible_pcb ("NX Flexible PCB") */
            public: void SetOuterCornerTreatmentType
            (
                bool updateModel /** Specifies whether the solid model be recomputed immediately*/,
                NXOpen::Features::SheetMetal::FeatureProperty outerCornerTreatmentType /** outer corner treatment type */
            );
            /** Returns the inner corner treatment value for Flat as Solid operations  @return  expression object for inner corner treatment value 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : nx_flexible_pcb ("NX Flexible PCB") */
            public: NXOpen::Expression * GetInnerCornerTreatmentValue
            (
            );
            /** Sets the the inner corner treatment value for Flat as Solid operations 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : nx_flexible_pcb ("NX Flexible PCB") */
            public: void SetInnerCornerTreatmentValue
            (
                bool updateModel /** Specifies whether the solid model be recomputed immediately*/,
                const NXString & innerCornerTreatment /** default value for inner corner treatment   <br>  NOTE: The full Unicode character set is not supported for this parameter.  <br> */
            );
            /** Sets the the inner corner treatment value for Flat as Solid operations 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : nx_flexible_pcb ("NX Flexible PCB") */
            void SetInnerCornerTreatmentValue
            (
                bool updateModel /** Specifies whether the solid model be recomputed immediately*/,
                const char * innerCornerTreatment /** default value for inner corner treatment   <br>  NOTE: The full Unicode character set is not supported for this parameter.  <br> */
            );
            /** Returns the inner corner treatment type in Flat as Solid operation  @return  outer corner treatment type 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : nx_flexible_pcb ("NX Flexible PCB") */
            public: NXOpen::Features::SheetMetal::FeatureProperty GetInnerCornerTreatmentType
            (
            );
            /** Sets the inner corner treatment type in Flat as Solid operation 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : nx_flexible_pcb ("NX Flexible PCB") */
            public: void SetInnerCornerTreatmentType
            (
                bool updateModel /** Specifies whether the solid model be recomputed immediately*/,
                NXOpen::Features::SheetMetal::FeatureProperty innerCornerTreatmentType /** outer corner treatment type */
            );
            /** Returns the flag indicating whether B-Splines are simplified as part of the Flat Solid creation @return  flag  
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : nx_flexible_pcb ("NX Flexible PCB") */
            public: bool GetIsBsplineSimplifiedInFlatSolid
            (
            );
            /** Sets the flag indicating whether or not B-Splines are simplified as part of the Flat Solid creation
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : nx_flexible_pcb ("NX Flexible PCB") */
            public: void SetIsBsplineSimplifiedInFlatSolid
            (
                bool updateModel /** Specifies whether the solid model be recomputed immediately*/,
                bool isBsplineSimplifiedInFlatSolid /** flag  */
            );
            /** Returns the flag indicating whether or not system generated bend releifs are removed as part of the Flat Solid creation @return  flag  
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : nx_flexible_pcb ("NX Flexible PCB") */
            public: bool GetIsSystemGeneratedBendReliefRemovedInFlatSolid
            (
            );
            /** Sets the flag indicating whether or not system generated bend releifs are removed as part of the Flat Solid creation
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : nx_flexible_pcb ("NX Flexible PCB") */
            public: void SetIsSystemGeneratedBendReliefRemovedInFlatSolid
            (
                bool updateModel /** Specifies whether the solid model be recomputed immediately*/,
                bool isSystemGeneratedBendReliefRemoved /** flag  */
            );
            /** Returns the minimum arc tolerance during Flat Solid simplification  @return  flag  
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : nx_flexible_pcb ("NX Flexible PCB") */
            public: double GetMinimumArcToleranceInFlatSolid
            (
            );
            /** Sets the minimum arc tolerance during Flat Solid simplification 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : nx_flexible_pcb ("NX Flexible PCB") */
            public: void SetMinimumArcToleranceInFlatSolid
            (
                bool updateModel /** Specifies whether the solid model be recomputed immediately*/,
                double minimumArcToleranceInFlatSolid /** flag  */
            );
            /** Returns the deviational tolerance during Flat Solid simplification  @return  flag  
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : nx_flexible_pcb ("NX Flexible PCB") */
            public: double GetDeviationalToleranceInFlatSolid
            (
            );
            /** Sets the deviational tolerance during Flat Solid simplification 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : nx_flexible_pcb ("NX Flexible PCB") */
            public: void SetDeviationalToleranceInFlatSolid
            (
                bool updateModel /** Specifies whether the solid model be recomputed immediately*/,
                double deviationalToleranceInFlatSolid /** flag  */
            );
            /** Returns the material names defined in the material standards table  @return  
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : nx_flexible_pcb ("NX Flexible PCB") */
            public: std::vector<NXString> GetMaterialNames
            (
            );
            /** Returns the material name saved with the part  @return  The name of the material saved with the part
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : nx_flexible_pcb ("NX Flexible PCB") */
            public: NXString GetMaterial
            (
            );
            /** Returns the material name saved with the part  @return  property Values 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : nx_flexible_pcb ("NX Flexible PCB") */
            public: std::vector<NXString> GetMaterialProperties
            (
                const NXString & materialName /** material Name*/,
                std::vector<NXString> & propertyNames /** properties */
            );
            /** Returns the material name saved with the part  @return  property Values 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : nx_flexible_pcb ("NX Flexible PCB") */
            std::vector<NXString> GetMaterialProperties
            (
                const char * materialName /** material Name*/,
                std::vector<NXString> & propertyNames /** properties */
            );
            /** Sets the material standard 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : nx_flexible_pcb ("NX Flexible PCB") */
            public: void SetMaterial
            (
                bool updateModel /** Specifies whether the solid model be recomputed immediately*/,
                const NXString & standardName /** The name of a material from the material standards file */
            );
            /** Sets the material standard 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : nx_flexible_pcb ("NX Flexible PCB") */
            void SetMaterial
            (
                bool updateModel /** Specifies whether the solid model be recomputed immediately*/,
                const char * standardName /** The name of a material from the material standards file */
            );
            /** Returns the display data for a flat pattern object type.   @return  The display data for the flat pattern object type. 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : nx_flexible_pcb ("NX Flexible PCB") */
            public: NXOpen::Preferences::PartFlexiblePrintedCircuitDesign::FlatPatternObjectTypeDisplay GetFlatPatternObjectTypeDisplay
            (
                NXOpen::Preferences::PartFlexiblePrintedCircuitDesign::FlatPatternObjectType objectType /** The object type for which to return the display data. */
            );
            /** Sets the display data for a flat pattern object type. 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : nx_flexible_pcb ("NX Flexible PCB") */
            public: void SetFlatPatternObjectTypeDisplay
            (
                bool updateModel /** Specifies whether the solid model be recomputed immediately.*/,
                NXOpen::Preferences::PartFlexiblePrintedCircuitDesign::FlatPatternObjectType objectType /** The object type for which to get the display data. */,
                const NXOpen::Preferences::PartFlexiblePrintedCircuitDesign::FlatPatternObjectTypeDisplay & displayData /** The display data for the flat pattern object type. */
            );
            /** Returns the display data for a callout type. The name member of the
                        @link Preferences::PartFlexiblePrintedCircuitDesign::FlatPatternCalloutTypeDisplay Preferences::PartFlexiblePrintedCircuitDesign::FlatPatternCalloutTypeDisplay@endlink 
                        is separately allocated from the callout_type argument string.
                        In some cases the new string will contain an
                        extended form of the callout_type passed in, and that form should
                        be used for subsequent JA calls, without modification.  @return  The display data for the callout type. 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : nx_flexible_pcb ("NX Flexible PCB") */
            public: NXOpen::Preferences::PartFlexiblePrintedCircuitDesign::FlatPatternCalloutTypeDisplay GetFlatPatternCalloutTypeDisplay
            (
                const NXString & calloutType /** The name of the callout type for which to get the display data. */
            );
            /** Returns the display data for a callout type. The name member of the
                        @link Preferences::PartFlexiblePrintedCircuitDesign::FlatPatternCalloutTypeDisplay Preferences::PartFlexiblePrintedCircuitDesign::FlatPatternCalloutTypeDisplay@endlink 
                        is separately allocated from the callout_type argument string.
                        In some cases the new string will contain an
                        extended form of the callout_type passed in, and that form should
                        be used for subsequent JA calls, without modification.  @return  The display data for the callout type. 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : nx_flexible_pcb ("NX Flexible PCB") */
            NXOpen::Preferences::PartFlexiblePrintedCircuitDesign::FlatPatternCalloutTypeDisplay GetFlatPatternCalloutTypeDisplay
            (
                const char * calloutType /** The name of the callout type for which to get the display data. */
            );
            /** Sets the display data for a callout type. 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : nx_flexible_pcb ("NX Flexible PCB") */
            public: void SetFlatPatternCalloutTypeDisplay
            (
                const NXString & calloutType /** The name of the callout type for which to set the display data. */,
                const NXOpen::Preferences::PartFlexiblePrintedCircuitDesign::FlatPatternCalloutTypeDisplay & displayData /** The display data for the callout type. */
            );
            /** Sets the display data for a callout type. 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : nx_flexible_pcb ("NX Flexible PCB") */
            void SetFlatPatternCalloutTypeDisplay
            (
                const char * calloutType /** The name of the callout type for which to set the display data. */,
                const NXOpen::Preferences::PartFlexiblePrintedCircuitDesign::FlatPatternCalloutTypeDisplay & displayData /** The display data for the callout type. */
            );
            /** Returns the types, colors, fonts, widths, and enabled status for all the
                        the available object types. 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : nx_flexible_pcb ("NX Flexible PCB") */
            public: void GetFlatPatternAllObjectTypeDisplay
            (
                std::vector<NXOpen::Preferences::PartFlexiblePrintedCircuitDesign::FlatPatternObjectTypeDisplay> & displayData /** Array of structures with the object type display data. */
            );
            /** Returns the dialog names, identifiers, and enabled status for all the
                        available callout types. 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : nx_flexible_pcb ("NX Flexible PCB") */
            public: void GetFlatPatternAllCalloutTypeDisplay
            (
                std::vector<NXOpen::Preferences::PartFlexiblePrintedCircuitDesign::FlatPatternCalloutTypeDisplay> & displayData /** Array of structures with the callout type display data. */
            );
            /** Commits and applies all the settings done with set_callout_type_display
                        and set_object_type_display. It must be called after a sequence of calls
                        to those methods to cause the view to update. 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : nx_flexible_pcb ("NX Flexible PCB") */
            public: void Commit
            (
            );
            /** Returns the conductor width expression.  @return  expression object for flexible cable conductor width. 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : nx_flexible_pcb ("NX Flexible PCB") */
            public: NXOpen::Expression * GetFlexibleCableConductorWidth
            (
            );
            /** Sets the conductor width value string. 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : nx_flexible_pcb ("NX Flexible PCB") */
            public: void SetFlexibleCableConductorWidth
            (
                const NXString & conductorWidth /** Default conductor width value for the flexible cable.   <br>  NOTE: The full Unicode character set is not supported for this parameter.  <br> */
            );
            /** Sets the conductor width value string. 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : nx_flexible_pcb ("NX Flexible PCB") */
            void SetFlexibleCableConductorWidth
            (
                const char * conductorWidth /** Default conductor width value for the flexible cable.   <br>  NOTE: The full Unicode character set is not supported for this parameter.  <br> */
            );
            /** Returns the conductor spacing expression.  @return  expression object for flexible cable conductor width. 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : nx_flexible_pcb ("NX Flexible PCB") */
            public: NXOpen::Expression * GetFlexibleCableConductorSpacing
            (
            );
            /** Sets the conductor spacing value string. 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : nx_flexible_pcb ("NX Flexible PCB") */
            public: void SetFlexibleCableConductorSpacing
            (
                const NXString & conductorSpacing /** Default conductor spacing value for the flexible cable.   <br>  NOTE: The full Unicode character set is not supported for this parameter.  <br> */
            );
            /** Sets the conductor spacing value string. 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : nx_flexible_pcb ("NX Flexible PCB") */
            void SetFlexibleCableConductorSpacing
            (
                const char * conductorSpacing /** Default conductor spacing value for the flexible cable.   <br>  NOTE: The full Unicode character set is not supported for this parameter.  <br> */
            );
            /** Returns the stripping length expression.  @return  expression object for flexible cable conductor width. 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : nx_flexible_pcb ("NX Flexible PCB") */
            public: NXOpen::Expression * GetFlexibleCableStrippingLength
            (
            );
            /** Sets the stripping length value string. 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : nx_flexible_pcb ("NX Flexible PCB") */
            public: void SetFlexibleCableStrippingLength
            (
                const NXString & strippingLength /** Default stripping length value for the flexible cable.   <br>  NOTE: The full Unicode character set is not supported for this parameter.  <br> */
            );
            /** Sets the stripping length value string. 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : nx_flexible_pcb ("NX Flexible PCB") */
            void SetFlexibleCableStrippingLength
            (
                const char * strippingLength /** Default stripping length value for the flexible cable.   <br>  NOTE: The full Unicode character set is not supported for this parameter.  <br> */
            );
            /** Returns the contact face.  @return  
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : nx_flexible_pcb ("NX Flexible PCB") */
            public: NXOpen::Preferences::PartFlexiblePrintedCircuitDesign::FlexibleCableContactFaceOptions GetFlexibleCableContactFace
            (
            );
            /** Sets the contact face. 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : nx_flexible_pcb ("NX Flexible PCB") */
            public: void SetFlexibleCableContactFace
            (
                NXOpen::Preferences::PartFlexiblePrintedCircuitDesign::FlexibleCableContactFaceOptions faceOption /** Contact face options. */
            );
            /** Returns the top face color.  @return  
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : nx_flexible_pcb ("NX Flexible PCB") */
            public: NXOpen::NXColor * GetFlexibleCableTopFaceColor
            (
            );
            /** Sets the top face color. 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : nx_flexible_pcb ("NX Flexible PCB") */
            public: void SetFlexibleCableTopFaceColor
            (
                NXOpen::NXColor * topFaceColor /** Top face color. */
            );
            /** Returns the bottom face color.  @return  
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : nx_flexible_pcb ("NX Flexible PCB") */
            public: NXOpen::NXColor * GetFlexibleCableBottomFaceColor
            (
            );
            /** Sets the bottom face color. 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : nx_flexible_pcb ("NX Flexible PCB") */
            public: void SetFlexibleCableBottomFaceColor
            (
                NXOpen::NXColor * bottomFaceColor /** Bottom face color. */
            );
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
