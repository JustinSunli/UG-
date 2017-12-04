#ifndef NXOpen_ISSUE_ISSUELIST_HXX_INCLUDED
#define NXOpen_ISSUE_ISSUELIST_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     Issue_IssueList.ja
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
#include <NXOpen/Issue_IssueContent.hxx>
#include <NXOpen/Issue_IssueList.hxx>
#include <NXOpen/NXObject.hxx>
#include <NXOpen/libnxopencpp_issue_exports.hxx>

#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable:4996)
#endif
#ifdef __GNUC__
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

namespace NXOpen
{
    namespace Issue
    {
        class IssueList;
    }
    namespace Issue
    {
        class IssueContent;
    }
    class NXObject;
    namespace Issue
    {
        class _IssueListBuilder;
        class IssueListImpl;
        /** Represents the Issue List object. 
         <br>  Created in NX8.5.0.  <br>  
        */
        class NXOPENCPP_ISSUEEXPORT  IssueList : public NXObject
        {
            private: IssueListImpl * m_issuelist_impl;
            private: friend class  _IssueListBuilder;
            protected: IssueList();
            public: ~IssueList();
            /** Reloads the @link Issue::IssueContent Issue::IssueContent@endlink s 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : nx_issue_mgmt ("NX Issue Tracking") */
            public: void ReloadIssues
            (
            );
            /** Returns all the @link Issue::IssueContent Issue::IssueContent@endlink s  @return  
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : nx_issue_mgmt ("NX Issue Tracking") */
            public: std::vector<NXOpen::Issue::IssueContent *> GetIssues
            (
            );
            /** Returns whether the list exists in database  @return  
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : nx_issue_mgmt ("NX Issue Tracking") */
            public: bool ExistsInDatabase
            (
            );
            /** Saves the modified @link Issue::IssueContent Issue::IssueContent@endlink s 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : nx_issue_mgmt ("NX Issue Tracking") */
            public: void SaveChanges
            (
            );
            /** Discards the modified @link Issue::IssueContent Issue::IssueContent@endlink s 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : nx_issue_mgmt ("NX Issue Tracking") */
            public: void DiscardChanges
            (
            );
        };
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
