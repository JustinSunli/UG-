#ifndef NXOpen_TOOLING_ADDREUSABLEPART_HXX_INCLUDED
#define NXOpen_TOOLING_ADDREUSABLEPART_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     Tooling_AddReusablePart.ja
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
#include <NXOpen/Tooling_CloneObject.hxx>
#include <NXOpen/Tooling_ToolingManager.hxx>
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
        class AddReusablePart;
    }
    class Builder;
    namespace Tooling
    {
        class CloneObject;
    }
    namespace Tooling
    {
        class _AddReusablePartBuilder;
        class AddReusablePartImpl;
        /**
            Represents a @link Tooling::AddReusablePart Tooling::AddReusablePart@endlink 
             <br> To create a new instance of this class, use @link Tooling::AddReusablePartCollection::CreateBuilder Tooling::AddReusablePartCollection::CreateBuilder@endlink  <br> 
         <br>  Created in NX5.0.0.  <br>  
        */
        class NXOPENCPP_TOOLINGEXPORT  AddReusablePart : public Builder
        {
            /** Represents the position method */
            public: enum PositionMethod
            {
                PositionMethodInvalid = -1/** invalid */ ,
                PositionMethodAbsolute/** absolute */ ,
                PositionMethodMate/** mate */ ,
                PositionMethodReposition/** reposition */ ,
                PositionMethodWcs/** wcs */ ,
                PositionMethodPosition/** position */ ,
                PositionMethodPoint = 15/** Position by point */,
                PositionMethodInferredOny/** inferred ony */ ,
                PositionMethodRouting/** Position using Routing */
            };

            private: AddReusablePartImpl * m_addreusablepart_impl;
            private: friend class  _AddReusablePartBuilder;
            protected: AddReusablePart();
            public: ~AddReusablePart();
            /**Returns   the current position method
                    
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Tooling::AddReusablePart::PositionMethod PositionMode
            (
            );
            /**Sets   the current position method
                    
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : None */
            public: void SetPositionMode
            (
                NXOpen::Tooling::AddReusablePart::PositionMethod positionMode /** position mode */ 
            );
            /** Creates the clone operation object  @return  the new @link Tooling::CloneObject Tooling::CloneObject@endlink  instance 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Tooling::CloneObject * CreateCloneObject
            (
                NXOpen::Tooling::ToolingApplication applicationType /** Wizard type */,
                const NXString & assemName /** Project assembly name */
            );
            /** Creates the clone operation object  @return  the new @link Tooling::CloneObject Tooling::CloneObject@endlink  instance 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            NXOpen::Tooling::CloneObject * CreateCloneObject
            (
                NXOpen::Tooling::ToolingApplication applicationType /** Wizard type */,
                const char * assemName /** Project assembly name */
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