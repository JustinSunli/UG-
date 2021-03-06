#ifndef NXOpen_ANNOTATIONS_CUSTOMSYMBOLDATA_HXX_INCLUDED
#define NXOpen_ANNOTATIONS_CUSTOMSYMBOLDATA_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     Annotations_CustomSymbolData.ja
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
#include <NXOpen/Annotations_CustomSymbolTextData.hxx>
#include <NXOpen/CustomSymbols.hxx>
#include <NXOpen/TransientObject.hxx>
#include <NXOpen/libnxopencpp_annotations_exports.hxx>

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
        class CustomSymbolData;
    }
    namespace Annotations
    {
        class CustomSymbolTextData;
    }
    class Expression;
    namespace Annotations
    {
    }
    namespace Annotations
    {
        class CustomSymbolDataImpl;
        /** Represents custom symbol data 
         <br>  Created in NX4.0.0.  <br>  
        */
        class NXOPENCPP_ANNOTATIONSEXPORT  CustomSymbolData : public TransientObject
        {
            private: CustomSymbolDataImpl * m_customsymboldata_impl;
            /// \cond NX_NO_DOC 
            public: explicit CustomSymbolData(void *ptr);
            /// \endcond 
            /** Frees the object from memory.  After this method is called,
                    it is illegal to use the object.  In .NET, this method is automatically
                    called when the object is deleted by the garbage collector.  
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : None */
            public: virtual ~CustomSymbolData();
            /**Returns  the angle 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : None */
            public: double Angle
            (
            );
            /**Sets  the angle 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : None */
            public: void SetAngle
            (
                double angle /** New angle at which custom symbol will be oriented */
            );
            /**Returns  the scale 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : None */
            public: double Scale
            (
            );
            /**Sets  the scale 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : None */
            public: void SetScale
            (
                double scale /** New scale */
            );
            /**Returns  the scale expression 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Expression * ScaleExpression
            (
            );
            /**Sets  the scale expression 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : None */
            public: void SetScaleExpression
            (
                NXOpen::Expression * scaleExpression /** New scale expression */
            );
            /**Returns  the text preferences option. This option is only available when creating. 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Annotations::TextPreferencesOption TextPreferencesOption
            (
            );
            /**Sets  the text preferences option. This option is only available when creating. 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : None */
            public: void SetTextPreferencesOption
            (
                NXOpen::Annotations::TextPreferencesOption option /** New text preferences option */
            );
            /**Returns  the symbol preferences option. This option is only available when creating. 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Annotations::SymbolPreferencesOption SymbolPreferencesOption
            (
            );
            /**Sets  the symbol preferences option. This option is only available when creating. 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : None */
            public: void SetSymbolPreferencesOption
            (
                NXOpen::Annotations::SymbolPreferencesOption option /** New symbol preferences option */
            );
            /** Return the text data  @return  List of text data objects 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : None */
            public: std::vector<NXOpen::Annotations::CustomSymbolTextData *> GetTextData
            (
            );
            /** Sets the text data 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : None */
            public: void SetTextData
            (
                const std::vector<NXOpen::Annotations::CustomSymbolTextData *> & data /** List of text data objects */
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
