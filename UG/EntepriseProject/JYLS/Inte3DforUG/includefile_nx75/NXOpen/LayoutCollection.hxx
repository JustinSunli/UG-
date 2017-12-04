#ifndef NXOpen_LAYOUTCOLLECTION_HXX_INCLUDED
#define NXOpen_LAYOUTCOLLECTION_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     LayoutCollection.ja
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
#include <NXOpen/LayoutDefinition.hxx>
#include <NXOpen/TaggedObject.hxx>
#include <NXOpen/TaggedObjectCollection.hxx>
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
    class LayoutCollection;
    class BasePart;
    class Layout;
    class LayoutDefinition;
    class View;
    class LayoutCollectionImpl;
    /** Represents a collection of layouts. <br> To obtain an instance of this class, refer to @link BasePart BasePart@endlink  <br> 
     <br>  Created in NX3.0.0.  <br>  
    */
    class NXOPENCPPEXPORT  LayoutCollection : public TaggedObjectCollection
    {
        private: LayoutCollectionImpl * m_layoutcollection_impl;
        private: NXOpen::BasePart* m_owner;
        /// \cond NX_NO_DOC 
        public: explicit LayoutCollection(NXOpen::BasePart *owner);


        /// \endcond 
        public: 
        /**Returns the tag of this object.  */
        tag_t Tag() const; 
        public: ~LayoutCollection();
        /** Iterator for accessing the contents of the collection. */
        //lint -sem(NXOpen::LayoutCollection::iterator::copy,initializer)
        class iterator
        {
        public:
            /** Value type associated with iterator*/ 

            typedef Layout * value_type;
            /** Default constructor */
            iterator() : m_context(NULL), m_current(NULL_TAG)
            {
            } //lint !e1401 m_state is not initialized
            /// \cond NX_NO_DOC
            explicit iterator(NXOpen::LayoutCollection *context) : m_context(context), m_current(NULL_TAG)
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
            NXOPENCPPEXPORT  value_type operator * ();
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
            NXOPENCPPEXPORT  void next();
            NXOpen::LayoutCollection *m_context;
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
        /** Creates a layout using an @link LayoutDefinition LayoutDefinition@endlink . @return  
         <br>  Created in NX3.0.0.  <br>  
         <br> License requirements : None */
        public: NXOpen::Layout * Create
        (
            const NXString & name /** Name of layout   <br>  NOTE: The full Unicode character set is not supported for this parameter.  <br> */,
            NXOpen::LayoutDefinition * layoutArrangement /** Arrangement and view location information*/,
            bool fitAllViews /** Flag that indicates for the system to perform a fit before
                                             displaying the view.  Otherwise the system displays the view 
                                             at the scale at which it was last saved. */
        );
        /** Creates a layout using an @link LayoutDefinition LayoutDefinition@endlink . @return  
         <br>  Created in NX3.0.0.  <br>  
         <br> License requirements : None */
        NXOpen::Layout * Create
        (
            const char * name /** Name of layout   <br>  NOTE: The full Unicode character set is not supported for this parameter.  <br> */,
            NXOpen::LayoutDefinition * layoutArrangement /** Arrangement and view location information*/,
            bool fitAllViews /** Flag that indicates for the system to perform a fit before
                                             displaying the view.  Otherwise the system displays the view 
                                             at the scale at which it was last saved. */
        );
        /** Constructs a @link LayoutDefinition LayoutDefinition@endlink  object to be used to create a layout.  If a layout is not created
             using the created definition object, the client is responsible for deleting it.  
         <br>  Created in NX3.0.0.  <br>  
         <br> License requirements : None */
        public: void NewLayoutDefinition
        (
            NXOpen::LayoutDefinition::ArrangementType arrangement /** Arrangement type */,
            NXOpen::LayoutDefinition ** layoutArrangement /** Layout arrangement used 
                                                                                            to create a layout */
        );
        /**Returns  the current the layout.  When in the drafting application and a drawing sheet is
            not displayed, this will return a layout that has limited operations that can be performed on it.
             
         <br>  Created in NX3.0.0.  <br>  
         <br> License requirements : None */
        public: NXOpen::Layout * Current
        (
        );
        /** Finds the @link  Layout   Layout @endlink  with the given identifier as recorded in a journal. 
            An object may not return the same value as its JournalIdentifier in different versions of 
            the software. However newer versions of the software should find the same object when 
            FindObject is passed older versions of its journal identifier. In general, this method 
            should not be used in handwritten code and exists to support record and playback of journals.

            An exception will be thrown if no object can be found with the given journal identifier.  @return  Layout found 
         <br>  Created in NX3.0.0.  <br>  
         <br> License requirements : None */
        public: NXOpen::Layout * FindObject
        (
            const NXString & journalIdentifier /** Identifier to be found */
        );
        /** Finds the @link  Layout   Layout @endlink  with the given identifier as recorded in a journal. 
            An object may not return the same value as its JournalIdentifier in different versions of 
            the software. However newer versions of the software should find the same object when 
            FindObject is passed older versions of its journal identifier. In general, this method 
            should not be used in handwritten code and exists to support record and playback of journals.

            An exception will be thrown if no object can be found with the given journal identifier.  @return  Layout found 
         <br>  Created in NX3.0.0.  <br>  
         <br> License requirements : None */
        NXOpen::Layout * FindObject
        (
            const char * journalIdentifier /** Identifier to be found */
        );
        /** This method creates a layout with two modeling views. The views
             ** are created with names given. Layout and view tags are returned 
         <br>  Created in NX6.0.0.  <br>  
         <br> License requirements : None */
        public: void CreateSplitScreenLayoutAndNamedViews
        (
            const NXString & leftViewName /** name for the left view   <br>  NOTE: The full Unicode character set is not supported for this parameter.  <br> */,
            const NXString & rightViewname /** name for the right view   <br>  NOTE: The full Unicode character set is not supported for this parameter.  <br> */,
            NXOpen::Layout ** layout /** Layout */,
            NXOpen::View ** leftView /** View */,
            NXOpen::View ** rightView /** View */
        );
        /** This method creates a layout with two modeling views. The views
             ** are created with names given. Layout and view tags are returned 
         <br>  Created in NX6.0.0.  <br>  
         <br> License requirements : None */
        void CreateSplitScreenLayoutAndNamedViews
        (
            const char * leftViewName /** name for the left view   <br>  NOTE: The full Unicode character set is not supported for this parameter.  <br> */,
            const char * rightViewname /** name for the right view   <br>  NOTE: The full Unicode character set is not supported for this parameter.  <br> */,
            NXOpen::Layout ** layout /** Layout */,
            NXOpen::View ** leftView /** View */,
            NXOpen::View ** rightView /** View */
        );
        /** This method destroys the split screen layout along with the views 
             * that are there in it 
         <br>  Created in NX6.0.0.  <br>  
         <br> License requirements : None */
        public: void DestroySplitScreenLayoutAndNamedViews
        (
            NXOpen::Layout * layout /** Layout */
        );
        /** Sets the given layout as current layout 
         <br>  Created in NX6.0.0.  <br>  
         <br> License requirements : None */
        public: void ChangeLayout
        (
            NXOpen::Layout * layout /** Layout */
        );
        /** Using given names renames the views in split screen layout. 
         <br>  Created in NX6.0.0.  <br>  
         <br> License requirements : None */
        public: void RenameViewsInSplitScreenLayout
        (
            NXOpen::Layout * layout /** Layout */,
            const NXString & leftViewName /** name for the left view   <br>  NOTE: The full Unicode character set is not supported for this parameter.  <br> */,
            const NXString & rightViewName /** name for the right view   <br>  NOTE: The full Unicode character set is not supported for this parameter.  <br> */
        );
        /** Using given names renames the views in split screen layout. 
         <br>  Created in NX6.0.0.  <br>  
         <br> License requirements : None */
        void RenameViewsInSplitScreenLayout
        (
            NXOpen::Layout * layout /** Layout */,
            const char * leftViewName /** name for the left view   <br>  NOTE: The full Unicode character set is not supported for this parameter.  <br> */,
            const char * rightViewName /** name for the right view   <br>  NOTE: The full Unicode character set is not supported for this parameter.  <br> */
        );
    }; //lint !e1712 default constructor not defined for class  

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
