#ifndef NXOpen_DIE_PADPARENTBUILDER_HXX_INCLUDED
#define NXOpen_DIE_PADPARENTBUILDER_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     Die_PadParentBuilder.ja
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
#include <NXOpen/Die.hxx>
#include <NXOpen/Features_FeatureBuilder.hxx>
#include <NXOpen/libnxopencpp_die_exports.hxx>

#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable:4996)
#endif
#ifdef __GNUC__
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

namespace NXOpen
{
    namespace Die
    {
        class PadParentBuilder;
    }
    namespace Die
    {
        class PadChildBuilder;
    }
    namespace Features
    {
        class FeatureBuilder;
    }
    namespace Die
    {
        class _PadParentBuilderBuilder;
        class PadParentBuilderImpl;
        /** Represents a Die Pad Parent sub feature.  <br> This sub feature is created via the main feature builder. <br> 
         <br>  Created in NX4.0.0.  <br>  
        */
        class NXOPENCPP_DIEEXPORT  PadParentBuilder : public Features::FeatureBuilder
        {
            /** Settings for the shape type of the die pads. */
            public: enum ShapeTypeOption
            {
                ShapeTypeOptionRectangular/** Rectangular pad. */,
                ShapeTypeOptionCircular/** Circular pad. */,
                ShapeTypeOptionCurve/** Curve defined pad. */
            };

