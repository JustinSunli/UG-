#ifndef NXOpen_ROUTING_TERMINALPORTCOLLECTION_HXX_INCLUDED
#define NXOpen_ROUTING_TERMINALPORTCOLLECTION_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     Routing_TerminalPortCollection.ja
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
#include <NXOpen/ugmath.hxx>
#include <NXOpen/libnxopencpp_routing_exports.hxx>

#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable:4996)
#endif
#ifdef __GNUC__
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

namespace NXOpen
{
    namespace Routing
    {
        class TerminalPortCollection;
    }
    namespace Routing
    {
        class RouteManager;
    }
    namespace Routing
    {
        class TerminalPort;
    }
    class Axis;
    class Point;
    namespace Routing
    {
        class MultiPort;
    }
    namespace Routing
    {
        class TerminalPortCollectionImpl;
        /**
                
                The collection of all @link Routing::TerminalPort Routing::TerminalPort@endlink s.  The
                @link Routing::TerminalPortCollection Routing::TerminalPortCollection@endlink  creates and enumerates
                @link Routing::TerminalPort Routing::TerminalPort@endlink .
                
             <br> To obtain an instance of this class, refer to @link Routing::RouteManager Routing::RouteManager@endlink  <br> 
         <br>  Created in NX4.0.0.  <br>  
        */
        class NXOPENCPP_ROUTINGEXPORT  TerminalPortCollection : public TaggedObjectCollection
        {
            private: TerminalPortCollectionImpl * m_terminalportcollection_impl;
            private: NXOpen::Routing::RouteManager* m_owner;
            /// \cond NX_NO_DOC 
            public: explicit TerminalPortCollection(NXOpen::Routing::RouteManager *owner);


            /// \endcond 
            public: 
            /**Returns the tag of this object.  */
            tag_t Tag() const; 
            public: ~TerminalPortCollection();
            /** Iterator for accessing the contents of the collection. */
            //lint -sem(NXOpen::Routing::TerminalPortCollection::iterator::copy,initializer)
            class iterator
            {
            public:
                /** Value type associated with iterator*/ 

