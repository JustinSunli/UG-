#ifndef NXOpen_CAE_LAMINATESELECTENTITIESBUILDER_HXX_INCLUDED
#define NXOpen_CAE_LAMINATESELECTENTITIESBUILDER_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     CAE_LaminateSelectEntitiesBuilder.ja
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
#include <NXOpen/Builder.hxx>
#include <NXOpen/CAE_LaminateSelectEntitiesBuilder.hxx>
#include <NXOpen/CAE_SetObject.hxx>
#include <NXOpen/SelectObjectList.hxx>
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
        class LaminateSelectEntitiesBuilder;
    }
    class Builder;
    class SelectTaggedObjectList;
    class TaggedObject;
    namespace CAE
    {
        class _LaminateSelectEntitiesBuilderBuilder;
        class LaminateSelectEntitiesBuilderImpl;
        /** Represents a @link CAE::LaminateSelectEntitiesBuilder CAE::LaminateSelectEntitiesBuilder@endlink   <br> To create a new instance of this class, use @link CAE::LaminateGlobalLayupMgr::CreateLaminateSelectEntitiesBuilder CAE::LaminateGlobalLayupMgr::CreateLaminateSelectEntitiesBuilder@endlink  <br> 
         <br>  Created in NX7.5.2.  <br>  
        */
        class NXOPENCPP_CAEEXPORT  LaminateSelectEntitiesBuilder : public Builder
        {
            private: LaminateSelectEntitiesBuilderImpl * m_laminateselectentitiesbuilder_impl;
            private: friend class  _LaminateSelectEntitiesBuilderBuilder;
            protected: LaminateSelectEntitiesBuilder();
            public: ~LaminateSelectEntitiesBuilder();
            /**Returns  the selection list 
             <br>  Created in NX7.5.2.  <br>  
             <br> License requirements : nx_lam_comp_adv ("Laminate Composites Advanced") */
            public: NXOpen::SelectTaggedObjectList * SelectionList
            (
            );
            /** Clears the selection list 
             <br>  Created in NX7.5.2.  <br>  
             <br> License requirements : nx_lam_comp_adv ("Laminate Composites Advanced") */
            public: void Clear
            (
            );
            /** Add entities to the selection objects 
             <br>  Created in NX7.5.2.  <br>  
             <br> License requirements : nx_lam_comp_adv ("Laminate Composites Advanced") */
            public: void AddEntities
            (
                const std::vector<NXOpen::CAE::SetObject> & objects /** Geometric faces, element faces, geometric edges, element edges */
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
