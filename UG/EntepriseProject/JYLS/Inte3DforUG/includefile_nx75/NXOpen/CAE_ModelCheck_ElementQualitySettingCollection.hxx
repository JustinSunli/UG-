#ifndef NXOpen_CAE_MODELCHECK_ELEMENTQUALITYSETTINGCOLLECTION_HXX_INCLUDED
#define NXOpen_CAE_MODELCHECK_ELEMENTQUALITYSETTINGCOLLECTION_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     CAE_ModelCheck_ElementQualitySettingCollection.ja
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
#include <NXOpen/CAE_ModelCheck_ElementQualitySetting.hxx>
#include <NXOpen/TaggedObject.hxx>
#include <NXOpen/TaggedObjectCollection.hxx>
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
        namespace ModelCheck
        {
            class ElementQualitySettingCollection;
        }
    }
    namespace CAE
    {
        class CaePart;
    }
    namespace CAE
    {
        namespace ModelCheck
        {
            class ElementQualitySetting;
        }
    }
    namespace CAE
    {
        namespace ModelCheck
        {
            class ElementQualitySettingCollectionImpl;
            /**  @brief Represents a collection of @link CAE::ModelCheck::ElementQualitySetting CAE::ModelCheck::ElementQualitySetting@endlink  in a cae part.  

               <br> To obtain an instance of this class, refer to @link CAE::CaePart CAE::CaePart@endlink  <br> 
             <br>  Created in NX8.5.0.  <br>  
            */
            class NXOPENCPP_CAEEXPORT  ElementQualitySettingCollection : public TaggedObjectCollection
            {
                private: ElementQualitySettingCollectionImpl * m_elementqualitysettingcollection_impl;
                private: NXOpen::CAE::CaePart* m_owner;
                /// \cond NX_NO_DOC 
                public: explicit ElementQualitySettingCollection(NXOpen::CAE::CaePart *owner);


                /// \endcond 
                public: 
                /**Returns the tag of this object.  */
                tag_t Tag() const; 
                public: ~ElementQualitySettingCollection();
                /** Iterator for accessing the contents of the collection. */
                //lint -sem(NXOpen::CAE::ModelCheck::ElementQualitySettingCollection::iterator::copy,initializer)
                class iterator
                {
                public:
                    /** Value type associated with iterator*/ 

                    typedef CAE::ModelCheck::ElementQualitySetting * value_type;
                    /** Default constructor */
                    iterator() : m_context(NULL), m_current(NULL_TAG)
                    {
                    } //lint !e1401 m_state is not initialized
                    /// \cond NX_NO_DOC
                    explicit iterator(NXOpen::CAE::ModelCheck::ElementQualitySettingCollection *context) : m_context(context), m_current(NULL_TAG)
                    {
                    }//lint !e1401 m_state is not initialized
                    /// \endcond
                    /** Copy constructor */
                    iterator(const iterator &other): m_context(NULL), m_current(NULL_TAG)
                    {
                        copy(other);
                    }
                    /** Copy constructor */
                    iterator &operator =(const iterator &other)
                    {
                        if (&other != this)
                            copy(other);
                        return *this;
                    }
                    /** Tests if the iterator objects on the left side and the right side of the operator are equal. */
                    bool operator ==(const iterator &other) const
                    {
                        return m_current == other.m_current && m_context == other.m_context;
                    }
                    /** Tests if the iterator objects on the left side and the right side of the operator are not equal. */
                    bool operator !=(const iterator &other) const
                    {
                        return !operator == (other);
                    }
                    /** Return the element currently pointed to by the iterator. */
                    NXOPENCPP_CAEEXPORT  value_type operator * ();
                    /** Points the iterator to next element. */
                    iterator & operator ++()
                    {
                        next();
                        return *this;
                    }
                    /** Points the iterator to next element. */
                    iterator operator ++(int)
                    {
                        iterator tmp(*this);
                        ++*this;
                        return tmp;
                    }
                private:
                    void copy(const iterator &other)
                    {
                        m_context = other.m_context;
                        m_current = other.m_current;
                        for (int i = 0; i < sizeof(m_state)/sizeof(m_state[0]); i++)
                             m_state[i] = other.m_state[i];
                    }
                    NXOPENCPP_CAEEXPORT  void next();
                    NXOpen::CAE::ModelCheck::ElementQualitySettingCollection *m_context;
                    tag_t m_current;
                    unsigned int m_state[8];
                };
                /** Returns an iterator addressing the first element. */
                iterator begin();
                /** Returns an iterator addressing one past the last element. */
                iterator end()
                {
                    return iterator(this);
                }
                /** Retuns the @link CAE::ModelCheck::ElementQualitySetting CAE::ModelCheck::ElementQualitySetting@endlink  of a specified solver.  @return  
                 <br>  Created in NX8.5.0.  <br>  
                 <br> License requirements : None */
                public: NXOpen::CAE::ModelCheck::ElementQualitySetting * GetElementQualitySetting
                (
                    const NXString & solverName /**   <br>  NOTE: The full Unicode character set is not supported for this parameter.  <br> */
                );
                /** Retuns the @link CAE::ModelCheck::ElementQualitySetting CAE::ModelCheck::ElementQualitySetting@endlink  of a specified solver.  @return  
                 <br>  Created in NX8.5.0.  <br>  
                 <br> License requirements : None */
                NXOpen::CAE::ModelCheck::ElementQualitySetting * GetElementQualitySetting
                (
                    const char * solverName /**   <br>  NOTE: The full Unicode character set is not supported for this parameter.  <br> */
                );
                /** Finds the @link CAE::ModelCheck::ElementQualitySetting CAE::ModelCheck::ElementQualitySetting@endlink  with the given identifier as
                            recorded in a journal. An exception will be thrown if no object can be found with the given
                            journal identifier 
                         @return  
                 <br>  Created in NX8.5.0.  <br>  
                 <br> License requirements : None */
                public: NXOpen::CAE::ModelCheck::ElementQualitySetting * FindObject
                (
                    const NXString & journalIdentifier /** journalidentifier */ 
                );
                /** Finds the @link CAE::ModelCheck::ElementQualitySetting CAE::ModelCheck::ElementQualitySetting@endlink  with the given identifier as
                            recorded in a journal. An exception will be thrown if no object can be found with the given
                            journal identifier 
                         @return  
                 <br>  Created in NX8.5.0.  <br>  
                 <br> License requirements : None */
                NXOpen::CAE::ModelCheck::ElementQualitySetting * FindObject
                (
                    const char * journalIdentifier /** journalidentifier */ 
                );
            }; //lint !e1712 default constructor not defined for class  

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
