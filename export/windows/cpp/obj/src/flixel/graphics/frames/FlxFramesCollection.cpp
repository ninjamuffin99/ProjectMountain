// Generated by Haxe 3.4.0
#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFrame
#include <flixel/graphics/frames/FlxFrame.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFrameCollectionType
#include <flixel/graphics/frames/FlxFrameCollectionType.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFramesCollection
#include <flixel/graphics/frames/FlxFramesCollection.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRect
#include <flixel/math/FlxRect.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_LogFrontEnd
#include <flixel/system/frontEnds/LogFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_math_FlxPoint
#include <flixel/util/FlxPool_flixel_math_FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_math_FlxRect
#include <flixel/util/FlxPool_flixel_math_FlxRect.h>
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
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_util_LabelValuePair
#include <flixel/util/LabelValuePair.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_8894dc9191d7a9ff_54_new,"flixel.graphics.frames.FlxFramesCollection","new",0x41834b71,"flixel.graphics.frames.FlxFramesCollection.new","flixel/graphics/frames/FlxFramesCollection.hx",54,0xe09dd200)
HX_LOCAL_STACK_FRAME(_hx_pos_8894dc9191d7a9ff_75_getByName,"flixel.graphics.frames.FlxFramesCollection","getByName",0xec0f52c9,"flixel.graphics.frames.FlxFramesCollection.getByName","flixel/graphics/frames/FlxFramesCollection.hx",75,0xe09dd200)
HX_LOCAL_STACK_FRAME(_hx_pos_8894dc9191d7a9ff_86_getByIndex,"flixel.graphics.frames.FlxFramesCollection","getByIndex",0xc8e928d4,"flixel.graphics.frames.FlxFramesCollection.getByIndex","flixel/graphics/frames/FlxFramesCollection.hx",86,0xe09dd200)
HX_LOCAL_STACK_FRAME(_hx_pos_8894dc9191d7a9ff_96_getIndexByName,"flixel.graphics.frames.FlxFramesCollection","getIndexByName",0x9190d40d,"flixel.graphics.frames.FlxFramesCollection.getIndexByName","flixel/graphics/frames/FlxFramesCollection.hx",96,0xe09dd200)
HX_LOCAL_STACK_FRAME(_hx_pos_8894dc9191d7a9ff_116_getFrameIndex,"flixel.graphics.frames.FlxFramesCollection","getFrameIndex",0x9be9862c,"flixel.graphics.frames.FlxFramesCollection.getFrameIndex","flixel/graphics/frames/FlxFramesCollection.hx",116,0xe09dd200)
HX_LOCAL_STACK_FRAME(_hx_pos_8894dc9191d7a9ff_120_destroy,"flixel.graphics.frames.FlxFramesCollection","destroy",0x3c5f048b,"flixel.graphics.frames.FlxFramesCollection.destroy","flixel/graphics/frames/FlxFramesCollection.hx",120,0xe09dd200)
HX_LOCAL_STACK_FRAME(_hx_pos_8894dc9191d7a9ff_136_addEmptyFrame,"flixel.graphics.frames.FlxFramesCollection","addEmptyFrame",0x8f5bf232,"flixel.graphics.frames.FlxFramesCollection.addEmptyFrame","flixel/graphics/frames/FlxFramesCollection.hx",136,0xe09dd200)
HX_LOCAL_STACK_FRAME(_hx_pos_8894dc9191d7a9ff_152_addSpriteSheetFrame,"flixel.graphics.frames.FlxFramesCollection","addSpriteSheetFrame",0x98036ac5,"flixel.graphics.frames.FlxFramesCollection.addSpriteSheetFrame","flixel/graphics/frames/FlxFramesCollection.hx",152,0xe09dd200)
HX_LOCAL_STACK_FRAME(_hx_pos_8894dc9191d7a9ff_172_addAtlasFrame,"flixel.graphics.frames.FlxFramesCollection","addAtlasFrame",0xf1c62eb4,"flixel.graphics.frames.FlxFramesCollection.addAtlasFrame","flixel/graphics/frames/FlxFramesCollection.hx",172,0xe09dd200)
HX_LOCAL_STACK_FRAME(_hx_pos_8894dc9191d7a9ff_197_checkFrame,"flixel.graphics.frames.FlxFramesCollection","checkFrame",0xf252f354,"flixel.graphics.frames.FlxFramesCollection.checkFrame","flixel/graphics/frames/FlxFramesCollection.hx",197,0xe09dd200)
HX_LOCAL_STACK_FRAME(_hx_pos_8894dc9191d7a9ff_219_pushFrame,"flixel.graphics.frames.FlxFramesCollection","pushFrame",0xac097dc4,"flixel.graphics.frames.FlxFramesCollection.pushFrame","flixel/graphics/frames/FlxFramesCollection.hx",219,0xe09dd200)
HX_LOCAL_STACK_FRAME(_hx_pos_8894dc9191d7a9ff_245_addBorder,"flixel.graphics.frames.FlxFramesCollection","addBorder",0x7da91fbe,"flixel.graphics.frames.FlxFramesCollection.addBorder","flixel/graphics/frames/FlxFramesCollection.hx",245,0xe09dd200)
HX_LOCAL_STACK_FRAME(_hx_pos_8894dc9191d7a9ff_251_toString,"flixel.graphics.frames.FlxFramesCollection","toString",0xfe5297fb,"flixel.graphics.frames.FlxFramesCollection.toString","flixel/graphics/frames/FlxFramesCollection.hx",251,0xe09dd200)
HX_LOCAL_STACK_FRAME(_hx_pos_8894dc9191d7a9ff_258_get_numFrames,"flixel.graphics.frames.FlxFramesCollection","get_numFrames",0xbd2728b4,"flixel.graphics.frames.FlxFramesCollection.get_numFrames","flixel/graphics/frames/FlxFramesCollection.hx",258,0xe09dd200)
namespace flixel{
namespace graphics{
namespace frames{

void FlxFramesCollection_obj::__construct( ::flixel::graphics::FlxGraphic parent, ::flixel::graphics::frames::FlxFrameCollectionType type, ::flixel::math::FlxPoint border){
            	HX_GC_STACKFRAME(&_hx_pos_8894dc9191d7a9ff_54_new)
HXLINE(  55)		this->parent = parent;
HXLINE(  56)		this->type = type;
HXLINE(  57)		 ::flixel::math::FlxPoint _hx_tmp;
HXDLIN(  57)		if (hx::IsNull( border )) {
HXLINE(  57)			 ::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set((int)0,(int)0);
HXDLIN(  57)			point->_inPool = false;
HXDLIN(  57)			_hx_tmp = point;
            		}
            		else {
HXLINE(  57)			_hx_tmp = border;
            		}
HXDLIN(  57)		this->border = _hx_tmp;
HXLINE(  58)		this->frames = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  59)		this->framesHash =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE(  61)		if (hx::IsNotNull( parent )) {
HXLINE(  63)			parent->addFrameCollection(hx::ObjectPtr<OBJ_>(this));
            		}
            	}

Dynamic FlxFramesCollection_obj::__CreateEmpty() { return new FlxFramesCollection_obj; }

void *FlxFramesCollection_obj::_hx_vtable = 0;

Dynamic FlxFramesCollection_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< FlxFramesCollection_obj > _hx_result = new FlxFramesCollection_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool FlxFramesCollection_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0163a3e9;
}

static ::flixel::util::IFlxDestroyable_obj _hx_flixel_graphics_frames_FlxFramesCollection__hx_flixel_util_IFlxDestroyable= {
	( void (hx::Object::*)())&::flixel::graphics::frames::FlxFramesCollection_obj::destroy,
};

void *FlxFramesCollection_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0xd4fe2fcd: return &_hx_flixel_graphics_frames_FlxFramesCollection__hx_flixel_util_IFlxDestroyable;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

