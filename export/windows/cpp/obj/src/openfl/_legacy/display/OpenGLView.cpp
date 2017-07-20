// Generated by Haxe 3.4.0
#include <hxcpp.h>

#ifndef INCLUDED_openfl__legacy_display_DirectRenderer
#include <openfl/_legacy/display/DirectRenderer.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObject
#include <openfl/_legacy/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_OpenGLView
#include <openfl/_legacy/display/OpenGLView.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_0ded4ddec4cce433_19_new,"openfl._legacy.display.OpenGLView","new",0x99376116,"openfl._legacy.display.OpenGLView.new","openfl/_legacy/display/OpenGLView.hx",19,0xa91fb237)
HX_LOCAL_STACK_FRAME(_hx_pos_0ded4ddec4cce433_33_get_isSupported,"openfl._legacy.display.OpenGLView","get_isSupported",0x7340fe31,"openfl._legacy.display.OpenGLView.get_isSupported","openfl/_legacy/display/OpenGLView.hx",33,0xa91fb237)
HX_LOCAL_STACK_FRAME(_hx_pos_0ded4ddec4cce433_11_boot,"openfl._legacy.display.OpenGLView","boot",0x6f5692bc,"openfl._legacy.display.OpenGLView.boot","openfl/_legacy/display/OpenGLView.hx",11,0xa91fb237)
HX_LOCAL_STACK_FRAME(_hx_pos_0ded4ddec4cce433_12_boot,"openfl._legacy.display.OpenGLView","boot",0x6f5692bc,"openfl._legacy.display.OpenGLView.boot","openfl/_legacy/display/OpenGLView.hx",12,0xa91fb237)
namespace openfl{
namespace _legacy{
namespace display{

void OpenGLView_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_0ded4ddec4cce433_19_new)
HXLINE(  19)		super::__construct(HX_("OpenGLView",94,0e,ac,6e));
            	}

Dynamic OpenGLView_obj::__CreateEmpty() { return new OpenGLView_obj; }

void *OpenGLView_obj::_hx_vtable = 0;

Dynamic OpenGLView_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< OpenGLView_obj > _hx_result = new OpenGLView_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool OpenGLView_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x25b00754) {
		if (inClassId<=(int)0x14aba93e) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x14aba93e;
		} else {
			return inClassId==(int)0x25b00754;
		}
	} else {
		return inClassId==(int)0x2e68a682 || inClassId==(int)0x3d2d7617;
	}
}

::String OpenGLView_obj::CONTEXT_LOST;

::String OpenGLView_obj::CONTEXT_RESTORED;

bool OpenGLView_obj::isSupported;

bool OpenGLView_obj::get_isSupported(){
            	HX_STACKFRAME(&_hx_pos_0ded4ddec4cce433_33_get_isSupported)
HXLINE(  33)		return true;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(OpenGLView_obj,get_isSupported,return )


hx::ObjectPtr< OpenGLView_obj > OpenGLView_obj::__new() {
	hx::ObjectPtr< OpenGLView_obj > __this = new OpenGLView_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< OpenGLView_obj > OpenGLView_obj::__alloc(hx::Ctx *_hx_ctx) {
	OpenGLView_obj *__this = (OpenGLView_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(OpenGLView_obj), true, "openfl._legacy.display.OpenGLView"));
	*(void **)__this = OpenGLView_obj::_hx_vtable;
	openfl::_legacy::display::DirectRenderer_obj::__alloc_dynamic_functions(_hx_ctx,__this);
	__this->__construct();
	return __this;
}

OpenGLView_obj::OpenGLView_obj()
{
}

bool OpenGLView_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"isSupported") ) { outValue = inCallProp == hx::paccAlways ? get_isSupported() : isSupported; return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_isSupported") ) { outValue = get_isSupported_dyn(); return true; }
	}
	return false;
}

bool OpenGLView_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"isSupported") ) { isSupported=ioValue.Cast< bool >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *OpenGLView_obj_sMemberStorageInfo = 0;
static hx::StaticInfo OpenGLView_obj_sStaticStorageInfo[] = {
	{hx::fsString,(void *) &OpenGLView_obj::CONTEXT_LOST,HX_HCSTRING("CONTEXT_LOST","\x94","\x35","\x21","\xf9")},
	{hx::fsString,(void *) &OpenGLView_obj::CONTEXT_RESTORED,HX_HCSTRING("CONTEXT_RESTORED","\x06","\xe9","\x7b","\xfd")},
	{hx::fsBool,(void *) &OpenGLView_obj::isSupported,HX_HCSTRING("isSupported","\xe4","\x7c","\x8a","\xf3")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void OpenGLView_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(OpenGLView_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(OpenGLView_obj::CONTEXT_LOST,"CONTEXT_LOST");
	HX_MARK_MEMBER_NAME(OpenGLView_obj::CONTEXT_RESTORED,"CONTEXT_RESTORED");
	HX_MARK_MEMBER_NAME(OpenGLView_obj::isSupported,"isSupported");
};

#ifdef HXCPP_VISIT_ALLOCS
static void OpenGLView_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(OpenGLView_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(OpenGLView_obj::CONTEXT_LOST,"CONTEXT_LOST");
	HX_VISIT_MEMBER_NAME(OpenGLView_obj::CONTEXT_RESTORED,"CONTEXT_RESTORED");
	HX_VISIT_MEMBER_NAME(OpenGLView_obj::isSupported,"isSupported");
};

#endif

hx::Class OpenGLView_obj::__mClass;

static ::String OpenGLView_obj_sStaticFields[] = {
	HX_HCSTRING("CONTEXT_LOST","\x94","\x35","\x21","\xf9"),
	HX_HCSTRING("CONTEXT_RESTORED","\x06","\xe9","\x7b","\xfd"),
	HX_HCSTRING("isSupported","\xe4","\x7c","\x8a","\xf3"),
	HX_HCSTRING("get_isSupported","\x7b","\x34","\x6c","\xb4"),
	::String(null())
};

void OpenGLView_obj::__register()
{
	hx::Object *dummy = new OpenGLView_obj;
	OpenGLView_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._legacy.display.OpenGLView","\x24","\xde","\xc7","\xdb");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &OpenGLView_obj::__GetStatic;
	__mClass->mSetStaticField = &OpenGLView_obj::__SetStatic;
	__mClass->mMarkFunc = OpenGLView_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(OpenGLView_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< OpenGLView_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = OpenGLView_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = OpenGLView_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = OpenGLView_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void OpenGLView_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_0ded4ddec4cce433_11_boot)
HXLINE(  11)		CONTEXT_LOST = HX_("glcontextlost",4e,21,17,07);
            	}
{
            	HX_STACKFRAME(&_hx_pos_0ded4ddec4cce433_12_boot)
HXLINE(  12)		CONTEXT_RESTORED = HX_("glcontextrestored",c0,71,0a,02);
            	}
}

} // end namespace openfl
} // end namespace _legacy
} // end namespace display
