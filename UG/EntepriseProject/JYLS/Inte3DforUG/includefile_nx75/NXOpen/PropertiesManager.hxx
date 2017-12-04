#ifndef NXOpen_PROPERTIESMANAGER_HXX_INCLUDED
#define NXOpen_PROPERTIESMANAGER_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     PropertiesManager.ja
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
#include <NXOpen/Assemblies_AssembliesGeneralPropertiesBuilder.hxx>
#include <NXOpen/Assemblies_AssembliesParameterPropertiesBuilder.hxx>
#include <NXOpen/AttributePropertiesBuilder.hxx>
#include <NXOpen/AttributeTemplatesBuilder.hxx>
#include <NXOpen/Cam_CamGeneralPropertiesBuilder.hxx>
#include <NXOpen/FeatureGeneralPropertiesBuilder.hxx>
#include <NXOpen/MassPropertiesBuilder.hxx>
#include <NXOpen/ObjectGeneralPropertiesBuilder.hxx>
#include <NXOpen/PreviewPropertiesBuilder.hxx>
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
    class PropertiesManager;
    class BasePart;
    namespace Assemblies
    {
        class AssembliesGeneralPropertiesBuilder;
    }
    namespace Assemblies
    {
        class AssembliesParameterPropertiesBuilder;
    }
    class AttributePropertiesBuilder;
    class AttributeTemplatesBuilder;
    namespace Cam
    {
        class CamGeneralPropertiesBuilder;
    }
    class FeatureGeneralPropertiesBuilder;
    class MassPropertiesBuilder;
    class NXObject;
    class ObjectGeneralPropertiesBuilder;
    class PreviewPropertiesBuilder;
    class PropertiesManagerImpl;
    /** The PropertiesManager class provides methods to create Gateway Properties Builder objects.   <br> To obtain an instance of this class, refer to @link BasePart BasePart@endlink  <br> 
     <br>  Created in NX8.0.0.  <br>  
    */
    class NXOPENCPPEXPORT  PropertiesManager
    {
        private: PropertiesManagerImpl * m_propertiesmanager_impl;
        private: NXOpen::BasePart* m_owner;
        /// \cond NX_NO_DOC 
        public: explicit PropertiesManager(NXOpen::BasePart *owner);


        /// \endcond 
        public: 
        /**Returns the tag of this object.  */
        tag_t Tag() const; 
        public: ~PropertiesManager();
        /** Create the AttributePropertiesBuilder  @return  
         <br>  @deprecated Deprecated in NX8.5.0.  Use @link AttributeManager::CreateAttributePropertiesBuilder AttributeManager::CreateAttributePropertiesBuilder@endlink  instead. <br>  

         <br>  Created in NX8.0.0.  <br>  
         <br> License requirements : None */
        public:  NX_DEPRECATED("Deprecated in NX8.5.0.  Use AttributeManager::CreateAttributePropertiesBuilder instead.") NXOpen::AttributePropertiesBuilder * CreateAttributePropertiesBuilder
        (
            const std::vector<NXOpen::NXObject *> & objects /** the array of objects */
        );
        /** Create the MassPropertiesBuilder  @return  
         <br>  Created in NX8.0.0.  <br>  
         <br> License requirements : None */
        public: NXOpen::MassPropertiesBuilder * CreateMassPropertiesBuilder
        (
            const std::vector<NXOpen::NXObject *> & objects /** the array of objects */
        );
        /** Create the PreviewPropertiesBuilder  @return  
         <br>  Created in NX8.0.0.  <br>  
         <br> License requirements : None */
        public: NXOpen::PreviewPropertiesBuilder * CreatePreviewPropertiesBuilder
        (
            const std::vector<NXOpen::NXObject *> & objects /** the array of objects */
        );
        /** Create the Cam.CamGeneralPropertiesBuilder  @return  
         <br>  Created in NX8.0.0.  <br>  
         <br> License requirements : None */
        public: NXOpen::Cam::CamGeneralPropertiesBuilder * CreateCamGeneralPropertiesBuilder
        (
            const std::vector<NXOpen::NXObject *> & objects /** the array of objects */
        );
        /** Create the Assemblies.AssembliesParameterPropertiesBuilder  @return  
         <br>  Created in NX8.0.0.  <br>  
         <br> License requirements : None */
        public: NXOpen::Assemblies::AssembliesParameterPropertiesBuilder * CreateAssembliesParameterPropertiesBuilder
        (
            const std::vector<NXOpen::NXObject *> & objects /** the array of objects */
        );
        /** Create the FeatureGeneralPropertiesBuilder  @return  
         <br>  Created in NX8.0.0.  <br>  
         <br> License requirements : None */
        public: NXOpen::FeatureGeneralPropertiesBuilder * CreateFeatureGeneralPropertiesBuilder
        (
            const std::vector<NXOpen::NXObject *> & objects /** the array of objects */
        );
        /** Create the ObjectGeneralPropertiesBuilder  @return  
         <br>  Created in NX8.0.0.  <br>  
         <br> License requirements : None */
        public: NXOpen::ObjectGeneralPropertiesBuilder * CreateObjectGeneralPropertiesBuilder
        (
            const std::vector<NXOpen::NXObject *> & objects /** the array of objects */
        );
        /** Create the Assemblies.AssembliesGeneralPropertiesBuilder  @return  
         <br>  Created in NX8.0.0.  <br>  
         <br> License requirements : None */
        public: NXOpen::Assemblies::AssembliesGeneralPropertiesBuilder * CreateAssembliesGeneralPropertiesBuilder
        (
            const std::vector<NXOpen::NXObject *> & objects /** the array of objects */
        );
        /** Create the AttributeTemplatesBuilder  @return  
         <br>  Created in NX8.0.0.  <br>  
         <br> License requirements : None */
        public: NXOpen::AttributeTemplatesBuilder * CreateAttributeTemplatesBuilder
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