 ::flixel::graphics::frames::FlxFrame FlxFramesCollection_obj::getByName(::String name){
            	HX_STACKFRAME(&_hx_pos_8894dc9191d7a9ff_75_getByName)
HXLINE(  75)		return this->framesHash->get(name).StaticCast<  ::flixel::graphics::frames::FlxFrame >();
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxFramesCollection_obj,getByName,return )

 ::flixel::graphics::frames::FlxFrame FlxFramesCollection_obj::getByIndex(int index){
            	HX_STACKFRAME(&_hx_pos_8894dc9191d7a9ff_86_getByIndex)
HXLINE(  86)		return this->frames->__get(index).StaticCast<  ::flixel::graphics::frames::FlxFrame >();
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxFramesCollection_obj,getByIndex,return )

int FlxFramesCollection_obj::getIndexByName(::String name){
            	HX_STACKFRAME(&_hx_pos_8894dc9191d7a9ff_96_getIndexByName)
HXLINE(  97)		{
HXLINE(  97)			int _g1 = (int)0;
HXDLIN(  97)			int _g = this->frames->length;
HXDLIN(  97)			while((_g1 < _g)){
HXLINE(  97)				_g1 = (_g1 + (int)1);
HXDLIN(  97)				int i = (_g1 - (int)1);
HXLINE(  99)				if ((this->frames->__get(i).StaticCast<  ::flixel::graphics::frames::FlxFrame >()->name == name)) {
HXLINE( 101)					return i;
            				}
            			}
            		}
HXLINE( 105)		return (int)-1;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxFramesCollection_obj,getIndexByName,return )

int FlxFramesCollection_obj::getFrameIndex( ::flixel::graphics::frames::FlxFrame frame){
            	HX_STACKFRAME(&_hx_pos_8894dc9191d7a9ff_116_getFrameIndex)
HXLINE( 116)		return this->frames->indexOf(frame,null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxFramesCollection_obj,getFrameIndex,return )

void FlxFramesCollection_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_8894dc9191d7a9ff_120_destroy)
HXLINE( 121)		this->frames = ::flixel::util::FlxDestroyUtil_obj::destroyArray(this->frames);
HXLINE( 122)		this->border = ( ( ::flixel::math::FlxPoint)(::flixel::util::FlxDestroyUtil_obj::put(this->border)) );
HXLINE( 123)		this->framesHash = null();
HXLINE( 124)		this->parent = null();
HXLINE( 125)		this->type = null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxFramesCollection_obj,destroy,(void))

 ::flixel::graphics::frames::FlxFrame FlxFramesCollection_obj::addEmptyFrame( ::flixel::math::FlxRect size){
            	HX_GC_STACKFRAME(&_hx_pos_8894dc9191d7a9ff_136_addEmptyFrame)
HXLINE( 137)		 ::flixel::graphics::frames::FlxFrame frame =  ::flixel::graphics::frames::FlxFrame_obj::__alloc( HX_CTX ,this->parent,null(),null(),null());
HXLINE( 138)		frame->type = (int)2;
HXLINE( 139)		 ::flixel::math::FlxRect _this = ::flixel::math::FlxRect_obj::_pool->get();
HXDLIN( 139)		_this->x = (int)0;
HXDLIN( 139)		_this->y = (int)0;
HXDLIN( 139)		_this->width = (int)0;
HXDLIN( 139)		_this->height = (int)0;
HXDLIN( 139)		 ::flixel::math::FlxRect rect = _this;
HXDLIN( 139)		rect->_inPool = false;
HXDLIN( 139)		frame->set_frame(rect);
HXLINE( 140)		frame->sourceSize->set(size->width,size->height);
HXLINE( 141)		this->frames->push(frame);
HXLINE( 142)		return frame;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxFramesCollection_obj,addEmptyFrame,return )

 ::flixel::graphics::frames::FlxFrame FlxFramesCollection_obj::addSpriteSheetFrame( ::flixel::math::FlxRect region){
            	HX_GC_STACKFRAME(&_hx_pos_8894dc9191d7a9ff_152_addSpriteSheetFrame)
HXLINE( 153)		 ::flixel::graphics::frames::FlxFrame frame =  ::flixel::graphics::frames::FlxFrame_obj::__alloc( HX_CTX ,this->parent,null(),null(),null());
HXLINE( 154)		frame->set_frame(this->checkFrame(region,null()));
HXLINE( 155)		frame->sourceSize->set(region->width,region->height);
HXLINE( 156)		frame->offset->set((int)0,(int)0);
HXLINE( 157)		return this->pushFrame(frame);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxFramesCollection_obj,addSpriteSheetFrame,return )

 ::flixel::graphics::frames::FlxFrame FlxFramesCollection_obj::addAtlasFrame( ::flixel::math::FlxRect frame, ::flixel::math::FlxPoint sourceSize, ::flixel::math::FlxPoint offset,::String name,hx::Null< int >  __o_angle,hx::Null< bool >  __o_flipX,hx::Null< bool >  __o_flipY){
int angle = __o_angle.Default(0);
bool flipX = __o_flipX.Default(false);
bool flipY = __o_flipY.Default(false);
            	HX_GC_STACKFRAME(&_hx_pos_8894dc9191d7a9ff_172_addAtlasFrame)
HXLINE( 173)		bool _hx_tmp;
HXDLIN( 173)		if (hx::IsNotNull( name )) {
HXLINE( 173)			_hx_tmp = this->framesHash->exists(name);
            		}
            		else {
HXLINE( 173)			_hx_tmp = false;
            		}
HXDLIN( 173)		if (_hx_tmp) {
HXLINE( 175)			return this->framesHash->get(name).StaticCast<  ::flixel::graphics::frames::FlxFrame >();
            		}
HXLINE( 178)		 ::flixel::graphics::frames::FlxFrame texFrame =  ::flixel::graphics::frames::FlxFrame_obj::__alloc( HX_CTX ,this->parent,angle,flipX,flipY);
HXLINE( 179)		texFrame->name = name;
HXLINE( 180)		texFrame->sourceSize->set(sourceSize->x,sourceSize->y);
HXLINE( 181)		texFrame->offset->set(offset->x,offset->y);
HXLINE( 182)		texFrame->set_frame(this->checkFrame(frame,name));
HXLINE( 184)		sourceSize = ( ( ::flixel::math::FlxPoint)(::flixel::util::FlxDestroyUtil_obj::put(sourceSize)) );
HXLINE( 185)		offset = ( ( ::flixel::math::FlxPoint)(::flixel::util::FlxDestroyUtil_obj::put(offset)) );
HXLINE( 187)		return this->pushFrame(texFrame);
            	}


