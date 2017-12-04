#ifndef NXOpen_EDGEMULTIPLESEEDTANGENTRULE_HXX_INCLUDED
#define NXOpen_EDGEMULTIPLESEEDTANGENTRULE_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     EdgeMultipleSeedTangentRule.ja
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
#include <NXOpen/SelectionIntentRule.hxx>
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
    class EdgeMultipleSeedTangentRule;
    class Edge;
    class SelectionIntentRule;
    class EdgeMultipleSeedTangentRuleImpl;
    /** Represents a @link  SelectionIntentRule   SelectionIntentRule @endlink  that collects tangent connected edges from the body of the seed edge. This rule is different from @link  EdgeTangentRule   EdgeTangentRule @endlink  in that each collected edge can act as a seed.  
     <br>  Created in NX3.0.0.  <br>  
    */
    class NXOPENCPPEXPORT  EdgeMultipleSeedTangentRule : public SelectionIntentRule
    {
        private: EdgeMultipleSeedTangentRuleImpl * m_edgemultipleseedtangentrule_impl;
        /// \cond NX_NO_DOC 
        public: explicit EdgeMultipleSeedTangentRule(void *ptr);
        /// \endcond 
        /** Frees the object from memory.
         <br>  Created in NX3.0.0.  <br>  
         <br> License requirements : None */
        public: virtual ~EdgeMultipleSeedTangentRule();
        /** Gets the data for the edge multiple seed tangent rule: @link  EdgeMultipleSeedTangentRule   EdgeMultipleSeedTangentRule @endlink  
         <br>  Created in NX3.0.0.  <br>  
         <br> License requirements : solid_modeling ("SOLIDS MODELING") */
        public: void GetData
        (
            std::vector<NXOpen::Edge *> & seedEdges /** Seed edges */,
            double* angleTolerance /** Angle tolerance for tangent edges */,
            bool* hasSameConvexity /** True: will only find tangnet edges
                                                              that has the same convexity*/
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
