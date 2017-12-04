#ifndef NXOpen_MECHATRONICS_FUNCTIONOBJECTBUILDER_HXX_INCLUDED
#define NXOpen_MECHATRONICS_FUNCTIONOBJECTBUILDER_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     Mechatronics_FunctionObjectBuilder.ja
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
#include <NXOpen/Mechatronics_FunctionObjectBuilder.hxx>
#include <NXOpen/Mechatronics_ObjectInformationBuilder.hxx>
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
        class FunctionObjectBuilder;
    }
    class Builder;
    namespace Mechatronics
    {
        class ObjectInformationBuilder;
    }
    class NXObject;
    namespace Mechatronics
    {
        class _FunctionObjectBuilderBuilder;
        class FunctionObjectBuilderImpl;
        /** Represents a @link Mechatronics::FunctionObjectBuilder Mechatronics::FunctionObjectBuilder@endlink   <br> To create a new instance of this class, use @link Mechatronics::FunctionObjectCollection::CreateFunctionObjectBuilder Mechatronics::FunctionObjectCollection::CreateFunctionObjectBuilder@endlink  <br> 
         <br>  Created in NX7.5.1.  <br>  
        */
        class NXOPENCPP_MECHATRONICSEXPORT  FunctionObjectBuilder : public Builder
        {
             /** Defined Parameter Data Structure */
            public:
            struct  ParameterData
            {
                public: /** Parameter name */NXString ParameterName;
                public: /** Parameter value */NXString ParameterValue;
                public: ParameterData() :
                    ParameterName(),
                    ParameterValue()
                {
                }
                /** Constructor for the ParameterData struct. */ 
                public: ParameterData(const NXString &parameterNameInitial /** Parameter name */, 
                        const NXString &parameterValueInitial /** Parameter value */) :
                    ParameterName(parameterNameInitial),
                    ParameterValue(parameterValueInitial)
                {
                }
            };

             /** Defined Requirement Data Structure */
            public:
            struct  RequirementData
            {
                public: /** Requirement name */NXString RequirementName;
                public: /** Requirement description */NXString RequirementDesc;
                public: /** Requirement Id, only makes sense in NX/Manager mode */NXString RequirementId;
                public: RequirementData() :
                    RequirementName(),
                    RequirementDesc(),
                    RequirementId()
                {
                }
                /** Constructor for the RequirementData struct. */ 
                public: RequirementData(const NXString &requirementNameInitial /** Requirement name */, 
                        const NXString &requirementDescInitial /** Requirement description */, 
                        const NXString &requirementIdInitial /** Requirement Id, only makes sense in NX/Manager mode */) :
                    RequirementName(requirementNameInitial),
                    RequirementDesc(requirementDescInitial),
                    RequirementId(requirementIdInitial)
                {
                }
            };

            private: FunctionObjectBuilderImpl * m_functionobjectbuilder_impl;
            private: friend class  _FunctionObjectBuilderBuilder;
            protected: FunctionObjectBuilder();
            public: ~FunctionObjectBuilder();
            /**Returns  the parent 
             <br>  Created in NX7.5.1.  <br>  
             <br> License requirements : nx_mcd_core ("MECHATRONICS CONCEPT DESIGNER") */
            public: NXOpen::NXObject * Parent
            (
            );
            /**Sets  the parent 
             <br>  Created in NX7.5.1.  <br>  
             <br> License requirements : nx_mcd_core ("MECHATRONICS CONCEPT DESIGNER") */
            public: void SetParent
            (
                NXOpen::NXObject * children /** Parent function object */
            );
            /**Gets the children 
             <br>  Created in NX7.5.1.  <br>  
             <br> License requirements : nx_mcd_core ("MECHATRONICS CONCEPT DESIGNER") */
            public: void GetChildren
            (
                std::vector<NXOpen::NXObject *> & children /** Children object array */
            );
            /**Sets the children 
             <br>  Created in NX7.5.1.  <br>  
             <br> License requirements : nx_mcd_core ("MECHATRONICS CONCEPT DESIGNER") */
            public: void SetChildren
            (
                const std::vector<NXOpen::NXObject *> & children /** Children object array */
            );
            /**Gets the occurrences 
             <br>  Created in NX7.5.1.  <br>  
             <br> License requirements : nx_mcd_core ("MECHATRONICS CONCEPT DESIGNER") */
            public: void GetOccurrences
            (
                std::vector<NXOpen::NXObject *> & occurrences /** Occurrences object array */
            );
            /**Sets the occurrences 
             <br>  Created in NX7.5.1.  <br>  
             <br> License requirements : nx_mcd_core ("MECHATRONICS CONCEPT DESIGNER") */
            public: void SetOccurrences
            (
                const std::vector<NXOpen::NXObject *> & occurrences /** Occurrences object array */
            );
            /**Gets the operations 
             <br>  Created in NX7.5.1.  <br>  
             <br> License requirements : nx_mcd_core ("MECHATRONICS CONCEPT DESIGNER") */
            public: void GetOperations
            (
                std::vector<NXOpen::NXObject *> & operations /** Operations object array */
            );
            /**Sets the operations 
             <br>  Created in NX7.5.1.  <br>  
             <br> License requirements : nx_mcd_core ("MECHATRONICS CONCEPT DESIGNER") */
            public: void SetOperations
            (
                const std::vector<NXOpen::NXObject *> & operations /** Operations object array */
            );
            /**Gets the parameter data  @return  Parameter data array
             <br>  Created in NX7.5.1.  <br>  
             <br> License requirements : nx_mcd_core ("MECHATRONICS CONCEPT DESIGNER") */
            public: std::vector<NXOpen::Mechatronics::FunctionObjectBuilder::ParameterData> GetParameterData
            (
            );
            /**Sets the parameter data 
             <br>  Created in NX7.5.1.  <br>  
             <br> License requirements : nx_mcd_core ("MECHATRONICS CONCEPT DESIGNER") */
            public: void SetParameterData
            (
                const std::vector<NXOpen::Mechatronics::FunctionObjectBuilder::ParameterData> & parameterData /** Parameter data array */
            );
            /**Gets the requirement data  @return  Requirement data array
             <br>  @deprecated Deprecated in NX8.5.0.  Please use @link RequirementBuilder RequirementBuilder@endlink  instead. <br>  

             <br>  Created in NX7.5.1.  <br>  
             <br> License requirements : nx_mcd_core ("MECHATRONICS CONCEPT DESIGNER") */
            public:  NX_DEPRECATED("Deprecated in NX8.5.0.  Please use RequirementBuilder instead.") std::vector<NXOpen::Mechatronics::FunctionObjectBuilder::RequirementData> GetRequirementData
            (
            );
            /**Sets the requirement data 
             <br>  @deprecated Deprecated in NX8.5.0.  Please use @link RequirementBuilder RequirementBuilder@endlink  instead. <br>  

             <br>  Created in NX7.5.1.  <br>  
             <br> License requirements : nx_mcd_core ("MECHATRONICS CONCEPT DESIGNER") */
            public:  NX_DEPRECATED("Deprecated in NX8.5.0.  Please use RequirementBuilder instead.") void SetRequirementData
            (
                const std::vector<NXOpen::Mechatronics::FunctionObjectBuilder::RequirementData> & requirementData /** Requirement data array */
            );
            /**Returns  the object name 
             <br>  @deprecated Deprecated in NX8.5.0.  Please use @link ObjectInformationBuilder ObjectInformationBuilder@endlink  instead. <br>  

             <br>  Created in NX7.5.1.  <br>  
             <br> License requirements : nx_mcd_core ("MECHATRONICS CONCEPT DESIGNER") */
            public:  NX_DEPRECATED("Deprecated in NX8.5.0.  Please use ObjectInformationBuilder instead.") NXString ObjectName
            (
            );
            /**Sets  the object name 
             <br>  @deprecated Deprecated in NX8.5.0.  Please use @link ObjectInformationBuilder ObjectInformationBuilder@endlink  instead. <br>  

             <br>  Created in NX7.5.1.  <br>  
             <br> License requirements : nx_mcd_core ("MECHATRONICS CONCEPT DESIGNER") */
            public:  NX_DEPRECATED("Deprecated in NX8.5.0.  Please use ObjectInformationBuilder instead.") void SetObjectName
            (
                const NXString & objectName /** Object name */
            );
            /**Sets  the object name 
             <br>  @deprecated Deprecated in NX8.5.0.  Please use @link ObjectInformationBuilder ObjectInformationBuilder@endlink  instead. <br>  

             <br>  Created in NX7.5.1.  <br>  
             <br> License requirements : nx_mcd_core ("MECHATRONICS CONCEPT DESIGNER") */
            void SetObjectName
            (
                const char * objectName /** Object name */
            );
            /**Returns  the letter name 
             <br>  Created in NX7.5.1.  <br>  
             <br> License requirements : nx_mcd_core ("MECHATRONICS CONCEPT DESIGNER") */
            public: NXString LetterName
            (
            );
            /**Sets  the letter name 
             <br>  Created in NX7.5.1.  <br>  
             <br> License requirements : nx_mcd_core ("MECHATRONICS CONCEPT DESIGNER") */
            public: void SetLetterName
            (
                const NXString & letterName /** Letter name */
            );
            /**Sets  the letter name 
             <br>  Created in NX7.5.1.  <br>  
             <br> License requirements : nx_mcd_core ("MECHATRONICS CONCEPT DESIGNER") */
            void SetLetterName
            (
                const char * letterName /** Letter name */
            );
            /**Returns  the type description 
             <br>  Created in NX7.5.1.  <br>  
             <br> License requirements : nx_mcd_core ("MECHATRONICS CONCEPT DESIGNER") */
            public: NXString TypeDesc
            (
            );
            /**Sets  the type description 
             <br>  Created in NX7.5.1.  <br>  
             <br> License requirements : nx_mcd_core ("MECHATRONICS CONCEPT DESIGNER") */
            public: void SetTypeDesc
            (
                const NXString & typeDesc /** Type description */
            );
            /**Sets  the type description 
             <br>  Created in NX7.5.1.  <br>  
             <br> License requirements : nx_mcd_core ("MECHATRONICS CONCEPT DESIGNER") */
            void SetTypeDesc
            (
                const char * typeDesc /** Type description */
            );
            /**Returns  the example description 
             <br>  Created in NX7.5.1.  <br>  
             <br> License requirements : nx_mcd_core ("MECHATRONICS CONCEPT DESIGNER") */
            public: NXString ExampleDesc
            (
            );
            /**Sets  the example description 
             <br>  Created in NX7.5.1.  <br>  
             <br> License requirements : nx_mcd_core ("MECHATRONICS CONCEPT DESIGNER") */
            public: void SetExampleDesc
            (
                const NXString & exampleDesc /** Example description */
            );
            /**Sets  the example description 
             <br>  Created in NX7.5.1.  <br>  
             <br> License requirements : nx_mcd_core ("MECHATRONICS CONCEPT DESIGNER") */
            void SetExampleDesc
            (
                const char * exampleDesc /** Example description */
            );
            /**Returns  the part id 
             <br>  @deprecated Deprecated in NX8.5.0.  Please use @link ObjectInformationBuilder ObjectInformationBuilder@endlink  instead. <br>  

             <br>  Created in NX7.5.1.  <br>  
             <br> License requirements : nx_mcd_core ("MECHATRONICS CONCEPT DESIGNER") */
            public:  NX_DEPRECATED("Deprecated in NX8.5.0.  Please use ObjectInformationBuilder instead.") NXString FunctionItemRevisionId
            (
            );
            /**Sets  the part id 
             <br>  @deprecated Deprecated in NX8.5.0.  Please use @link ObjectInformationBuilder ObjectInformationBuilder@endlink  instead. <br>  

             <br>  Created in NX7.5.1.  <br>  
             <br> License requirements : nx_mcd_core ("MECHATRONICS CONCEPT DESIGNER") */
            public:  NX_DEPRECATED("Deprecated in NX8.5.0.  Please use ObjectInformationBuilder instead.") void SetFunctionItemRevisionId
            (
                const NXString & functionItemId /** Function Revision Item id */
            );
            /**Sets  the part id 
             <br>  @deprecated Deprecated in NX8.5.0.  Please use @link ObjectInformationBuilder ObjectInformationBuilder@endlink  instead. <br>  

             <br>  Created in NX7.5.1.  <br>  
             <br> License requirements : nx_mcd_core ("MECHATRONICS CONCEPT DESIGNER") */
            void SetFunctionItemRevisionId
            (
                const char * functionItemId /** Function Revision Item id */
            );
            /**Returns  the option set 
             <br>  Created in NX7.5.1.  <br>  
             <br> License requirements : nx_mcd_core ("MECHATRONICS CONCEPT DESIGNER") */
            public: NXString FunctionOptionSet
            (
            );
            /**Sets  the option set 
             <br>  Created in NX7.5.1.  <br>  
             <br> License requirements : nx_mcd_core ("MECHATRONICS CONCEPT DESIGNER") */
            public: void SetFunctionOptionSet
            (
                const NXString & functionOptionSet /** Function Option Set */
            );
            /**Sets  the option set 
             <br>  Created in NX7.5.1.  <br>  
             <br> License requirements : nx_mcd_core ("MECHATRONICS CONCEPT DESIGNER") */
            void SetFunctionOptionSet
            (
                const char * functionOptionSet /** Function Option Set */
            );
            /**Returns  the plmxml file name 
             <br>  Created in NX7.5.1.  <br>  
             <br> License requirements : nx_mcd_core ("MECHATRONICS CONCEPT DESIGNER") */
            public: NXString PlmxmlFileName
            (
            );
            /**Sets  the plmxml file name 
             <br>  Created in NX7.5.1.  <br>  
             <br> License requirements : nx_mcd_core ("MECHATRONICS CONCEPT DESIGNER") */
            public: void SetPlmxmlFileName
            (
                const NXString & plmxmlFileName /** PLMXML file name */
            );
            /**Sets  the plmxml file name 
             <br>  Created in NX7.5.1.  <br>  
             <br> License requirements : nx_mcd_core ("MECHATRONICS CONCEPT DESIGNER") */
            void SetPlmxmlFileName
            (
                const char * plmxmlFileName /** PLMXML file name */
            );
            /**Returns  the object information builder, used to specify the information of function object. 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Mechatronics::ObjectInformationBuilder * ObjectInformation
            (
            );
            /**Returns  the navigator object which holds the teamcenter attributes. 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::NXObject * NavigatorObject
            (
            );
            /**Returns  the modified status. 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : nx_mcd_core ("MECHATRONICS CONCEPT DESIGNER") */
            public: bool Modified
            (
            );
            /**Sets  the modified status. 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : nx_mcd_core ("MECHATRONICS CONCEPT DESIGNER") */
            public: void SetModified
            (
                bool modified /** modified */ 
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