HX_DEFINE_DYNAMIC_FUNC7(FlxFramesCollection_obj,addAtlasFrame,return )

 ::flixel::math::FlxRect FlxFramesCollection_obj::checkFrame( ::flixel::math::FlxRect frame,::String name){
            	HX_STACKFRAME(&_hx_pos_8894dc9191d7a9ff_197_checkFrame)
HXLINE( 198)		Float Value = frame->x;
HXDLIN( 198)		 ::Dynamic Max = this->parent->width;
HXDLIN( 198)		Float lowerBound;
HXDLIN( 198)		if ((Value < (int)0)) {
HXLINE( 198)			lowerBound = (int)0;
            		}
            		else {
HXLINE( 198)			lowerBound = Value;
            		}
HXDLIN( 198)		Float x;
HXDLIN( 198)		bool x1;
HXDLIN( 198)		if (hx::IsNotNull( Max )) {
HXLINE( 198)			x1 = hx::IsGreater( lowerBound,Max );
            		}
            		else {
HXLINE( 198)			x1 = false;
            		}
HXDLIN( 198)		if (x1) {
HXLINE( 198)			x = Max;
            		}
            		else {
HXLINE( 198)			x = lowerBound;
            		}
HXLINE( 199)		Float Value1 = frame->y;
HXDLIN( 199)		 ::Dynamic Max1 = this->parent->height;
HXDLIN( 199)		Float lowerBound1;
HXDLIN( 199)		if ((Value1 < (int)0)) {
HXLINE( 199)			lowerBound1 = (int)0;
            		}
            		else {
HXLINE( 199)			lowerBound1 = Value1;
            		}
HXDLIN( 199)		Float y;
HXDLIN( 199)		bool y1;
HXDLIN( 199)		if (hx::IsNotNull( Max1 )) {
HXLINE( 199)			y1 = hx::IsGreater( lowerBound1,Max1 );
            		}
            		else {
HXLINE( 199)			y1 = false;
            		}
HXDLIN( 199)		if (y1) {
HXLINE( 199)			y = Max1;
            		}
            		else {
HXLINE( 199)			y = lowerBound1;
            		}
HXLINE( 201)		Float Value2 = (frame->x + frame->width);
HXDLIN( 201)		 ::Dynamic Max2 = this->parent->width;
HXDLIN( 201)		Float lowerBound2;
HXDLIN( 201)		if ((Value2 < (int)0)) {
HXLINE( 201)			lowerBound2 = (int)0;
            		}
            		else {
HXLINE( 201)			lowerBound2 = Value2;
            		}
HXDLIN( 201)		Float r;
HXDLIN( 201)		bool r1;
HXDLIN( 201)		if (hx::IsNotNull( Max2 )) {
HXLINE( 201)			r1 = hx::IsGreater( lowerBound2,Max2 );
            		}
            		else {
HXLINE( 201)			r1 = false;
            		}
HXDLIN( 201)		if (r1) {
HXLINE( 201)			r = Max2;
            		}
            		else {
HXLINE( 201)			r = lowerBound2;
            		}
HXLINE( 202)		Float Value3 = (frame->y + frame->height);
HXDLIN( 202)		 ::Dynamic Max3 = this->parent->height;
HXDLIN( 202)		Float lowerBound3;
HXDLIN( 202)		if ((Value3 < (int)0)) {
HXLINE( 202)			lowerBound3 = (int)0;
            		}
            		else {
HXLINE( 202)			lowerBound3 = Value3;
            		}
HXDLIN( 202)		Float b;
HXDLIN( 202)		bool b1;
HXDLIN( 202)		if (hx::IsNotNull( Max3 )) {
HXLINE( 202)			b1 = hx::IsGreater( lowerBound3,Max3 );
            		}
            		else {
HXLINE( 202)			b1 = false;
            		}
HXDLIN( 202)		if (b1) {
HXLINE( 202)			b = Max3;
            		}
            		else {
HXLINE( 202)			b = lowerBound3;
            		}
HXLINE( 204)		{
HXLINE( 204)			frame->x = x;
HXDLIN( 204)			frame->y = y;
HXDLIN( 204)			frame->width = (r - x);
HXDLIN( 204)			frame->height = (b - y);
            		}
HXLINE( 206)		bool _hx_tmp;
HXDLIN( 206)		if (!((frame->width <= (int)0))) {
HXLINE( 206)			_hx_tmp = (frame->height <= (int)0);
            		}
            		else {
HXLINE( 206)			_hx_tmp = true;
            		}
HXDLIN( 206)		if (_hx_tmp) {
HXLINE( 207)			 ::flixel::_hx_system::frontEnds::LogFrontEnd _this = ::flixel::FlxG_obj::log;
            		}
HXLINE( 209)		return frame;
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxFramesCollection_obj,checkFrame,return )

 ::flixel::graphics::frames::FlxFrame FlxFramesCollection_obj::pushFrame( ::flixel::graphics::frames::FlxFrame frameObj){
            	HX_STACKFRAME(&_hx_pos_8894dc9191d7a9ff_219_pushFrame)
HXLINE( 220)		::String name = frameObj->name;
HXLINE( 221)		bool _hx_tmp;
HXDLIN( 221)		if (hx::IsNotNull( name )) {
HXLINE( 221)			_hx_tmp = this->framesHash->exists(name);
            		}
            		else {
HXLINE( 221)			_hx_tmp = false;
            		}
HXDLIN( 221)		if (_hx_tmp) {
HXLINE( 223)			return this->framesHash->get(name).StaticCast<  ::flixel::graphics::frames::FlxFrame >();
            		}
HXLINE( 226)		this->frames->push(frameObj);
HXLINE( 227)		frameObj->cacheFrameMatrix();
HXLINE( 229)		if (hx::IsNotNull( name )) {
HXLINE( 231)			this->framesHash->set(name,frameObj);
            		}
HXLINE( 234)		return frameObj;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxFramesCollection_obj,pushFrame,return )

 ::flixel::graphics::frames::FlxFramesCollection FlxFramesCollection_obj::addBorder( ::flixel::math::FlxPoint border){
            	HX_STACKFRAME(&_hx_pos_8894dc9191d7a9ff_245_addBorder)
HXLINE( 245)		HX_STACK_DO_THROW(HX_("To be overriden in subclasses",8b,78,89,60));
HXDLIN( 245)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxFramesCollection_obj,addBorder,return )

