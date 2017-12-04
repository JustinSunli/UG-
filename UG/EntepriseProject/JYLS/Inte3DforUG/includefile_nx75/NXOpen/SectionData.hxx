#ifndef NXOpen_SECTIONDATA_HXX_INCLUDED
#define NXOpen_SECTIONDATA_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     SectionData.ja
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
#include <NXOpen/SectionElementData.hxx>
#include <NXOpen/SelectionIntentRule.hxx>
#include <NXOpen/TransientObject.hxx>
#include <NXOpen/libnxopencpp_exports.hxx>

#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable:4996)
#endif
#ifdef __GNUC__
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

namespace NXOpen
{
    class SectionData;
    class NXObject;
    class SectionElementData;
    class SelectionIntentRule;
    class SectionDataImpl;
    /** Represents section data 
     <br>  Created in NX3.0.0.  <br>  
    */
    class NXOPENCPPEXPORT  SectionData : public TransientObject
    {
        private: SectionDataImpl * m_sectiondata_impl;
        /// \cond NX_NO_DOC 
        public: explicit SectionData(void *ptr);
        /// \endcond 
        /** Free resources associated with the instance. After this method
            is called, it is illegal to use the object.  In .NET, this method
            is automatically called when the object is deleted by the garbage
            collector. 
         <br>  Created in NX3.0.0.  <br>  
         <br> License requirements : None */
        public: virtual ~SectionData();
        /** Gets start connector if any. It can be point, curve or edge @return  
         <br>  Created in NX3.0.0.  <br>  
         <br> License requirements : solid_modeling ("SOLIDS MODELING") */
        public: NXOpen::NXObject * GetStartConnector
        (
        );
        /** Gets end connector if any. It can be point, curve or edge @return  
         <br>  Created in NX3.0.0.  <br>  
         <br> License requirements : solid_modeling ("SOLIDS MODELING") */
        public: NXOpen::NXObject * GetEndConnector
        (
        );
        /**Return the selection intent rules
             <br> 
               See documentation for @link SelectionIntentRule SelectionIntentRule@endlink  for more details. 
             <br>    
            
         <br>  Created in NX3.0.0.  <br>  
         <br> License requirements : solid_modeling ("SOLIDS MODELING") */
        public: void GetRules
        (
            std::vector<NXOpen::SelectionIntentRule *> & rules /** Selection intent rules. */
        );
        /** Gets the section elements.
             <br>  
                See documentation for @link SectionElementData SectionElementData@endlink  for more details. 
             <br> 
            
         <br>  Created in NX3.0.0.  <br>  
         <br> License requirements : solid_modeling ("SOLIDS MODELING") */
        public: void GetSectionElementsData
        (
            std::vector<NXOpen::SectionElementData *> & sectionElementsData /** Section elements */
        );
    }; //lint !e1712 default constructor not defined for class  

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
