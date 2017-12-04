#ifndef NXOpen_ASSEMBLIES_ASSEMBLIESPARAMETERPROPERTIESBUILDER_HXX_INCLUDED
#define NXOpen_ASSEMBLIES_ASSEMBLIESPARAMETERPROPERTIESBUILDER_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     Assemblies_AssembliesParameterPropertiesBuilder.ja
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
#include <NXOpen/Assemblies_AssembliesParameterPropertiesBuilder.hxx>
#include <NXOpen/Builder.hxx>
#include <NXOpen/SelectObjectList.hxx>
#include <NXOpen/libnxopencpp_assemblies_exports.hxx>

#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable:4996)
#endif
#ifdef __GNUC__
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

namespace NXOpen
{
    namespace Assemblies
    {
        class AssembliesParameterPropertiesBuilder;
    }
    namespace Assemblies
    {
        class SelectComponentList;
    }
    class Builder;
    namespace Assemblies
    {
        class _AssembliesParameterPropertiesBuilderBuilder;
        class AssembliesParameterPropertiesBuilderImpl;
        /**
            Represents an @link Assemblies::AssembliesParameterPropertiesBuilder Assemblies::AssembliesParameterPropertiesBuilder@endlink  to be used for changing the
            name or modifying the positioning mixture status of a component.
             <br> To create a new instance of this class, use @link PropertiesManager::CreateAssembliesParameterPropertiesBuilder PropertiesManager::CreateAssembliesParameterPropertiesBuilder@endlink  <br> 
        Default values.
        <table border="1"> 
         
        <tr><th> 
        Property</th>  <th> 
        Value</th> </tr>
        <tr><td> 
         
        Arrangements </td> <td> 
         
        IndividuallyPositioned </td> </tr> 

        </table>  

         <br>  Created in NX8.0.0.  <br>  
        */
        class NXOPENCPP_ASSEMBLIESEXPORT  AssembliesParameterPropertiesBuilder : public Builder
        {
            /** The positioning mixture status options */
            public: enum ArrangementOptions
            {
                ArrangementOptionsIndividuallyPositioned/** All components are varied */,
                ArrangementOptionsSamePositionInAll/** All components are unvaried */,
                ArrangementOptionsMixed/** All components are neither varied nor unvaried */
            };

            private: AssembliesParameterPropertiesBuilderImpl * m_assembliesparameterpropertiesbuilder_impl;
            private: friend class  _AssembliesParameterPropertiesBuilderBuilder;
            protected: AssembliesParameterPropertiesBuilder();
            public: ~AssembliesParameterPropertiesBuilder();
            /**Returns  the selected object(s) list.  This is the active list of components that will be
                        modified by any parameter changes. 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : assemblies ("ASSEMBLIES MODULE") */
            public: NXOpen::Assemblies::SelectComponentList * SelectedObjects
            (
            );
            /**Returns  the arrangements.  The positioning mixture status for the selected components.
                        No action will take place if Mixed is set as the arrangement option. 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : assemblies ("ASSEMBLIES MODULE") */
            public: NXOpen::Assemblies::AssembliesParameterPropertiesBuilder::ArrangementOptions Arrangements
            (
            );
            /**Sets  the arrangements.  The positioning mixture status for the selected components.
                        No action will take place if Mixed is set as the arrangement option. 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : assemblies ("ASSEMBLIES MODULE") */
            public: void SetArrangements
            (
                NXOpen::Assemblies::AssembliesParameterPropertiesBuilder::ArrangementOptions arrangements /** arrangements */ 
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