::String FlxFramesCollection_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_8894dc9191d7a9ff_251_toString)
HXLINE( 252)		 ::Dynamic value = this->frames;
HXDLIN( 252)		 ::flixel::util::LabelValuePair _this = ::flixel::util::LabelValuePair_obj::_pool->get();
HXDLIN( 252)		_this->label = HX_("frames",a6,af,85,ac);
HXDLIN( 252)		_this->value = value;
HXDLIN( 252)		 ::flixel::util::LabelValuePair _hx_tmp = _this;
HXLINE( 253)		 ::Dynamic value1 = this->type;
HXDLIN( 253)		 ::flixel::util::LabelValuePair _this1 = ::flixel::util::LabelValuePair_obj::_pool->get();
HXDLIN( 253)		_this1->label = HX_("type",ba,f2,08,4d);
HXDLIN( 253)		_this1->value = value1;
HXLINE( 251)		return ::flixel::util::FlxStringUtil_obj::getDebugString(::Array_obj< ::Dynamic>::__new(2)->init(0,_hx_tmp)->init(1,_this1));
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxFramesCollection_obj,toString,return )

int FlxFramesCollection_obj::get_numFrames(){
            	HX_STACKFRAME(&_hx_pos_8894dc9191d7a9ff_258_get_numFrames)
HXLINE( 258)		return this->frames->length;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxFramesCollection_obj,get_numFrames,return )


