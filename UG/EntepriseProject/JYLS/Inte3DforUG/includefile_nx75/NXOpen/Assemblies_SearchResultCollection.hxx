#ifndef NXOpen_ASSEMBLIES_SEARCHRESULTCOLLECTION_HXX_INCLUDED
#define NXOpen_ASSEMBLIES_SEARCHRESULTCOLLECTION_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     Assemblies_SearchResultCollection.ja
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
#include <NXOpen/TaggedObjectCollection.hxx>
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
        class SearchResultCollection;
    }
    namespace Assemblies
    {
        class SubsetBuilder;
    }
    namespace Assemblies
    {
        class SearchResultElement;
    }
    namespace Assemblies
    {
        class SearchResultCollectionImpl;
        /**
                A collection of @link SearchResultElement SearchResultElement@endlink s.
             <br> To obtain an instance of this class, refer to @link Assemblies::SubsetBuilder Assemblies::SubsetBuilder@endlink  <br> 
         <br>  Created in NX8.5.0.  <br>  
        */
        class NXOPENCPP_ASSEMBLIESEXPORT  SearchResultCollection : public TaggedObjectCollection
        {
            private: SearchResultCollectionImpl * m_searchresultcollection_impl;
            private: NXOpen::Assemblies::SubsetBuilder* m_owner;
            /// \cond NX_NO_DOC 
            public: explicit SearchResultCollection(NXOpen::Assemblies::SubsetBuilder *owner);


            /// \endcond 
            public: 
            /**Returns the tag of this object.  */
            tag_t Tag() const; 
            public: ~SearchResultCollection();
            /** Iterator for accessing the contents of the collection. */
            //lint -sem(NXOpen::Assemblies::SearchResultCollection::iterator::copy,initializer)
            class iterator
            {
            public:
                /** Value type associated with iterator*/ 

                typedef Assemblies::SearchResultElement * value_type;
                /** Default constructor */
                iterator() : m_context(NULL), m_current(NULL_TAG)
                {
                } //lint !e1401 m_state is not initialized
                /// \cond NX_NO_DOC
                explicit iterator(NXOpen::Assemblies::SearchResultCollection *context) : m_context(context), m_current(NULL_TAG)
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
                NXOPENCPP_ASSEMBLIESEXPORT  value_type operator * ();
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
                NXOPENCPP_ASSEMBLIESEXPORT  void next();
                NXOpen::Assemblies::SearchResultCollection *m_context;
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
            /** Finds the @link SearchResultElement SearchResultElement@endlink  with the given identifier as recorded in a journal. 
                    An object may not return the same value as its JournalIdentifier in different versions of 
                    the software. However newer versions of the software should find the same object when 
                    FindObject is passed older versions of its journal identifier. In general, this method 
                    should not be used in handwritten code and exists to support record and playback of journals.
                
                    An exception will be thrown if no object can be found with the given journal identifier.  @return  Element found, or null if no such search result element exists.
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : nx_4gd_integration ("4th Generation Design") */
            public: NXOpen::Assemblies::SearchResultElement * FindObject
            (
                const NXString & journalIdentifier /** Name of the search result to be found */
            );
            /** Finds the @link SearchResultElement SearchResultElement@endlink  with the given identifier as recorded in a journal. 
                    An object may not return the same value as its JournalIdentifier in different versions of 
                    the software. However newer versions of the software should find the same object when 
                    FindObject is passed older versions of its journal identifier. In general, this method 
                    should not be used in handwritten code and exists to support record and playback of journals.
                
                    An exception will be thrown if no object can be found with the given journal identifier.  @return  Element found, or null if no such search result element exists.
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : nx_4gd_integration ("4th Generation Design") */
            NXOpen::Assemblies::SearchResultElement * FindObject
            (
                const char * journalIdentifier /** Name of the search result to be found */
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