#ifndef NXOpen_FIELDS_FIELDTABLE_HXX_INCLUDED
#define NXOpen_FIELDS_FIELDTABLE_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     Fields_FieldTable.ja
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
#include <NXOpen/Fields_Field.hxx>
#include <NXOpen/Fields_FieldEvaluator.hxx>
#include <NXOpen/Fields_FieldVariable.hxx>
#include <NXOpen/libnxopencpp_fields_exports.hxx>

#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable:4996)
#endif
#ifdef __GNUC__
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

namespace NXOpen
{
    namespace Fields
    {
        class FieldTable;
    }
    namespace Fields
    {
        class Field;
    }
    namespace Fields
    {
        class FieldVariable;
    }
    namespace Fields
    {
        class _FieldTableBuilder;
        class FieldTableImpl;
        /**  @brief  Represents the Field Table class. 

          
             <br> A field (see @link Fields::Field Fields::Field@endlink ) defined in terms of tabular data involving 
            one or more look-up independent columns and one or more dependent variables (see 
            @link Fields::FieldVariable Fields::FieldVariable@endlink ) which depend on the look-up columns. <br>   <br> To obtain a instance of this class use @link Fields::FieldManager Fields::FieldManager@endlink  . <br> 
         <br>  Created in NX6.0.0.  <br>  
        */
        class NXOPENCPP_FIELDSEXPORT  FieldTable : public Fields::Field
        {
            /**  Interpolation type This enumeration has been deprecated use @link Fields::FieldEvaluator::InterpolationEnum Fields::FieldEvaluator::InterpolationEnum@endlink  instead.  
             <br>  @deprecated Deprecated in NX7.5.2.  Use @link Fields::FieldEvaluator::InterpolationEnum Fields::FieldEvaluator::InterpolationEnum@endlink  instead. <br>  
            */
            public:  NX_DEPRECATED("Deprecated in NX7.5.2.  Use Fields::FieldEvaluator::InterpolationEnum instead.") enum InterpolationEnum
            {
                InterpolationEnumNone/** No interpolation method; table can only be used as a lookup */,
                InterpolationEnumLinear1d/** Standard linear interpolation between bounding points */,
                InterpolationEnumNearestNeighbor1d/** Locates the nearest point and returns its value */,
                InterpolationEnumInverseDistanceWeighting1d/** Sum of the weighted value of all points, based on the inverse of the distance */,
                InterpolationEnumDelaunay2dFast/** Triangulates the independent values and uses the bounding triangle, sacrifices accuracy for speed */,
                InterpolationEnumDelaunay2dMedium/** Triangulates the independent values and uses the bounding triangle, compromise between accuracy and speed */,
                InterpolationEnumDelaunay2dAccurate/** Triangulates the independent values and uses the bounding triangle, sacrifices speed for accuracy */,
                InterpolationEnumNearestNeighbor2d/** Locates the nearest point in a plane and returns its value */,
                InterpolationEnumRenkaShepard2d/** Refined inverse distance weighting in 2D space */,
                InterpolationEnumInverseDistanceWeighting2d/** Sum of the weighted value of all points in 2D space, based on the inverse of the distance */,
                InterpolationEnumDelaunay3dFast/** Creates Tetrahedrals using the independent values and uses the bounding tetrahedron, sacrifices accuracy for speed */,
                InterpolationEnumDelaunay3dMedium/** Creates Tetrahedrals using the independent values and uses the bounding tetrahedron, compromise between accuracy and speed */,
                InterpolationEnumDelaunay3dAccurate/** Creates Tetrahedrals using the independent values and uses the bounding tetrahedron, sacrifices speed for accuracy */,
                InterpolationEnumNearestNeighbor3d/** Locates the nearest point in space and returns its value */,
                InterpolationEnumRenkaShepard3d/** Refined inverse distance weighting in 3D space */,
                InterpolationEnumInverseDistanceWeighting3d/** Sum of the weighted value of all points in 3D space, based on the inverse of the distance */,
                InterpolationEnumNearestNeighborNd/** Locates the nearest point in N dimensional space and returns its value */,
                InterpolationEnumRenkaShepardNd/** Refined inverse distance weighting in N dimensional space */,
                InterpolationEnumInverseDistanceWeightingNd/** Sum of the weighted value of all points in N dimensional, based on the inverse of the distance */
            };

            /** Load file options*/
            public: enum LoadFileOption
            {
                LoadFileOptionAppend/** Append data to the table removing duplicates */,
                LoadFileOptionReplace/** Replace data removing duplicates */
            };

