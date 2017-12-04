#ifndef NXOpen_SAVEOPTIONS_HXX_INCLUDED
#define NXOpen_SAVEOPTIONS_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     SaveOptions.ja
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
#include <NXOpen/TaggedObject.hxx>
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
    class SaveOptions;
    class PartCollection;
    class SaveOptionsImpl;
    /** Contains accessor methods for all part save options that follow the session. See
    @link  PartSaveOptions   PartSaveOptions @endlink  for those part save options that are specific to a 
    particular part.  <br> To obtain an instance of this class, refer to @link PartCollection PartCollection@endlink  <br> 
     <br>  Created in NX3.0.0.  <br>  
    */
    class NXOPENCPPEXPORT  SaveOptions
    {
        private: SaveOptionsImpl * m_saveoptions_impl;
        private: NXOpen::PartCollection* m_owner;
        /// \cond NX_NO_DOC 
        public: explicit SaveOptions(NXOpen::PartCollection *owner);


        /// \endcond 
        public: 
        /**Returns the tag of this object.  */
        tag_t Tag() const; 
        public: ~SaveOptions();
        /**Sets   @brief  the option indicating whether to generate Teamcenter Visualization
            .jt files when a part is saved  

         
         <br>  Created in NX3.0.0.  <br>  
         <br> License requirements : None */
        public: void SetVisualizationData
        (
            bool option /** option */ 
        );
        /**Returns   @brief  the option indicating whether to generate Teamcenter Visualization
            .jt files when a part is saved  

         
         <br>  Created in NX3.0.0.  <br>  
         <br> License requirements : None */
        public: bool VisualizationData
        (
        );
        /**Sets   @brief  the option indicating whether to generate data for true shape
            filtering (.ts files)  

          
         <br>  Created in NX3.0.0.  <br>  
         <br> License requirements : None */
        public: void SetTrueShapeData
        (
            bool option /** option */ 
        );
        /**Returns   @brief  the option indicating whether to generate data for true shape
            filtering (.ts files)  

          
         <br>  Created in NX3.0.0.  <br>  
         <br> License requirements : None */
        public: bool TrueShapeData
        (
        );
        /**Sets  the option that specifies the directory in which you want to
            file part family members.
            
            Note that setting this property will have no effect while running in 
            NX Manager mode.
            
         <br>  Created in NX3.0.0.  <br>  
         <br> License requirements : None */
        public: void SetFamilyDefaultDirectory
        (
            const NXString & dir /** dir */ 
        );
        /**Sets  the option that specifies the directory in which you want to
            file part family members.
            
            Note that setting this property will have no effect while running in 
            NX Manager mode.
            
         <br>  Created in NX3.0.0.  <br>  
         <br> License requirements : None */
        void SetFamilyDefaultDirectory
        (
            const char * dir /** dir */ 
        );
        /**Returns  the option that specifies the directory in which you want to
            file part family members.
            
            Note that setting this property will have no effect while running in 
            NX Manager mode.
            
         <br>  Created in NX3.0.0.  <br>  
         <br> License requirements : None */
        public: NXString FamilyDefaultDirectory
        (
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
