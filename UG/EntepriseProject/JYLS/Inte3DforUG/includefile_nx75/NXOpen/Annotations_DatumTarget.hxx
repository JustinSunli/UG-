#ifndef NXOpen_ANNOTATIONS_DATUMTARGET_HXX_INCLUDED
#define NXOpen_ANNOTATIONS_DATUMTARGET_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     Annotations_DatumTarget.ja
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
#include <NXOpen/Annotations_DraftingDatumTarget.hxx>
#include <NXOpen/Annotations_IPmi.hxx>
#include <NXOpen/Annotations_AssociatedObject.hxx>
#include <NXOpen/INXObject.hxx>
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
        class DatumTarget;
    }
    namespace Annotations
    {
        class AssociatedObject;
    }
    namespace Annotations
    {
        class BusinessModifier;
    }
    namespace Annotations
    {
        class DraftingDatumTarget;
    }
    namespace Annotations
    {
        class IPmi;
    }
    namespace Assemblies
    {
        class Component;
    }
    class BasePart;
    class INXObject;
    namespace Annotations
    {
        class _DatumTargetBuilder;
        class DatumTargetImpl;
        /** Represents a datum target  <br> To create or edit an instance of this class, use @link Annotations::PmiDatumTargetBuilder Annotations::PmiDatumTargetBuilder@endlink  <br> 
         <br>  Created in NX4.0.0.  <br>  
        */
        class NXOPENCPP_ANNOTATIONSEXPORT  DatumTarget : public Annotations::DraftingDatumTarget, public virtual Annotations::IPmi
        {
            private: DatumTargetImpl * m_datumtarget_impl;
            private: friend class  _DatumTargetBuilder;
            protected: DatumTarget();
            public: ~DatumTarget();
            /** Returns the business modifiers  @return  List of business modifiers 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : None */
            public: virtual std::vector<NXOpen::Annotations::BusinessModifier *> GetBusinessModifiers
            (
            );
            /** Sets the business modifiers.
                        NOTE: This method should not be used to edit a read-only object such as a Mirrored PMI object.
                              If it is, the changes will be overridden when the part is updated. 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : geometric_tol ("GDT") */
            public: virtual void SetBusinessModifiers
            (
                const std::vector<NXOpen::Annotations::BusinessModifier *> & businessModifiers /** List of new business modifiers */
            );
            /** Returns the associated object  @return  Associated object 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : None */
            public: virtual NXOpen::Annotations::AssociatedObject * GetAssociatedObject
            (
            );
            /** Returns the shared associated objects  @return  Shared associated objects 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : None */
            public: virtual NXOpen::Annotations::AssociatedObject * GetSharedAssociatedObject
            (
            );
            /** Sets the associated object.
                        NOTE: This method should not be used to edit a read-only object such as a Mirrored PMI object.
                              If it is, the changes will be overridden when the part is updated. 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : geometric_tol ("GDT") */
            public: virtual void SetAssociatedObject
            (
                NXOpen::Annotations::AssociatedObject * assocObj /** New associated object */
            );
            /**Returns  the index. It is a unique integer assigned to a PMI object.

                        NOTE: The set method should not be used to edit a read-only object such as a Mirrored PMI object.
                              If it is, the changes will be overridden when the part is updated. 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : None */
            public: virtual int Index
            (
            );
            /**Sets  the index. It is a unique integer assigned to a PMI object.

                        NOTE: The set method should not be used to edit a read-only object such as a Mirrored PMI object.
                              If it is, the changes will be overridden when the part is updated. 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : geometric_tol ("GDT") */
            public: virtual void SetIndex
            (
                int index /** New integer for PMI object */
            );
            /**Returns  a flag indicating whether the annotation is mirrored 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : None */
            public: virtual bool IsMirrored
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