            private: PadParentBuilderImpl * m_padparentbuilder_impl;
            private: friend class  _PadParentBuilderBuilder;
            protected: PadParentBuilder();
            public: ~PadParentBuilder();
            /**Sets  the surface offset of die pads. 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : ug_die_design ("Die Design") */
            public: void SetSurfaceOffset
            (
                double surfaceOffset /** surface offset */ 
            );
            /**Returns  the surface offset of die pads. 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : ug_die_design ("Die Design") */
            public: double SurfaceOffset
            (
            );
            /**Sets  the location offset of die pads. 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : ug_die_design ("Die Design") */
            public: void SetLocationOffset
            (
                double locationOffset /** location offset */ 
            );
            /**Returns  the location offset of die pads. 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : ug_die_design ("Die Design") */
            public: double LocationOffset
            (
            );
            /**Sets  the diameter of die pads. 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : ug_die_design ("Die Design") */
            public: void SetDiameter
            (
                double diameter /** diameter */ 
            );
            /**Returns  the diameter of die pads. 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : ug_die_design ("Die Design") */
            public: double Diameter
            (
            );
            /**Sets  the length of die pads. 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : ug_die_design ("Die Design") */
            public: void SetLength
            (
                double length /** length */ 
            );
            /**Returns  the length of die pads. 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : ug_die_design ("Die Design") */
            public: double Length
            (
            );
            /**Sets  the width of die pads. 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : ug_die_design ("Die Design") */
            public: void SetWidth
            (
                double width /** width */ 
            );
            /**Returns  the width of die pads. 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : ug_die_design ("Die Design") */
            public: double Width
            (
            );
            /**Sets  the height of die pads. 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : ug_die_design ("Die Design") */
            public: void SetHeight
            (
                double height /** height */ 
            );
            /**Returns  the height of die pads. 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : ug_die_design ("Die Design") */
            public: double Height
            (
            );
            /**Sets  the relief width of die pads. 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : ug_die_design ("Die Design") */
            public: void SetReliefWidth
            (
                double reliefWidth /** relief width */ 
            );
            /**Returns  the relief width of die pads. 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : ug_die_design ("Die Design") */
            public: double ReliefWidth
            (
            );
            /**Sets  the relief depth of die pads. 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : ug_die_design ("Die Design") */
            public: void SetReliefDepth
            (
                double reliefDepth /** relief depth */ 
            );
            /**Returns  the relief depth of die pads. 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : ug_die_design ("Die Design") */
            public: double ReliefDepth
            (
            );
            /**Sets  the hole diameter of die pads. 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : ug_die_design ("Die Design") */
            public: void SetHoleDiameter
            (
                double holeDiameter /** hole diameter */ 
            );
            /**Returns  the hole diameter of die pads. 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : ug_die_design ("Die Design") */
            public: double HoleDiameter
            (
            );
            /**Returns  the center hole switch of die pads, if true the center hole will be created in the pads, if false they will not. 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : ug_die_design ("Die Design") */
            public: bool CenterHole
            (
            );
            /**Sets  the center hole switch of die pads, if true the center hole will be created in the pads, if false they will not. 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : ug_die_design ("Die Design") */
            public: void SetCenterHole
            (
                bool centerHole /** center hole */ 
            );
            /**Returns  the relief switch of die pads, if true the relief will be built around the pads, if false they will not. 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : ug_die_design ("Die Design") */
            public: bool Relief
            (
            );
            /**Sets  the relief switch of die pads, if true the relief will be built around the pads, if false they will not. 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : ug_die_design ("Die Design") */
            public: void SetRelief
            (
                bool relief /** relief */ 
            );
            /**Returns  the shape type of die pads. 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : ug_die_design ("Die Design") */
            public: NXOpen::Die::PadParentBuilder::ShapeTypeOption ShapeType
            (
            );
            /**Sets  the shape type of die pads. 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : ug_die_design ("Die Design") */
            public: void SetShapeType
            (
                NXOpen::Die::PadParentBuilder::ShapeTypeOption shapeType /** shape type */ 
            );
            /** Gets the hole attributes, note existance of attributes depends on usage in
                    main feature. 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : ug_die_design ("Die Design") */
            public: void GetHoleAttributes
            (
                NXString* title /** Title for attribute. */,
                NXString* value /** Value of attribute. */,
                int* color /** Color of hole faces. */,
                NXString* diameterTitle /** Title for diameter attribute. */
            );
            /** Sets the hole attributes, note existance of attributes depends on usage in
                    main feature. 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : ug_die_design ("Die Design") */
            public: void SetHoleAttributes
            (
                const NXString & title /** Title for attribute.   <br>  NOTE: The full Unicode character set is not supported for this parameter.  <br> */,
                const NXString & value /** Value of attribute.   <br>  NOTE: The full Unicode character set is not supported for this parameter.  <br> */,
                int color /** Color of hole faces. */,
                const NXString & diameterTitle /** Title for diameter attribute.   <br>  NOTE: The full Unicode character set is not supported for this parameter.  <br> */
            );
            /** Sets the hole attributes, note existance of attributes depends on usage in
                    main feature. 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : ug_die_design ("Die Design") */
            void SetHoleAttributes
            (
                const char * title /** Title for attribute.   <br>  NOTE: The full Unicode character set is not supported for this parameter.  <br> */,
                const char * value /** Value of attribute.   <br>  NOTE: The full Unicode character set is not supported for this parameter.  <br> */,
                int color /** Color of hole faces. */,
                const char * diameterTitle /** Title for diameter attribute.   <br>  NOTE: The full Unicode character set is not supported for this parameter.  <br> */
            );
            /** Gets the pad attributes, note existance of attributes depends on usage in
                    main feature. 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : ug_die_design ("Die Design") */
            public: void GetPadAttributes
            (
                NXString* title /** Title for attribute. */,
                NXString* value /** Value of attribute. */,
                int* color /** Color of pad faces. */
            );
            /** Sets the pad attributes, note existance of attributes depends on usage in
                    main feature. 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : ug_die_design ("Die Design") */
            public: void SetPadAttributes
            (
                const NXString & title /** Title for attribute.   <br>  NOTE: The full Unicode character set is not supported for this parameter.  <br> */,
                const NXString & value /** Value of attribute.   <br>  NOTE: The full Unicode character set is not supported for this parameter.  <br> */,
                int color /** Color of pad faces. */
            );
            /** Sets the pad attributes, note existance of attributes depends on usage in
                    main feature. 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : ug_die_design ("Die Design") */
            void SetPadAttributes
            (
                const char * title /** Title for attribute.   <br>  NOTE: The full Unicode character set is not supported for this parameter.  <br> */,
                const char * value /** Value of attribute.   <br>  NOTE: The full Unicode character set is not supported for this parameter.  <br> */,
                int color /** Color of pad faces. */
            );
            /** Gets the relief attributes, note existance of attributes depends on usage in
                    main feature. 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : ug_die_design ("Die Design") */
            public: void GetReliefAttributes
            (
                NXString* title /** Title for attribute. */,
                NXString* value /** Value of attribute. */,
                int* color /** Color of relief faces. */
            );
            /** Sets the relief attributes, note existance of attributes depends on usage in
                    main feature. 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : ug_die_design ("Die Design") */
            public: void SetReliefAttributes
            (
                const NXString & title /** Title for attribute.   <br>  NOTE: The full Unicode character set is not supported for this parameter.  <br> */,
                const NXString & value /** Value of attribute.   <br>  NOTE: The full Unicode character set is not supported for this parameter.  <br> */,
                int color /** Color of relief faces. */
            );
            /** Sets the relief attributes, note existance of attributes depends on usage in
                    main feature. 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : ug_die_design ("Die Design") */
            void SetReliefAttributes
            (
                const char * title /** Title for attribute.   <br>  NOTE: The full Unicode character set is not supported for this parameter.  <br> */,
                const char * value /** Value of attribute.   <br>  NOTE: The full Unicode character set is not supported for this parameter.  <br> */,
                int color /** Color of relief faces. */
            );
            /**Sets  the design status of die pads, if true the pads will be built into the model, if false they will not. 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : ug_die_design ("Die Design") */
            public: void SetDesignStatus
            (
                bool designStatus /** design status */ 
            );
            /**Returns  the design status of die pads, if true the pads will be built into the model, if false they will not. 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : ug_die_design ("Die Design") */
            public: bool DesignStatus
            (
            );
            /**Returns  the build status of die pads. 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : ug_die_design ("Die Design") */
            public: NXOpen::Die::DieBuildStatusOption BuildStatus
            (
            );
            /**Sets  the display status of die pads, if true input data to the pads will be displayed, 
                    if false the input data will not be displayed. 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : ug_die_design ("Die Design") */
            public: void SetDisplayStatus
            (
                bool displayStatus /** display status */ 
            );
            /**Returns  the display status of die pads, if true input data to the pads will be displayed, 
                    if false the input data will not be displayed. 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : ug_die_design ("Die Design") */
            public: bool DisplayStatus
            (
            );
            /** Creates a child pad.  @return  
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : ug_die_design ("Die Design") */
            public: NXOpen::Die::PadChildBuilder * CreateChild
            (
            );
            /** Deletes a child pad. 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : ug_die_design ("Die Design") */
            public: void DeleteChild
            (
                NXOpen::Die::PadChildBuilder * diepadchild /** diepadchild */ 
            );
            /** Outputs the child pads.  @return  The child pads. 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : ug_die_design ("Die Design") */
            public: std::vector<NXOpen::Die::PadChildBuilder *> GetChildren
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