                typedef Routing::TerminalPort * value_type;
                /** Default constructor */
                iterator() : m_context(NULL), m_current(NULL_TAG)
                {
                } //lint !e1401 m_state is not initialized
                /// \cond NX_NO_DOC
                explicit iterator(NXOpen::Routing::TerminalPortCollection *context) : m_context(context), m_current(NULL_TAG)
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
                NXOPENCPP_ROUTINGEXPORT  value_type operator * ();
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
                NXOPENCPP_ROUTINGEXPORT  void next();
                NXOpen::Routing::TerminalPortCollection *m_context;
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
            /**
                       Creates a @link Routing::TerminalPort Routing::TerminalPort@endlink  with no
                       rotation vector at an absolute location.
                     @return  newly created @link Routing::TerminalPort Routing::TerminalPort@endlink 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : routing_harness ("Routing Harness") */
            public: NXOpen::Routing::TerminalPort * CreateTerminalPort
            (
                const NXOpen::Point3d & origin /** Origin of the @link Routing::TerminalPort Routing::TerminalPort@endlink  */,
                const NXOpen::Vector3d & alignmentVector /** Alignment vector of the @link Routing::TerminalPort Routing::TerminalPort@endlink  */,
                NXOpen::Routing::MultiPort * multiPort /** Parent @link Routing::MultiPort Routing::MultiPort@endlink  of this @link Routing::TerminalPort Routing::TerminalPort@endlink  */,
                const NXString & pinIdentifier /** Pin Identifier of the @link Routing::TerminalPort Routing::TerminalPort@endlink   <br>  NOTE: The full Unicode character set is not supported for this parameter.  <br> */
            );
            /**
                       Creates a @link Routing::TerminalPort Routing::TerminalPort@endlink  with no
                       rotation vector at an absolute location.
                     @return  newly created @link Routing::TerminalPort Routing::TerminalPort@endlink 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : routing_harness ("Routing Harness") */
            NXOpen::Routing::TerminalPort * CreateTerminalPort
            (
                const NXOpen::Point3d & origin /** Origin of the @link Routing::TerminalPort Routing::TerminalPort@endlink  */,
                const NXOpen::Vector3d & alignmentVector /** Alignment vector of the @link Routing::TerminalPort Routing::TerminalPort@endlink  */,
                NXOpen::Routing::MultiPort * multiPort /** Parent @link Routing::MultiPort Routing::MultiPort@endlink  of this @link Routing::TerminalPort Routing::TerminalPort@endlink  */,
                const char * pinIdentifier /** Pin Identifier of the @link Routing::TerminalPort Routing::TerminalPort@endlink   <br>  NOTE: The full Unicode character set is not supported for this parameter.  <br> */
            );
            /** Creates a @link Routing::TerminalPort Routing::TerminalPort@endlink  with no
                        rotation vector at an existing point.  Default allows multiple
                        connections to this port.
                     @return  newly created @link Routing::TerminalPort Routing::TerminalPort@endlink  
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : routing_harness ("Routing Harness") */
            public: NXOpen::Routing::TerminalPort * CreateTerminalPort
            (
                const NXOpen::Point3d & origin /** Origin of the @link Routing::TerminalPort Routing::TerminalPort@endlink  */,
                const NXOpen::Vector3d & alignmentVector /** Alignment vector of the @link Routing::TerminalPort Routing::TerminalPort@endlink */,
                NXOpen::Point * point /** Point from which this @link Routing::TerminalPort Routing::TerminalPort@endlink  is derived */,
                NXOpen::Routing::MultiPort * multiPort /** Parent @link Routing::MultiPort Routing::MultiPort@endlink  of this * @link Routing::TerminalPort Routing::TerminalPort@endlink  */,
                const NXString & pinIdentifier /** Pin Identifier of the @link Routing::TerminalPort Routing::TerminalPort@endlink    <br>  NOTE: The full Unicode character set is not supported for this parameter.  <br> */
            );
            /** Creates a @link Routing::TerminalPort Routing::TerminalPort@endlink  with no
                        rotation vector at an existing point.  Default allows multiple
                        connections to this port.
                     @return  newly created @link Routing::TerminalPort Routing::TerminalPort@endlink  
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : routing_harness ("Routing Harness") */
            NXOpen::Routing::TerminalPort * CreateTerminalPort
            (
                const NXOpen::Point3d & origin /** Origin of the @link Routing::TerminalPort Routing::TerminalPort@endlink  */,
                const NXOpen::Vector3d & alignmentVector /** Alignment vector of the @link Routing::TerminalPort Routing::TerminalPort@endlink */,
                NXOpen::Point * point /** Point from which this @link Routing::TerminalPort Routing::TerminalPort@endlink  is derived */,
                NXOpen::Routing::MultiPort * multiPort /** Parent @link Routing::MultiPort Routing::MultiPort@endlink  of this * @link Routing::TerminalPort Routing::TerminalPort@endlink  */,
                const char * pinIdentifier /** Pin Identifier of the @link Routing::TerminalPort Routing::TerminalPort@endlink    <br>  NOTE: The full Unicode character set is not supported for this parameter.  <br> */
            );
            /**
                        Creates a @link Routing::TerminalPort Routing::TerminalPort@endlink  with no rotation vector on an
                        axis.  Default allows multiple connections to this port.
                     @return  newly created @link Routing::TerminalPort Routing::TerminalPort@endlink  
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : routing_harness ("Routing Harness") */
            public: NXOpen::Routing::TerminalPort * CreateTerminalPort
            (
                const NXOpen::Point3d & origin /** Origin of the @link Routing::TerminalPort Routing::TerminalPort@endlink  */,
                const NXOpen::Vector3d & alignmentVector /** Alignment vector of the @link Routing::TerminalPort Routing::TerminalPort@endlink */,
                NXOpen::Axis * derivationObject /** @link Routing::TerminalPort Routing::TerminalPort@endlink  derived from this axis */,
                NXOpen::Routing::MultiPort * multiPort /** Parent @link Routing::MultiPort Routing::MultiPort@endlink  of this @link Routing::TerminalPort Routing::TerminalPort@endlink  */,
                const NXString & pinIdentifier /** Pin Identifier of the @link Routing::TerminalPort Routing::TerminalPort@endlink    <br>  NOTE: The full Unicode character set is not supported for this parameter.  <br> */
            );
            /**
                        Creates a @link Routing::TerminalPort Routing::TerminalPort@endlink  with no rotation vector on an
                        axis.  Default allows multiple connections to this port.
                     @return  newly created @link Routing::TerminalPort Routing::TerminalPort@endlink  
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : routing_harness ("Routing Harness") */
            NXOpen::Routing::TerminalPort * CreateTerminalPort
            (
                const NXOpen::Point3d & origin /** Origin of the @link Routing::TerminalPort Routing::TerminalPort@endlink  */,
                const NXOpen::Vector3d & alignmentVector /** Alignment vector of the @link Routing::TerminalPort Routing::TerminalPort@endlink */,
                NXOpen::Axis * derivationObject /** @link Routing::TerminalPort Routing::TerminalPort@endlink  derived from this axis */,
                NXOpen::Routing::MultiPort * multiPort /** Parent @link Routing::MultiPort Routing::MultiPort@endlink  of this @link Routing::TerminalPort Routing::TerminalPort@endlink  */,
                const char * pinIdentifier /** Pin Identifier of the @link Routing::TerminalPort Routing::TerminalPort@endlink    <br>  NOTE: The full Unicode character set is not supported for this parameter.  <br> */
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