#ifndef NXOpen_MECHATRONICS_ECADIMPORTBUILDER_HXX_INCLUDED
#define NXOpen_MECHATRONICS_ECADIMPORTBUILDER_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     Mechatronics_ECADImportBuilder.ja
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
#include <NXOpen/Mechatronics_ECADImportBuilder.hxx>
#include <NXOpen/Mechatronics_LogicObjectBuilder.hxx>
#include <NXOpen/libnxopencpp_mechatronics_exports.hxx>

#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable:4996)
#endif
#ifdef __GNUC__
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

namespace NXOpen
{
    namespace Mechatronics
    {
        class ECADImportBuilder;
    }
    namespace Assemblies
    {
        class Component;
    }
    class BasePart;
    class Builder;
    namespace Mechatronics
    {
        class LogicObject;
    }
    namespace Mechatronics
    {
        class _ECADImportBuilderBuilder;
        class ECADImportBuilderImpl;
        /** Represents a @link Mechatronics::ECADImportBuilder Mechatronics::ECADImportBuilder@endlink   <br> To create a new instance of this class, use @link Mechatronics::PhysicsManager::CreateECADImportBuilder Mechatronics::PhysicsManager::CreateECADImportBuilder@endlink  <br> 
         <br>  Created in NX8.5.0.  <br>  
        */
        class NXOPENCPP_MECHATRONICSEXPORT  ECADImportBuilder : public Builder
        {
            /** Represents the position mode. */
            public: enum PositionMode
            {
                PositionModeInferredOnly/** Inferred Only */,
                PositionModeAbsoluteOrigin/** Absolute Origin */,
                PositionModeSelectOrigin/** Select Origin */,
                PositionModeByConstraints/** By Constraints */,
                PositionModeMove/** Move */
            };

            private: ECADImportBuilderImpl * m_ecadimportbuilder_impl;
            private: friend class  _ECADImportBuilderBuilder;
            protected: ECADImportBuilder();
            public: ~ECADImportBuilder();
            /**Returns  the import file name 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : nx_mcd_core ("MECHATRONICS CONCEPT DESIGNER") */
            public: NXString ImportFile
            (
            );
            /**Sets  the import file name 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : nx_mcd_core ("MECHATRONICS CONCEPT DESIGNER") */
            public: void SetImportFile
            (
                const NXString & importFile /** importfile */ 
            );
            /**Sets  the import file name 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : nx_mcd_core ("MECHATRONICS CONCEPT DESIGNER") */
            void SetImportFile
            (
                const char * importFile /** importfile */ 
            );
            /** Generates ECAD model component.  @return  ECAD Model Part Tag 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : nx_mcd_core ("MECHATRONICS CONCEPT DESIGNER") */
            public: NXOpen::BasePart * GenerateEcadModelComponent
            (
                const NXString & partName /** ECAD Model Part Name   <br>  NOTE: The full Unicode character set is not supported for this parameter.  <br> */
            );
            /** Generates ECAD model component.  @return  ECAD Model Part Tag 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : nx_mcd_core ("MECHATRONICS CONCEPT DESIGNER") */
            NXOpen::BasePart * GenerateEcadModelComponent
            (
                const char * partName /** ECAD Model Part Name   <br>  NOTE: The full Unicode character set is not supported for this parameter.  <br> */
            );
            /** Creates logical node in system navigator.  @return  Logical Object Tag 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : nx_mcd_core ("MECHATRONICS CONCEPT DESIGNER") */
            public: NXOpen::Mechatronics::LogicObject * CreateLogicalNode
            (
                const NXString & referenceDesignator /** Multiple Reference Designator */
            );
            /** Creates logical node in system navigator.  @return  Logical Object Tag 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : nx_mcd_core ("MECHATRONICS CONCEPT DESIGNER") */
            NXOpen::Mechatronics::LogicObject * CreateLogicalNode
            (
                const char * referenceDesignator /** Multiple Reference Designator */
            );
            /** Edits logical node in system navigator. 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : nx_mcd_core ("MECHATRONICS CONCEPT DESIGNER") */
            public: void EditLogicalNode
            (
                NXOpen::Mechatronics::LogicObject * logicalNode /** Logical Object Tag */,
                const NXString & itemName /** Logical Item Name  */,
                const NXString & itemId /** Logical Item ID    */,
                NXOpen::Assemblies::Component * oldPartOcc /** Old Component      */,
                NXOpen::Assemblies::Component * newPartOcc /** New Component      */,
                const std::vector<NXOpen::Mechatronics::LogicObjectBuilder::ParameterData> & parameterData /** Parameter Data Array */
            );
            /** Edits logical node in system navigator. 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : nx_mcd_core ("MECHATRONICS CONCEPT DESIGNER") */
            void EditLogicalNode
            (
                NXOpen::Mechatronics::LogicObject * logicalNode /** Logical Object Tag */,
                const char * itemName /** Logical Item Name  */,
                const char * itemId /** Logical Item ID    */,
                NXOpen::Assemblies::Component * oldPartOcc /** Old Component      */,
                NXOpen::Assemblies::Component * newPartOcc /** New Component      */,
                const std::vector<NXOpen::Mechatronics::LogicObjectBuilder::ParameterData> & parameterData /** Parameter Data Array */
            );
            /**Returns  the position method, which is used in adding to assembly. 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : nx_mcd_core ("MECHATRONICS CONCEPT DESIGNER") */
            public: NXOpen::Mechatronics::ECADImportBuilder::PositionMode PositionMethod
            (
            );
            /**Sets  the position method, which is used in adding to assembly. 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : nx_mcd_core ("MECHATRONICS CONCEPT DESIGNER") */
            public: void SetPositionMethod
            (
                NXOpen::Mechatronics::ECADImportBuilder::PositionMode positionMethod /** positionmethod */ 
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
