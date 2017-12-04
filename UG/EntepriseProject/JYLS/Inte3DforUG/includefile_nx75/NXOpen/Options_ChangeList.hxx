#ifndef NXOpen_OPTIONS_CHANGELIST_HXX_INCLUDED
#define NXOpen_OPTIONS_CHANGELIST_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     Options_ChangeList.ja
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
#include <NXOpen/TransientObject.hxx>
#include <NXOpen/libnxopencpp_options_exports.hxx>

#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable:4996)
#endif
#ifdef __GNUC__
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

namespace NXOpen
{
    namespace Options
    {
        class ChangeList;
    }
    namespace Options
    {
        /** Specifies level type. */
        enum LevelType
        {
            LevelTypeShipped/** Shipped level */,
            LevelTypeSite/** Site level */,
            LevelTypeGroup/** Group level */,
            LevelTypeUser/** User level */
        };

        /** Specifies default lock status for the options level. */
        enum LevelLockedByDefault
        {
            LevelLockedByDefaultFalse/** Unlocked */,
            LevelLockedByDefaultTrue/** Locked */
        };

    }
    namespace Options
    {
        class ChangeListImpl;
        /** 
        Records changes to option values at the specified level. 

         <br> 
        A ChangeList is created with a given level, and all of the edit operations apply to that
        level.  Each method for setting a value throws an error if the option value is locked at a
        higher level, or the specified value is not valid. 
         <br> 
         <br> 
        All methods in this class use an option
        name as a unique identifier for accessing individual options and throw an error if an
        option with the given name is not found. All existing option names and their allowed
        values are described in the Online Documentation. 
         <br> 
         <br> Use @link Options::OptionsManager::NewOptionsChangeList Options::OptionsManager::NewOptionsChangeList@endlink  to create a new instance of this class <br> 
         <br>  Created in NX4.0.0.  <br>  
        */
        class NXOPENCPP_OPTIONSEXPORT  ChangeList : public TransientObject
        {
            private: ChangeListImpl * m_changelist_impl;
            /// \cond NX_NO_DOC 
            public: explicit ChangeList(void *ptr);
            /// \endcond 
            /**Returns  the current level of options  
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Options::LevelType CurrentLevel
            (
            );
            /**Returns  the default lock status for the options level. Valid only for @link  Options::LevelTypeSite   Options::LevelTypeSite @endlink  and @link  Options::LevelTypeGroup   Options::LevelTypeGroup @endlink .  
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Options::LevelLockedByDefault LockedByDefault
            (
            );
            /** Sets the value of an @link  Options::OptionTypeInt   Options::OptionTypeInt @endlink  option. 
                If the option is of type @link  Options::OptionTypeReal   Options::OptionTypeReal @endlink  then the value parameter is converted to double.
                Throws an error if the option type is not @link  Options::OptionTypeInt   Options::OptionTypeInt @endlink  or @link  Options::OptionTypeReal   Options::OptionTypeReal @endlink . 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : None */
            public: void SetValue
            (
                const NXString & name /** Option name.   <br>  NOTE: The full Unicode character set is not supported for this parameter.  <br> */,
                int value /** Option value. */
            );
            /** Sets the value of an @link  Options::OptionTypeInt   Options::OptionTypeInt @endlink  option. 
                If the option is of type @link  Options::OptionTypeReal   Options::OptionTypeReal @endlink  then the value parameter is converted to double.
                Throws an error if the option type is not @link  Options::OptionTypeInt   Options::OptionTypeInt @endlink  or @link  Options::OptionTypeReal   Options::OptionTypeReal @endlink . 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : None */
            void SetValue
            (
                const char * name /** Option name.   <br>  NOTE: The full Unicode character set is not supported for this parameter.  <br> */,
                int value /** Option value. */
            );
            /** Sets the value of a @link  Options::OptionTypeReal   Options::OptionTypeReal @endlink  option.
                    Throws an error if the option type is not @link  Options::OptionTypeReal   Options::OptionTypeReal @endlink . 
                
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : None */
            public: void SetValue
            (
                const NXString & name /** Option name.   <br>  NOTE: The full Unicode character set is not supported for this parameter.  <br> */,
                double value /** Option value. */
            );
            /** Sets the value of a @link  Options::OptionTypeReal   Options::OptionTypeReal @endlink  option.
                    Throws an error if the option type is not @link  Options::OptionTypeReal   Options::OptionTypeReal @endlink . 
                
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : None */
            void SetValue
            (
                const char * name /** Option name.   <br>  NOTE: The full Unicode character set is not supported for this parameter.  <br> */,
                double value /** Option value. */
            );
            /** Sets the value of a @link  Options::OptionTypeString   Options::OptionTypeString @endlink  option. 
                    Throws an error if the option type is not @link  Options::OptionTypeString   Options::OptionTypeString @endlink . 
                
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : None */
            public: void SetValue
            (
                const NXString & name /** Option name.   <br>  NOTE: The full Unicode character set is not supported for this parameter.  <br> */,
                const NXString & value /** Option value   <br>  NOTE: The full Unicode character set is not supported for this parameter.  <br> */
            );
            /** Sets the value of a @link  Options::OptionTypeString   Options::OptionTypeString @endlink  option. 
                    Throws an error if the option type is not @link  Options::OptionTypeString   Options::OptionTypeString @endlink . 
                
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : None */
            void SetValue
            (
                const char * name /** Option name.   <br>  NOTE: The full Unicode character set is not supported for this parameter.  <br> */,
                const char * value /** Option value   <br>  NOTE: The full Unicode character set is not supported for this parameter.  <br> */
            );
            /** Sets the value of a @link  Options::OptionTypeUtf8string   Options::OptionTypeUtf8string @endlink  option. 
                    Throws an error if the option type is not @link  Options::OptionTypeUtf8string   Options::OptionTypeUtf8string @endlink . 
                
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: void SetUtf8Value
            (
                const NXString & name /** Option name.   <br>  NOTE: The full Unicode character set is not supported for this parameter.  <br> */,
                const NXString & value /** Option value */
            );
            /** Sets the value of a @link  Options::OptionTypeUtf8string   Options::OptionTypeUtf8string @endlink  option. 
                    Throws an error if the option type is not @link  Options::OptionTypeUtf8string   Options::OptionTypeUtf8string @endlink . 
                
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            void SetUtf8Value
            (
                const char * name /** Option name.   <br>  NOTE: The full Unicode character set is not supported for this parameter.  <br> */,
                const char * value /** Option value */
            );
            /** Sets the value of a @link  Options::OptionTypeUtf8stringList   Options::OptionTypeUtf8stringList @endlink  option.
                    Throws an error if the option type is not @link  Options::OptionTypeUtf8stringList   Options::OptionTypeUtf8stringList @endlink .     
                 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: void SetUtf8Value
            (
                const NXString & name /** Option name.   <br>  NOTE: The full Unicode character set is not supported for this parameter.  <br> */,
                std::vector<NXString> & value /** Option value */
            );
            /** Sets the value of a @link  Options::OptionTypeUtf8stringList   Options::OptionTypeUtf8stringList @endlink  option.
                    Throws an error if the option type is not @link  Options::OptionTypeUtf8stringList   Options::OptionTypeUtf8stringList @endlink .     
                 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            void SetUtf8Value
            (
                const char * name /** Option name.   <br>  NOTE: The full Unicode character set is not supported for this parameter.  <br> */,
                std::vector<NXString> & value /** Option value */
            );
            /** Sets the value of a @link  Options::OptionTypeStringList   Options::OptionTypeStringList @endlink  option.
                    Throws an error if the option type is not @link  Options::OptionTypeStringList   Options::OptionTypeStringList @endlink .     
                 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : None */
            public: void SetValue
            (
                const NXString & name /** Option name.   <br>  NOTE: The full Unicode character set is not supported for this parameter.  <br> */,
                std::vector<NXString> & value /**    <br>  NOTE: The full Unicode character set is not supported for this parameter.  <br> */
            );
            /** Sets the value of a @link  Options::OptionTypeStringList   Options::OptionTypeStringList @endlink  option.
                    Throws an error if the option type is not @link  Options::OptionTypeStringList   Options::OptionTypeStringList @endlink .     
                 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : None */
            void SetValue
            (
                const char * name /** Option name.   <br>  NOTE: The full Unicode character set is not supported for this parameter.  <br> */,
                std::vector<NXString> & value /**    <br>  NOTE: The full Unicode character set is not supported for this parameter.  <br> */
            );
            /** Sets the value of a @link  Options::OptionTypeReorderSelList   Options::OptionTypeReorderSelList @endlink  option for which the list entries can be reordered.
                    Throws an error if the option type is not @link  Options::OptionTypeReorderSelList   Options::OptionTypeReorderSelList @endlink .     
                 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: void SetValueOrder
            (
                const NXString & name /** Option name.   <br>  NOTE: The full Unicode character set is not supported for this parameter.  <br> */,
                std::vector<NXString> & value /**    <br>  NOTE: The full Unicode character set is not supported for this parameter.  <br> */
            );
            /** Sets the value of a @link  Options::OptionTypeReorderSelList   Options::OptionTypeReorderSelList @endlink  option for which the list entries can be reordered.
                    Throws an error if the option type is not @link  Options::OptionTypeReorderSelList   Options::OptionTypeReorderSelList @endlink .     
                 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            void SetValueOrder
            (
                const char * name /** Option name.   <br>  NOTE: The full Unicode character set is not supported for this parameter.  <br> */,
                std::vector<NXString> & value /**    <br>  NOTE: The full Unicode character set is not supported for this parameter.  <br> */
            );
            /** Sets the value of a @link  Options::OptionTypeReorderSelList   Options::OptionTypeReorderSelList @endlink  option for which the list entries can be reordered as well as selected.
                    Throws an error if the option type is not @link  Options::OptionTypeReorderSelList   Options::OptionTypeReorderSelList @endlink .
                 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: void SetValueSelection
            (
                const NXString & name /** Option name.   <br>  NOTE: The full Unicode character set is not supported for this parameter.  <br> */,
                const std::vector<bool> & selection /** the selection bit */,
                std::vector<NXString> & value /**    <br>  NOTE: The full Unicode character set is not supported for this parameter.  <br> */
            );
            /** Sets the value of a @link  Options::OptionTypeReorderSelList   Options::OptionTypeReorderSelList @endlink  option for which the list entries can be reordered as well as selected.
                    Throws an error if the option type is not @link  Options::OptionTypeReorderSelList   Options::OptionTypeReorderSelList @endlink .
                 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            void SetValueSelection
            (
                const char * name /** Option name.   <br>  NOTE: The full Unicode character set is not supported for this parameter.  <br> */,
                const std::vector<bool> & selection /** the selection bit */,
                std::vector<NXString> & value /**    <br>  NOTE: The full Unicode character set is not supported for this parameter.  <br> */
            );
            /** Sets the value of a @link  Options::OptionTypeLogical   Options::OptionTypeLogical @endlink  option.
                    Throws an error if the option type is not @link  Options::OptionTypeLogical   Options::OptionTypeLogical @endlink .         
                 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : None */
            public: void SetValue
            (
                const NXString & name /** Option name.   <br>  NOTE: The full Unicode character set is not supported for this parameter.  <br> */,
                bool value /** Option value */
            );
            /** Sets the value of a @link  Options::OptionTypeLogical   Options::OptionTypeLogical @endlink  option.
                    Throws an error if the option type is not @link  Options::OptionTypeLogical   Options::OptionTypeLogical @endlink .         
                 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : None */
            void SetValue
            (
                const char * name /** Option name.   <br>  NOTE: The full Unicode character set is not supported for this parameter.  <br> */,
                bool value /** Option value */
            );
            /** Sets the user comment. Throws an error if the value does not exist at this level. 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : None */
            public: void SetUserComment
            (
                const NXString & name /** Option name.   <br>  NOTE: The full Unicode character set is not supported for this parameter.  <br> */,
                const NXString & comment /** User comment text. */
            );
            /** Sets the user comment. Throws an error if the value does not exist at this level. 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : None */
            void SetUserComment
            (
                const char * name /** Option name.   <br>  NOTE: The full Unicode character set is not supported for this parameter.  <br> */,
                const char * comment /** User comment text. */
            );
            /** Delete an option value. Throws an error if the value does not exist at this level. 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : None */
            public: void DeleteValue
            (
                const NXString & name /** Option name.   <br>  NOTE: The full Unicode character set is not supported for this parameter.  <br> */
            );
            /** Delete an option value. Throws an error if the value does not exist at this level. 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : None */
            void DeleteValue
            (
                const char * name /** Option name.   <br>  NOTE: The full Unicode character set is not supported for this parameter.  <br> */
            );
            /** Lock option value.  
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : None */
            public: void LockValue
            (
                const NXString & name /** Option name   <br>  NOTE: The full Unicode character set is not supported for this parameter.  <br> */
            );
            /** Lock option value.  
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : None */
            void LockValue
            (
                const char * name /** Option name   <br>  NOTE: The full Unicode character set is not supported for this parameter.  <br> */
            );
            /** Unlock option value. 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : None */
            public: void UnlockValue
            (
                const NXString & name /** Option name   <br>  NOTE: The full Unicode character set is not supported for this parameter.  <br> */
            );
            /** Unlock option value. 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : None */
            void UnlockValue
            (
                const char * name /** Option name   <br>  NOTE: The full Unicode character set is not supported for this parameter.  <br> */
            );
            /** Saves options values at the current level. 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : None */
            public: void Save
            (
            );
            /** 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : None */
            public: virtual ~ChangeList();
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
