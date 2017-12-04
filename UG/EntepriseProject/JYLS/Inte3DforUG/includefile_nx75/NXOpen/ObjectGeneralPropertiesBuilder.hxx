#ifndef NXOpen_OBJECTGENERALPROPERTIESBUILDER_HXX_INCLUDED
#define NXOpen_OBJECTGENERALPROPERTIESBUILDER_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     ObjectGeneralPropertiesBuilder.ja
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
#include <NXOpen/ObjectGeneralPropertiesBuilder.hxx>
#include <NXOpen/SelectObjectList.hxx>
#include <NXOpen/ugmath.hxx>
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
    class ObjectGeneralPropertiesBuilder;
    class Builder;
    class SelectNXObjectList;
    class _ObjectGeneralPropertiesBuilderBuilder;
    class ObjectGeneralPropertiesBuilderImpl;
    /**
        Represents an @link ObjectGeneralPropertiesBuilder ObjectGeneralPropertiesBuilder@endlink  to be used for modifying
        the names and properties of objects.  
         <br> To create a new instance of this class, use @link PropertiesManager::CreateObjectGeneralPropertiesBuilder PropertiesManager::CreateObjectGeneralPropertiesBuilder@endlink  <br> 
    Default values.
    <table border="1"> 
     
    <tr><th> 
    Property</th>  <th> 
    Value</th> </tr>
    <tr><td> 
     
    Active </td> <td> 
     
    0 </td> </tr> 

    <tr><td> 
     
    AddComponents </td> <td> 
     
    0 </td> </tr> 

    <tr><td> 
     
    AddIndex </td> <td> 
     
    0 </td> </tr> 

    <tr><td> 
     
    ApplyToComponent </td> <td> 
     
    0 </td> </tr> 

    <tr><td> 
     
    Index </td> <td> 
     
    0 </td> </tr> 

    <tr><td> 
     
    TopLevel </td> <td> 
     
    0 </td> </tr> 

    <tr><td> 
     
    UniqueMembership </td> <td> 
     
    0 </td> </tr> 

    </table>  

     <br>  Created in NX8.0.0.  <br>  
    */
    class NXOPENCPPEXPORT  ObjectGeneralPropertiesBuilder : public Builder
    {
        private: ObjectGeneralPropertiesBuilderImpl * m_objectgeneralpropertiesbuilder_impl;
        private: friend class  _ObjectGeneralPropertiesBuilderBuilder;
        protected: ObjectGeneralPropertiesBuilder();
        public: ~ObjectGeneralPropertiesBuilder();
        /**Returns  the selected object(s) list.  
         <br>  Created in NX8.0.0.  <br>  
         <br> License requirements : None */
        public: NXOpen::SelectNXObjectList * SelectedObjects
        (
        );
        /**Returns  the name.  The new name that will be applied to the selected objects. 
         <br>  Created in NX8.0.0.  <br>  
         <br> License requirements : None */
        public: NXString Name
        (
        );
        /**Sets  the name.  The new name that will be applied to the selected objects. 
         <br>  Created in NX8.0.0.  <br>  
         <br> License requirements : None */
        public: void SetName
        (
            const NXString & name /** name */ 
        );
        /**Sets  the name.  The new name that will be applied to the selected objects. 
         <br>  Created in NX8.0.0.  <br>  
         <br> License requirements : None */
        void SetName
        (
            const char * name /** name */ 
        );
        /** Delete the name of each selected object. 
         <br>  Created in NX8.0.0.  <br>  
         <br> License requirements : None */
        public: void Delete
        (
        );
        /**Returns  the add index.  An index will be appended to the name if this is set to true. 
         <br>  Created in NX8.0.0.  <br>  
         <br> License requirements : None */
        public: bool AddIndex
        (
        );
        /**Sets  the add index.  An index will be appended to the name if this is set to true. 
         <br>  Created in NX8.0.0.  <br>  
         <br> License requirements : None */
        public: void SetAddIndex
        (
            bool addIndex /** addindex */ 
        );
        /**Returns  the index.  The index to be appended to the name if "Add Index" is set to true. 
         <br>  Created in NX8.0.0.  <br>  
         <br> License requirements : None */
        public: int Index
        (
        );
        /**Sets  the index.  The index to be appended to the name if "Add Index" is set to true. 
         <br>  Created in NX8.0.0.  <br>  
         <br> License requirements : None */
        public: void SetIndex
        (
            int index /** index */ 
        );
        /**Returns  the top level.  This object will be displayed at the top level of the part 
                navigator if this is set to true.  Only applies if the object selected is a
                group or a reference set. 
         <br>  Created in NX8.0.0.  <br>  
         <br> License requirements : None */
        public: bool TopLevel
        (
        );
        /**Sets  the top level.  This object will be displayed at the top level of the part 
                navigator if this is set to true.  Only applies if the object selected is a
                group or a reference set. 
         <br>  Created in NX8.0.0.  <br>  
         <br> License requirements : None */
        public: void SetTopLevel
        (
            bool topLevel /** toplevel */ 
        );
        /**Returns  the active.  This will activate or deactivate a group. 
         <br>  Created in NX8.0.0.  <br>  
         <br> License requirements : None */
        public: bool Active
        (
        );
        /**Sets  the active.  This will activate or deactivate a group. 
         <br>  Created in NX8.0.0.  <br>  
         <br> License requirements : None */
        public: void SetActive
        (
            bool active /** active */ 
        );
        /**Returns  the unique membership.  This field manages the unique membership property on a group. 
         <br>  Created in NX8.0.0.  <br>  
         <br> License requirements : None */
        public: bool UniqueMembership
        (
        );
        /**Sets  the unique membership.  This field manages the unique membership property on a group. 
         <br>  Created in NX8.0.0.  <br>  
         <br> License requirements : None */
        public: void SetUniqueMembership
        (
            bool uniqueMembership /** uniquemembership */ 
        );
        /**Returns  the group display properties.  This field manages the display properties on a group. 
         <br>  Created in NX8.0.0.  <br>  
         <br> License requirements : None */
        public: bool GroupDisplayProperties
        (
        );
        /**Sets  the group display properties.  This field manages the display properties on a group. 
         <br>  Created in NX8.0.0.  <br>  
         <br> License requirements : None */
        public: void SetGroupDisplayProperties
        (
            bool groupDisplayProperties /** groupdisplayproperties */ 
        );
        /**Returns  the add components.  This flag determines whether new components will be added automatically. 
         <br>  Created in NX8.0.0.  <br>  
         <br> License requirements : None */
        public: bool AddComponents
        (
        );
        /**Sets  the add components.  This flag determines whether new components will be added automatically. 
         <br>  Created in NX8.0.0.  <br>  
         <br> License requirements : None */
        public: void SetAddComponents
        (
            bool addComponents /** addcomponents */ 
        );
        /**Returns  the apply to component.  The name will be applied to the component if this is true. 
         <br>  Created in NX8.0.0.  <br>  
         <br> License requirements : None */
        public: bool ApplyToComponent
        (
        );
        /**Sets  the apply to component.  The name will be applied to the component if this is true. 
         <br>  Created in NX8.0.0.  <br>  
         <br> License requirements : None */
        public: void SetApplyToComponent
        (
            bool applyToComponent /** applytocomponent */ 
        );
        /**Returns  the name location specified.  This states whether the name location will be changed. 
         <br>  Created in NX8.0.0.  <br>  
         <br> License requirements : None */
        public: bool NameLocationSpecified
        (
        );
        /**Sets  the name location specified.  This states whether the name location will be changed. 
         <br>  Created in NX8.0.0.  <br>  
         <br> License requirements : None */
        public: void SetNameLocationSpecified
        (
            bool nameLocationSpecified /** namelocationspecified */ 
        );
        /** Gets the name location  @return  
         <br>  Created in NX8.0.0.  <br>  
         <br> License requirements : None */
        public: NXOpen::Point3d GetNameLocation
        (
        );
        /** Sets the name location.  If name location specified is true, this value will be used
                    to change the name location of the general object. 
         <br>  Created in NX8.0.0.  <br>  
         <br> License requirements : None */
        public: void SetNameLocation
        (
            const NXOpen::Point3d & nameLocation /** the name location */
        );
        /** Apply name to the instance of the component.  
                    All occurrences of the instance will inherit this name. 
         <br>  Created in NX8.0.0.  <br>  
         <br> License requirements : None */
        public: void ApplyToAllOccurrences
        (
        );
    };
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
