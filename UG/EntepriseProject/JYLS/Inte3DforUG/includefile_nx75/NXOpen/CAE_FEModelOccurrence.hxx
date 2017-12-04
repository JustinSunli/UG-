#ifndef NXOpen_CAE_FEMODELOCCURRENCE_HXX_INCLUDED
#define NXOpen_CAE_FEMODELOCCURRENCE_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     CAE_FEModelOccurrence.ja
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
#include <NXOpen/CAE_IFEModel.hxx>
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
        class FEModelOccurrence;
    }
    namespace Assemblies
    {
        class Component;
    }
    class BasePart;
    namespace CAE
    {
        class FEModelOccAttribute;
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
        class _FEModelOccurrenceBuilder;
        class FEModelOccurrenceImpl;
        /**  @brief  This class represents a Finite Element Model Occurrence.
                          Only one instance of this class will exist in each sim part file 

           <br> An instance of this class can not be obtained <br> 
         <br>  Created in NX5.0.0.  <br>  
        */
        class NXOPENCPP_CAEEXPORT  FEModelOccurrence : public CAE::IFEModel, public virtual CAE::IHierarchicalFEModel
        {
            private: FEModelOccurrenceImpl * m_femodeloccurrence_impl;
            private: friend class  _FEModelOccurrenceBuilder;
            protected: FEModelOccurrence();
            public: ~FEModelOccurrence();
            /** Finds the object within the @link CAE::FEModelOccurrence CAE::FEModelOccurrence@endlink  context,
                        with the given identifier as recorded in a journal.
                        An exception will be thrown if no object can be found with the given journal identifier.  @return Object with the journal identifier 
             <br>  Created in NX3.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::TaggedObject * Find
            (
                const NXString & journalIdentifier /** Journal identifier of the object */
            );
            /** Finds the object within the @link CAE::FEModelOccurrence CAE::FEModelOccurrence@endlink  context,
                        with the given identifier as recorded in a journal.
                        An exception will be thrown if no object can be found with the given journal identifier.  @return Object with the journal identifier 
             <br>  Created in NX3.0.0.  <br>  
             <br> License requirements : None */
            NXOpen::TaggedObject * Find
            (
                const char * journalIdentifier /** Journal identifier of the object */
            );
            /** Gets the @link Assemblies::Component Assemblies::Component@endlink   associated with this 
                        object  @return  
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Assemblies::Component * GetComponent
            (
            );
            /** Returns node, element, and csys offset of the femodel occurrence 
                     
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : nx_masterfem ("Finite Element Modeling") */
            public: void GetLabelOffsets
            (
                int* nodeOffset /** node offset */,
                int* elemOffset /** element offset */,
                int* csysOffset /** csys offset */
            );
            /** Sets node, element, and csys offset of the femodel occurrence 
                     
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : nx_masterfem ("Finite Element Modeling") */
            public: void SetLabelOffsets
            (
                int nodeOffset /** node offset */,
                int elemOffset /** element offset */,
                int csysOffset /** csys offset */
            );
            /** Get the femodel occurrence attributes
                      @return  
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : nx_masterfem ("Finite Element Modeling") */
            public: NXOpen::CAE::FEModelOccAttribute * GetAttributes
            (
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
