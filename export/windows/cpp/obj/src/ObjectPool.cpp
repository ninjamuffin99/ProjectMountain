// Generated by Haxe 3.4.0
#include <hxcpp.h>

#ifndef INCLUDED_ObjectPool
#include <ObjectPool.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_5a1b3420ef8ad801_28_new,"ObjectPool","new",0x6191e5cd,"ObjectPool.new","ObjectPool.hx",28,0xfab29243)
HX_LOCAL_STACK_FRAME(_hx_pos_5a1b3420ef8ad801_65_getObj,"ObjectPool","getObj",0x462d15b4,"ObjectPool.getObj","ObjectPool.hx",65,0xfab29243)
HX_LOCAL_STACK_FRAME(_hx_pos_5a1b3420ef8ad801_78_returnObj,"ObjectPool","returnObj",0xe7a21654,"ObjectPool.returnObj","ObjectPool.hx",78,0xfab29243)
HX_LOCAL_STACK_FRAME(_hx_pos_5a1b3420ef8ad801_85_loadPool,"ObjectPool","loadPool",0x2c787195,"ObjectPool.loadPool","ObjectPool.hx",85,0xfab29243)

void ObjectPool_obj::__construct(int tile_width,int tile_height,::String tileMap,hx::Null< int >  __o_len,hx::Null< bool >  __o_Solid){
int len = __o_len.Default(600);
bool Solid = __o_Solid.Default(true);
            	HX_STACKFRAME(&_hx_pos_5a1b3420ef8ad801_28_new)
HXLINE(  30)		this->_pool = ::Array_obj< ::Dynamic>::__new();
HXLINE(  33)		this->_solid = Solid;
HXLINE(  36)		this->TILE_WIDTH = tile_width;
HXLINE(  37)		this->TILE_HEIGHT = tile_height;
HXLINE(  40)		this->_tileMap = tileMap;
HXLINE(  43)		this->size = len;
HXLINE(  46)		if ((this->size < (int)1)) {
HXLINE(  48)			this->size = (int)1;
            		}
HXLINE(  52)		this->loadPool();
HXLINE(  55)		this->size = ::Std_obj::_hx_int((this->size * ((Float).1)));
HXLINE(  58)		if ((this->size == (int)0)) {
HXLINE(  60)			this->size = (int)1;
            		}
            	}

Dynamic ObjectPool_obj::__CreateEmpty() { return new ObjectPool_obj; }

void *ObjectPool_obj::_hx_vtable = 0;

Dynamic ObjectPool_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ObjectPool_obj > _hx_result = new ObjectPool_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return _hx_result;
}

bool ObjectPool_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x1a27e0bf;
}

 ::flixel::FlxSprite ObjectPool_obj::getObj(){
            	HX_STACKFRAME(&_hx_pos_5a1b3420ef8ad801_65_getObj)
HXLINE(  67)		if ((this->counter == (int)0)) {
HXLINE(  69)			this->loadPool();
            		}
HXLINE(  73)		this->counter--;
HXLINE(  74)		return this->_pool->shift().StaticCast<  ::flixel::FlxSprite >();
            	}


HX_DEFINE_DYNAMIC_FUNC0(ObjectPool_obj,getObj,return )

void ObjectPool_obj::returnObj( ::flixel::FlxSprite s){
            	HX_STACKFRAME(&_hx_pos_5a1b3420ef8ad801_78_returnObj)
HXLINE(  80)		this->counter++;
HXLINE(  81)		this->_pool->push(s);
            	}


HX_DEFINE_DYNAMIC_FUNC1(ObjectPool_obj,returnObj,(void))

