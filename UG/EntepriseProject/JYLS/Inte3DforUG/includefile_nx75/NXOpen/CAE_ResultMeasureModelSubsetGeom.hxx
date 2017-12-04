#ifndef NXOpen_CAE_RESULTMEASUREMODELSUBSETGEOM_HXX_INCLUDED
#define NXOpen_CAE_RESULTMEASUREMODELSUBSETGEOM_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     CAE_ResultMeasureModelSubsetGeom.ja
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
#include <NXOpen/CAE_ResultMeasureModelSubset.hxx>
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
        class ResultMeasureModelSubsetGeom;
    }
    namespace CAE
    {
        class ResultMeasureModelSubset;
    }
    class DisplayableObject;
    namespace CAE
    {
    }
    namespace CAE
    {
        class ResultMeasureModelSubsetGeomImpl;
        /**
            Represents a geometry-based subset of the model upon which to calculate results
             <br> To obtain an instance of this class use @link CAE::ResultMeasureCollection CAE::ResultMeasureCollection@endlink . <br> 
         <br>  Created in NX8.5.0.  <br>  
        */
        class NXOPENCPP_CAEEXPORT  ResultMeasureModelSubsetGeom : public CAE::ResultMeasureModelSubset
        {
            private: ResultMeasureModelSubsetGeomImpl * m_resultmeasuremodelsubsetgeom_impl;
            /// \cond NX_NO_DOC 
            public: explicit ResultMeasureModelSubsetGeom(void *ptr);
            /// \endcond 
            /** Frees the object from memory.  After this method is called,
                    it is illegal to use the object.  In .NET, this method is automatically
                    called when the object is deleted by the garbage collector.  
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : None */
            public: virtual ~ResultMeasureModelSubsetGeom();
            /** Set the geometry entities 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : nx_masterfem ("Finite Element Modeling") OR nx_design_sim ("NX Design Simulation") */
            public: void SetEntities
            (
                const std::vector<NXOpen::DisplayableObject *> & entities /** entities */ 
            );
        }; //lint !e1712 default constructor not defined for class  

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
