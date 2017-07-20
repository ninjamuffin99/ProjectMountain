// Generated by Haxe 3.4.0
#ifndef INCLUDED_flixel_system_scaleModes_RatioScaleMode
#define INCLUDED_flixel_system_scaleModes_RatioScaleMode

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_system_scaleModes_BaseScaleMode
#include <flixel/system/scaleModes/BaseScaleMode.h>
#endif
HX_DECLARE_CLASS3(flixel,_hx_system,scaleModes,BaseScaleMode)
HX_DECLARE_CLASS3(flixel,_hx_system,scaleModes,RatioScaleMode)

namespace flixel{
namespace _hx_system{
namespace scaleModes{


class HXCPP_CLASS_ATTRIBUTES RatioScaleMode_obj : public  ::flixel::_hx_system::scaleModes::BaseScaleMode_obj
{
	public:
		typedef  ::flixel::_hx_system::scaleModes::BaseScaleMode_obj super;
		typedef RatioScaleMode_obj OBJ_;
		RatioScaleMode_obj();

	public:
		enum { _hx_ClassId = 0x5682c573 };

		void __construct(hx::Null< bool >  __o_fillScreen);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.system.scaleModes.RatioScaleMode")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"flixel.system.scaleModes.RatioScaleMode"); }
		static hx::ObjectPtr< RatioScaleMode_obj > __new(hx::Null< bool >  __o_fillScreen);
		static hx::ObjectPtr< RatioScaleMode_obj > __alloc(hx::Ctx *_hx_ctx,hx::Null< bool >  __o_fillScreen);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~RatioScaleMode_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("RatioScaleMode","\xa2","\xa0","\x5c","\x9d"); }

		bool fillScreen;
		void updateGameSize(int Width,int Height);

};

} // end namespace flixel
} // end namespace system
} // end namespace scaleModes

#endif /* INCLUDED_flixel_system_scaleModes_RatioScaleMode */ 
