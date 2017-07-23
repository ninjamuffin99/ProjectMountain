// Generated by Haxe 3.4.0
#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_util_LabelValuePair
#include <flixel/util/FlxPool_flixel_util_LabelValuePair.h>
#endif
#ifndef INCLUDED_flixel_util_FlxStringUtil
#include <flixel/util/FlxStringUtil.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPool
#include <flixel/util/IFlxPool.h>
#endif
#ifndef INCLUDED_flixel_util_LabelValuePair
#include <flixel/util/LabelValuePair.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_a86a375242b5e1cf_10_new,"flixel.FlxBasic","new",0x9d630540,"flixel.FlxBasic.new","flixel/FlxBasic.hx",10,0xd8d6cfcf)
HX_LOCAL_STACK_FRAME(_hx_pos_a86a375242b5e1cf_71_destroy,"flixel.FlxBasic","destroy",0xc50151da,"flixel.FlxBasic.destroy","flixel/FlxBasic.hx",71,0xd8d6cfcf)
HX_LOCAL_STACK_FRAME(_hx_pos_a86a375242b5e1cf_81_kill,"flixel.FlxBasic","kill",0x1748eebe,"flixel.FlxBasic.kill","flixel/FlxBasic.hx",81,0xd8d6cfcf)
HX_LOCAL_STACK_FRAME(_hx_pos_a86a375242b5e1cf_91_revive,"flixel.FlxBasic","revive",0xb3f01175,"flixel.FlxBasic.revive","flixel/FlxBasic.hx",91,0xd8d6cfcf)
HX_LOCAL_STACK_FRAME(_hx_pos_a86a375242b5e1cf_101_update,"flixel.FlxBasic","update",0x307e9d29,"flixel.FlxBasic.update","flixel/FlxBasic.hx",101,0xd8d6cfcf)
HX_LOCAL_STACK_FRAME(_hx_pos_a86a375242b5e1cf_112_draw,"flixel.FlxBasic","draw",0x12af3b24,"flixel.FlxBasic.draw","flixel/FlxBasic.hx",112,0xd8d6cfcf)
HX_LOCAL_STACK_FRAME(_hx_pos_a86a375242b5e1cf_120_toString,"flixel.FlxBasic","toString",0x03b3efcc,"flixel.FlxBasic.toString","flixel/FlxBasic.hx",120,0xd8d6cfcf)
HX_LOCAL_STACK_FRAME(_hx_pos_a86a375242b5e1cf_130_set_visible,"flixel.FlxBasic","set_visible",0x942af475,"flixel.FlxBasic.set_visible","flixel/FlxBasic.hx",130,0xd8d6cfcf)
HX_LOCAL_STACK_FRAME(_hx_pos_a86a375242b5e1cf_136_set_active,"flixel.FlxBasic","set_active",0x086e7723,"flixel.FlxBasic.set_active","flixel/FlxBasic.hx",136,0xd8d6cfcf)
HX_LOCAL_STACK_FRAME(_hx_pos_a86a375242b5e1cf_142_set_exists,"flixel.FlxBasic","set_exists",0xb2085339,"flixel.FlxBasic.set_exists","flixel/FlxBasic.hx",142,0xd8d6cfcf)
HX_LOCAL_STACK_FRAME(_hx_pos_a86a375242b5e1cf_148_set_alive,"flixel.FlxBasic","set_alive",0x59c1c910,"flixel.FlxBasic.set_alive","flixel/FlxBasic.hx",148,0xd8d6cfcf)
HX_LOCAL_STACK_FRAME(_hx_pos_a86a375242b5e1cf_154_get_camera,"flixel.FlxBasic","get_camera",0xa636dd8e,"flixel.FlxBasic.get_camera","flixel/FlxBasic.hx",154,0xd8d6cfcf)
HX_LOCAL_STACK_FRAME(_hx_pos_a86a375242b5e1cf_159_set_camera,"flixel.FlxBasic","set_camera",0xa9b47c02,"flixel.FlxBasic.set_camera","flixel/FlxBasic.hx",159,0xd8d6cfcf)
HX_LOCAL_STACK_FRAME(_hx_pos_a86a375242b5e1cf_170_get_cameras,"flixel.FlxBasic","get_cameras",0xc9caff25,"flixel.FlxBasic.get_cameras","flixel/FlxBasic.hx",170,0xd8d6cfcf)
HX_LOCAL_STACK_FRAME(_hx_pos_a86a375242b5e1cf_176_set_cameras,"flixel.FlxBasic","set_cameras",0xd4380631,"flixel.FlxBasic.set_cameras","flixel/FlxBasic.hx",176,0xd8d6cfcf)
namespace flixel{

void FlxBasic_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_a86a375242b5e1cf_10_new)
HXLINE(  59)		this->flixelType = (int)0;
HXLINE(  43)		this->exists = true;
HXLINE(  39)		this->alive = true;
HXLINE(  34)		this->visible = true;
HXLINE(  30)		this->active = true;
HXLINE(  26)		this->ID = (int)-1;
            	}