hx::ObjectPtr< FlxFramesCollection_obj > FlxFramesCollection_obj::__new( ::flixel::graphics::FlxGraphic parent, ::flixel::graphics::frames::FlxFrameCollectionType type, ::flixel::math::FlxPoint border) {
	hx::ObjectPtr< FlxFramesCollection_obj > __this = new FlxFramesCollection_obj();
	__this->__construct(parent,type,border);
	return __this;
}

hx::ObjectPtr< FlxFramesCollection_obj > FlxFramesCollection_obj::__alloc(hx::Ctx *_hx_ctx, ::flixel::graphics::FlxGraphic parent, ::flixel::graphics::frames::FlxFrameCollectionType type, ::flixel::math::FlxPoint border) {
	FlxFramesCollection_obj *__this = (FlxFramesCollection_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(FlxFramesCollection_obj), true, "flixel.graphics.frames.FlxFramesCollection"));
	*(void **)__this = FlxFramesCollection_obj::_hx_vtable;
	__this->__construct(parent,type,border);
	return __this;
}

FlxFramesCollection_obj::FlxFramesCollection_obj()
{
}

void FlxFramesCollection_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxFramesCollection);
	HX_MARK_MEMBER_NAME(frames,"frames");
	HX_MARK_MEMBER_NAME(framesHash,"framesHash");
	HX_MARK_MEMBER_NAME(parent,"parent");
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_MEMBER_NAME(border,"border");
	HX_MARK_END_CLASS();
}

