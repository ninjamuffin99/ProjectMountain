// Generated by Haxe 3.4.0
#ifndef INCLUDED_cpp_vm_Gc
#define INCLUDED_cpp_vm_Gc

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(cpp,vm,Gc)

namespace cpp{
namespace vm{


class HXCPP_CLASS_ATTRIBUTES Gc_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Gc_obj OBJ_;
		Gc_obj();

	public:
		enum { _hx_ClassId = 0x6793e0b2 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="cpp.vm.Gc")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"cpp.vm.Gc"); }

		hx::ObjectPtr< Gc_obj > __new() {
			hx::ObjectPtr< Gc_obj > __this = new Gc_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< Gc_obj > __alloc(hx::Ctx *_hx_ctx) {
			Gc_obj *__this = (Gc_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Gc_obj), false, "cpp.vm.Gc"));
			*(void **)__this = Gc_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Gc_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("Gc","\x3c","\x3e","\x00","\x00"); }

		static void run(bool major);
		static ::Dynamic run_dyn();

};

} // end namespace cpp
} // end namespace vm

#endif /* INCLUDED_cpp_vm_Gc */ 