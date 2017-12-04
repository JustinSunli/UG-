#ifndef NXOpen_ARCHTEMPLATETESTMANAGER_HXX_INCLUDED
#define NXOpen_ARCHTEMPLATETESTMANAGER_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     ArchTemplateTestManager.ja
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
#include <NXOpen/libnxopendebugsessioncpp_exports.hxx>

#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable:4996)
#endif
#ifdef __GNUC__
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

namespace NXOpen
{
    class ArchTemplateTestManager;
    class TemplateTestManager;
    namespace Features
    {
        class Feature;
    }
    class NXObject;
    class ArchTemplateTestManagerImpl;
    /** Represents a class that is used for autotests.  This class should not
    be made available to customers  <br> To obtain an instance of this class, refer to @link TemplateTestManager TemplateTestManager@endlink  <br> 
     <br>  Created in NX8.0.0.  <br>  
    */
    class NXOPENDEBUGSESSIONCPPEXPORT  ArchTemplateTestManager
    {
        private: ArchTemplateTestManagerImpl * m_archtemplatetestmanager_impl;
        private: NXOpen::TemplateTestManager* m_owner;
        /// \cond NX_NO_DOC 
        public: explicit ArchTemplateTestManager(NXOpen::TemplateTestManager *owner);


        /// \endcond 
        public: 
        /**Returns the tag of this object.  */
        tag_t Tag() const; 
        public: ~ArchTemplateTestManager();
        /**Sample Template Test
         <br>  Created in NX8.0.0.  <br>  
         <br> License requirements : None */
        public: void RunSampleTemplateTest
        (
            const NXString & testName /**   <br>  NOTE: The full Unicode character set is not supported for this parameter.  <br> */,
            int version /** version */ ,
            const std::vector<int> & errorCodes /** errorcodes */ ,
            bool bool0 /** bool0 */ ,
            int int0 /** int0 */ ,
            double float0 /** float0 */ ,
            const std::vector<NXOpen::Features::Feature *> & features0 /** features0 */ ,
            const std::vector<NXOpen::NXObject *> & nxobjects0 /** nxobjects0 */ ,
            const NXString & strings0 /**   <br>  NOTE: The full Unicode character set is not supported for this parameter.  <br> */
        );
        /**Sample Template Test
         <br>  Created in NX8.0.0.  <br>  
         <br> License requirements : None */
        void RunSampleTemplateTest
        (
            const char * testName /**   <br>  NOTE: The full Unicode character set is not supported for this parameter.  <br> */,
            int version /** version */ ,
            const std::vector<int> & errorCodes /** errorcodes */ ,
            bool bool0 /** bool0 */ ,
            int int0 /** int0 */ ,
            double float0 /** float0 */ ,
            const std::vector<NXOpen::Features::Feature *> & features0 /** features0 */ ,
            const std::vector<NXOpen::NXObject *> & nxobjects0 /** nxobjects0 */ ,
            const char * strings0 /**   <br>  NOTE: The full Unicode character set is not supported for this parameter.  <br> */
        );
        /**Add Comment
         <br>  Created in NX8.0.0.  <br>  
         <br> License requirements : None */
        public: void RunLinetest
        (
            const NXString & testName /**   <br>  NOTE: The full Unicode character set is not supported for this parameter.  <br> */,
            int version /** version */ ,
            const std::vector<int> & errorCodes /** errorcodes */ ,
            const std::vector<NXOpen::Features::Feature *> & line0 /** line0 */ 
        );
        /**Add Comment
         <br>  Created in NX8.0.0.  <br>  
         <br> License requirements : None */
        void RunLinetest
        (
            const char * testName /**   <br>  NOTE: The full Unicode character set is not supported for this parameter.  <br> */,
            int version /** version */ ,
            const std::vector<int> & errorCodes /** errorcodes */ ,
            const std::vector<NXOpen::Features::Feature *> & line0 /** line0 */ 
        );
        /**Prints the number of attributes and attribute information available on the selected object
         <br>  Created in NX8.0.0.  <br>  
         <br> License requirements : None */
        public: void RunPrintObjectAttributes
        (
            const NXString & testName /**   <br>  NOTE: The full Unicode character set is not supported for this parameter.  <br> */,
            int version /** version */ ,
            const std::vector<int> & errorCodes /** errorcodes */ ,
            const std::vector<NXOpen::NXObject *> & selectobject0 /** selectobject0 */ 
        );
        /**Prints the number of attributes and attribute information available on the selected object
         <br>  Created in NX8.0.0.  <br>  
         <br> License requirements : None */
        void RunPrintObjectAttributes
        (
            const char * testName /**   <br>  NOTE: The full Unicode character set is not supported for this parameter.  <br> */,
            int version /** version */ ,
            const std::vector<int> & errorCodes /** errorcodes */ ,
            const std::vector<NXOpen::NXObject *> & selectobject0 /** selectobject0 */ 
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
