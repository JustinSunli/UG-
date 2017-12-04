#ifndef NXOpen_TOOLING_PROFILESPLITBUILDER_HXX_INCLUDED
#define NXOpen_TOOLING_PROFILESPLITBUILDER_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     Tooling_ProfileSplitBuilder.ja
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
#include <NXOpen/Expression.hxx>
#include <NXOpen/Section.hxx>
#include <NXOpen/SelectObjectList.hxx>
#include <NXOpen/Tooling_ProfileSplitBuilder.hxx>
#include <NXOpen/libnxopencpp_tooling_exports.hxx>

#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable:4996)
#endif
#ifdef __GNUC__
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

namespace NXOpen
{
    namespace Tooling
    {
        class ProfileSplitBuilder;
    }
    class Builder;
    class Direction;
    class Expression;
    class Section;
    class SelectBodyList;
    namespace Tooling
    {
        class _ProfileSplitBuilderBuilder;
        class ProfileSplitBuilderImpl;
        /** The ProfileSplit builder  <br> To create a new instance of this class, use @link Tooling::ProfileSplitCollection::CreateProfileSplitBuilder Tooling::ProfileSplitCollection::CreateProfileSplitBuilder@endlink  <br> 
         <br>  Created in NX6.0.0.  <br>  
        */
        class NXOPENCPP_TOOLINGEXPORT  ProfileSplitBuilder : public Builder
        {
            private: ProfileSplitBuilderImpl * m_profilesplitbuilder_impl;
            private: friend class  _ProfileSplitBuilderBuilder;
            protected: ProfileSplitBuilder();
            public: ~ProfileSplitBuilder();
            /**Returns  the selected body to be splitted 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::SelectBodyList * SelectBody
            (
            );
            /**Returns  the selected profile 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Section * SelectProfile
            (
            );
            /** Start traverse function to get edge loop 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: void StTraverse
            (
            );
            /**Returns  the extruded vector to return 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Direction * DefVector
            (
            );
            /**Sets  the extruded vector to return 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: void SetDefVector
            (
                NXOpen::Direction * defVector /** defvector */ 
            );
            /**Returns  the extruded start distance 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Expression * ExtDist1
            (
            );
            /**Returns  the extruded end distance 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Expression * ExtDist2
            (
            );
            /**Returns  the associative flag 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: bool DefAssociative
            (
            );
            /**Sets  the associative flag 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: void SetDefAssociative
            (
                bool defassociative /** defassociative */ 
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
