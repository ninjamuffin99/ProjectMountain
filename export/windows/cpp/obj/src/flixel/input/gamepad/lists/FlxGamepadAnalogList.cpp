// Generated by Haxe 3.4.0
#include <hxcpp.h>

#ifndef INCLUDED_flixel_input_gamepad_FlxGamepad
#include <flixel/input/gamepad/FlxGamepad.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_lists_FlxGamepadAnalogList
#include <flixel/input/gamepad/lists/FlxGamepadAnalogList.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_lists_FlxGamepadAnalogStateList
#include <flixel/input/gamepad/lists/FlxGamepadAnalogStateList.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_lists_FlxGamepadAnalogValueList
#include <flixel/input/gamepad/lists/FlxGamepadAnalogValueList.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_9e83d4f8938c5833_17_new,"flixel.input.gamepad.lists.FlxGamepadAnalogList","new",0x93642d0b,"flixel.input.gamepad.lists.FlxGamepadAnalogList.new","flixel/input/gamepad/lists/FlxGamepadAnalogList.hx",17,0x4e142041)
namespace flixel{
namespace input{
namespace gamepad{
namespace lists{

void FlxGamepadAnalogList_obj::__construct( ::flixel::input::gamepad::FlxGamepad gamepad){
            	HX_GC_STACKFRAME(&_hx_pos_9e83d4f8938c5833_17_new)
HXLINE(  18)		this->value =  ::flixel::input::gamepad::lists::FlxGamepadAnalogValueList_obj::__alloc( HX_CTX ,gamepad);
HXLINE(  19)		this->justMoved =  ::flixel::input::gamepad::lists::FlxGamepadAnalogStateList_obj::__alloc( HX_CTX ,(int)2,gamepad);
HXLINE(  20)		this->justReleased =  ::flixel::input::gamepad::lists::FlxGamepadAnalogStateList_obj::__alloc( HX_CTX ,(int)-1,gamepad);
            	}

Dynamic FlxGamepadAnalogList_obj::__CreateEmpty() { return new FlxGamepadAnalogList_obj; }

void *FlxGamepadAnalogList_obj::_hx_vtable = 0;

Dynamic FlxGamepadAnalogList_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< FlxGamepadAnalogList_obj > _hx_result = new FlxGamepadAnalogList_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool FlxGamepadAnalogList_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x6e89b47f;
}


hx::ObjectPtr< FlxGamepadAnalogList_obj > FlxGamepadAnalogList_obj::__new( ::flixel::input::gamepad::FlxGamepad gamepad) {
	hx::ObjectPtr< FlxGamepadAnalogList_obj > __this = new FlxGamepadAnalogList_obj();
	__this->__construct(gamepad);
	return __this;
}

hx::ObjectPtr< FlxGamepadAnalogList_obj > FlxGamepadAnalogList_obj::__alloc(hx::Ctx *_hx_ctx, ::flixel::input::gamepad::FlxGamepad gamepad) {
	FlxGamepadAnalogList_obj *__this = (FlxGamepadAnalogList_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(FlxGamepadAnalogList_obj), true, "flixel.input.gamepad.lists.FlxGamepadAnalogList"));
	*(void **)__this = FlxGamepadAnalogList_obj::_hx_vtable;
	__this->__construct(gamepad);
	return __this;
}

FlxGamepadAnalogList_obj::FlxGamepadAnalogList_obj()
{
}

void FlxGamepadAnalogList_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxGamepadAnalogList);
	HX_MARK_MEMBER_NAME(value,"value");
	HX_MARK_MEMBER_NAME(justMoved,"justMoved");
	HX_MARK_MEMBER_NAME(justReleased,"justReleased");
	HX_MARK_END_CLASS();
}

void FlxGamepadAnalogList_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(value,"value");
	HX_VISIT_MEMBER_NAME(justMoved,"justMoved");
	HX_VISIT_MEMBER_NAME(justReleased,"justReleased");
}

hx::Val FlxGamepadAnalogList_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"value") ) { return hx::Val( value); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"justMoved") ) { return hx::Val( justMoved); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"justReleased") ) { return hx::Val( justReleased); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val FlxGamepadAnalogList_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"value") ) { value=inValue.Cast<  ::flixel::input::gamepad::lists::FlxGamepadAnalogValueList >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"justMoved") ) { justMoved=inValue.Cast<  ::flixel::input::gamepad::lists::FlxGamepadAnalogStateList >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"justReleased") ) { justReleased=inValue.Cast<  ::flixel::input::gamepad::lists::FlxGamepadAnalogStateList >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxGamepadAnalogList_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"));
	outFields->push(HX_HCSTRING("justMoved","\x67","\x12","\x21","\x2b"));
	outFields->push(HX_HCSTRING("justReleased","\x09","\x1b","\x5b","\x66"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo FlxGamepadAnalogList_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::input::gamepad::lists::FlxGamepadAnalogValueList*/ ,(int)offsetof(FlxGamepadAnalogList_obj,value),HX_HCSTRING("value","\x71","\x7f","\xb8","\x31")},
	{hx::fsObject /*::flixel::input::gamepad::lists::FlxGamepadAnalogStateList*/ ,(int)offsetof(FlxGamepadAnalogList_obj,justMoved),HX_HCSTRING("justMoved","\x67","\x12","\x21","\x2b")},
	{hx::fsObject /*::flixel::input::gamepad::lists::FlxGamepadAnalogStateList*/ ,(int)offsetof(FlxGamepadAnalogList_obj,justReleased),HX_HCSTRING("justReleased","\x09","\x1b","\x5b","\x66")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *FlxGamepadAnalogList_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxGamepadAnalogList_obj_sMemberFields[] = {
	HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"),
	HX_HCSTRING("justMoved","\x67","\x12","\x21","\x2b"),
	HX_HCSTRING("justReleased","\x09","\x1b","\x5b","\x66"),
	::String(null()) };

static void FlxGamepadAnalogList_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxGamepadAnalogList_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FlxGamepadAnalogList_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxGamepadAnalogList_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxGamepadAnalogList_obj::__mClass;

void FlxGamepadAnalogList_obj::__register()
{
	hx::Object *dummy = new FlxGamepadAnalogList_obj;
	FlxGamepadAnalogList_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.input.gamepad.lists.FlxGamepadAnalogList","\x99","\x4b","\xd8","\x02");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = FlxGamepadAnalogList_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(FlxGamepadAnalogList_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxGamepadAnalogList_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FlxGamepadAnalogList_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxGamepadAnalogList_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxGamepadAnalogList_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace input
} // end namespace gamepad
} // end namespace lists