            private: FieldTableImpl * m_fieldtable_impl;
            private: friend class  _FieldTableBuilder;
            protected: FieldTable();
            public: ~FieldTable();
            /** Edit the table field.  Specifies the new array of @link Fields::FieldVariable Fields::FieldVariable@endlink s for 
                    independent and dependent variables, as well as the new double values.
                    
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: void EditFieldTable
            (
                const std::vector<NXOpen::Fields::FieldVariable *> & indepVarArray /** independent variables to be associated with the field */,
                const std::vector<NXOpen::Fields::FieldVariable *> & depVarArray /** dependent expression fields to be associated with the formula field */,
                const std::vector<double> & datapoints /** row based array of double values representing the table; then number of points should equal the number of independent variables * the number of dependent variables * the number of rows. */
            );
            /** Specified interpolation method, this method was deprecated in NX7.5.2.
                    
             <br>  @deprecated Deprecated in NX7.5.2.  Use @link Fields::FieldTable::InterpolationMethod Fields::FieldTable::InterpolationMethod @endlink and @link Fields::FieldTable::SetInterpolationMethod Fields::FieldTable::SetInterpolationMethod @endlink  instead. <br>  

             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public:  NX_DEPRECATED("Deprecated in NX7.5.2.  Use Fields::FieldTable::InterpolationMethod Fields::FieldTable::InterpolationMethod @endlink and @link Fields::FieldTable::SetInterpolationMethod Fields::FieldTable::SetInterpolationMethod @endlink  instead.") void SetInterpolation
            (
                int interpolationMethod /** specified interpolation method; @link Fields::FieldTable Fields::FieldTable@endlink  interpolation enum values for builtin methods.  */
            );
            /**Returns  
                    a flag specifying if interpolator is persistent between session 
                    
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : None */
            public: bool PersistentInterpolator
            (
            );
            /**Sets  
                    a flag specifying if interpolator is persistent between session 
                    
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : None */
            public: void SetPersistentInterpolator
            (
                bool persistentInterpolator /** persistent interpolator indicator  */
            );
            /** Get the inverse distance weighting (IDW) interpolation options 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : None */
            public: void GetIdwOptions
            (
                NXOpen::Fields::FieldEvaluator::InverseDistanceWeightingEnum* nearestOption /** nearest option */,
                double* nearestFraction /** fraction */
            );
            /** Set the inverse distance weighting (IDW) interpolation options 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : None */
            public: void SetIdwOptions
            (
                NXOpen::Fields::FieldEvaluator::InverseDistanceWeightingEnum nearestOption /** nearest option */,
                double nearestFraction /** fraction */
            );
            /**Returns  
                    the approximate nearest neighbor (ANN) interpolation tolerance 
                    
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : None */
            public: double AnnTolerance
            (
            );
            /**Sets  
                    the approximate nearest neighbor (ANN) interpolation tolerance 
                    
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : None */
            public: void SetAnnTolerance
            (
                double annTolerance /** approximate nearest neighbor (ANN) interpolation tolerance  */
            );
            /**Returns   
                    the interpolation method used when this table data is evaluated.
                    
             <br>  Created in NX7.5.2.  <br>  
             <br> License requirements : None */
            public: NXOpen::Fields::FieldEvaluator::InterpolationEnum InterpolationMethod
            (
            );
            /**Sets   
                    the interpolation method used when this table data is evaluated.
                    
             <br>  Created in NX7.5.2.  <br>  
             <br> License requirements : None */
            public: void SetInterpolationMethod
            (
                NXOpen::Fields::FieldEvaluator::InterpolationEnum interpolationMethod /** the interpolation method  */
            );
            /** Populate the table from a file replacing or appending data 
             <br>  Created in NX6.0.1.  <br>  
             <br> License requirements : None */
            public: void LoadFromFile
            (
                const NXString & filename /** file to read rows from   <br>  NOTE: The full Unicode character set is not supported for this parameter.  <br> */,
                NXOpen::Fields::FieldTable::LoadFileOption loadFileOption /** append or replace */
            );
            /** Populate the table from a file replacing or appending data 
             <br>  Created in NX6.0.1.  <br>  
             <br> License requirements : None */
            void LoadFromFile
            (
                const char * filename /** file to read rows from   <br>  NOTE: The full Unicode character set is not supported for this parameter.  <br> */,
                NXOpen::Fields::FieldTable::LoadFileOption loadFileOption /** append or replace */
            );
            /** Returns the values for the given @link Fields::FieldVariable Fields::FieldVariable@endlink  in this @link Fields::FieldTable Fields::FieldTable@endlink .  
                        The input @link Fields::FieldVariable Fields::FieldVariable@endlink  should be retrieved from the field using 
                        @link Fields::Field::GetIndependentVariables Fields::Field::GetIndependentVariables@endlink  or @link Fields::Field::GetDependentVariables Fields::Field::GetDependentVariables@endlink . 
                        The values are in the same @link Unit Unit@endlink  as specified on the @link Fields::FieldVariable Fields::FieldVariable@endlink .
                     @return  the row values for this variable 
             <br>  Created in NX7.5.4.  <br>  
             <br> License requirements : None */
            public: std::vector<double> GetData
            (
                NXOpen::Fields::FieldVariable * variable /** variable whose table values are to be returned */
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