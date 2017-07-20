// Generated by Haxe 3.4.0
#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRandom
#include <flixel/math/FlxRandom.h>
#endif
#ifndef INCLUDED_flixel_util__FlxColor_FlxColor_Impl_
#include <flixel/util/_FlxColor/FlxColor_Impl_.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_eba801adaf62ef5c_8_new,"flixel.math.FlxRandom","new",0x97b4f113,"flixel.math.FlxRandom.new","flixel/math/FlxRandom.hx",8,0x4fa37e1d)
HX_LOCAL_STACK_FRAME(_hx_pos_eba801adaf62ef5c_260_getObject_flixel_group_FlxTypedGroup_T,"flixel.math.FlxRandom","getObject_flixel_group_FlxTypedGroup_T",0x29a53b90,"flixel.math.FlxRandom.getObject_flixel_group_FlxTypedGroup_T","flixel/math/FlxRandom.hx",260,0x4fa37e1d)
HX_LOCAL_STACK_FRAME(_hx_pos_eba801adaf62ef5c_49_resetInitialSeed,"flixel.math.FlxRandom","resetInitialSeed",0xb48811f3,"flixel.math.FlxRandom.resetInitialSeed","flixel/math/FlxRandom.hx",49,0x4fa37e1d)
HX_LOCAL_STACK_FRAME(_hx_pos_eba801adaf62ef5c_63_int,"flixel.math.FlxRandom","int",0x97b12da2,"flixel.math.FlxRandom.int","flixel/math/FlxRandom.hx",63,0x4fa37e1d)
HX_LOCAL_STACK_FRAME(_hx_pos_eba801adaf62ef5c_110_float,"flixel.math.FlxRandom","float",0x0d07b90f,"flixel.math.FlxRandom.float","flixel/math/FlxRandom.hx",110,0x4fa37e1d)
HX_LOCAL_STACK_FRAME(_hx_pos_eba801adaf62ef5c_166_floatNormal,"flixel.math.FlxRandom","floatNormal",0xe3d85496,"flixel.math.FlxRandom.floatNormal","flixel/math/FlxRandom.hx",166,0x4fa37e1d)
HX_LOCAL_STACK_FRAME(_hx_pos_eba801adaf62ef5c_197_bool,"flixel.math.FlxRandom","bool",0x1eb70017,"flixel.math.FlxRandom.bool","flixel/math/FlxRandom.hx",197,0x4fa37e1d)
HX_LOCAL_STACK_FRAME(_hx_pos_eba801adaf62ef5c_209_sign,"flixel.math.FlxRandom","sign",0x29ef0c2a,"flixel.math.FlxRandom.sign","flixel/math/FlxRandom.hx",209,0x4fa37e1d)
HX_LOCAL_STACK_FRAME(_hx_pos_eba801adaf62ef5c_222_weightedPick,"flixel.math.FlxRandom","weightedPick",0x1c7c1545,"flixel.math.FlxRandom.weightedPick","flixel/math/FlxRandom.hx",222,0x4fa37e1d)
HX_LOCAL_STACK_FRAME(_hx_pos_eba801adaf62ef5c_357_color,"flixel.math.FlxRandom","color",0x54cd64d6,"flixel.math.FlxRandom.color","flixel/math/FlxRandom.hx",357,0x4fa37e1d)
HX_LOCAL_STACK_FRAME(_hx_pos_eba801adaf62ef5c_403_generate,"flixel.math.FlxRandom","generate",0xe00ed5a2,"flixel.math.FlxRandom.generate","flixel/math/FlxRandom.hx",403,0x4fa37e1d)
HX_LOCAL_STACK_FRAME(_hx_pos_eba801adaf62ef5c_418_set_initialSeed,"flixel.math.FlxRandom","set_initialSeed",0x5f4b69eb,"flixel.math.FlxRandom.set_initialSeed","flixel/math/FlxRandom.hx",418,0x4fa37e1d)
HX_LOCAL_STACK_FRAME(_hx_pos_eba801adaf62ef5c_426_get_currentSeed,"flixel.math.FlxRandom","get_currentSeed",0xbfecf714,"flixel.math.FlxRandom.get_currentSeed","flixel/math/FlxRandom.hx",426,0x4fa37e1d)
HX_LOCAL_STACK_FRAME(_hx_pos_eba801adaf62ef5c_434_set_currentSeed,"flixel.math.FlxRandom","set_currentSeed",0xbbb87420,"flixel.math.FlxRandom.set_currentSeed","flixel/math/FlxRandom.hx",434,0x4fa37e1d)
HX_LOCAL_STACK_FRAME(_hx_pos_eba801adaf62ef5c_442_rangeBound,"flixel.math.FlxRandom","rangeBound",0x5cf038ee,"flixel.math.FlxRandom.rangeBound","flixel/math/FlxRandom.hx",442,0x4fa37e1d)
HX_LOCAL_STACK_FRAME(_hx_pos_eba801adaf62ef5c_448_boot,"flixel.math.FlxRandom","boot",0x1eb7001f,"flixel.math.FlxRandom.boot","flixel/math/FlxRandom.hx",448,0x4fa37e1d)
HX_LOCAL_STACK_FRAME(_hx_pos_eba801adaf62ef5c_459_boot,"flixel.math.FlxRandom","boot",0x1eb7001f,"flixel.math.FlxRandom.boot","flixel/math/FlxRandom.hx",459,0x4fa37e1d)
HX_LOCAL_STACK_FRAME(_hx_pos_eba801adaf62ef5c_460_boot,"flixel.math.FlxRandom","boot",0x1eb7001f,"flixel.math.FlxRandom.boot","flixel/math/FlxRandom.hx",460,0x4fa37e1d)
namespace flixel{
namespace math{

void FlxRandom_obj::__construct( ::Dynamic InitialSeed){
            	HX_STACKFRAME(&_hx_pos_eba801adaf62ef5c_8_new)
HXLINE( 410)		this->internalSeed = ((Float)1);
HXLINE( 153)		this->_floatNormalRho = ((Float)0);
HXLINE( 152)		this->_twoPI = (::Math_obj::PI * (int)2);
HXLINE( 151)		this->_floatNormalRand2 = ((Float)0);
HXLINE( 150)		this->_floatNormalRand1 = ((Float)0);
HXLINE( 149)		this->_hasFloatNormalSpare = false;
HXLINE(  15)		this->initialSeed = (int)1;
HXLINE(  30)		if (hx::IsNotNull( InitialSeed )) {
HXLINE(  32)			int NewSeed = InitialSeed;
HXDLIN(  32)			Float lowerBound;
HXDLIN(  32)			if ((NewSeed < (int)1)) {
HXLINE(  32)				lowerBound = (int)1;
            			}
            			else {
HXLINE(  32)				lowerBound = NewSeed;
            			}
HXDLIN(  32)			 ::Dynamic NewSeed1;
HXDLIN(  32)			if ((lowerBound > (int)2147483646)) {
HXLINE(  32)				NewSeed1 = (int)2147483646;
            			}
            			else {
HXLINE(  32)				NewSeed1 = lowerBound;
            			}
HXDLIN(  32)			int NewSeed2 = ::Std_obj::_hx_int(NewSeed1);
HXDLIN(  32)			Float lowerBound1;
HXDLIN(  32)			if ((NewSeed2 < (int)1)) {
HXLINE(  32)				lowerBound1 = (int)1;
            			}
            			else {
HXLINE(  32)				lowerBound1 = NewSeed2;
            			}
HXDLIN(  32)			 ::Dynamic _hx_tmp;
HXDLIN(  32)			if ((lowerBound1 > (int)2147483646)) {
HXLINE(  32)				_hx_tmp = (int)2147483646;
            			}
            			else {
HXLINE(  32)				_hx_tmp = lowerBound1;
            			}
HXDLIN(  32)			this->initialSeed = ::Std_obj::_hx_int((this->internalSeed = ::Std_obj::_hx_int(_hx_tmp)));
            		}
            		else {
HXLINE(  36)			int Value = ::Std_obj::_hx_int((::Math_obj::random() * (int)2147483647));
HXDLIN(  36)			Float lowerBound2;
HXDLIN(  36)			if ((Value < (int)1)) {
HXLINE(  36)				lowerBound2 = (int)1;
            			}
            			else {
HXLINE(  36)				lowerBound2 = Value;
            			}
HXDLIN(  36)			 ::Dynamic NewSeed3;
HXDLIN(  36)			if ((lowerBound2 > (int)2147483646)) {
HXLINE(  36)				NewSeed3 = (int)2147483646;
            			}
            			else {
HXLINE(  36)				NewSeed3 = lowerBound2;
            			}
HXDLIN(  36)			int NewSeed4 = ::Std_obj::_hx_int(NewSeed3);
HXDLIN(  36)			Float lowerBound3;
HXDLIN(  36)			if ((NewSeed4 < (int)1)) {
HXLINE(  36)				lowerBound3 = (int)1;
            			}
            			else {
HXLINE(  36)				lowerBound3 = NewSeed4;
            			}
HXDLIN(  36)			 ::Dynamic NewSeed5;
HXDLIN(  36)			if ((lowerBound3 > (int)2147483646)) {
HXLINE(  36)				NewSeed5 = (int)2147483646;
            			}
            			else {
HXLINE(  36)				NewSeed5 = lowerBound3;
            			}
HXDLIN(  36)			int NewSeed6 = ::Std_obj::_hx_int(NewSeed5);
HXDLIN(  36)			Float lowerBound4;
HXDLIN(  36)			if ((NewSeed6 < (int)1)) {
HXLINE(  36)				lowerBound4 = (int)1;
            			}
            			else {
HXLINE(  36)				lowerBound4 = NewSeed6;
            			}
HXDLIN(  36)			 ::Dynamic _hx_tmp1;
HXDLIN(  36)			if ((lowerBound4 > (int)2147483646)) {
HXLINE(  36)				_hx_tmp1 = (int)2147483646;
            			}
            			else {
HXLINE(  36)				_hx_tmp1 = lowerBound4;
            			}
HXDLIN(  36)			this->initialSeed = ::Std_obj::_hx_int((this->internalSeed = ::Std_obj::_hx_int(_hx_tmp1)));
            		}
            	}

Dynamic FlxRandom_obj::__CreateEmpty() { return new FlxRandom_obj; }

void *FlxRandom_obj::_hx_vtable = 0;

Dynamic FlxRandom_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< FlxRandom_obj > _hx_result = new FlxRandom_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool FlxRandom_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x50c4cfd1;
}

