#ifndef NXOpen_CAEOBJECTTYPE_HXX_INCLUDED
#define NXOpen_CAEOBJECTTYPE_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     CaeObjectType.ja
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
    class CaeObjectType;
    class CaeObjectTypeImpl;
    /** Represent options for CAE selection. 
     <br>  Created in NX6.0.0.  <br>  
    */
    class NXOPENCPPEXPORT  CaeObjectType
    {
        /** Used to specify the sub type of selected objects  e.g face of an element, edge of an element ..etc */
        public: enum CaeSubType
        {
            CaeSubTypeNone/** sub type is the same as the type of the object */,
            CaeSubTypeElementFace/** sub type is element face */,
            CaeSubTypeElementEdge/** sub type is element edge */
        };

        private: CaeObjectTypeImpl * m_caeobjecttype_impl;
        public: ~CaeObjectType();
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
