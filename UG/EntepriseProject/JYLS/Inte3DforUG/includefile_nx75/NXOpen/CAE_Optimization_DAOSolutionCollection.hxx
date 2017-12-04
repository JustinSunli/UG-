#ifndef NXOpen_CAE_OPTIMIZATION_DAOSOLUTIONCOLLECTION_HXX_INCLUDED
#define NXOpen_CAE_OPTIMIZATION_DAOSOLUTIONCOLLECTION_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     CAE_Optimization_DAOSolutionCollection.ja
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
        namespace Optimization
        {
            class DAOSolutionCollection;
        }
    }
    namespace CAE
    {
        namespace Optimization
        {
            class DAOOptimizationManager;
        }
    }
    namespace CAE
    {
        namespace Optimization
        {
            class DAOSolution;
        }
    }
    namespace CAE
    {
        namespace Optimization
        {
            class DAOConstraint;
        }
    }
    namespace CAE
    {
        namespace Optimization
        {
            class DAOConstraintBuilder;
        }
    }
    namespace CAE
    {
        namespace Optimization
        {
            class DAODesignVariable;
        }
    }
    namespace CAE
    {
        namespace Optimization
        {
            class DAODesignVariableBuilder;
        }
    }
    namespace CAE
    {
        namespace Optimization
        {
            class DAOSolutionBuilder;
        }
    }
    namespace CAE
    {
        namespace Optimization
        {
            class DAOSolutionCollectionImpl;
            /** Represents the collection of optimization solution  <br> To obtain an instance of this class, refer to @link CAE::Optimization::DAOOptimizationManager CAE::Optimization::DAOOptimizationManager@endlink  <br> 
             <br>  Created in NX8.0.0.  <br>  
            */
            class NXOPENCPP_CAEEXPORT  DAOSolutionCollection : public TaggedObjectCollection
            {
                private: DAOSolutionCollectionImpl * m_daosolutioncollection_impl;
                private: NXOpen::CAE::Optimization::DAOOptimizationManager* m_owner;
                /// \cond NX_NO_DOC 
                public: explicit DAOSolutionCollection(NXOpen::CAE::Optimization::DAOOptimizationManager *owner);


                /// \endcond 
                public: 
                /**Returns the tag of this object.  */
                tag_t Tag() const; 
                public: ~DAOSolutionCollection();
                /** Iterator for accessing the contents of the collection. */
                //lint -sem(NXOpen::CAE::Optimization::DAOSolutionCollection::iterator::copy,initializer)
                class iterator
                {
                public:
                    /** Value type associated with iterator*/ 

                    typedef CAE::Optimization::DAOSolution * value_type;
                    /** Default constructor */
                    iterator() : m_context(NULL), m_current(NULL_TAG)
                    {
                    } //lint !e1401 m_state is not initialized
                    /// \cond NX_NO_DOC
                    explicit iterator(NXOpen::CAE::Optimization::DAOSolutionCollection *context) : m_context(context), m_current(NULL_TAG)
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
                    NXOpen::CAE::Optimization::DAOSolutionCollection *m_context;
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
                /** Creates the builder object of optimization solution  @return  Optimization solution builder 
                 <br>  Created in NX8.0.0.  <br>  
                 <br> License requirements : nx_design_sim ("NX Design Simulation") */
                public: NXOpen::CAE::Optimization::DAOSolutionBuilder * CreateOptimizationBuilder
                (
                    NXOpen::CAE::Optimization::DAOSolution * optimizationSolution /** Optimization solution */
                );
                /** Finds an optimization solution with a specified name  @return  Optimization solution 
                 <br>  Created in NX8.0.0.  <br>  
                 <br> License requirements : nx_design_sim ("NX Design Simulation") */
                public: NXOpen::CAE::Optimization::DAOSolution * FindObject
                (
                    const NXString & solutionName /** Optimization solution name */
                );
                /** Finds an optimization solution with a specified name  @return  Optimization solution 
                 <br>  Created in NX8.0.0.  <br>  
                 <br> License requirements : nx_design_sim ("NX Design Simulation") */
                NXOpen::CAE::Optimization::DAOSolution * FindObject
                (
                    const char * solutionName /** Optimization solution name */
                );
                /** Creates the builder object of optimization solution design constraint  @return  Design constraint builder 
                 <br>  Created in NX8.0.0.  <br>  
                 <br> License requirements : nx_design_sim ("NX Design Simulation") */
                public: NXOpen::CAE::Optimization::DAOConstraintBuilder * CreateConstraintBuilder
                (
                    NXOpen::CAE::Optimization::DAOConstraint * designConstraint /** Design constraint */
                );
                /** Creates the builder object of optimization solution design variable  @return  Design variable builder 
                 <br>  Created in NX8.0.0.  <br>  
                 <br> License requirements : nx_design_sim ("NX Design Simulation") */
                public: NXOpen::CAE::Optimization::DAODesignVariableBuilder * CreateDesignVariableBuilder
                (
                    NXOpen::CAE::Optimization::DAODesignVariable * designVariable /** Design variable */
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
