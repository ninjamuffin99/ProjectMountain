// Generated by Haxe 3.4.0
#ifndef INCLUDED_flixel_util_FlxPool_flixel_math_FlxVector
#define INCLUDED_flixel_util_FlxPool_flixel_math_FlxVector

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_util_IFlxPool
#include <flixel/util/IFlxPool.h>
#endif
HX_DECLARE_CLASS2(flixel,math,FlxPoint)
HX_DECLARE_CLASS2(flixel,math,FlxVector)
HX_DECLARE_CLASS2(flixel,util,FlxPool_flixel_math_FlxVector)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxPool)
HX_DECLARE_CLASS2(flixel,util,IFlxPooled)

namespace flixel{
namespace util{


class HXCPP_CLASS_ATTRIBUTES FlxPool_flixel_math_FlxVector_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef FlxPool_flixel_math_FlxVector_obj OBJ_;
		FlxPool_flixel_math_FlxVector_obj();

	public:
		enum { _hx_ClassId = 0x30a9aef2 };

		void __construct(hx::Class classObj);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.util.FlxPool_flixel_math_FlxVector")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"flixel.util.FlxPool_flixel_math_FlxVector"); }
		static hx::ObjectPtr< FlxPool_flixel_math_FlxVector_obj > __new(hx::Class classObj);
		static hx::ObjectPtr< FlxPool_flixel_math_FlxVector_obj > __alloc(hx::Ctx *_hx_ctx,hx::Class classObj);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxPool_flixel_math_FlxVector_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::cpp::VirtualArray clear_615cc599();
		::String __ToString() const { return HX_HCSTRING("FlxPool_flixel_math_FlxVector","\x10","\x7e","\xb4","\x65"); }

		::Array< ::Dynamic> _pool;
		hx::Class _class;
		int _count;
		 ::flixel::math::FlxVector get();
		::Dynamic get_dyn();

		void put( ::flixel::math::FlxVector obj);
		::Dynamic put_dyn();

		void putUnsafe( ::flixel::math::FlxVector obj);
		::Dynamic putUnsafe_dyn();

		void preAllocate(int numObjects);
		::Dynamic preAllocate_dyn();

		::Array< ::Dynamic> clear();
		::Dynamic clear_dyn();

		int get_length();
		::Dynamic get_length_dyn();

};

} // end namespace flixel
} // end namespace util

#endif /* INCLUDED_flixel_util_FlxPool_flixel_math_FlxVector */ 