Dynamic FlxBasic_obj::__CreateEmpty() { return new FlxBasic_obj; }

void *FlxBasic_obj::_hx_vtable = 0;

Dynamic FlxBasic_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< FlxBasic_obj > _hx_result = new FlxBasic_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool FlxBasic_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x25a685e0;
}

static ::flixel::util::IFlxDestroyable_obj _hx_flixel_FlxBasic__hx_flixel_util_IFlxDestroyable= {
	( void (hx::Object::*)())&::flixel::FlxBasic_obj::destroy,
};

void *FlxBasic_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0xd4fe2fcd: return &_hx_flixel_FlxBasic__hx_flixel_util_IFlxDestroyable;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

void FlxBasic_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_a86a375242b5e1cf_71_destroy)
HXLINE(  72)		this->set_exists(false);
HXLINE(  73)		this->_cameras = null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxBasic_obj,destroy,(void))

void FlxBasic_obj::kill(){
            	HX_STACKFRAME(&_hx_pos_a86a375242b5e1cf_81_kill)
HXLINE(  82)		this->set_alive(false);
HXLINE(  83)		this->set_exists(false);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxBasic_obj,kill,(void))

void FlxBasic_obj::revive(){
            	HX_STACKFRAME(&_hx_pos_a86a375242b5e1cf_91_revive)
HXLINE(  92)		this->set_alive(true);
HXLINE(  93)		this->set_exists(true);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxBasic_obj,revive,(void))

void FlxBasic_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_a86a375242b5e1cf_101_update)
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxBasic_obj,update,(void))

void FlxBasic_obj::draw(){
            	HX_STACKFRAME(&_hx_pos_a86a375242b5e1cf_112_draw)
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxBasic_obj,draw,(void))

::String FlxBasic_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_a86a375242b5e1cf_120_toString)
HXLINE( 121)		 ::Dynamic value = this->active;
HXDLIN( 121)		 ::flixel::util::LabelValuePair _this = ::flixel::util::LabelValuePair_obj::_pool->get();
HXDLIN( 121)		_this->label = HX_("active",c6,41,46,16);
HXDLIN( 121)		_this->value = value;
HXDLIN( 121)		 ::flixel::util::LabelValuePair _hx_tmp = _this;
HXLINE( 122)		 ::Dynamic value1 = this->visible;
HXDLIN( 122)		 ::flixel::util::LabelValuePair _this1 = ::flixel::util::LabelValuePair_obj::_pool->get();
HXDLIN( 122)		_this1->label = HX_("visible",72,78,24,a3);
HXDLIN( 122)		_this1->value = value1;
HXDLIN( 122)		 ::flixel::util::LabelValuePair _hx_tmp1 = _this1;
HXLINE( 123)		 ::Dynamic value2 = this->alive;
HXDLIN( 123)		 ::flixel::util::LabelValuePair _this2 = ::flixel::util::LabelValuePair_obj::_pool->get();
HXDLIN( 123)		_this2->label = HX_("alive",cd,63,91,21);
HXDLIN( 123)		_this2->value = value2;
HXDLIN( 123)		 ::flixel::util::LabelValuePair _hx_tmp2 = _this2;
HXLINE( 124)		 ::Dynamic value3 = this->exists;
HXDLIN( 124)		 ::flixel::util::LabelValuePair _this3 = ::flixel::util::LabelValuePair_obj::_pool->get();
HXDLIN( 124)		_this3->label = HX_("exists",dc,1d,e0,bf);
HXDLIN( 124)		_this3->value = value3;
HXLINE( 120)		return ::flixel::util::FlxStringUtil_obj::getDebugString(::Array_obj< ::Dynamic>::__new(4)->init(0,_hx_tmp)->init(1,_hx_tmp1)->init(2,_hx_tmp2)->init(3,_this3));
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxBasic_obj,toString,return )