 ::Dynamic FlxRandom_obj::getObject_flixel_group_FlxTypedGroup_T(::cpp::VirtualArray Objects,::Array< Float > WeightsArray,hx::Null< int >  __o_StartIndex, ::Dynamic EndIndex){
int StartIndex = __o_StartIndex.Default(0);
            	HX_STACKFRAME(&_hx_pos_eba801adaf62ef5c_260_getObject_flixel_group_FlxTypedGroup_T)
HXLINE( 261)		 ::Dynamic selected = null();
HXLINE( 263)		if ((Objects->get_length() != (int)0)) {
HXLINE( 265)			if (hx::IsNull( WeightsArray )) {
HXLINE( 267)				::Array< Float > _g = ::Array_obj< Float >::__new(0);
HXDLIN( 267)				{
HXLINE( 267)					int _g2 = (int)0;
HXDLIN( 267)					int _g1 = Objects->get_length();
HXDLIN( 267)					while((_g2 < _g1)){
HXLINE( 267)						_g2 = (_g2 + (int)1);
HXDLIN( 267)						int i = (_g2 - (int)1);
HXDLIN( 267)						_g->push((int)1);
            					}
            				}
HXDLIN( 267)				WeightsArray = _g;
            			}
HXLINE( 270)			if (hx::IsNull( EndIndex )) {
HXLINE( 272)				EndIndex = (Objects->get_length() - (int)1);
            			}
HXLINE( 275)			 ::Dynamic Max = (Objects->get_length() - (int)1);
HXDLIN( 275)			Float lowerBound;
HXDLIN( 275)			if ((StartIndex < (int)0)) {
HXLINE( 275)				lowerBound = (int)0;
            			}
            			else {
HXLINE( 275)				lowerBound = StartIndex;
            			}
HXDLIN( 275)			Float StartIndex1;
HXDLIN( 275)			bool StartIndex2;
HXDLIN( 275)			if (hx::IsNotNull( Max )) {
HXLINE( 275)				StartIndex2 = hx::IsGreater( lowerBound,Max );
            			}
            			else {
HXLINE( 275)				StartIndex2 = false;
            			}
HXDLIN( 275)			if (StartIndex2) {
HXLINE( 275)				StartIndex1 = Max;
            			}
            			else {
HXLINE( 275)				StartIndex1 = lowerBound;
            			}
HXDLIN( 275)			StartIndex = ::Std_obj::_hx_int(StartIndex1);
HXLINE( 276)			Float Value = EndIndex;
HXDLIN( 276)			 ::Dynamic Max1 = (Objects->get_length() - (int)1);
HXDLIN( 276)			Float lowerBound1;
HXDLIN( 276)			if ((Value < (int)0)) {
HXLINE( 276)				lowerBound1 = (int)0;
            			}
            			else {
HXLINE( 276)				lowerBound1 = Value;
            			}
HXDLIN( 276)			Float EndIndex1;
HXDLIN( 276)			bool EndIndex2;
HXDLIN( 276)			if (hx::IsNotNull( Max1 )) {
HXLINE( 276)				EndIndex2 = hx::IsGreater( lowerBound1,Max1 );
            			}
            			else {
HXLINE( 276)				EndIndex2 = false;
            			}
HXDLIN( 276)			if (EndIndex2) {
HXLINE( 276)				EndIndex1 = Max1;
            			}
            			else {
HXLINE( 276)				EndIndex1 = lowerBound1;
            			}
HXDLIN( 276)			EndIndex = ::Std_obj::_hx_int(EndIndex1);
HXLINE( 279)			if (hx::IsLess( EndIndex,StartIndex )) {
HXLINE( 281)				StartIndex = (StartIndex + EndIndex);
HXLINE( 282)				EndIndex = (StartIndex - EndIndex);
HXLINE( 283)				StartIndex = (StartIndex - EndIndex);
            			}
HXLINE( 286)			if (hx::IsGreater( EndIndex,(WeightsArray->length - (int)1) )) {
HXLINE( 288)				EndIndex = (WeightsArray->length - (int)1);
            			}
HXLINE( 291)			::Array< Float > _g3 = ::Array_obj< Float >::__new(0);
HXDLIN( 291)			{
HXLINE( 291)				int _g21 = StartIndex;
HXDLIN( 291)				int _g11 = (EndIndex + (int)1);
HXDLIN( 291)				while((_g21 < _g11)){
HXLINE( 291)					_g21 = (_g21 + (int)1);
HXDLIN( 291)					int i1 = (_g21 - (int)1);
HXDLIN( 291)					_g3->push(WeightsArray->__get(i1));
            				}
            			}
HXDLIN( 291)			::flixel::math::FlxRandom_obj::_arrayFloatHelper = _g3;
HXLINE( 292)			selected = Objects->__get(this->weightedPick(::flixel::math::FlxRandom_obj::_arrayFloatHelper));
            		}
HXLINE( 295)		return selected;
            	}


HX_DEFINE_DYNAMIC_FUNC4(FlxRandom_obj,getObject_flixel_group_FlxTypedGroup_T,return )

int FlxRandom_obj::resetInitialSeed(){
            	HX_STACKFRAME(&_hx_pos_eba801adaf62ef5c_49_resetInitialSeed)
HXLINE(  49)		int Value = ::Std_obj::_hx_int((::Math_obj::random() * (int)2147483647));
HXDLIN(  49)		Float lowerBound;
HXDLIN(  49)		if ((Value < (int)1)) {
HXLINE(  49)			lowerBound = (int)1;
            		}
            		else {
HXLINE(  49)			lowerBound = Value;
            		}
HXDLIN(  49)		 ::Dynamic NewSeed;
HXDLIN(  49)		if ((lowerBound > (int)2147483646)) {
HXLINE(  49)			NewSeed = (int)2147483646;
            		}
            		else {
HXLINE(  49)			NewSeed = lowerBound;
            		}
HXDLIN(  49)		int NewSeed1 = ::Std_obj::_hx_int(NewSeed);
HXDLIN(  49)		Float lowerBound1;
HXDLIN(  49)		if ((NewSeed1 < (int)1)) {
HXLINE(  49)			lowerBound1 = (int)1;
            		}
            		else {
HXLINE(  49)			lowerBound1 = NewSeed1;
            		}
HXDLIN(  49)		 ::Dynamic NewSeed2;
HXDLIN(  49)		if ((lowerBound1 > (int)2147483646)) {
HXLINE(  49)			NewSeed2 = (int)2147483646;
            		}
            		else {
HXLINE(  49)			NewSeed2 = lowerBound1;
            		}
HXDLIN(  49)		int NewSeed3 = ::Std_obj::_hx_int(NewSeed2);
HXDLIN(  49)		Float lowerBound2;
HXDLIN(  49)		if ((NewSeed3 < (int)1)) {
HXLINE(  49)			lowerBound2 = (int)1;
            		}
            		else {
HXLINE(  49)			lowerBound2 = NewSeed3;
            		}
HXDLIN(  49)		 ::Dynamic _hx_tmp;
HXDLIN(  49)		if ((lowerBound2 > (int)2147483646)) {
HXLINE(  49)			_hx_tmp = (int)2147483646;
            		}
            		else {
HXLINE(  49)			_hx_tmp = lowerBound2;
            		}
HXDLIN(  49)		return (this->initialSeed = ::Std_obj::_hx_int((this->internalSeed = ::Std_obj::_hx_int(_hx_tmp))));
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxRandom_obj,resetInitialSeed,return )

int FlxRandom_obj::_hx_int(hx::Null< int >  __o_Min,hx::Null< int >  __o_Max,::Array< int > Excludes){
int Min = __o_Min.Default(0);
int Max = __o_Max.Default(2147483647);
            	HX_STACKFRAME(&_hx_pos_eba801adaf62ef5c_63_int)
HXLINE(  63)		bool _hx_tmp;
HXDLIN(  63)		bool _hx_tmp1;
HXDLIN(  63)		if ((Min == (int)0)) {
HXLINE(  63)			_hx_tmp1 = (Max == (int)2147483647);
            		}
            		else {
HXLINE(  63)			_hx_tmp1 = false;
            		}
HXDLIN(  63)		if (_hx_tmp1) {
HXLINE(  63)			_hx_tmp = hx::IsNull( Excludes );
            		}
            		else {
HXLINE(  63)			_hx_tmp = false;
            		}
HXDLIN(  63)		if (_hx_tmp) {
HXLINE(  65)			return ::Std_obj::_hx_int((this->internalSeed = hx::Mod((this->internalSeed * ((Float)48271.0)),(int)2147483647)));
            		}
            		else {
HXLINE(  67)			if ((Min == Max)) {
HXLINE(  69)				return Min;
            			}
            			else {
HXLINE(  74)				if ((Min > Max)) {
HXLINE(  76)					Min = (Min + Max);
HXLINE(  77)					Max = (Min - Max);
HXLINE(  78)					Min = (Min - Max);
            				}
HXLINE(  81)				if (hx::IsNull( Excludes )) {
HXLINE(  83)					Float _hx_tmp2 = ((Float)(this->internalSeed = hx::Mod((this->internalSeed * ((Float)48271.0)),(int)2147483647)) / (Float)(int)2147483647);
HXDLIN(  83)					return ::Math_obj::floor((Min + (_hx_tmp2 * ((Max - Min) + (int)1))));
            				}
            				else {
HXLINE(  87)					int result = (int)0;
HXLINE(  89)					while(true){
HXLINE(  91)						Float result1 = ((Float)(this->internalSeed = hx::Mod((this->internalSeed * ((Float)48271.0)),(int)2147483647)) / (Float)(int)2147483647);
HXDLIN(  91)						result = ::Math_obj::floor((Min + (result1 * ((Max - Min) + (int)1))));
HXLINE(  89)						if (!((Excludes->indexOf(result,null()) >= (int)0))) {
HXLINE(  89)							goto _hx_goto_5;
            						}
            					}
            					_hx_goto_5:;
HXLINE(  95)					return result;
            				}
            			}
            		}
HXLINE(  63)		return (int)0;
            	}


HX_DEFINE_DYNAMIC_FUNC3(FlxRandom_obj,_hx_int,return )

Float FlxRandom_obj::_hx_float(hx::Null< Float >  __o_Min,hx::Null< Float >  __o_Max,::Array< Float > Excludes){
Float Min = __o_Min.Default(0);
Float Max = __o_Max.Default(1);
            	HX_STACKFRAME(&_hx_pos_eba801adaf62ef5c_110_float)
HXLINE( 111)		Float result = (int)0;
HXLINE( 113)		bool _hx_tmp;
HXDLIN( 113)		bool _hx_tmp1;
HXDLIN( 113)		if ((Min == (int)0)) {
HXLINE( 113)			_hx_tmp1 = (Max == (int)1);
            		}
            		else {
HXLINE( 113)			_hx_tmp1 = false;
            		}
HXDLIN( 113)		if (_hx_tmp1) {
HXLINE( 113)			_hx_tmp = hx::IsNull( Excludes );
            		}
            		else {
HXLINE( 113)			_hx_tmp = false;
            		}
HXDLIN( 113)		if (_hx_tmp) {
HXLINE( 115)			return ((Float)(this->internalSeed = hx::Mod((this->internalSeed * ((Float)48271.0)),(int)2147483647)) / (Float)(int)2147483647);
            		}
            		else {
HXLINE( 117)			if ((Min == Max)) {
HXLINE( 119)				result = Min;
            			}
            			else {
HXLINE( 124)				if ((Min > Max)) {
HXLINE( 126)					Min = (Min + Max);
HXLINE( 127)					Max = (Min - Max);
HXLINE( 128)					Min = (Min - Max);
            				}
HXLINE( 131)				if (hx::IsNull( Excludes )) {
HXLINE( 133)					Float result1 = ((Float)(this->internalSeed = hx::Mod((this->internalSeed * ((Float)48271.0)),(int)2147483647)) / (Float)(int)2147483647);
HXDLIN( 133)					result = (Min + (result1 * (Max - Min)));
            				}
            				else {
HXLINE( 137)					while(true){
HXLINE( 139)						Float result2 = ((Float)(this->internalSeed = hx::Mod((this->internalSeed * ((Float)48271.0)),(int)2147483647)) / (Float)(int)2147483647);
HXDLIN( 139)						result = (Min + (result2 * (Max - Min)));
HXLINE( 137)						if (!((Excludes->indexOf(result,null()) >= (int)0))) {
HXLINE( 137)							goto _hx_goto_7;
            						}
            					}
            					_hx_goto_7:;
            				}
            			}
            		}
HXLINE( 145)		return result;
            	}


HX_DEFINE_DYNAMIC_FUNC3(FlxRandom_obj,_hx_float,return )

Float FlxRandom_obj::floatNormal(hx::Null< Float >  __o_Mean,hx::Null< Float >  __o_StdDev){
Float Mean = __o_Mean.Default(0);
Float StdDev = __o_StdDev.Default(1);
            	HX_STACKFRAME(&_hx_pos_eba801adaf62ef5c_166_floatNormal)
HXLINE( 167)		if (this->_hasFloatNormalSpare) {
HXLINE( 169)			this->_hasFloatNormalSpare = false;
HXLINE( 170)			Float scale = (StdDev * this->_floatNormalRho);
HXLINE( 171)			return (Mean + (scale * this->_floatNormalRand2));
            		}
HXLINE( 174)		this->_hasFloatNormalSpare = true;
HXLINE( 176)		Float theta = this->_twoPI;
HXDLIN( 176)		Float theta1 = (theta * ((Float)(this->internalSeed = hx::Mod((this->internalSeed * ((Float)48271.0)),(int)2147483647)) / (Float)(int)2147483647));
HXLINE( 177)		this->_floatNormalRho = ::Math_obj::sqrt(((int)-2 * ::Math_obj::log(((int)1 - ((Float)(this->internalSeed = hx::Mod((this->internalSeed * ((Float)48271.0)),(int)2147483647)) / (Float)(int)2147483647)))));
HXLINE( 178)		Float scale1 = (StdDev * this->_floatNormalRho);
HXLINE( 180)		this->_floatNormalRand1 = ::Math_obj::cos(theta1);
HXLINE( 181)		this->_floatNormalRand2 = ::Math_obj::sin(theta1);
HXLINE( 183)		return (Mean + (scale1 * this->_floatNormalRand1));
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxRandom_obj,floatNormal,return )

bool FlxRandom_obj::_hx_bool(hx::Null< Float >  __o_Chance){
Float Chance = __o_Chance.Default(50);
            	HX_STACKFRAME(&_hx_pos_eba801adaf62ef5c_197_bool)
HXLINE( 197)		return (this->_hx_float((int)0,(int)100,null()) < Chance);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxRandom_obj,_hx_bool,return )

int FlxRandom_obj::sign(hx::Null< Float >  __o_Chance){
Float Chance = __o_Chance.Default(50);
            	HX_STACKFRAME(&_hx_pos_eba801adaf62ef5c_209_sign)
HXLINE( 209)		if ((this->_hx_float((int)0,(int)100,null()) < Chance)) {
HXLINE( 209)			return (int)1;
            		}
            		else {
HXLINE( 209)			return (int)-1;
            		}
HXDLIN( 209)		return (int)0;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxRandom_obj,sign,return )

int FlxRandom_obj::weightedPick(::Array< Float > WeightsArray){
            	HX_STACKFRAME(&_hx_pos_eba801adaf62ef5c_222_weightedPick)
HXLINE( 223)		Float totalWeight = (int)0;
HXLINE( 224)		int pick = (int)0;
HXLINE( 226)		{
HXLINE( 226)			int _g = (int)0;
HXDLIN( 226)			while((_g < WeightsArray->length)){
HXLINE( 226)				Float i = WeightsArray->__get(_g);
HXDLIN( 226)				_g = (_g + (int)1);
HXLINE( 228)				totalWeight = (totalWeight + i);
            			}
            		}
HXLINE( 231)		totalWeight = this->_hx_float((int)0,totalWeight,null());
HXLINE( 233)		{
HXLINE( 233)			int _g1 = (int)0;
HXDLIN( 233)			int _g2 = WeightsArray->length;
HXDLIN( 233)			while((_g1 < _g2)){
HXLINE( 233)				_g1 = (_g1 + (int)1);
HXDLIN( 233)				int i1 = (_g1 - (int)1);
HXLINE( 235)				if ((totalWeight < WeightsArray->__get(i1))) {
HXLINE( 237)					pick = i1;
HXLINE( 238)					goto _hx_goto_13;
            				}
HXLINE( 241)				totalWeight = (totalWeight - WeightsArray->__get(i1));
            			}
            			_hx_goto_13:;
            		}
HXLINE( 244)		return pick;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxRandom_obj,weightedPick,return )

int FlxRandom_obj::color( ::Dynamic Min, ::Dynamic Max, ::Dynamic Alpha,hx::Null< bool >  __o_GreyScale){
bool GreyScale = __o_GreyScale.Default(false);
            	HX_STACKFRAME(&_hx_pos_eba801adaf62ef5c_357_color)
HXLINE( 358)		int red;
HXLINE( 359)		int green;
HXLINE( 360)		int blue;
HXLINE( 361)		int alpha;
HXLINE( 363)		bool _hx_tmp;
HXDLIN( 363)		if (hx::IsNull( Min )) {
HXLINE( 363)			_hx_tmp = hx::IsNull( Max );
            		}
            		else {
HXLINE( 363)			_hx_tmp = false;
            		}
HXDLIN( 363)		if (_hx_tmp) {
HXLINE( 365)			red = this->_hx_int((int)0,(int)255,null());
HXLINE( 366)			green = this->_hx_int((int)0,(int)255,null());
HXLINE( 367)			blue = this->_hx_int((int)0,(int)255,null());
HXLINE( 368)			if (hx::IsNull( Alpha )) {
HXLINE( 368)				alpha = this->_hx_int((int)0,(int)255,null());
            			}
            			else {
HXLINE( 368)				alpha = Alpha;
            			}
            		}
            		else {
HXLINE( 370)			if (hx::IsNull( Max )) {
HXLINE( 372)				red = this->_hx_int(((int)((int)Min >> (int)(int)16) & (int)(int)255),(int)255,null());
HXLINE( 373)				if (GreyScale) {
HXLINE( 373)					green = red;
            				}
            				else {
HXLINE( 373)					green = this->_hx_int(((int)((int)Min >> (int)(int)8) & (int)(int)255),(int)255,null());
            				}
HXLINE( 374)				if (GreyScale) {
HXLINE( 374)					blue = red;
            				}
            				else {
HXLINE( 374)					blue = this->_hx_int(((int)Min & (int)(int)255),(int)255,null());
            				}
HXLINE( 375)				if (hx::IsNull( Alpha )) {
HXLINE( 375)					alpha = this->_hx_int(((int)((int)Min >> (int)(int)24) & (int)(int)255),(int)255,null());
            				}
            				else {
HXLINE( 375)					alpha = Alpha;
            				}
            			}
            			else {
HXLINE( 377)				if (hx::IsNull( Min )) {
HXLINE( 379)					red = this->_hx_int((int)0,((int)((int)Max >> (int)(int)16) & (int)(int)255),null());
HXLINE( 380)					if (GreyScale) {
HXLINE( 380)						green = red;
            					}
            					else {
HXLINE( 380)						green = this->_hx_int((int)0,((int)((int)Max >> (int)(int)8) & (int)(int)255),null());
            					}
HXLINE( 381)					if (GreyScale) {
HXLINE( 381)						blue = red;
            					}
            					else {
HXLINE( 381)						blue = this->_hx_int((int)0,((int)Max & (int)(int)255),null());
            					}
HXLINE( 382)					if (hx::IsNull( Alpha )) {
HXLINE( 382)						alpha = this->_hx_int((int)0,((int)((int)Max >> (int)(int)24) & (int)(int)255),null());
            					}
            					else {
HXLINE( 382)						alpha = Alpha;
            					}
            				}
            				else {
HXLINE( 386)					red = this->_hx_int(((int)((int)Min >> (int)(int)16) & (int)(int)255),((int)((int)Max >> (int)(int)16) & (int)(int)255),null());
HXLINE( 387)					if (GreyScale) {
HXLINE( 387)						green = red;
            					}
            					else {
HXLINE( 387)						green = this->_hx_int(((int)((int)Min >> (int)(int)8) & (int)(int)255),((int)((int)Max >> (int)(int)8) & (int)(int)255),null());
            					}
HXLINE( 388)					if (GreyScale) {
HXLINE( 388)						blue = red;
            					}
            					else {
HXLINE( 388)						blue = this->_hx_int(((int)Min & (int)(int)255),((int)Max & (int)(int)255),null());
            					}
HXLINE( 389)					if (hx::IsNull( Alpha )) {
HXLINE( 389)						alpha = this->_hx_int(((int)((int)Min >> (int)(int)24) & (int)(int)255),((int)((int)Max >> (int)(int)24) & (int)(int)255),null());
            					}
            					else {
HXLINE( 389)						alpha = Alpha;
            					}
            				}
            			}
            		}
HXLINE( 392)		int color = ::flixel::util::_FlxColor::FlxColor_Impl__obj::_new(null());
HXDLIN( 392)		{
HXLINE( 392)			color = ((int)color & (int)(int)-16711681);
HXDLIN( 392)			int color1;
HXDLIN( 392)			if ((red > (int)255)) {
HXLINE( 392)				color1 = (int)255;
            			}
            			else {
HXLINE( 392)				if ((red < (int)0)) {
HXLINE( 392)					color1 = (int)0;
            				}
            				else {
HXLINE( 392)					color1 = red;
            				}
            			}
HXDLIN( 392)			color = ((int)color | (int)((int)color1 << (int)(int)16));
            		}
HXDLIN( 392)		{
HXLINE( 392)			color = ((int)color & (int)(int)-65281);
HXDLIN( 392)			int color2;
HXDLIN( 392)			if ((green > (int)255)) {
HXLINE( 392)				color2 = (int)255;
            			}
            			else {
HXLINE( 392)				if ((green < (int)0)) {
HXLINE( 392)					color2 = (int)0;
            				}
            				else {
HXLINE( 392)					color2 = green;
            				}
            			}
HXDLIN( 392)			color = ((int)color | (int)((int)color2 << (int)(int)8));
            		}
HXDLIN( 392)		{
HXLINE( 392)			color = ((int)color & (int)(int)-256);
HXDLIN( 392)			int color3;
HXDLIN( 392)			if ((blue > (int)255)) {
HXLINE( 392)				color3 = (int)255;
            			}
            			else {
HXLINE( 392)				if ((blue < (int)0)) {
HXLINE( 392)					color3 = (int)0;
            				}
            				else {
HXLINE( 392)					color3 = blue;
            				}
            			}
HXDLIN( 392)			color = ((int)color | (int)color3);
            		}
HXDLIN( 392)		{
HXLINE( 392)			color = ((int)color & (int)(int)16777215);
HXDLIN( 392)			int color4;
HXDLIN( 392)			if ((alpha > (int)255)) {
HXLINE( 392)				color4 = (int)255;
            			}
            			else {
HXLINE( 392)				if ((alpha < (int)0)) {
HXLINE( 392)					color4 = (int)0;
            				}
            				else {
HXLINE( 392)					color4 = alpha;
            				}
            			}
HXDLIN( 392)			color = ((int)color | (int)((int)color4 << (int)(int)24));
            		}
HXDLIN( 392)		return color;
            	}


HX_DEFINE_DYNAMIC_FUNC4(FlxRandom_obj,color,return )

Float FlxRandom_obj::generate(){
            	HX_STACKFRAME(&_hx_pos_eba801adaf62ef5c_403_generate)
HXLINE( 403)		return (this->internalSeed = hx::Mod((this->internalSeed * ((Float)48271.0)),(int)2147483647));
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxRandom_obj,generate,return )

int FlxRandom_obj::set_initialSeed(int NewSeed){
            	HX_STACKFRAME(&_hx_pos_eba801adaf62ef5c_418_set_initialSeed)
HXLINE( 418)		Float lowerBound;
HXDLIN( 418)		if ((NewSeed < (int)1)) {
HXLINE( 418)			lowerBound = (int)1;
            		}
            		else {
HXLINE( 418)			lowerBound = NewSeed;
            		}
HXDLIN( 418)		 ::Dynamic NewSeed1;
HXDLIN( 418)		if ((lowerBound > (int)2147483646)) {
HXLINE( 418)			NewSeed1 = (int)2147483646;
            		}
            		else {
HXLINE( 418)			NewSeed1 = lowerBound;
            		}
HXDLIN( 418)		int NewSeed2 = ::Std_obj::_hx_int(NewSeed1);
HXDLIN( 418)		Float lowerBound1;
HXDLIN( 418)		if ((NewSeed2 < (int)1)) {
HXLINE( 418)			lowerBound1 = (int)1;
            		}
            		else {
HXLINE( 418)			lowerBound1 = NewSeed2;
            		}
HXDLIN( 418)		 ::Dynamic _hx_tmp;
HXDLIN( 418)		if ((lowerBound1 > (int)2147483646)) {
HXLINE( 418)			_hx_tmp = (int)2147483646;
            		}
            		else {
HXLINE( 418)			_hx_tmp = lowerBound1;
            		}
HXDLIN( 418)		return (this->initialSeed = ::Std_obj::_hx_int((this->internalSeed = ::Std_obj::_hx_int(_hx_tmp))));
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxRandom_obj,set_initialSeed,return )

int FlxRandom_obj::get_currentSeed(){
            	HX_STACKFRAME(&_hx_pos_eba801adaf62ef5c_426_get_currentSeed)
HXLINE( 426)		return ::Std_obj::_hx_int(this->internalSeed);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxRandom_obj,get_currentSeed,return )

int FlxRandom_obj::set_currentSeed(int NewSeed){
            	HX_STACKFRAME(&_hx_pos_eba801adaf62ef5c_434_set_currentSeed)
HXLINE( 434)		Float lowerBound;
HXDLIN( 434)		if ((NewSeed < (int)1)) {
HXLINE( 434)			lowerBound = (int)1;
            		}
            		else {
HXLINE( 434)			lowerBound = NewSeed;
            		}
HXDLIN( 434)		 ::Dynamic _hx_tmp;
HXDLIN( 434)		if ((lowerBound > (int)2147483646)) {
HXLINE( 434)			_hx_tmp = (int)2147483646;
            		}
            		else {
HXLINE( 434)			_hx_tmp = lowerBound;
            		}
HXDLIN( 434)		return ::Std_obj::_hx_int((this->internalSeed = ::Std_obj::_hx_int(_hx_tmp)));
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxRandom_obj,set_currentSeed,return )

int FlxRandom_obj::rangeBound(int Value){
            	HX_STACKFRAME(&_hx_pos_eba801adaf62ef5c_442_rangeBound)
HXLINE( 442)		Float lowerBound;
HXDLIN( 442)		if ((Value < (int)1)) {
HXLINE( 442)			lowerBound = (int)1;
            		}
            		else {
HXLINE( 442)			lowerBound = Value;
            		}
HXDLIN( 442)		 ::Dynamic _hx_tmp;
HXDLIN( 442)		if ((lowerBound > (int)2147483646)) {
HXLINE( 442)			_hx_tmp = (int)2147483646;
            		}
            		else {
HXLINE( 442)			_hx_tmp = lowerBound;
            		}
HXDLIN( 442)		return ::Std_obj::_hx_int(_hx_tmp);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxRandom_obj,rangeBound,return )

::Array< Float > FlxRandom_obj::_arrayFloatHelper;

Float FlxRandom_obj::MULTIPLIER;

int FlxRandom_obj::MODULUS;


hx::ObjectPtr< FlxRandom_obj > FlxRandom_obj::__new( ::Dynamic InitialSeed) {
	hx::ObjectPtr< FlxRandom_obj > __this = new FlxRandom_obj();
	__this->__construct(InitialSeed);
	return __this;
}

hx::ObjectPtr< FlxRandom_obj > FlxRandom_obj::__alloc(hx::Ctx *_hx_ctx, ::Dynamic InitialSeed) {
	FlxRandom_obj *__this = (FlxRandom_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(FlxRandom_obj), false, "flixel.math.FlxRandom"));
	*(void **)__this = FlxRandom_obj::_hx_vtable;
	__this->__construct(InitialSeed);
	return __this;
}

