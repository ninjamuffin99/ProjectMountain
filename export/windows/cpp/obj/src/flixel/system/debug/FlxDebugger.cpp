// Generated by Haxe 3.4.0
#include <hxcpp.h>

#ifndef INCLUDED_flixel_system_debug_FlxDebugger
#include <flixel/system/debug/FlxDebugger.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObject
#include <openfl/_legacy/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObjectContainer
#include <openfl/_legacy/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_InteractiveObject
#include <openfl/_legacy/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Sprite
#include <openfl/_legacy/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_24fe7b4bb4ee600c_63_new,"flixel.system.debug.FlxDebugger","new",0x06ebd57d,"flixel.system.debug.FlxDebugger.new","flixel/system/debug/FlxDebugger.hx",63,0xd9fc0a74)
namespace flixel{
namespace _hx_system{
namespace debug{

void FlxDebugger_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_24fe7b4bb4ee600c_63_new)
HXLINE(  63)		super::__construct();
            	}

Dynamic FlxDebugger_obj::__CreateEmpty() { return new FlxDebugger_obj; }

void *FlxDebugger_obj::_hx_vtable = 0;

Dynamic FlxDebugger_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< FlxDebugger_obj > _hx_result = new FlxDebugger_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool FlxDebugger_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x25b00754) {
		if (inClassId<=(int)0x22273017) {
			if (inClassId<=(int)0x1e88cdcf) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x1e88cdcf;
			} else {
				return inClassId==(int)0x22273017;
			}
		} else {
			return inClassId==(int)0x25b00754;
		}
	} else {
		if (inClassId<=(int)0x3d2d7617) {
			return inClassId==(int)0x306ae42a || inClassId==(int)0x3d2d7617;
		} else {
			return inClassId==(int)0x5fcdb6d3;
		}
	}
}


hx::ObjectPtr< FlxDebugger_obj > FlxDebugger_obj::__new() {
	hx::ObjectPtr< FlxDebugger_obj > __this = new FlxDebugger_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< FlxDebugger_obj > FlxDebugger_obj::__alloc(hx::Ctx *_hx_ctx) {
	FlxDebugger_obj *__this = (FlxDebugger_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(FlxDebugger_obj), true, "flixel.system.debug.FlxDebugger"));
	*(void **)__this = FlxDebugger_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

FlxDebugger_obj::FlxDebugger_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *FlxDebugger_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *FlxDebugger_obj_sStaticStorageInfo = 0;
#endif

static void FlxDebugger_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxDebugger_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FlxDebugger_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxDebugger_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxDebugger_obj::__mClass;

void FlxDebugger_obj::__register()
{
	hx::Object *dummy = new FlxDebugger_obj;
	FlxDebugger_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.system.debug.FlxDebugger","\x0b","\x53","\xa2","\xd7");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = FlxDebugger_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< FlxDebugger_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FlxDebugger_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxDebugger_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxDebugger_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace system
} // end namespace debug
