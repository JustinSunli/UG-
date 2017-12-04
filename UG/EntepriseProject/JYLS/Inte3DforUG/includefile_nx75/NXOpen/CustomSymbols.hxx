#ifndef NXOpen_CUSTOMSYMBOLS_HXX_INCLUDED
#define NXOpen_CUSTOMSYMBOLS_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     CustomSymbols.ja
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

#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable:4996)
#endif
#ifdef __GNUC__
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

namespace NXOpen
{
    namespace Annotations
    {
        /** Specifies the custom symbol text preferences option.
                This option is only available when creating. */
        enum TextPreferencesOption
        {
            TextPreferencesOptionPartLettering/** Specifies current part files's lettering preferences will be used */,
            TextPreferencesOptionMasterSymbol/** Specifies master symbol's text preferences will be used */,
            TextPreferencesOptionLast/** Last enum value. Should not be used. */
        };

        /** Specifies the custom symbol preferences for the following - 
                  <br> Crosshatch  <br> 
                  <br> Area fill  <br> 
                  <br> Color, font and line width  <br> 
                 This option is only available when creating. */
        enum SymbolPreferencesOption
        {
            SymbolPreferencesOptionPartSymbol/** Specifies part's symbol preferences will be used */,
            SymbolPreferencesOptionMasterSymbol/** Specifies master symbol's preferences will be used */,
            SymbolPreferencesOptionLast/** Last enum value. Should not be used. */
        };

        /** Specifies the custom symbol flip option. This option is only available when editing. 
                This option is unavailable for symbols with leaders. */
        enum FlipOption
        {
            FlipOptionHorizontal/** Flips a symbol horizontally about a vertical 
                                                 line taken through its anchor point */,
            FlipOptionVertical/** Flips a symbol vertically about a horizontal 
                                                 line taken through its anchor point */,
            FlipOptionLast/** Last enum value. Should not be used. */
        };

        /** Specifies the custom symbol text type */
        enum TextType
        {
            TextTypeMandatory/** Specifies text defined in the master symbol which can't be 
                                                 modified in the custom symbol. */,
            TextTypeArbitrary/** Specifies the default text defined in the master symbol 
                                                 which can be modified in the custom symbol. The text can
                                                 be single or multiple line text. */,
            TextTypeControlled/** Specifies the text defined in the master symbol as enumerated
                                                 set of values, one of which can be selected in the custom symbol. */,
            TextTypePartiallyControlled/** Specifies the text defined in the master symbol as enumerated
                                                 set of values, one of which can be selected or overwritten in the 
                                                 custom symbol. */,
            TextTypeInteger/** Specifies ther text defined in the master symbol as an integer 
                                                 constrained between maximum and minimum value. An integer value
                                                 between minimum and maximum can be used in custom symbol. */,
            TextTypeReal/** Specifies ther text defined in the master symbol as an real 
                                                 constrained between maximum and minimum value. An real value
                                                 between minimum and maximum can be used in the custom symbol. */,
            TextTypeLast/** Last enum value. Should not be used. */
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

#endif
