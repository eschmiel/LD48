// Generated by Haxe 4.1.5
#ifndef INCLUDED_TilemapConfigure
#define INCLUDED_TilemapConfigure

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(TilemapConfigure)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS2(flixel,tile,FlxBaseTilemap)
HX_DECLARE_CLASS2(flixel,tile,FlxTilemap)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)



class HXCPP_CLASS_ATTRIBUTES TilemapConfigure_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef TilemapConfigure_obj OBJ_;
		TilemapConfigure_obj();

	public:
		enum { _hx_ClassId = 0x488002b8 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="TilemapConfigure")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"TilemapConfigure"); }

		inline static ::hx::ObjectPtr< TilemapConfigure_obj > __new() {
			::hx::ObjectPtr< TilemapConfigure_obj > __this = new TilemapConfigure_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< TilemapConfigure_obj > __alloc(::hx::Ctx *_hx_ctx) {
			TilemapConfigure_obj *__this = (TilemapConfigure_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TilemapConfigure_obj), false, "TilemapConfigure"));
			*(void **)__this = TilemapConfigure_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~TilemapConfigure_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("TilemapConfigure",f8,4f,9e,72); }

		static void setWallTiles( ::flixel::tile::FlxTilemap tilemap,::Array< int > wallTiles);
		static ::Dynamic setWallTiles_dyn();

};


#endif /* INCLUDED_TilemapConfigure */ 