FlxRandom_obj::FlxRandom_obj()
{
}

hx::Val FlxRandom_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"int") ) { return hx::Val( _hx_int_dyn()); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"bool") ) { return hx::Val( _hx_bool_dyn()); }
		if (HX_FIELD_EQ(inName,"sign") ) { return hx::Val( sign_dyn()); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"float") ) { return hx::Val( _hx_float_dyn()); }
		if (HX_FIELD_EQ(inName,"color") ) { return hx::Val( color_dyn()); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_twoPI") ) { return hx::Val( _twoPI); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"generate") ) { return hx::Val( generate_dyn()); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"initialSeed") ) { return hx::Val( initialSeed); }
		if (HX_FIELD_EQ(inName,"currentSeed") ) { if (inCallProp == hx::paccAlways) return hx::Val(get_currentSeed()); }
		if (HX_FIELD_EQ(inName,"floatNormal") ) { return hx::Val( floatNormal_dyn()); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"weightedPick") ) { return hx::Val( weightedPick_dyn()); }
		if (HX_FIELD_EQ(inName,"internalSeed") ) { return hx::Val( internalSeed); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_floatNormalRho") ) { return hx::Val( _floatNormalRho); }
		if (HX_FIELD_EQ(inName,"set_initialSeed") ) { return hx::Val( set_initialSeed_dyn()); }
		if (HX_FIELD_EQ(inName,"get_currentSeed") ) { return hx::Val( get_currentSeed_dyn()); }
		if (HX_FIELD_EQ(inName,"set_currentSeed") ) { return hx::Val( set_currentSeed_dyn()); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"resetInitialSeed") ) { return hx::Val( resetInitialSeed_dyn()); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_floatNormalRand1") ) { return hx::Val( _floatNormalRand1); }
		if (HX_FIELD_EQ(inName,"_floatNormalRand2") ) { return hx::Val( _floatNormalRand2); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_hasFloatNormalSpare") ) { return hx::Val( _hasFloatNormalSpare); }
		break;
	case 38:
		if (HX_FIELD_EQ(inName,"getObject_flixel_group_FlxTypedGroup_T") ) { return hx::Val( getObject_flixel_group_FlxTypedGroup_T_dyn()); }
	}
	return super::__Field(inName,inCallProp);
}