void FlxFramesCollection_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(frames,"frames");
	HX_VISIT_MEMBER_NAME(framesHash,"framesHash");
	HX_VISIT_MEMBER_NAME(parent,"parent");
	HX_VISIT_MEMBER_NAME(type,"type");
	HX_VISIT_MEMBER_NAME(border,"border");
}

hx::Val FlxFramesCollection_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { return hx::Val( type); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"frames") ) { return hx::Val( frames); }
		if (HX_FIELD_EQ(inName,"parent") ) { return hx::Val( parent); }
		if (HX_FIELD_EQ(inName,"border") ) { return hx::Val( border); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return hx::Val( destroy_dyn()); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return hx::Val( toString_dyn()); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"numFrames") ) { if (inCallProp == hx::paccAlways) return hx::Val(get_numFrames()); }
		if (HX_FIELD_EQ(inName,"getByName") ) { return hx::Val( getByName_dyn()); }
		if (HX_FIELD_EQ(inName,"pushFrame") ) { return hx::Val( pushFrame_dyn()); }
		if (HX_FIELD_EQ(inName,"addBorder") ) { return hx::Val( addBorder_dyn()); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"framesHash") ) { return hx::Val( framesHash); }
		if (HX_FIELD_EQ(inName,"getByIndex") ) { return hx::Val( getByIndex_dyn()); }
		if (HX_FIELD_EQ(inName,"checkFrame") ) { return hx::Val( checkFrame_dyn()); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getFrameIndex") ) { return hx::Val( getFrameIndex_dyn()); }
		if (HX_FIELD_EQ(inName,"addEmptyFrame") ) { return hx::Val( addEmptyFrame_dyn()); }
		if (HX_FIELD_EQ(inName,"addAtlasFrame") ) { return hx::Val( addAtlasFrame_dyn()); }
		if (HX_FIELD_EQ(inName,"get_numFrames") ) { return hx::Val( get_numFrames_dyn()); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getIndexByName") ) { return hx::Val( getIndexByName_dyn()); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"addSpriteSheetFrame") ) { return hx::Val( addSpriteSheetFrame_dyn()); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val FlxFramesCollection_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast<  ::flixel::graphics::frames::FlxFrameCollectionType >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"frames") ) { frames=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"parent") ) { parent=inValue.Cast<  ::flixel::graphics::FlxGraphic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"border") ) { border=inValue.Cast<  ::flixel::math::FlxPoint >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"framesHash") ) { framesHash=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxFramesCollection_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("frames","\xa6","\xaf","\x85","\xac"));
	outFields->push(HX_HCSTRING("numFrames","\x8c","\xfa","\x86","\x5d"));
	outFields->push(HX_HCSTRING("framesHash","\x94","\xd6","\xee","\xb6"));
	outFields->push(HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed"));
	outFields->push(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"));
	outFields->push(HX_HCSTRING("border","\xec","\x4c","\x1a","\x64"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo FlxFramesCollection_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(FlxFramesCollection_obj,frames),HX_HCSTRING("frames","\xa6","\xaf","\x85","\xac")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(FlxFramesCollection_obj,framesHash),HX_HCSTRING("framesHash","\x94","\xd6","\xee","\xb6")},
	{hx::fsObject /*::flixel::graphics::FlxGraphic*/ ,(int)offsetof(FlxFramesCollection_obj,parent),HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed")},
	{hx::fsObject /*::flixel::graphics::frames::FlxFrameCollectionType*/ ,(int)offsetof(FlxFramesCollection_obj,type),HX_HCSTRING("type","\xba","\xf2","\x08","\x4d")},
	{hx::fsObject /*::flixel::math::FlxPoint*/ ,(int)offsetof(FlxFramesCollection_obj,border),HX_HCSTRING("border","\xec","\x4c","\x1a","\x64")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *FlxFramesCollection_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxFramesCollection_obj_sMemberFields[] = {
	HX_HCSTRING("frames","\xa6","\xaf","\x85","\xac"),
	HX_HCSTRING("framesHash","\x94","\xd6","\xee","\xb6"),
	HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed"),
	HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"),
	HX_HCSTRING("border","\xec","\x4c","\x1a","\x64"),
	HX_HCSTRING("getByName","\xf8","\xb4","\xa4","\x8a"),
	HX_HCSTRING("getByIndex","\xc5","\xaf","\x09","\xed"),
	HX_HCSTRING("getIndexByName","\x7e","\x27","\xfe","\xba"),
	HX_HCSTRING("getFrameIndex","\xdb","\x2b","\xad","\xfd"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("addEmptyFrame","\xe1","\x97","\x1f","\xf1"),
	HX_HCSTRING("addSpriteSheetFrame","\xb4","\xfd","\xbc","\xf0"),
	HX_HCSTRING("addAtlasFrame","\x63","\xd4","\x89","\x53"),
	HX_HCSTRING("checkFrame","\x45","\x7a","\x73","\x16"),
	HX_HCSTRING("pushFrame","\xf3","\xdf","\x9e","\x4a"),
	HX_HCSTRING("addBorder","\xed","\x81","\x3e","\x1c"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	HX_HCSTRING("get_numFrames","\x63","\xce","\xea","\x1e"),
	::String(null()) };

static void FlxFramesCollection_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxFramesCollection_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FlxFramesCollection_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxFramesCollection_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxFramesCollection_obj::__mClass;

void FlxFramesCollection_obj::__register()
{
	hx::Object *dummy = new FlxFramesCollection_obj;
	FlxFramesCollection_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.graphics.frames.FlxFramesCollection","\xff","\xbe","\x62","\x54");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = FlxFramesCollection_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(FlxFramesCollection_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxFramesCollection_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FlxFramesCollection_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxFramesCollection_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxFramesCollection_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace graphics
} // end namespace frames
