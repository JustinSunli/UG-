#ifndef NXOpen_CAE_ASSYFEMODEL_HXX_INCLUDED
#define NXOpen_CAE_ASSYFEMODEL_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     CAE_AssyFEModel.ja
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
#include <NXOpen/CAE_BaseFEModel.hxx>
#include <NXOpen/CAE_IHierarchicalFEModel.hxx>
#include <NXOpen/INXObject.hxx>
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
        class AssyFEModel;
    }
    namespace Assemblies
    {
        class Component;
    }
    class BasePart;
    namespace CAE
    {
        class BaseFEModel;
    }
    namespace CAE
    {
        class BaseFemPart;
    }
    namespace CAE
    {
        class FEModelOccurrence;
    }
    namespace CAE
    {
        class IFEModel;
    }
    namespace CAE
    {
        class IHierarchicalFEModel;
    }
    class INXObject;
    class TaggedObject;
    namespace CAE
    {
        class _AssyFEModelBuilder;
        class AssyFEModelImpl;
        /**  @brief  This class represents an Assembly Finite Element Model.
                          This class will act as the gateway to the 
                          Finite Element Nodes (@link CAE::FENode CAE::FENode@endlink ) and Elements (@link CAE::FEElement CAE::FEElement@endlink ) in the model. 
                          Only one instance of this class will exist in each assyfem part file 

          
         <br>  Created in NX6.0.0.  <br>  
        */
        class NXOPENCPP_CAEEXPORT  AssyFEModel : public CAE::BaseFEModel, public virtual CAE::IHierarchicalFEModel
        {
            /** the reposition types */
            public: enum RepositionType
            {
                RepositionTypeAlwaysReposition/**always reposition */,
                RepositionTypeNeverReposition/**never reposition */,
                RepositionTypePrompt/**prompt */
            };

            /** the unmap types */
            public: enum MappedComponentRemovalType
            {
                MappedComponentRemovalTypeKeepAsUnmapped/**keep unmapped */,
                MappedComponentRemovalTypeRemove/**remove */
            };

            private: AssyFEModelImpl * m_assyfemodel_impl;
            private: friend class  _AssyFEModelBuilder;
            protected: AssyFEModel();
            public: ~AssyFEModel();
            /** Finds the @link  NXObject   NXObject @endlink  with the given identifier as recorded in a journal. 
                    An object may not return the same value as its JournalIdentifier in different versions of 
                    the software. However newer versions of the software should find the same object when 
                    FindObject is passed older versions of its journal identifier. In general, this method 
                    should not be used in handwritten code and exists to support record and playback of journals.

                    An exception will be thrown if no object can be found with the given journal identifier.  @return  
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::TaggedObject * Find
            (
                const NXString & journalIdentifier /** Journal identifier of the object */
            );
            /** Finds the @link  NXObject   NXObject @endlink  with the given identifier as recorded in a journal. 
                    An object may not return the same value as its JournalIdentifier in different versions of 
                    the software. However newer versions of the software should find the same object when 
                    FindObject is passed older versions of its journal identifier. In general, this method 
                    should not be used in handwritten code and exists to support record and playback of journals.

                    An exception will be thrown if no object can be found with the given journal identifier.  @return  
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            NXOpen::TaggedObject * Find
            (
                const char * journalIdentifier /** Journal identifier of the object */
            );
            /** Map a fem part to an assembly component in an assembly fem. 
                      When a FEM component in an Assembly FEM is mapped to an Assembly Component in another CAD Assembly, 
                      the mapped FEM component will use the same orientation as the CAD component and will update 
                      accordingly when the orientation of the CAD component is modified.
                      @return  fem model occurrence that represents the fem part in the assembly FEM 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : nx_masterfem ("Finite Element Modeling") */
            public: NXOpen::CAE::FEModelOccurrence * MapFemToAssemblyComponent
            (
                NXOpen::CAE::BaseFemPart * femPart /** base fem part */,
                NXOpen::Assemblies::Component * cadPartOcc /** component in an assembly */,
                bool workLayer /** true = Work layer or false = Original fem layer */
            );
            /** Returns the @link CAE::FEModelOccurrence CAE::FEModelOccurrence@endlink  in this assembly fem that corresponds to an @link Assemblies::Component Assemblies::Component@endlink .  
                        This relationship would have been originally established through a call to @link CAE::AssyFEModel::MapFemToAssemblyComponent CAE::AssyFEModel::MapFemToAssemblyComponent@endlink .
                      @return  fem occurrence 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : nx_masterfem ("Finite Element Modeling") */
            public: NXOpen::CAE::FEModelOccurrence * GetMappedFemOccForAssemblyComponent
            (
                NXOpen::Assemblies::Component * cadPartOcc /** component in an assembly */
            );
            /** Returns the @link Assemblies::Component Assemblies::Component@endlink  in the Cad assembly fem that corresponds to an @link CAE::FEModelOccurrence CAE::FEModelOccurrence@endlink .  
                        This relationship would have been originally established through a call to @link CAE::AssyFEModel::MapFemToAssemblyComponent CAE::AssyFEModel::MapFemToAssemblyComponent@endlink .
                      @return  component in an assembly 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : nx_masterfem ("Finite Element Modeling") */
            public: NXOpen::Assemblies::Component * GetAssemblyComponentForMappedFemOcc
            (
                NXOpen::CAE::FEModelOccurrence * femOcc /** fem occurrence */
            );
            /** Unmap a fem part from an assembly component in an assembly fem 
                     
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : nx_masterfem ("Finite Element Modeling") */
            public: void UnmapFemFromAssemblyComponent
            (
                NXOpen::Assemblies::Component * cadPartOcc /** component in an assembly */
            );
            /** Remove fem component mapped to assembly component in an assembly fem
                     
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : nx_masterfem ("Finite Element Modeling") */
            public: void RemoveFemMappedToAssemblyComponent
            (
                NXOpen::Assemblies::Component * cadPartOcc /** component in an assembly */
            );
            /** Get reposition update option
                      @return  reposition option 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : nx_masterfem ("Finite Element Modeling") */
            public: NXOpen::CAE::AssyFEModel::RepositionType GetRepositionOption
            (
            );
            /** Sets reposition update option
                     
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : nx_masterfem ("Finite Element Modeling") */
            public: void SetRepositionOption
            (
                NXOpen::CAE::AssyFEModel::RepositionType reposOption /** reposition option */
            );
            /** Get unmap update option
                      @return  removal option 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : nx_masterfem ("Finite Element Modeling") */
            public: NXOpen::CAE::AssyFEModel::MappedComponentRemovalType GetMappedComponentRemovalOption
            (
            );
            /** Sets unmap update option
                     
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : nx_masterfem ("Finite Element Modeling") */
            public: void SetMappedComponentRemovalOption
            (
                NXOpen::CAE::AssyFEModel::MappedComponentRemovalType remOption /** removal option */
            );
            /** Get freeze option
                      @return  freeze option 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : nx_masterfem ("Finite Element Modeling") */
            public: bool GetFreezeOption
            (
            );
            /** Sets freeze option
                     
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : nx_masterfem ("Finite Element Modeling") */
            public: void SetFreezeOption
            (
                bool freezeOption /** freeze option */
            );
            /**Returns  the parent fem of this object, can be NULL 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: virtual NXOpen::CAE::IFEModel * Parent
            (
            );
            /** Returns the child components of this component  @return  
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: virtual std::vector<NXOpen::CAE::FEModelOccurrence *> GetChildren
            (
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