bool FlxRandom_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"rangeBound") ) { outValue = rangeBound_dyn(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_arrayFloatHelper") ) { outValue = _arrayFloatHelper; return true; }
	}
	return false;
}

hx::Val FlxRandom_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_twoPI") ) { _twoPI=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"initialSeed") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_initialSeed(inValue) );initialSeed=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"currentSeed") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_currentSeed(inValue) ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"internalSeed") ) { internalSeed=inValue.Cast< Float >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_floatNormalRho") ) { _floatNormalRho=inValue.Cast< Float >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_floatNormalRand1") ) { _floatNormalRand1=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_floatNormalRand2") ) { _floatNormalRand2=inValue.Cast< Float >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_hasFloatNormalSpare") ) { _hasFloatNormalSpare=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool FlxRandom_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 17:
		if (HX_FIELD_EQ(inName,"_arrayFloatHelper") ) { _arrayFloatHelper=ioValue.Cast< ::Array< Float > >(); return true; }
	}
	return false;
}

void FlxRandom_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("initialSeed","\x15","\x54","\x75","\x28"));
	outFields->push(HX_HCSTRING("currentSeed","\x4a","\x5e","\xe2","\x84"));
	outFields->push(HX_HCSTRING("_hasFloatNormalSpare","\x6f","\x30","\x00","\xbe"));
	outFields->push(HX_HCSTRING("_floatNormalRand1","\x68","\x21","\x2b","\xc7"));
	outFields->push(HX_HCSTRING("_floatNormalRand2","\x69","\x21","\x2b","\xc7"));
	outFields->push(HX_HCSTRING("_twoPI","\xc6","\x75","\x5f","\x15"));
	outFields->push(HX_HCSTRING("_floatNormalRho","\x75","\x83","\x0c","\x0d"));
	outFields->push(HX_HCSTRING("internalSeed","\x4e","\xfb","\xd0","\x37"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo FlxRandom_obj_sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(FlxRandom_obj,initialSeed),HX_HCSTRING("initialSeed","\x15","\x54","\x75","\x28")},
	{hx::fsBool,(int)offsetof(FlxRandom_obj,_hasFloatNormalSpare),HX_HCSTRING("_hasFloatNormalSpare","\x6f","\x30","\x00","\xbe")},
	{hx::fsFloat,(int)offsetof(FlxRandom_obj,_floatNormalRand1),HX_HCSTRING("_floatNormalRand1","\x68","\x21","\x2b","\xc7")},
	{hx::fsFloat,(int)offsetof(FlxRandom_obj,_floatNormalRand2),HX_HCSTRING("_floatNormalRand2","\x69","\x21","\x2b","\xc7")},
	{hx::fsFloat,(int)offsetof(FlxRandom_obj,_twoPI),HX_HCSTRING("_twoPI","\xc6","\x75","\x5f","\x15")},
	{hx::fsFloat,(int)offsetof(FlxRandom_obj,_floatNormalRho),HX_HCSTRING("_floatNormalRho","\x75","\x83","\x0c","\x0d")},
	{hx::fsFloat,(int)offsetof(FlxRandom_obj,internalSeed),HX_HCSTRING("internalSeed","\x4e","\xfb","\xd0","\x37")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo FlxRandom_obj_sStaticStorageInfo[] = {
	{hx::fsObject /*Array< Float >*/ ,(void *) &FlxRandom_obj::_arrayFloatHelper,HX_HCSTRING("_arrayFloatHelper","\x70","\x91","\x03","\x2c")},
	{hx::fsFloat,(void *) &FlxRandom_obj::MULTIPLIER,HX_HCSTRING("MULTIPLIER","\x81","\x5b","\x22","\xf3")},
	{hx::fsInt,(void *) &FlxRandom_obj::MODULUS,HX_HCSTRING("MODULUS","\x17","\xc4","\xce","\x77")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String FlxRandom_obj_sMemberFields[] = {
	HX_HCSTRING("getObject_flixel_group_FlxTypedGroup_T","\x63","\x56","\xb1","\x8d"),
	HX_HCSTRING("initialSeed","\x15","\x54","\x75","\x28"),
	HX_HCSTRING("resetInitialSeed","\x86","\xe6","\xeb","\x4a"),
	HX_HCSTRING("int","\xef","\x0c","\x50","\x00"),
	HX_HCSTRING("float","\x9c","\xc5","\x96","\x02"),
	HX_HCSTRING("_hasFloatNormalSpare","\x6f","\x30","\x00","\xbe"),
	HX_HCSTRING("_floatNormalRand1","\x68","\x21","\x2b","\xc7"),
	HX_HCSTRING("_floatNormalRand2","\x69","\x21","\x2b","\xc7"),
	HX_HCSTRING("_twoPI","\xc6","\x75","\x5f","\x15"),
	HX_HCSTRING("_floatNormalRho","\x75","\x83","\x0c","\x0d"),
	HX_HCSTRING("floatNormal","\xe3","\xc8","\x8a","\xd7"),
	HX_HCSTRING("bool","\x2a","\x84","\x1b","\x41"),
	HX_HCSTRING("sign","\x3d","\x90","\x53","\x4c"),
	HX_HCSTRING("weightedPick","\x58","\x64","\xef","\x64"),
	HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"),
	HX_HCSTRING("generate","\x35","\x5f","\xa2","\xd9"),
	HX_HCSTRING("internalSeed","\x4e","\xfb","\xd0","\x37"),
	HX_HCSTRING("set_initialSeed","\xb8","\x88","\x22","\xe5"),
	HX_HCSTRING("get_currentSeed","\xe1","\x15","\xc4","\x45"),
	HX_HCSTRING("set_currentSeed","\xed","\x92","\x8f","\x41"),
	::String(null()) };

static void FlxRandom_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxRandom_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxRandom_obj::_arrayFloatHelper,"_arrayFloatHelper");
	HX_MARK_MEMBER_NAME(FlxRandom_obj::MULTIPLIER,"MULTIPLIER");
	HX_MARK_MEMBER_NAME(FlxRandom_obj::MODULUS,"MODULUS");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FlxRandom_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxRandom_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxRandom_obj::_arrayFloatHelper,"_arrayFloatHelper");
	HX_VISIT_MEMBER_NAME(FlxRandom_obj::MULTIPLIER,"MULTIPLIER");
	HX_VISIT_MEMBER_NAME(FlxRandom_obj::MODULUS,"MODULUS");
};

#endif

hx::Class FlxRandom_obj::__mClass;

static ::String FlxRandom_obj_sStaticFields[] = {
	HX_HCSTRING("rangeBound","\x41","\x8d","\xa7","\x89"),
	HX_HCSTRING("_arrayFloatHelper","\x70","\x91","\x03","\x2c"),
	HX_HCSTRING("MULTIPLIER","\x81","\x5b","\x22","\xf3"),
	HX_HCSTRING("MODULUS","\x17","\xc4","\xce","\x77"),
	::String(null())
};

void FlxRandom_obj::__register()
{
	hx::Object *dummy = new FlxRandom_obj;
	FlxRandom_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.math.FlxRandom","\xa1","\x6b","\x64","\x63");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxRandom_obj::__GetStatic;
	__mClass->mSetStaticField = &FlxRandom_obj::__SetStatic;
	__mClass->mMarkFunc = FlxRandom_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(FlxRandom_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(FlxRandom_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxRandom_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FlxRandom_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxRandom_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxRandom_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void FlxRandom_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_eba801adaf62ef5c_448_boot)
HXLINE( 448)		_arrayFloatHelper = null();
            	}
{
            	HX_STACKFRAME(&_hx_pos_eba801adaf62ef5c_459_boot)
HXLINE( 459)		MULTIPLIER = ((Float)48271.0);
            	}
{
            	HX_STACKFRAME(&_hx_pos_eba801adaf62ef5c_460_boot)
HXLINE( 460)		MODULUS = (int)2147483647;
            	}
}

} // end namespace flixel
} // end namespace math
