// Generated by Haxe 3.4.0
#include <hxcpp.h>

#ifndef INCLUDED_Boulder
#include <Boulder.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_7001ccecc53effe7_16_new,"Boulder","new",0x86165a3f,"Boulder.new","Boulder.hx",16,0x27a1f211)
HX_LOCAL_STACK_FRAME(_hx_pos_7001ccecc53effe7_24_update,"Boulder","update",0xa825318a,"Boulder.update","Boulder.hx",24,0x27a1f211)

void Boulder_obj::__construct( ::Dynamic __o_X, ::Dynamic __o_Y){
 ::Dynamic X = __o_X.Default(0);
 ::Dynamic Y = __o_Y.Default(0);
            	HX_STACKFRAME(&_hx_pos_7001ccecc53effe7_16_new)
HXLINE(  17)		super::__construct(X,Y,null());
HXLINE(  20)		this->makeGraphic((int)30,(int)30,(int)-65536,null(),null());
            	}

Dynamic Boulder_obj::__CreateEmpty() { return new Boulder_obj; }

void *Boulder_obj::_hx_vtable = 0;

Dynamic Boulder_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Boulder_obj > _hx_result = new Boulder_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool Boulder_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x176b62e9) {
		if (inClassId<=(int)0x0b6ffd77) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x0b6ffd77;
		} else {
			return inClassId==(int)0x176b62e9;
		}
	} else {
		return inClassId==(int)0x25a685e0 || inClassId==(int)0x2e105115;
	}
}

void Boulder_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_7001ccecc53effe7_24_update)
HXLINE(  25)		Float timer = (int)0;
HXLINE(  27)		timer = (timer + ::flixel::FlxG_obj::elapsed);
HXLINE(  29)		if ((timer >= ((Float)0.3))) {
HXLINE(  31)			{
HXLINE(  31)				 ::Boulder _g = hx::ObjectPtr<OBJ_>(this);
HXDLIN(  31)				_g->set_angle((_g->angle + (int)25));
            			}
HXLINE(  32)			timer = (int)0;
            		}
HXLINE(  35)		this->super::update(elapsed);
            	}



hx::ObjectPtr< Boulder_obj > Boulder_obj::__new( ::Dynamic __o_X, ::Dynamic __o_Y) {
	hx::ObjectPtr< Boulder_obj > __this = new Boulder_obj();
	__this->__construct(__o_X,__o_Y);
	return __this;
}

hx::ObjectPtr< Boulder_obj > Boulder_obj::__alloc(hx::Ctx *_hx_ctx, ::Dynamic __o_X, ::Dynamic __o_Y) {
	Boulder_obj *__this = (Boulder_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Boulder_obj), true, "Boulder"));
	*(void **)__this = Boulder_obj::_hx_vtable;
	__this->__construct(__o_X,__o_Y);
	return __this;
}

Boulder_obj::Boulder_obj()
{
}

hx::Val Boulder_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return hx::Val( update_dyn()); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *Boulder_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *Boulder_obj_sStaticStorageInfo = 0;
#endif

static ::String Boulder_obj_sMemberFields[] = {
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	::String(null()) };

static void Boulder_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Boulder_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Boulder_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Boulder_obj::__mClass,"__mClass");
};

#endif

hx::Class Boulder_obj::__mClass;

void Boulder_obj::__register()
{
	hx::Object *dummy = new Boulder_obj;
	Boulder_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("Boulder","\xcd","\xce","\xb6","\xbf");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Boulder_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Boulder_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Boulder_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Boulder_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Boulder_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Boulder_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

