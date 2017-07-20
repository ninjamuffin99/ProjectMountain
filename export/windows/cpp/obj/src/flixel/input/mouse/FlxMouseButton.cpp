// Generated by Haxe 3.4.0
#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
#endif
#ifndef INCLUDED_flixel_input_FlxInput
#include <flixel/input/FlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_FlxPointer
#include <flixel/input/FlxPointer.h>
#endif
#ifndef INCLUDED_flixel_input_FlxSwipe
#include <flixel/input/FlxSwipe.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInput
#include <flixel/input/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouse
#include <flixel/input/mouse/FlxMouse.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouseButton
#include <flixel/input/mouse/FlxMouseButton.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_math_FlxPoint
#include <flixel/util/FlxPool_flixel_math_FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPool
#include <flixel/util/IFlxPool.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_1a66c6297c27823a_9_new,"flixel.input.mouse.FlxMouseButton","new",0xa21f5d96,"flixel.input.mouse.FlxMouseButton.new","flixel/input/mouse/FlxMouseButton.hx",9,0x7fcdf6f7)
HX_LOCAL_STACK_FRAME(_hx_pos_1a66c6297c27823a_32_update,"flixel.input.mouse.FlxMouseButton","update",0x2ce19e93,"flixel.input.mouse.FlxMouseButton.update","flixel/input/mouse/FlxMouseButton.hx",32,0x7fcdf6f7)
HX_LOCAL_STACK_FRAME(_hx_pos_1a66c6297c27823a_50_destroy,"flixel.input.mouse.FlxMouseButton","destroy",0x9f3f8d30,"flixel.input.mouse.FlxMouseButton.destroy","flixel/input/mouse/FlxMouseButton.hx",50,0x7fcdf6f7)
HX_LOCAL_STACK_FRAME(_hx_pos_1a66c6297c27823a_70_onDown,"flixel.input.mouse.FlxMouseButton","onDown",0x8ad419ab,"flixel.input.mouse.FlxMouseButton.onDown","flixel/input/mouse/FlxMouseButton.hx",70,0x7fcdf6f7)
HX_LOCAL_STACK_FRAME(_hx_pos_1a66c6297c27823a_76_onUp,"flixel.input.mouse.FlxMouseButton","onUp",0x3a027364,"flixel.input.mouse.FlxMouseButton.onUp","flixel/input/mouse/FlxMouseButton.hx",76,0x7fcdf6f7)
HX_LOCAL_STACK_FRAME(_hx_pos_1a66c6297c27823a_13_getByID,"flixel.input.mouse.FlxMouseButton","getByID",0x8e5f095e,"flixel.input.mouse.FlxMouseButton.getByID","flixel/input/mouse/FlxMouseButton.hx",13,0x7fcdf6f7)
namespace flixel{
namespace input{
namespace mouse{

void FlxMouseButton_obj::__construct(int ID){
            	HX_STACKFRAME(&_hx_pos_1a66c6297c27823a_9_new)
HXLINE(  26)		this->justPressedTimeInTicks = ((Float)-1);
HXLINE(  25)		 ::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set((int)0,(int)0);
HXDLIN(  25)		point->_inPool = false;
HXDLIN(  25)		this->justPressedPosition = point;
HXLINE(   9)		super::__construct(ID);
            	}

Dynamic FlxMouseButton_obj::__CreateEmpty() { return new FlxMouseButton_obj; }

void *FlxMouseButton_obj::_hx_vtable = 0;

Dynamic FlxMouseButton_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< FlxMouseButton_obj > _hx_result = new FlxMouseButton_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool FlxMouseButton_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x189f9ca0) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x189f9ca0;
	} else {
		return inClassId==(int)0x5de9f106;
	}
}

static ::flixel::util::IFlxDestroyable_obj _hx_flixel_input_mouse_FlxMouseButton__hx_flixel_util_IFlxDestroyable= {
	( void (hx::Object::*)())&::flixel::input::mouse::FlxMouseButton_obj::destroy,
};

void *FlxMouseButton_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0xd4fe2fcd: return &_hx_flixel_input_mouse_FlxMouseButton__hx_flixel_util_IFlxDestroyable;
	}
	return super::_hx_getInterface(inHash);
}

void FlxMouseButton_obj::update(){
            	HX_GC_STACKFRAME(&_hx_pos_1a66c6297c27823a_32_update)
HXLINE(  33)		this->super::update();
HXLINE(  35)		if ((this->current == (int)2)) {
HXLINE(  37)			this->justPressedPosition->set(::flixel::FlxG_obj::mouse->screenX,::flixel::FlxG_obj::mouse->screenY);
HXLINE(  38)			this->justPressedTimeInTicks = ::flixel::FlxG_obj::game->ticks;
            		}
            		else {
HXLINE(  41)			if ((this->current == (int)-1)) {
HXLINE(  43)				::Array< ::Dynamic> _hx_tmp = ::flixel::FlxG_obj::swipes;
HXDLIN(  43)				int _hx_tmp1 = ( (int)(this->ID) );
HXDLIN(  43)				 ::flixel::math::FlxPoint _hx_tmp2 = this->justPressedPosition;
HXDLIN(  43)				 ::flixel::math::FlxPoint _hx_tmp3 = ::flixel::FlxG_obj::mouse->getScreenPosition(null(),null());
HXDLIN(  43)				_hx_tmp->push( ::flixel::input::FlxSwipe_obj::__alloc( HX_CTX ,_hx_tmp1,_hx_tmp2,_hx_tmp3,this->justPressedTimeInTicks));
            			}
            		}
            	}


