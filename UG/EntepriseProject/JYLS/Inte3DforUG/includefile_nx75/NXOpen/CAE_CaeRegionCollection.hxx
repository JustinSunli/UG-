#ifndef NXOpen_CAE_CAEREGIONCOLLECTION_HXX_INCLUDED
#define NXOpen_CAE_CAEREGIONCOLLECTION_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     CAE_CaeRegionCollection.ja
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
#include <NXOpen/CAE_PropertyTable.hxx>
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
        class CaeRegionCollection;
    }
    namespace CAE
    {
        class SimSimulation;
    }
    namespace CAE
    {
        class CaeRegion;
    }
    namespace CAE
    {
        class CaeRegionCollectionImpl;
        /**  @brief  Provides methods for managing  @link CAE::CaeRegion CAE::CaeRegion@endlink  in a sim part  

           <br> To obtain an instance of this class, refer to @link CAE::SimSimulation CAE::SimSimulation@endlink  <br> 
         <br>  Created in NX7.0.0.  <br>  
        */
        class NXOPENCPP_CAEEXPORT  CaeRegionCollection : public TaggedObjectCollection
        {
            private: CaeRegionCollectionImpl * m_caeregioncollection_impl;
            private: NXOpen::CAE::SimSimulation* m_owner;
            /// \cond NX_NO_DOC 
            public: explicit CaeRegionCollection(NXOpen::CAE::SimSimulation *owner);


            /// \endcond 
            public: 
            /**Returns the tag of this object.  */
            tag_t Tag() const; 
            public: ~CaeRegionCollection();
            /** Iterator for accessing the contents of the collection. */
            //lint -sem(NXOpen::CAE::CaeRegionCollection::iterator::copy,initializer)
            class iterator
            {
            public:
                /** Value type associated with iterator*/ 

                typedef CAE::CaeRegion * value_type;
                /** Default constructor */
                iterator() : m_context(NULL), m_current(NULL_TAG)
                {
                } //lint !e1401 m_state is not initialized
                /// \cond NX_NO_DOC
                explicit iterator(NXOpen::CAE::CaeRegionCollection *context) : m_context(context), m_current(NULL_TAG)
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
                NXOpen::CAE::CaeRegionCollection *m_context;
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
            /** Creates a @link CAE::CaeRegion CAE::CaeRegion@endlink   @return  Region object created 
             <br>  Created in NX7.0.0.  <br>  
             <br> License requirements : nx_masterfem ("Finite Element Modeling") OR nx_design_sim ("NX Design Simulation") */
            public: NXOpen::CAE::CaeRegion * CreateCaeRegion
            (
                const NXString & descriptorName /** Name of the region descriptor   <br>  NOTE: The full Unicode character set is not supported for this parameter.  <br> */,
                const NXString & name /** Name of the region    <br>  NOTE: The full Unicode character set is not supported for this parameter.  <br> */,
                int label /** Label of the region, input 0 to get next available label */
            );
            /** Creates a @link CAE::CaeRegion CAE::CaeRegion@endlink   @return  Region object created 
             <br>  Created in NX7.0.0.  <br>  
             <br> License requirements : nx_masterfem ("Finite Element Modeling") OR nx_design_sim ("NX Design Simulation") */
            NXOpen::CAE::CaeRegion * CreateCaeRegion
            (
                const char * descriptorName /** Name of the region descriptor   <br>  NOTE: The full Unicode character set is not supported for this parameter.  <br> */,
                const char * name /** Name of the region    <br>  NOTE: The full Unicode character set is not supported for this parameter.  <br> */,
                int label /** Label of the region, input 0 to get next available label */
            );
            /** Copies a @link CAE::CaeRegion CAE::CaeRegion@endlink   @return  newly created region 
             <br>  Created in NX7.0.0.  <br>  
             <br> License requirements : nx_masterfem ("Finite Element Modeling") OR nx_design_sim ("NX Design Simulation") */
            public: NXOpen::CAE::CaeRegion * Copy
            (
                NXOpen::CAE::CaeRegion * tSourceRegion /** source region to be copied */
            );
            /** Finds the @link CAE::CaeRegion CAE::CaeRegion@endlink  with the given identifier as recorded in a journal.
                    An exception will be thrown if no object can be found with the given journal identifier.  @return  Region found 
             <br>  Created in NX7.0.0.  <br>  
             <br> License requirements : nx_masterfem ("Finite Element Modeling") OR nx_design_sim ("NX Design Simulation") */
            public: NXOpen::CAE::CaeRegion * FindObject
            (
                const NXString & journalIdentifier /** Identifier to be found */
            );
            /** Finds the @link CAE::CaeRegion CAE::CaeRegion@endlink  with the given identifier as recorded in a journal.
                    An exception will be thrown if no object can be found with the given journal identifier.  @return  Region found 
             <br>  Created in NX7.0.0.  <br>  
             <br> License requirements : nx_masterfem ("Finite Element Modeling") OR nx_design_sim ("NX Design Simulation") */
            NXOpen::CAE::CaeRegion * FindObject
            (
                const char * journalIdentifier /** Identifier to be found */
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
