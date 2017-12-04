#ifndef NXOpen_ANNOTATIONS_WELDCOLLECTION_HXX_INCLUDED
#define NXOpen_ANNOTATIONS_WELDCOLLECTION_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     Annotations_WeldCollection.ja
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
#include <NXOpen/Annotations_LeaderBundle.hxx>
#include <NXOpen/Annotations_LineWeldBuilder.hxx>
#include <NXOpen/Annotations_LineWeldData.hxx>
#include <NXOpen/Annotations_PmiData.hxx>
#include <NXOpen/Annotations_PmiLineWeldBuilder.hxx>
#include <NXOpen/TaggedObject.hxx>
#include <NXOpen/TaggedObjectCollection.hxx>
#include <NXOpen/ugmath.hxx>
#include <NXOpen/libnxopencpp_annotations_exports.hxx>

#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable:4996)
#endif
#ifdef __GNUC__
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

namespace NXOpen
{
    namespace Annotations
    {
        class WeldCollection;
    }
    namespace Annotations
    {
        class AnnotationManager;
    }
    namespace Annotations
    {
        class Weld;
    }
    namespace Annotations
    {
        class LeaderBundle;
    }
    namespace Annotations
    {
        class LineWeld;
    }
    namespace Annotations
    {
        class LineWeldBuilder;
    }
    namespace Annotations
    {
        class LineWeldData;
    }
    namespace Annotations
    {
        class PmiData;
    }
    namespace Annotations
    {
        class PmiLineWeld;
    }
    namespace Annotations
    {
        class PmiLineWeldBuilder;
    }
    class Xform;
    namespace Annotations
    {
        class WeldCollectionImpl;
        /** Represents a collection of @link Annotations::Weld Annotations::Weld@endlink  objects  <br> To obtain an instance of this class, refer to @link Annotations::AnnotationManager Annotations::AnnotationManager@endlink  <br> 
         <br>  Created in NX4.0.0.  <br>  
        */
        class NXOPENCPP_ANNOTATIONSEXPORT  WeldCollection : public TaggedObjectCollection
        {
            private: WeldCollectionImpl * m_weldcollection_impl;
            private: NXOpen::Annotations::AnnotationManager* m_owner;
            /// \cond NX_NO_DOC 
            public: explicit WeldCollection(NXOpen::Annotations::AnnotationManager *owner);


            /// \endcond 
            public: 
            /**Returns the tag of this object.  */
            tag_t Tag() const; 
            public: ~WeldCollection();
            /** Iterator for accessing the contents of the collection. */
            //lint -sem(NXOpen::Annotations::WeldCollection::iterator::copy,initializer)
            class iterator
            {
            public:
                /** Value type associated with iterator*/ 

                typedef Annotations::Weld * value_type;
                /** Default constructor */
                iterator() : m_context(NULL), m_current(NULL_TAG)
                {
                } //lint !e1401 m_state is not initialized
                /// \cond NX_NO_DOC
                explicit iterator(NXOpen::Annotations::WeldCollection *context) : m_context(context), m_current(NULL_TAG)
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
                NXOPENCPP_ANNOTATIONSEXPORT  value_type operator * ();
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
                NXOPENCPP_ANNOTATIONSEXPORT  void next();
                NXOpen::Annotations::WeldCollection *m_context;
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
            /** Creates new LineWeldData object.  @return  New LineWeldData 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Annotations::LineWeldData * NewLineWeldData
            (
            );
            /** Creates a line weld.  @return  New line weld 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : drafting ("DRAFTING") */
            public: NXOpen::Annotations::LineWeld * CreateLineWeld
            (
                NXOpen::Annotations::LineWeldData * lineWeldData /** line weld data */ ,
                const NXOpen::Point3d & origin /** Origin for the line weld */,
                NXOpen::Annotations::LeaderBundle * leader /** Specifies the leaders for the line weld */
            );
            /** Creates a PMI line weld.  @return  New PMI line weld 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : geometric_tol ("GDT") */
            public: NXOpen::Annotations::PmiLineWeld * CreatePmiLineWeld
            (
                NXOpen::Annotations::LineWeldData * lineWeldData /** line weld data */ ,
                NXOpen::Annotations::PmiData * pmiData /** PMI data */,
                NXOpen::Xform * annotationPlane /** Annotation plane on which the line weld lies */,
                const NXOpen::Point3d & origin /** Origin for the line weld */,
                NXOpen::Annotations::LeaderBundle * leader /** Specifies the leaders for the line weld */
            );
            /** Creates a @link Annotations::LineWeldBuilder Annotations::LineWeldBuilder@endlink   @return  
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : drafting ("DRAFTING") */
            public: NXOpen::Annotations::LineWeldBuilder * CreateLineWeldBuilder
            (
                NXOpen::Annotations::LineWeld * weld /** weld */ 
            );
            /** Creates a @link Annotations::PmiLineWeldBuilder Annotations::PmiLineWeldBuilder@endlink   @return  
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : geometric_tol ("GDT") */
            public: NXOpen::Annotations::PmiLineWeldBuilder * CreatePmiLineWeldBuilder
            (
                NXOpen::Annotations::PmiLineWeld * weld /** weld */ 
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