bool FlxBasic_obj::set_visible(bool Value){
            	HX_STACKFRAME(&_hx_pos_a86a375242b5e1cf_130_set_visible)
HXLINE( 130)		return (this->visible = Value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxBasic_obj,set_visible,return )

bool FlxBasic_obj::set_active(bool Value){
            	HX_STACKFRAME(&_hx_pos_a86a375242b5e1cf_136_set_active)
HXLINE( 136)		return (this->active = Value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxBasic_obj,set_active,return )

bool FlxBasic_obj::set_exists(bool Value){
            	HX_STACKFRAME(&_hx_pos_a86a375242b5e1cf_142_set_exists)
HXLINE( 142)		return (this->exists = Value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxBasic_obj,set_exists,return )

bool FlxBasic_obj::set_alive(bool Value){
            	HX_STACKFRAME(&_hx_pos_a86a375242b5e1cf_148_set_alive)
HXLINE( 148)		return (this->alive = Value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxBasic_obj,set_alive,return )

 ::flixel::FlxCamera FlxBasic_obj::get_camera(){
            	HX_STACKFRAME(&_hx_pos_a86a375242b5e1cf_154_get_camera)
HXLINE( 154)		bool _hx_tmp;
HXDLIN( 154)		if (hx::IsNotNull( this->_cameras )) {
HXLINE( 154)			_hx_tmp = (this->_cameras->length == (int)0);
            		}
            		else {
HXLINE( 154)			_hx_tmp = true;
            		}
HXDLIN( 154)		if (_hx_tmp) {
HXLINE( 154)			return ::flixel::FlxCamera_obj::defaultCameras->__get((int)0).StaticCast<  ::flixel::FlxCamera >();
            		}
            		else {
HXLINE( 154)			return this->_cameras->__get((int)0).StaticCast<  ::flixel::FlxCamera >();
            		}
HXDLIN( 154)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxBasic_obj,get_camera,return )

 ::flixel::FlxCamera FlxBasic_obj::set_camera( ::flixel::FlxCamera Value){
            	HX_STACKFRAME(&_hx_pos_a86a375242b5e1cf_159_set_camera)
HXLINE( 160)		if (hx::IsNull( this->_cameras )) {
HXLINE( 161)			this->_cameras = ::Array_obj< ::Dynamic>::__new(1)->init(0,Value);
            		}
            		else {
HXLINE( 163)			this->_cameras[(int)0] = Value;
            		}
HXLINE( 164)		return Value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxBasic_obj,set_camera,return )

::Array< ::Dynamic> FlxBasic_obj::get_cameras(){
            	HX_STACKFRAME(&_hx_pos_a86a375242b5e1cf_170_get_cameras)
HXLINE( 170)		if (hx::IsNull( this->_cameras )) {
HXLINE( 170)			return ::flixel::FlxCamera_obj::defaultCameras;
            		}
            		else {
HXLINE( 170)			return this->_cameras;
            		}
HXDLIN( 170)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxBasic_obj,get_cameras,return )

::Array< ::Dynamic> FlxBasic_obj::set_cameras(::Array< ::Dynamic> Value){
            	HX_STACKFRAME(&_hx_pos_a86a375242b5e1cf_176_set_cameras)
HXLINE( 176)		return (this->_cameras = Value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxBasic_obj,set_cameras,return )


hx::ObjectPtr< FlxBasic_obj > FlxBasic_obj::__new() {
	hx::ObjectPtr< FlxBasic_obj > __this = new FlxBasic_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< FlxBasic_obj > FlxBasic_obj::__alloc(hx::Ctx *_hx_ctx) {
	FlxBasic_obj *__this = (FlxBasic_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(FlxBasic_obj), true, "flixel.FlxBasic"));
	*(void **)__this = FlxBasic_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

FlxBasic_obj::FlxBasic_obj()
{
}

void FlxBasic_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxBasic);
	HX_MARK_MEMBER_NAME(ID,"ID");
	HX_MARK_MEMBER_NAME(active,"active");
	HX_MARK_MEMBER_NAME(visible,"visible");
	HX_MARK_MEMBER_NAME(alive,"alive");
	HX_MARK_MEMBER_NAME(exists,"exists");
	HX_MARK_MEMBER_NAME(flixelType,"flixelType");
	HX_MARK_MEMBER_NAME(_cameras,"_cameras");
	HX_MARK_END_CLASS();
}

void FlxBasic_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(ID,"ID");
	HX_VISIT_MEMBER_NAME(active,"active");
	HX_VISIT_MEMBER_NAME(visible,"visible");
	HX_VISIT_MEMBER_NAME(alive,"alive");
	HX_VISIT_MEMBER_NAME(exists,"exists");
	HX_VISIT_MEMBER_NAME(flixelType,"flixelType");
	HX_VISIT_MEMBER_NAME(_cameras,"_cameras");
}

hx::Val FlxBasic_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"ID") ) { return hx::Val( ID); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"kill") ) { return hx::Val( kill_dyn()); }
		if (HX_FIELD_EQ(inName,"draw") ) { return hx::Val( draw_dyn()); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"alive") ) { return hx::Val( alive); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"active") ) { return hx::Val( active); }
		if (HX_FIELD_EQ(inName,"exists") ) { return hx::Val( exists); }
		if (HX_FIELD_EQ(inName,"camera") ) { if (inCallProp == hx::paccAlways) return hx::Val(get_camera()); }
		if (HX_FIELD_EQ(inName,"revive") ) { return hx::Val( revive_dyn()); }
		if (HX_FIELD_EQ(inName,"update") ) { return hx::Val( update_dyn()); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"visible") ) { return hx::Val( visible); }
		if (HX_FIELD_EQ(inName,"cameras") ) { if (inCallProp == hx::paccAlways) return hx::Val(get_cameras()); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return hx::Val( destroy_dyn()); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_cameras") ) { return hx::Val( _cameras); }
		if (HX_FIELD_EQ(inName,"toString") ) { return hx::Val( toString_dyn()); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"set_alive") ) { return hx::Val( set_alive_dyn()); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"flixelType") ) { return hx::Val( flixelType); }
		if (HX_FIELD_EQ(inName,"set_active") ) { return hx::Val( set_active_dyn()); }
		if (HX_FIELD_EQ(inName,"set_exists") ) { return hx::Val( set_exists_dyn()); }
		if (HX_FIELD_EQ(inName,"get_camera") ) { return hx::Val( get_camera_dyn()); }
		if (HX_FIELD_EQ(inName,"set_camera") ) { return hx::Val( set_camera_dyn()); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"set_visible") ) { return hx::Val( set_visible_dyn()); }
		if (HX_FIELD_EQ(inName,"get_cameras") ) { return hx::Val( get_cameras_dyn()); }
		if (HX_FIELD_EQ(inName,"set_cameras") ) { return hx::Val( set_cameras_dyn()); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val FlxBasic_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"ID") ) { ID=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"alive") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_alive(inValue) );alive=inValue.Cast< bool >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"active") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_active(inValue) );active=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"exists") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_exists(inValue) );exists=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"camera") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_camera(inValue) ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"visible") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_visible(inValue) );visible=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"cameras") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_cameras(inValue) ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_cameras") ) { _cameras=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"flixelType") ) { flixelType=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxBasic_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("ID","\xdb","\x3f","\x00","\x00"));
	outFields->push(HX_HCSTRING("active","\xc6","\x41","\x46","\x16"));
	outFields->push(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"));
	outFields->push(HX_HCSTRING("alive","\xcd","\x63","\x91","\x21"));
	outFields->push(HX_HCSTRING("exists","\xdc","\x1d","\xe0","\xbf"));
	outFields->push(HX_HCSTRING("camera","\xa5","\x46","\x8c","\xb7"));
	outFields->push(HX_HCSTRING("cameras","\x2e","\x8a","\x31","\xe3"));
	outFields->push(HX_HCSTRING("flixelType","\x36","\xbf","\x78","\x58"));
	outFields->push(HX_HCSTRING("_cameras","\xaf","\xe3","\xe9","\x1c"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo FlxBasic_obj_sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(FlxBasic_obj,ID),HX_HCSTRING("ID","\xdb","\x3f","\x00","\x00")},
	{hx::fsBool,(int)offsetof(FlxBasic_obj,active),HX_HCSTRING("active","\xc6","\x41","\x46","\x16")},
	{hx::fsBool,(int)offsetof(FlxBasic_obj,visible),HX_HCSTRING("visible","\x72","\x78","\x24","\xa3")},
	{hx::fsBool,(int)offsetof(FlxBasic_obj,alive),HX_HCSTRING("alive","\xcd","\x63","\x91","\x21")},
	{hx::fsBool,(int)offsetof(FlxBasic_obj,exists),HX_HCSTRING("exists","\xdc","\x1d","\xe0","\xbf")},
	{hx::fsInt,(int)offsetof(FlxBasic_obj,flixelType),HX_HCSTRING("flixelType","\x36","\xbf","\x78","\x58")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(FlxBasic_obj,_cameras),HX_HCSTRING("_cameras","\xaf","\xe3","\xe9","\x1c")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *FlxBasic_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxBasic_obj_sMemberFields[] = {
	HX_HCSTRING("ID","\xdb","\x3f","\x00","\x00"),
	HX_HCSTRING("active","\xc6","\x41","\x46","\x16"),
	HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"),
	HX_HCSTRING("alive","\xcd","\x63","\x91","\x21"),
	HX_HCSTRING("exists","\xdc","\x1d","\xe0","\xbf"),
	HX_HCSTRING("flixelType","\x36","\xbf","\x78","\x58"),
	HX_HCSTRING("_cameras","\xaf","\xe3","\xe9","\x1c"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("kill","\x9e","\xdf","\x09","\x47"),
	HX_HCSTRING("revive","\x55","\xfa","\x76","\x0a"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("draw","\x04","\x2c","\x70","\x42"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	HX_HCSTRING("set_visible","\x95","\xdf","\x8b","\x33"),
	HX_HCSTRING("set_active","\x03","\x50","\x4b","\x0a"),
	HX_HCSTRING("set_exists","\x19","\x2c","\xe5","\xb3"),
	HX_HCSTRING("set_alive","\x30","\xac","\x8b","\x48"),
	HX_HCSTRING("get_camera","\x6e","\xb6","\x13","\xa8"),
	HX_HCSTRING("set_camera","\xe2","\x54","\x91","\xab"),
	HX_HCSTRING("get_cameras","\x45","\xea","\x2b","\x69"),
	HX_HCSTRING("set_cameras","\x51","\xf1","\x98","\x73"),
	::String(null()) };

static void FlxBasic_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxBasic_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FlxBasic_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxBasic_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxBasic_obj::__mClass;

void FlxBasic_obj::__register()
{
	hx::Object *dummy = new FlxBasic_obj;
	FlxBasic_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.FlxBasic","\x4e","\xa5","\x2f","\x34");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = FlxBasic_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(FlxBasic_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxBasic_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FlxBasic_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxBasic_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxBasic_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
