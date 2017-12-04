#ifndef NXOpen_FEATURES_SHEETMETAL_BREAKCORNERBUILDER_HXX_INCLUDED
#define NXOpen_FEATURES_SHEETMETAL_BREAKCORNERBUILDER_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     Features_SheetMetal_BreakCornerBuilder.ja
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
#include <NXOpen/Features_FeatureBuilder.hxx>
#include <NXOpen/libnxopencpp_features_exports.hxx>

#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable:4996)
#endif
#ifdef __GNUC__
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

namespace NXOpen
{
    namespace Features
    {
        namespace SheetMetal
        {
            class BreakCornerBuilder;
        }
    }
    class Edge;
    class Expression;
    class Face;
    namespace Features
    {
        class FeatureBuilder;
    }
    namespace Features
    {
        namespace SheetMetal
        {
            class _BreakCornerBuilderBuilder;
            class BreakCornerBuilderImpl;
            /** Represents a break corner feature builder.  <br> To create a new instance of this class, use @link Features::SheetMetal::SheetmetalManager::CreateBreakCornerFeatureBuilder Features::SheetMetal::SheetmetalManager::CreateBreakCornerFeatureBuilder@endlink  <br> 
             <br>  Created in NX4.0.0.  <br>  
            */
            class NXOPENCPP_FEATURESEXPORT  BreakCornerBuilder : public Features::FeatureBuilder
            {
                /** This enum represents the break corner type. */
                public: enum TypeOptions
                {
                    TypeOptionsFillet/** fillet */ ,
                    TypeOptionsChamferEqualSetback/** chamfer equal setback */ 
                };

                private: BreakCornerBuilderImpl * m_breakcornerbuilder_impl;
                private: friend class  _BreakCornerBuilderBuilder;
                protected: BreakCornerBuilder();
                public: ~BreakCornerBuilder();
                /**Returns  the fillet radius or the setback value, depending on the type of the break corner. 
                 <br>  Created in NX4.0.0.  <br>  
                 <br> License requirements : nx_sheet_metal ("NX Sheet Metal") */
                public: NXOpen::Expression * Value
                (
                );
                /** 
                 <br>  Created in NX4.0.0.  <br>  
                 <br> License requirements : nx_sheet_metal ("NX Sheet Metal") */
                public: void SetValue
                (
                    const NXString & filletRadiusOrSetback /** Either fillet radius or setback value (depending on the type of break corner)  <br>  NOTE: The full Unicode character set is not supported for this parameter.  <br> */
                );
                /** 
                 <br>  Created in NX4.0.0.  <br>  
                 <br> License requirements : nx_sheet_metal ("NX Sheet Metal") */
                void SetValue
                (
                    const char * filletRadiusOrSetback /** Either fillet radius or setback value (depending on the type of break corner)  <br>  NOTE: The full Unicode character set is not supported for this parameter.  <br> */
                );
                /**Returns  the type of the break corner.
                             <br> 
                                Specify @link Features::SheetMetal::BreakCornerBuilder::TypeOptionsFillet Features::SheetMetal::BreakCornerBuilder::TypeOptionsFillet@endlink  to fillet the edge.
                                Specify @link Features::SheetMetal::BreakCornerBuilder::TypeOptionsChamferEqualSetback Features::SheetMetal::BreakCornerBuilder::TypeOptionsChamferEqualSetback@endlink  to chamfer the edge.
                             <br> 
                        
                 <br>  Created in NX4.0.0.  <br>  
                 <br> License requirements : nx_sheet_metal ("NX Sheet Metal") */
                public: NXOpen::Features::SheetMetal::BreakCornerBuilder::TypeOptions Type
                (
                );
                /**Sets  the type of the break corner.
                             <br> 
                                Specify @link Features::SheetMetal::BreakCornerBuilder::TypeOptionsFillet Features::SheetMetal::BreakCornerBuilder::TypeOptionsFillet@endlink  to fillet the edge.
                                Specify @link Features::SheetMetal::BreakCornerBuilder::TypeOptionsChamferEqualSetback Features::SheetMetal::BreakCornerBuilder::TypeOptionsChamferEqualSetback@endlink  to chamfer the edge.
                             <br> 
                        
                 <br>  Created in NX4.0.0.  <br>  
                 <br> License requirements : nx_sheet_metal ("NX Sheet Metal") */
                public: void SetType
                (
                    NXOpen::Features::SheetMetal::BreakCornerBuilder::TypeOptions type /** Break corner type */
                );
                /** The array of input edges for the break corner. 
                 <br>  Created in NX4.0.0.  <br>  
                 <br> License requirements : nx_sheet_metal ("NX Sheet Metal") */
                public: void SetEdges
                (
                    const std::vector<NXOpen::Edge *> & edges /** Edge list */
                );
                /** The array of input edges for the break corner.  @return  Edge list 
                 <br>  Created in NX4.0.0.  <br>  
                 <br> License requirements : nx_sheet_metal ("NX Sheet Metal") */
                public: std::vector<NXOpen::Edge *> GetEdges
                (
                );
                /** The array of input faces that implicitly include all connected sharp thickness edges as input for the break corner. 
                 <br>  Created in NX4.0.0.  <br>  
                 <br> License requirements : nx_sheet_metal ("NX Sheet Metal") */
                public: void SetFaces
                (
                    const std::vector<NXOpen::Face *> & faces /** Face list */
                );
                /** The array of input faces that implicitly include all connected sharp thickness edges as input for the break corner.   @return  Face list 
                 <br>  Created in NX4.0.0.  <br>  
                 <br> License requirements : nx_sheet_metal ("NX Sheet Metal") */
                public: std::vector<NXOpen::Face *> GetFaces
                (
                );
                /** Verify that the builder data is valid for creating a break corner.
                             <br> 
                                 If the Builder data is valid, return value is 0

                             <br> 
                         @return  Data validity flag (zero for valid and non-zero for invalid) 
                 <br>  Created in NX4.0.0.  <br>  
                 <br> License requirements : nx_sheet_metal ("NX Sheet Metal") */
                public: int ValidateBuilderData
                (
                );
            };
        }
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