void FlxMouseButton_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_1a66c6297c27823a_50_destroy)
HXLINE(  50)		this->justPressedPosition = ( ( ::flixel::math::FlxPoint)(::flixel::util::FlxDestroyUtil_obj::put(this->justPressedPosition)) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxMouseButton_obj,destroy,(void))

void FlxMouseButton_obj::onDown( ::Dynamic _){
            	HX_STACKFRAME(&_hx_pos_1a66c6297c27823a_70_onDown)
HXLINE(  70)		if (::flixel::FlxG_obj::mouse->enabled) {
HXLINE(  71)			this->press();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxMouseButton_obj,onDown,(void))

void FlxMouseButton_obj::onUp( ::Dynamic _){
            	HX_STACKFRAME(&_hx_pos_1a66c6297c27823a_76_onUp)
HXLINE(  76)		if (::flixel::FlxG_obj::mouse->enabled) {
HXLINE(  77)			this->release();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxMouseButton_obj,onUp,(void))

 ::flixel::input::mouse::FlxMouseButton FlxMouseButton_obj::getByID(int id){
            	HX_STACKFRAME(&_hx_pos_1a66c6297c27823a_13_getByID)
HXLINE(  13)		switch((int)(id)){
            			case (int)-3: {
HXLINE(  13)				return ::flixel::FlxG_obj::mouse->_rightButton;
            			}
            			break;
            			case (int)-2: {
HXLINE(  13)				return ::flixel::FlxG_obj::mouse->_middleButton;
            			}
            			break;
            			case (int)-1: {
HXLINE(  13)				return ::flixel::FlxG_obj::mouse->_leftButton;
            			}
            			break;
            		}
HXDLIN(  13)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxMouseButton_obj,getByID,return )


hx::ObjectPtr< FlxMouseButton_obj > FlxMouseButton_obj::__new(int ID) {
	hx::ObjectPtr< FlxMouseButton_obj > __this = new FlxMouseButton_obj();
	__this->__construct(ID);
	return __this;
}

hx::ObjectPtr< FlxMouseButton_obj > FlxMouseButton_obj::__alloc(hx::Ctx *_hx_ctx,int ID) {
	FlxMouseButton_obj *__this = (FlxMouseButton_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(FlxMouseButton_obj), true, "flixel.input.mouse.FlxMouseButton"));
	*(void **)__this = FlxMouseButton_obj::_hx_vtable;
	__this->__construct(ID);
	return __this;
}

FlxMouseButton_obj::FlxMouseButton_obj()
{
}

void FlxMouseButton_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxMouseButton);
	HX_MARK_MEMBER_NAME(justPressedPosition,"justPressedPosition");
	HX_MARK_MEMBER_NAME(justPressedTimeInTicks,"justPressedTimeInTicks");
	 ::flixel::input::FlxInput_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxMouseButton_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(justPressedPosition,"justPressedPosition");
	HX_VISIT_MEMBER_NAME(justPressedTimeInTicks,"justPressedTimeInTicks");
	 ::flixel::input::FlxInput_obj::__Visit(HX_VISIT_ARG);
}

hx::Val FlxMouseButton_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"onUp") ) { return hx::Val( onUp_dyn()); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return hx::Val( update_dyn()); }
		if (HX_FIELD_EQ(inName,"onDown") ) { return hx::Val( onDown_dyn()); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return hx::Val( destroy_dyn()); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"justPressedPosition") ) { return hx::Val( justPressedPosition); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"justPressedTimeInTicks") ) { return hx::Val( justPressedTimeInTicks); }
	}
	return super::__Field(inName,inCallProp);
}

bool FlxMouseButton_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"getByID") ) { outValue = getByID_dyn(); return true; }
	}
	return false;
}

hx::Val FlxMouseButton_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 19:
		if (HX_FIELD_EQ(inName,"justPressedPosition") ) { justPressedPosition=inValue.Cast<  ::flixel::math::FlxPoint >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"justPressedTimeInTicks") ) { justPressedTimeInTicks=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxMouseButton_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("justPressedPosition","\x9f","\x30","\x76","\xae"));
	outFields->push(HX_HCSTRING("justPressedTimeInTicks","\x8e","\xf9","\xc2","\x82"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo FlxMouseButton_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::math::FlxPoint*/ ,(int)offsetof(FlxMouseButton_obj,justPressedPosition),HX_HCSTRING("justPressedPosition","\x9f","\x30","\x76","\xae")},
	{hx::fsFloat,(int)offsetof(FlxMouseButton_obj,justPressedTimeInTicks),HX_HCSTRING("justPressedTimeInTicks","\x8e","\xf9","\xc2","\x82")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *FlxMouseButton_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxMouseButton_obj_sMemberFields[] = {
	HX_HCSTRING("justPressedPosition","\x9f","\x30","\x76","\xae"),
	HX_HCSTRING("justPressedTimeInTicks","\x8e","\xf9","\xc2","\x82"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("onDown","\x21","\x01","\xf8","\xe4"),
	HX_HCSTRING("onUp","\x5a","\x71","\xb2","\x49"),
	::String(null()) };

static void FlxMouseButton_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxMouseButton_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FlxMouseButton_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxMouseButton_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxMouseButton_obj::__mClass;

static ::String FlxMouseButton_obj_sStaticFields[] = {
	HX_HCSTRING("getByID","\x28","\xa9","\xa5","\x13"),
	::String(null())
};

void FlxMouseButton_obj::__register()
{
	hx::Object *dummy = new FlxMouseButton_obj;
	FlxMouseButton_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.input.mouse.FlxMouseButton","\xa4","\x9a","\xd7","\xa8");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxMouseButton_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = FlxMouseButton_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(FlxMouseButton_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(FlxMouseButton_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxMouseButton_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FlxMouseButton_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxMouseButton_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxMouseButton_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace input
} // end namespace mouse
