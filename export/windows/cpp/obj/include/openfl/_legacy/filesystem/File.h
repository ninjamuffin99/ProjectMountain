// Generated by Haxe 3.4.0
#ifndef INCLUDED_openfl__legacy_filesystem_File
#define INCLUDED_openfl__legacy_filesystem_File

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(openfl,_legacy,filesystem,File)

namespace openfl{
namespace _legacy{
namespace filesystem{


class HXCPP_CLASS_ATTRIBUTES File_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef File_obj OBJ_;
		File_obj();

	public:
		enum { _hx_ClassId = 0x08dab57b };

		void __construct(::String path);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl._legacy.filesystem.File")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"openfl._legacy.filesystem.File"); }
		static hx::ObjectPtr< File_obj > __new(::String path);
		static hx::ObjectPtr< File_obj > __alloc(hx::Ctx *_hx_ctx,::String path);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~File_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("File","\x9c","\xfa","\x94","\x2e"); }

		static void __boot();
		static  ::openfl::_legacy::filesystem::File applicationDirectory;
		static  ::openfl::_legacy::filesystem::File applicationStorageDirectory;
		static  ::openfl::_legacy::filesystem::File desktopDirectory;
		static  ::openfl::_legacy::filesystem::File documentsDirectory;
		static  ::openfl::_legacy::filesystem::File userDirectory;
		static int APP;
		static int STORAGE;
		static int DESKTOP;
		static int DOCS;
		static int USER;
		static  ::openfl::_legacy::filesystem::File get_applicationDirectory();
		static ::Dynamic get_applicationDirectory_dyn();

		static  ::openfl::_legacy::filesystem::File get_applicationStorageDirectory();
		static ::Dynamic get_applicationStorageDirectory_dyn();

		static  ::openfl::_legacy::filesystem::File get_desktopDirectory();
		static ::Dynamic get_desktopDirectory_dyn();

		static  ::openfl::_legacy::filesystem::File get_documentsDirectory();
		static ::Dynamic get_documentsDirectory_dyn();

		static  ::openfl::_legacy::filesystem::File get_userDirectory();
		static ::Dynamic get_userDirectory_dyn();

		static  ::Dynamic lime_filesystem_get_special_dir;
		static Dynamic lime_filesystem_get_special_dir_dyn() { return lime_filesystem_get_special_dir;}
		::String nativePath;
		::String url;
		::String set_nativePath(::String value);
		::Dynamic set_nativePath_dyn();

		::String set_url(::String value);
		::Dynamic set_url_dyn();

};

} // end namespace openfl
} // end namespace _legacy
} // end namespace filesystem

#endif /* INCLUDED_openfl__legacy_filesystem_File */ 
