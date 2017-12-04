#ifndef NXOpen_CAE_DURABILITYEVENTFATIGUESETTINGSBUILDER_HXX_INCLUDED
#define NXOpen_CAE_DURABILITYEVENTFATIGUESETTINGSBUILDER_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     CAE_DurabilityEventFatigueSettingsBuilder.ja
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
#include <NXOpen/CAE_DurabilityEventFatigueSettingsBuilder.hxx>
#include <NXOpen/Expression.hxx>
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
        class DurabilityEventFatigueSettingsBuilder;
    }
    class Builder;
    class Expression;
    namespace CAE
    {
        class _DurabilityEventFatigueSettingsBuilderBuilder;
        class DurabilityEventFatigueSettingsBuilderImpl;
        /** Represents a builder class for the event fatigue settings.
                The fatigue settings help the user control the fatigue/durability
                parameters in the event. <br> To create a new instance of this class, use @link CAE::DurabilityFatigueCollection::CreateEventfatiguesettingsBuilder CAE::DurabilityFatigueCollection::CreateEventfatiguesettingsBuilder@endlink  <br> 
         <br>  Created in NX7.5.0.  <br>  
        */
        class NXOPENCPP_CAEEXPORT  DurabilityEventFatigueSettingsBuilder : public Builder
        {
            /** the fatigue life criterion enum.*/
            public: enum FatigueLifeCriterionEnum
            {
                FatigueLifeCriterionEnumSmithWatsonTopper/** SWT */,
                FatigueLifeCriterionEnumStrainLifeMaximumPrincipal/** Maximum Principal */,
                FatigueLifeCriterionEnumStrainLifeMaximumShear/** Maximum Shear */,
                FatigueLifeCriterionEnumStressLife/** Stress Life */,
                FatigueLifeCriterionEnumBwi/** BWI */,
                FatigueLifeCriterionEnumTwi/** TWI */
            };

            /** the equivalent stress method enum.*/
            public: enum EquivalentStressMethodEnum
            {
                EquivalentStressMethodEnumNone/** None */,
                EquivalentStressMethodEnumGoodman/** Goodman */,
                EquivalentStressMethodEnumSoderberg/** Soderberg */,
                EquivalentStressMethodEnumGerber/** Gerber */,
                EquivalentStressMethodEnumMorrow/** Morrow */
            };

            /** the cyclic stress strain model enum. */
            public: enum CyclicStressStrainModelEnum
            {
                CyclicStressStrainModelEnumLinear/** Linear */,
                CyclicStressStrainModelEnumPowerHardening/** PowerHardening*/,
                CyclicStressStrainModelEnumRambergOsgood/** RambergOsgood */
            };

            /** the Maximum Alternating Stress Enum. */
            public: enum MaximumAlternatingStressEnum
            {
                MaximumAlternatingStressEnumCalculate/** Calculate */,
                MaximumAlternatingStressEnumKeyin/** Keyin */
            };

            /** the Fatigue Safety Factor Output Enum.*/
            public: enum FatigueSafetyFactorOutputEnum
            {
                FatigueSafetyFactorOutputEnumGoodman/** Goodman */,
                FatigueSafetyFactorOutputEnumGerber/** Gerber */,
                FatigueSafetyFactorOutputEnumDangVan/** Dang Van */
            };

            /** the Fatigue Safety Factor Method Enum. */
            public: enum FatigueSafetyFactorMethodEnum
            {
                FatigueSafetyFactorMethodEnumAmplitudeandMean/** AmplitudeandMean */,
                FatigueSafetyFactorMethodEnumAmplitude/** Amplitude */,
                FatigueSafetyFactorMethodEnumMean/** Mean */
            };

            /** the BWi Weld Class Enum. */
            public: enum BwiWeldClassEnum
            {
                BwiWeldClassEnumB/** B */,
                BwiWeldClassEnumC/** C*/,
                BwiWeldClassEnumD/** D*/,
                BwiWeldClassEnumE/** E*/,
                BwiWeldClassEnumF/** F*/,
                BwiWeldClassEnumF2/** F2*/,
                BwiWeldClassEnumG/** G*/,
                BwiWeldClassEnumW/** W*/
            };

            /** the Probability Option. */
            public: enum ProbabilityOptionEnum
            {
                ProbabilityOptionEnumNumberOfStandardDeviations/** Number Of Standard Deviations */,
                ProbabilityOptionEnumProbabilityOfFailure/** Probability Of Failure*/
            };

            private: DurabilityEventFatigueSettingsBuilderImpl * m_durabilityeventfatiguesettingsbuilder_impl;
            private: friend class  _DurabilityEventFatigueSettingsBuilderBuilder;
            protected: DurabilityEventFatigueSettingsBuilder();
            public: ~DurabilityEventFatigueSettingsBuilder();
            /**Returns  the name. 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : nx_adv_durability ("NX Advanced Durability") */
            public: NXString Name
            (
            );
            /**Sets  the name. 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : nx_adv_durability ("NX Advanced Durability") */
            public: void SetName
            (
                const NXString & title /** title */ 
            );
            /**Sets  the name. 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : nx_adv_durability ("NX Advanced Durability") */
            void SetName
            (
                const char * title /** title */ 
            );
            /**Returns  the number of occurrences. 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: int NumberOfOccurrences
            (
            );
            /**Sets  the number of occurrences. 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : nx_adv_durability ("NX Advanced Durability") */
            public: void SetNumberOfOccurrences
            (
                int numberOfOccurrences /** numberofoccurrences */ 
            );
            /**Returns  the fatigue life criterion. 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::CAE::DurabilityEventFatigueSettingsBuilder::FatigueLifeCriterionEnum FatigueLifeCriterion
            (
            );
            /**Sets  the fatigue life criterion. 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : nx_adv_durability ("NX Advanced Durability") */
            public: void SetFatigueLifeCriterion
            (
                NXOpen::CAE::DurabilityEventFatigueSettingsBuilder::FatigueLifeCriterionEnum fatigueLifeCriterion /** fatiguelifecriterion */ 
            );
            /**Returns  the bwi weld class. 
             <br>  Created in NX7.5.2.  <br>  
             <br> License requirements : None */
            public: NXOpen::CAE::DurabilityEventFatigueSettingsBuilder::BwiWeldClassEnum BwiWeldClass
            (
            );
            /**Sets  the bwi weld class. 
             <br>  Created in NX7.5.2.  <br>  
             <br> License requirements : nx_adv_durability ("NX Advanced Durability") */
            public: void SetBwiWeldClass
            (
                NXOpen::CAE::DurabilityEventFatigueSettingsBuilder::BwiWeldClassEnum bwiWeldClass /** bwiweldclass */ 
            );
            /**Returns  the probability distribution. 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::CAE::DurabilityEventFatigueSettingsBuilder::ProbabilityOptionEnum ProbabilityOption
            (
            );
            /**Sets  the probability distribution. 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : nx_adv_durability ("NX Advanced Durability") */
            public: void SetProbabilityOption
            (
                NXOpen::CAE::DurabilityEventFatigueSettingsBuilder::ProbabilityOptionEnum probabilityOption /** probabilityoption */ 
            );
            /**Returns  the number of standard deviations. 
             <br>  Created in NX7.5.2.  <br>  
             <br> License requirements : None */
            public: double NumberOfStandardDeviations
            (
            );
            /**Sets  the number of standard deviations. 
             <br>  Created in NX7.5.2.  <br>  
             <br> License requirements : nx_adv_durability ("NX Advanced Durability") */
            public: void SetNumberOfStandardDeviations
            (
                double numberOfStandardDeviations /** numberofstandarddeviations */ 
            );
            /**Returns  the probability of failure. 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : None */
            public: double ProbabilityOfFailure
            (
            );
            /**Sets  the probability of failure. 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : nx_adv_durability ("NX Advanced Durability") */
            public: void SetProbabilityOfFailure
            (
                double probabilityOfFailure /** probabilityoffailure */ 
            );
            /**Returns  the twi high cycle cutoff. 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : None */
            public: double TwiHighCycleCutoff
            (
            );
            /**Sets  the twi high cycle cutoff. 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : nx_adv_durability ("NX Advanced Durability") */
            public: void SetTwiHighCycleCutoff
            (
                double twiHighCycleCutoff /** twihighcyclecutoff */ 
            );
            /**Returns  the twi high cycle slope change. 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : None */
            public: double TwiHighCycleSlopeChange
            (
            );
            /**Sets  the twi high cycle slope change. 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : nx_adv_durability ("NX Advanced Durability") */
            public: void SetTwiHighCycleSlopeChange
            (
                double twiHighCycleSlopeChange /** twihighcycleslopechange */ 
            );
            /**Returns  the twi low cycle stress cutoff. 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : None */
            public: double TwiLowCycleStressCutoff
            (
            );
            /**Sets  the twi low cycle stress cutoff. 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : nx_adv_durability ("NX Advanced Durability") */
            public: void SetTwiLowCycleStressCutoff
            (
                double twiLowCycleStressCutoff /** twilowcyclestresscutoff */ 
            );
            /**Returns  the twi low cycle stress extension. 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : None */
            public: double TwiLowCycleStressExtension
            (
            );
            /**Sets  the twi low cycle stress extension. 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : nx_adv_durability ("NX Advanced Durability") */
            public: void SetTwiLowCycleStressExtension
            (
                double twiLowCycleStressExtension /** twilowcyclestressextension */ 
            );
            /**Returns  the plate thickness correction usage. 
             <br>  Created in NX7.5.2.  <br>  
             <br> License requirements : None */
            public: bool UsePlateThicknessCorrection
            (
            );
            /**Sets  the plate thickness correction usage. 
             <br>  Created in NX7.5.2.  <br>  
             <br> License requirements : None */
            public: void SetUsePlateThicknessCorrection
            (
                bool usePlateThicknessCorrection /** useplatethicknesscorrection */ 
            );
            /**Returns  the plate thickness ratio. 
             <br>  Created in NX7.5.2.  <br>  
             <br> License requirements : None */
            public: double PlateThicknessRatio
            (
            );
            /**Sets  the plate thickness ratio. 
             <br>  Created in NX7.5.2.  <br>  
             <br> License requirements : None */
            public: void SetPlateThicknessRatio
            (
                double plateThicknessRatio /** platethicknessratio */ 
            );
            /**Returns  the plate thickness exponent. 
             <br>  Created in NX7.5.2.  <br>  
             <br> License requirements : None */
            public: double PlateThicknessExponent
            (
            );
            /**Sets  the plate thickness exponent. 
             <br>  Created in NX7.5.2.  <br>  
             <br> License requirements : None */
            public: void SetPlateThicknessExponent
            (
                double plateThicknessExponent /** platethicknessexponent */ 
            );
            /**Returns  the include mean stress effects. 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: bool IncludeMeanStressEffects
            (
            );
            /**Sets  the include mean stress effects. 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : nx_adv_durability ("NX Advanced Durability") */
            public: void SetIncludeMeanStressEffects
            (
                bool includeMeanStressEffects /** includemeanstresseffects */ 
            );
            /**Returns  the equivalent stress method. 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::CAE::DurabilityEventFatigueSettingsBuilder::EquivalentStressMethodEnum EquivalentStressMethod
            (
            );
            /**Sets  the equivalent stress method. 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : nx_adv_durability ("NX Advanced Durability") */
            public: void SetEquivalentStressMethod
            (
                NXOpen::CAE::DurabilityEventFatigueSettingsBuilder::EquivalentStressMethodEnum equivalentStressMethod /** equivalentstressmethod */ 
            );
            /**Returns  the use notch factor. 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : None */
            public: bool UseNotchFactor
            (
            );
            /**Sets  the use notch factor. 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : nx_adv_durability ("NX Advanced Durability") */
            public: void SetUseNotchFactor
            (
                bool useNotchFactor /** usenotchfactor */ 
            );
            /**Returns  the notch factor. 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: double NotchFactor
            (
            );
            /**Sets  the notch factor. 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : nx_adv_durability ("NX Advanced Durability") */
            public: void SetNotchFactor
            (
                double notchFactor /** notchfactor */ 
            );
            /**Returns  the cyclic stress strain model. 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::CAE::DurabilityEventFatigueSettingsBuilder::CyclicStressStrainModelEnum CyclicStressStrainModel
            (
            );
            /**Sets  the cyclic stress strain model. 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : nx_adv_durability ("NX Advanced Durability") */
            public: void SetCyclicStressStrainModel
            (
                NXOpen::CAE::DurabilityEventFatigueSettingsBuilder::CyclicStressStrainModelEnum cyclicStressStrainModel /** cyclicstressstrainmodel */ 
            );
            /**Returns  the number of elements in hysterisis loop. 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: int NumberOfElementsInHysterisisLoop
            (
            );
            /**Sets  the number of elements in hysterisis loop. 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : nx_adv_durability ("NX Advanced Durability") */
            public: void SetNumberOfElementsInHysterisisLoop
            (
                int numberOfElementsInHysterisisLoop /** numberofelementsinhysterisisloop */ 
            );
            /**Returns  the event damage. 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: bool EventDamage
            (
            );
            /**Sets  the event damage. 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : nx_adv_durability ("NX Advanced Durability") */
            public: void SetEventDamage
            (
                bool eventDamage /** eventdamage */ 
            );
            /**Returns  the event life. 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: bool EventLife
            (
            );
            /**Sets  the event life. 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : nx_adv_durability ("NX Advanced Durability") */
            public: void SetEventLife
            (
                bool eventLife /** eventlife */ 
            );
            /**Returns  the maximum alternating stress. 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::CAE::DurabilityEventFatigueSettingsBuilder::MaximumAlternatingStressEnum MaximumAlternatingStress
            (
            );
            /**Sets  the maximum alternating stress. 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : nx_adv_durability ("NX Advanced Durability") */
            public: void SetMaximumAlternatingStress
            (
                NXOpen::CAE::DurabilityEventFatigueSettingsBuilder::MaximumAlternatingStressEnum maximumAlternatingStress /** maximumalternatingstress */ 
            );
            /**Returns  the cycles to failure. 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: double CyclesToFailure
            (
            );
            /**Sets  the cycles to failure. 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : nx_adv_durability ("NX Advanced Durability") */
            public: void SetCyclesToFailure
            (
                double cyclesToFailure /** cyclestofailure */ 
            );
            /**Returns  the fatigue safety factor keyin. 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: double FatigueSafetyFactorKeyin
            (
            );
            /**Sets  the fatigue safety factor keyin. 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : nx_adv_durability ("NX Advanced Durability") */
            public: void SetFatigueSafetyFactorKeyin
            (
                double fatigueSafetyFactorKeyin /** fatiguesafetyfactorkeyin */ 
            );
            /**Returns  the maximum alternating stress keyin. 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Expression * MaximumAlternatingStressKeyin
            (
            );
            /**Returns  the fatigue safety factor toggle. 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: bool FatigueSafetyFactorToggle
            (
            );
            /**Sets  the fatigue safety factor toggle. 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : nx_adv_durability ("NX Advanced Durability") */
            public: void SetFatigueSafetyFactorToggle
            (
                bool fatigueSafetyFactorToggle /** fatiguesafetyfactortoggle */ 
            );
            /**Returns  the failure index. 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: bool FailureIndex
            (
            );
            /**Sets  the failure index. 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : nx_adv_durability ("NX Advanced Durability") */
            public: void SetFailureIndex
            (
                bool failureIndex /** failureindex */ 
            );
            /**Returns  the fatigue safety factor output. 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::CAE::DurabilityEventFatigueSettingsBuilder::FatigueSafetyFactorOutputEnum FatigueSafetyFactorOutput
            (
            );
            /**Sets  the fatigue safety factor output. 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : nx_adv_durability ("NX Advanced Durability") */
            public: void SetFatigueSafetyFactorOutput
            (
                NXOpen::CAE::DurabilityEventFatigueSettingsBuilder::FatigueSafetyFactorOutputEnum fatigueSafetyFactorOutput /** fatiguesafetyfactoroutput */ 
            );
            /**Returns  the fatigue safety factor method. 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::CAE::DurabilityEventFatigueSettingsBuilder::FatigueSafetyFactorMethodEnum FatigueSafetyFactorMethod
            (
            );
            /**Sets  the fatigue safety factor method. 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : nx_adv_durability ("NX Advanced Durability") */
            public: void SetFatigueSafetyFactorMethod
            (
                NXOpen::CAE::DurabilityEventFatigueSettingsBuilder::FatigueSafetyFactorMethodEnum fatigueSafetyFactorMethod /** fatiguesafetyfactormethod */ 
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
