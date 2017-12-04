#ifndef NXOpen_CAM_CAMSESSION_HXX_INCLUDED
#define NXOpen_CAM_CAMSESSION_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     CAM_CAMSession.ja
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
#include <NXOpen/TaggedObject.hxx>
#include <NXOpen/libnxopencpp_cam_exports.hxx>

#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable:4996)
#endif
#ifdef __GNUC__
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

namespace NXOpen
{
    namespace CAM
    {
        class CAMSession;
    }
    class Session;
    namespace CAM
    {
        class Preferences;
    }
    namespace CAM
    {
        class CAMSessionImpl;
        /** Represents cam session  <br> To obtain an instance of this class, refer to @link Session Session@endlink  <br> 
         <br>  Created in NX4.0.0.  <br>  
        */
        class NXOPENCPP_CAMEXPORT  CAMSession
        {
            /** the template subtype class */
            public: enum ObjectSubtype
            {
                ObjectSubtypeSetup/** Setup */,
                ObjectSubtypeOperation/** Operations */,
                ObjectSubtypeProgram/** NC Program */,
                ObjectSubtypeTool/** Machine Tools and Cutters */,
                ObjectSubtypeMethod/** Machining Method*/,
                ObjectSubtypeGeometry/** Geometry */
            };

            private: CAMSessionImpl * m_camsession_impl;
            private: NXOpen::Session* m_owner;
            /// \cond NX_NO_DOC 
            public: explicit CAMSession(NXOpen::Session *owner);


            /// \endcond 
            public: 
            /**Returns the tag of this object.  */
            tag_t Tag() const; 
            public: ~CAMSession();
            /** Specify the configuration file of the current cam session
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : cam_base ("CAM BASE") */
            public: void SpecifyConfiguration
            (
                const NXString & configFile /** the name of the configuration file   <br>  NOTE: The full Unicode character set is not supported for this parameter.  <br> */
            );
            /** Specify the configuration file of the current cam session
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : cam_base ("CAM BASE") */
            void SpecifyConfiguration
            (
                const char * configFile /** the name of the configuration file   <br>  NOTE: The full Unicode character set is not supported for this parameter.  <br> */
            );
            /** Get the names of the available template types.  @return  the names of the template types 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : cam_base ("CAM BASE") */
            public: std::vector<NXString> GetTemplateTypes
            (
            );
            /** Get the names of the available template subypes for the specified template type. Only
                        those subtypes have the specified subtype class are returned. @return  the names of available subtypes 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : cam_base ("CAM BASE") */
            public: std::vector<NXString> GetTemplateSubtypes
            (
                const NXString & typeName /** the name of the template type  <br>  NOTE: The full Unicode character set is not supported for this parameter.  <br> */,
                NXOpen::CAM::CAMSession::ObjectSubtype subtypeClass /** the subtype class*/
            );
            /** Get the names of the available template subypes for the specified template type. Only
                        those subtypes have the specified subtype class are returned. @return  the names of available subtypes 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : cam_base ("CAM BASE") */
            std::vector<NXString> GetTemplateSubtypes
            (
                const char * typeName /** the name of the template type  <br>  NOTE: The full Unicode character set is not supported for this parameter.  <br> */,
                NXOpen::CAM::CAMSession::ObjectSubtype subtypeClass /** the subtype class*/
            );
            /** Create Cam Preferences builder.  @return  created cam preferences builder 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : cam_base ("CAM BASE") */
            public: NXOpen::CAM::Preferences * CreateCamPreferences
            (
            );
            /** Set MCS display 
             <br>  Created in NX8.0.1.  <br>  
             <br> License requirements : cam_base ("CAM BASE") */
            public: void SetMcsDisplay
            (
                bool displayMCS /** whether the MCS should be displayed */
            );
            /** Get MCS display  @return  whether the MCS should be displayed 
             <br>  Created in NX8.0.1.  <br>  
             <br> License requirements : None */
            public: bool GetMcsDisplay
            (
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