void ObjectPool_obj::loadPool(){
            	HX_GC_STACKFRAME(&_hx_pos_5a1b3420ef8ad801_85_loadPool)
HXLINE(  87)		 ::flixel::FlxSprite block =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null());
HXLINE(  88)		block->set_solid(this->_solid);
HXLINE(  89)		block->set_immovable(true);
HXLINE(  90)		block->loadGraphic(this->_tileMap,false,this->TILE_WIDTH,this->TILE_HEIGHT,null(),null());
HXLINE(  91)		this->_pool->unshift(block);
HXLINE(  94)		{
HXLINE(  94)			int _g1 = (int)1;
HXDLIN(  94)			int _g = this->size;
HXDLIN(  94)			while((_g1 < _g)){
HXLINE(  94)				_g1 = (_g1 + (int)1);
HXDLIN(  94)				int i = (_g1 - (int)1);
HXLINE(  96)				::Array< ::Dynamic> _hx_tmp = this->_pool;
HXDLIN(  96)				_hx_tmp->unshift( ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null()));
HXLINE(  97)				this->_pool->__get((int)0).StaticCast<  ::flixel::FlxSprite >()->set_solid(this->_solid);
HXLINE(  98)				this->_pool->__get((int)0).StaticCast<  ::flixel::FlxSprite >()->set_immovable(true);
HXLINE(  99)				this->_pool->__get((int)0).StaticCast<  ::flixel::FlxSprite >()->loadGraphicFromSprite(block);
            			}
            		}
HXLINE( 103)		this->counter = this->_pool->length;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ObjectPool_obj,loadPool,(void))


hx::ObjectPtr< ObjectPool_obj > ObjectPool_obj::__new(int tile_width,int tile_height,::String tileMap,hx::Null< int >  __o_len,hx::Null< bool >  __o_Solid) {
	hx::ObjectPtr< ObjectPool_obj > __this = new ObjectPool_obj();
	__this->__construct(tile_width,tile_height,tileMap,__o_len,__o_Solid);
	return __this;
}

hx::ObjectPtr< ObjectPool_obj > ObjectPool_obj::__alloc(hx::Ctx *_hx_ctx,int tile_width,int tile_height,::String tileMap,hx::Null< int >  __o_len,hx::Null< bool >  __o_Solid) {
	ObjectPool_obj *__this = (ObjectPool_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(ObjectPool_obj), true, "ObjectPool"));
	*(void **)__this = ObjectPool_obj::_hx_vtable;
	__this->__construct(tile_width,tile_height,tileMap,__o_len,__o_Solid);
	return __this;
}

ObjectPool_obj::ObjectPool_obj()
{
}

void ObjectPool_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ObjectPool);
	HX_MARK_MEMBER_NAME(TILE_WIDTH,"TILE_WIDTH");
	HX_MARK_MEMBER_NAME(TILE_HEIGHT,"TILE_HEIGHT");
	HX_MARK_MEMBER_NAME(_tileMap,"_tileMap");
	HX_MARK_MEMBER_NAME(_pool,"_pool");
	HX_MARK_MEMBER_NAME(_solid,"_solid");
	HX_MARK_MEMBER_NAME(counter,"counter");
	HX_MARK_MEMBER_NAME(size,"size");
	HX_MARK_END_CLASS();
}

void ObjectPool_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(TILE_WIDTH,"TILE_WIDTH");
	HX_VISIT_MEMBER_NAME(TILE_HEIGHT,"TILE_HEIGHT");
	HX_VISIT_MEMBER_NAME(_tileMap,"_tileMap");
	HX_VISIT_MEMBER_NAME(_pool,"_pool");
	HX_VISIT_MEMBER_NAME(_solid,"_solid");
	HX_VISIT_MEMBER_NAME(counter,"counter");
	HX_VISIT_MEMBER_NAME(size,"size");
}

