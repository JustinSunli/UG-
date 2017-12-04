#ifndef NXOpen_CAE_FENODE_HXX_INCLUDED
#define NXOpen_CAE_FENODE_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     CAE_FENode.ja
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
#include <NXOpen/CAE_IExportableFEEntity.hxx>
#include <NXOpen/CAE_FENode.hxx>
#include <NXOpen/IFitTo.hxx>
#include <NXOpen/INXObject.hxx>
#include <NXOpen/TaggedObject.hxx>
#include <NXOpen/ugmath.hxx>
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
        class FENode;
    }
    namespace Assemblies
    {
        class Component;
    }
    class BasePart;
    namespace CAE
    {
        class FEElement;
    }
    namespace CAE
    {
        class IExportableFEEntity;
    }
    class CoordinateSystem;
    class IFitTo;
    class INXObject;
    namespace CAE
    {
        class _FENodeBuilder;
        class FENodeImpl;
        /** Represents a Finite Element. 
         <br>  Created in NX7.5.0.  <br>  
        */
        class NXOPENCPP_CAEEXPORT  FENode : public TaggedObject, public virtual IFitTo, public virtual CAE::IExportableFEEntity
        {
            private: FENodeImpl * m_fenode_impl;
            private: friend class  _FENodeBuilder;
            protected: FENode();
            public: ~FENode();
            /**Returns  the node label            
             <br>  Created in NX7.5.2.  <br>  
             <br> License requirements : None */
            public: int Label
            (
            );
            /**Returns  the node cooridnates in absolute space 
             <br>  Created in NX7.5.2.  <br>  
             <br> License requirements : None */
            public: NXOpen::Point3d Coordinates
            (
            );
            /**Returns  the nodes reference coordinate system or NULL if it is the absolute coordinate system  
             <br>  Created in NX7.5.2.  <br>  
             <br> License requirements : None */
            public: NXOpen::CoordinateSystem * ReferenceCsys
            (
            );
            /**Returns  the nodes displacement coordinate system or NULL if it is the absolute coordinate system  
             <br>  Created in NX7.5.2.  <br>  
             <br> License requirements : None */
            public: NXOpen::CoordinateSystem * DisplacementCsys
            (
            );
            /** Returns the elements which refer to this node   @return  
             <br>  Created in NX7.5.2.  <br>  
             <br> License requirements : None */
            public: std::vector<NXOpen::CAE::FEElement *> GetElements
            (
            );
            /** Finds the @link  NXObject   NXObject @endlink  with the given identifier as recorded in a journal. 
                An object may not return the same value as its JournalIdentifier in different versions of 
                the software. However newer versions of the software should find the same object when 
                FindObject is passed older versions of its journal identifier. In general, this method 
                should not be used in handwritten code and exists to support record and playback of journals.

                An exception will be thrown if no object can be found with the given journal identifier.  @return  
             <br>  Created in NX3.0.0.  <br>  
             <br> License requirements : None */
            public: virtual NXOpen::INXObject * FindObject
            (
                const NXString & journalIdentifier /** Journal identifier of the object */
            );
            /** Finds the @link  NXObject   NXObject @endlink  with the given identifier as recorded in a journal. 
                An object may not return the same value as its JournalIdentifier in different versions of 
                the software. However newer versions of the software should find the same object when 
                FindObject is passed older versions of its journal identifier. In general, this method 
                should not be used in handwritten code and exists to support record and playback of journals.

                An exception will be thrown if no object can be found with the given journal identifier.  @return  
             <br>  Created in NX3.0.0.  <br>  
             <br> License requirements : None */
            NXOpen::INXObject * FindObject
            (
                const char * journalIdentifier /** Journal identifier of the object */
            );
            /**Returns  the identifier that would be recorded in a journal for this object. 
                This may not be the same across different releases of the software. 
             <br>  Created in NX3.0.0.  <br>  
             <br> License requirements : None */
            public: virtual NXString JournalIdentifier
            (
            );
            /**Returns  whether this object is an occurrence or not. 
             <br>  Created in NX3.0.0.  <br>  
             <br> License requirements : None */
            public: virtual bool IsOccurrence
            (
            );
            /**Returns  the prototype of this object if it is an occurrence. 
             <br>  Created in NX3.0.0.  <br>  
             <br> License requirements : None */
            public: virtual NXOpen::INXObject * Prototype
            (
            );
            /**Returns  the owning component, if this object is an occurrence. 
             <br>  Created in NX3.0.0.  <br>  
             <br> License requirements : None */
            public: virtual NXOpen::Assemblies::Component * OwningComponent
            (
            );
            /**Returns  the owning part of this object 
             <br>  Created in NX3.0.0.  <br>  
             <br> License requirements : None */
            public: virtual NXOpen::BasePart * OwningPart
            (
            );
            /** Prints a representation of this object to the system log file.
                 
             <br>  Created in NX3.0.0.  <br>  
             <br> License requirements : None */
            public: virtual void Print
            (
            );
            /**Returns  the custom name of the object.  
             <br>  Created in NX3.0.0.  <br>  
             <br> License requirements : None */
            public: virtual NXString Name
            (
            );
            /** Sets the custom name of the object.
                    NOTE: This method should not be used to edit a read-only object such as a Mirrored PMI object.
                          If it is, the changes will be overridden when the part is updated. 
             <br>  Created in NX3.0.0.  <br>  
             <br> License requirements : None */
            public: virtual void SetName
            (
                const NXString & name /** name */ 
            );
            /** Sets the custom name of the object.
                    NOTE: This method should not be used to edit a read-only object such as a Mirrored PMI object.
                          If it is, the changes will be overridden when the part is updated. 
             <br>  Created in NX3.0.0.  <br>  
             <br> License requirements : None */
            void SetName
            (
                const char * name /** name */ 
            );
            /** Returns the solver card syntax strings for this entity.  @return  
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : None */
            public: virtual std::vector<NXString> GetSolverCardSyntax
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
