#ifndef NXOpen_TOOLING_DIEDESDRAWPUNCHBUILDER_HXX_INCLUDED
#define NXOpen_TOOLING_DIEDESDRAWPUNCHBUILDER_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     Tooling_DieDesDrawPunchBuilder.ja
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
#include <NXOpen/Section.hxx>
#include <NXOpen/SelectObject.hxx>
#include <NXOpen/SelectObjectList.hxx>
#include <NXOpen/Tooling_DieDesDrawPunchBuilder.hxx>
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
        class DieDesDrawPunchBuilder;
    }
    class Builder;
    namespace Features
    {
        class Feature;
    }
    class Plane;
    class Section;
    class SelectBody;
    class SelectNXObjectList;
    namespace Tooling
    {
        class _DieDesDrawPunchBuilderBuilder;
        class DieDesDrawPunchBuilderImpl;
        /** Die Design draw punch management builder, create a draw die punch by selected sheet body, curve
            and base plane. <br> To create a new instance of this class, use @link Tooling::AutoDieCollection::CreateDieDesDrawPunchBuilder Tooling::AutoDieCollection::CreateDieDesDrawPunchBuilder@endlink  <br> 
         <br>  Created in NX8.0.0.  <br>  
        */
        class NXOPENCPP_TOOLINGEXPORT  DieDesDrawPunchBuilder : public Builder
        {
            private: DieDesDrawPunchBuilderImpl * m_diedesdrawpunchbuilder_impl;
            private: friend class  _DieDesDrawPunchBuilderBuilder;
            protected: DieDesDrawPunchBuilder();
            public: ~DieDesDrawPunchBuilder();
            /**Returns  the sheet body, which is used to trim the punch top face. 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::SelectBody * SheetBody
            (
            );
            /**Returns  the punch curve, which is used for wall extrusion. 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::SelectNXObjectList * PunchCurve
            (
            );
            /**Returns  the base plane, which is used for define the base of the punch.
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Plane * BasePlane
            (
            );
            /**Sets  the base plane, which is used for define the base of the punch.
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : ug_die_design ("Die Design") */
            public: void SetBasePlane
            (
                NXOpen::Plane * basePlane /** baseplane */ 
            );
            /**Returns  the inner deck sheet body, which is used for draw punch inner deck face. 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::SelectBody * SheetBodyDeck
            (
            );
            /**Returns  the main wall center line profile, which is used for user defined main wall shape. 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Section * MainWallCenterLine
            (
            );
            /**Returns  the flange profile, which is used for user defined flange shape. 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Section * FlangeProfile
            (
            );
            /**Returns  the deck thickness, which is used for define the deck thickness of the punch. 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : None */
            public: double DeckThickness
            (
            );
            /**Sets  the deck thickness, which is used for define the deck thickness of the punch. 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : ug_die_design ("Die Design") */
            public: void SetDeckThickness
            (
                double deckThickness /** deckthickness */ 
            );
            /**Returns  the belt thickness, which is used for define the belt thickness of the punch. 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : None */
            public: double BeltThickness
            (
            );
            /**Sets  the belt thickness, which is used for define the belt thickness of the punch. 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : ug_die_design ("Die Design") */
            public: void SetBeltThickness
            (
                double beltThickness /** beltthickness */ 
            );
            /**Returns  the relief distance thickness, which is used for define the relief distance of the punch. 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : None */
            public: double ReliefDistanse
            (
            );
            /**Sets  the relief distance thickness, which is used for define the relief distance of the punch. 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : ug_die_design ("Die Design") */
            public: void SetReliefDistanse
            (
                double reliefDistanse /** reliefdistanse */ 
            );
            /**Returns  the relief angle thickness, which is used for define the relief angle of the punch. 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : None */
            public: double ReliefAngle
            (
            );
            /**Sets  the relief angle thickness, which is used for define the relief angle of the punch. 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : ug_die_design ("Die Design") */
            public: void SetReliefAngle
            (
                double reliefAngle /** reliefangle */ 
            );
            /**Returns  the wall thickness, which is used for define the wall thickness of the die. 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : None */
            public: double WallThickness
            (
            );
            /**Sets  the wall thickness, which is used for define the wall thickness of the die. 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : ug_die_design ("Die Design") */
            public: void SetWallThickness
            (
                double wallThickness /** wallthickness */ 
            );
            /**Returns  the base thickness, which is used for define the base thickness of the die. 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : None */
            public: double BaseThickness
            (
            );
            /**Sets  the base thickness, which is used for define the base thickness of the die. 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : ug_die_design ("Die Design") */
            public: void SetBaseThickness
            (
                double baseThickness /** basethickness */ 
            );
            /**Returns  the base width, which is used for define the base width value of the die. 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : None */
            public: double BaseWidth
            (
            );
            /**Sets  the base width, which is used for define the base width value of the die. 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : ug_die_design ("Die Design") */
            public: void SetBaseWidth
            (
                double baseWidth /** basewidth */ 
            );
            /**Returns  the option to indicate whether to use exact sheet body. 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : None */
            public: bool ExactSheetbodyOption
            (
            );
            /**Sets  the option to indicate whether to use exact sheet body. 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : ug_die_design ("Die Design") */
            public: void SetExactSheetbodyOption
            (
                bool exactSheetbodyOption /** exactsheetbodyoption */ 
            );
            /**Returns  the option to indicate whether to create core draw punch. 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : None */
            public: bool CoreDrawPunchOption
            (
            );
            /**Sets  the option to indicate whether to create core draw punch. 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : ug_die_design ("Die Design") */
            public: void SetCoreDrawPunchOption
            (
                bool coreDrawPunchOption /** coredrawpunchoption */ 
            );
            /**Returns  the machining allowance, which is used for define the user machining allowance of the punch. 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : None */
            public: double MachiningAllowance
            (
            );
            /**Sets  the machining allowance, which is used for define the user machining allowance of the punch. 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : ug_die_design ("Die Design") */
            public: void SetMachiningAllowance
            (
                double machiningAllowance /** machiningallowance */ 
            );
            /**Returns  the feature set tag.
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : ug_die_design ("Die Design") */
            public: NXOpen::Features::Feature * TfeatureSet
            (
            );
            /**Sets  the feature set tag.
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : ug_die_design ("Die Design") */
            public: void SetTfeatureSet
            (
                NXOpen::Features::Feature * tFeatureSet /** tfeatureset */ 
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