hx::Val ObjectPool_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"size") ) { return hx::Val( size); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_pool") ) { return hx::Val( _pool); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_solid") ) { return hx::Val( _solid); }
		if (HX_FIELD_EQ(inName,"getObj") ) { return hx::Val( getObj_dyn()); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"counter") ) { return hx::Val( counter); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_tileMap") ) { return hx::Val( _tileMap); }
		if (HX_FIELD_EQ(inName,"loadPool") ) { return hx::Val( loadPool_dyn()); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"returnObj") ) { return hx::Val( returnObj_dyn()); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"TILE_WIDTH") ) { return hx::Val( TILE_WIDTH); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"TILE_HEIGHT") ) { return hx::Val( TILE_HEIGHT); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val ObjectPool_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"size") ) { size=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_pool") ) { _pool=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_solid") ) { _solid=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"counter") ) { counter=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_tileMap") ) { _tileMap=inValue.Cast< ::String >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"TILE_WIDTH") ) { TILE_WIDTH=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"TILE_HEIGHT") ) { TILE_HEIGHT=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ObjectPool_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("TILE_WIDTH","\xd5","\x5e","\xc1","\xb3"));
	outFields->push(HX_HCSTRING("TILE_HEIGHT","\x18","\x14","\xc1","\x4b"));
	outFields->push(HX_HCSTRING("_tileMap","\x8f","\x01","\x2f","\x7f"));
	outFields->push(HX_HCSTRING("_pool","\xbb","\x9c","\x6d","\xfd"));
	outFields->push(HX_HCSTRING("_solid","\x6c","\xfb","\xac","\x7c"));
	outFields->push(HX_HCSTRING("counter","\xfc","\xae","\x59","\x1d"));
	outFields->push(HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo ObjectPool_obj_sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(ObjectPool_obj,TILE_WIDTH),HX_HCSTRING("TILE_WIDTH","\xd5","\x5e","\xc1","\xb3")},
	{hx::fsInt,(int)offsetof(ObjectPool_obj,TILE_HEIGHT),HX_HCSTRING("TILE_HEIGHT","\x18","\x14","\xc1","\x4b")},
	{hx::fsString,(int)offsetof(ObjectPool_obj,_tileMap),HX_HCSTRING("_tileMap","\x8f","\x01","\x2f","\x7f")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(ObjectPool_obj,_pool),HX_HCSTRING("_pool","\xbb","\x9c","\x6d","\xfd")},
	{hx::fsBool,(int)offsetof(ObjectPool_obj,_solid),HX_HCSTRING("_solid","\x6c","\xfb","\xac","\x7c")},
	{hx::fsInt,(int)offsetof(ObjectPool_obj,counter),HX_HCSTRING("counter","\xfc","\xae","\x59","\x1d")},
	{hx::fsInt,(int)offsetof(ObjectPool_obj,size),HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *ObjectPool_obj_sStaticStorageInfo = 0;
#endif

static ::String ObjectPool_obj_sMemberFields[] = {
	HX_HCSTRING("TILE_WIDTH","\xd5","\x5e","\xc1","\xb3"),
	HX_HCSTRING("TILE_HEIGHT","\x18","\x14","\xc1","\x4b"),
	HX_HCSTRING("_tileMap","\x8f","\x01","\x2f","\x7f"),
	HX_HCSTRING("_pool","\xbb","\x9c","\x6d","\xfd"),
	HX_HCSTRING("_solid","\x6c","\xfb","\xac","\x7c"),
	HX_HCSTRING("counter","\xfc","\xae","\x59","\x1d"),
	HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c"),
	HX_HCSTRING("getObj","\x01","\xc9","\x23","\xa3"),
	HX_HCSTRING("returnObj","\x27","\xb1","\x82","\x0c"),
	HX_HCSTRING("loadPool","\x22","\x52","\xfc","\xba"),
	::String(null()) };

static void ObjectPool_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ObjectPool_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ObjectPool_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ObjectPool_obj::__mClass,"__mClass");
};

#endif

hx::Class ObjectPool_obj::__mClass;

void ObjectPool_obj::__register()
{
	hx::Object *dummy = new ObjectPool_obj;
	ObjectPool_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("ObjectPool","\x5b","\xfb","\x45","\xc3");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = ObjectPool_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(ObjectPool_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ObjectPool_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ObjectPool_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ObjectPool_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ObjectPool_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

