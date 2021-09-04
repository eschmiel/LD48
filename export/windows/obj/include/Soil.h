// Generated by Haxe 4.1.5
#ifndef INCLUDED_Soil
#define INCLUDED_Soil

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_EntityInterface
#include <EntityInterface.h>
#endif
HX_DECLARE_CLASS0(Crop)
HX_DECLARE_CLASS0(EntityInterface)
HX_DECLARE_CLASS0(Equipment)
HX_DECLARE_CLASS0(Soil)
HX_DECLARE_CLASS0(SoilStatus)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)



class HXCPP_CLASS_ATTRIBUTES Soil_obj : public  ::flixel::FlxSprite_obj
{
	public:
		typedef  ::flixel::FlxSprite_obj super;
		typedef Soil_obj OBJ_;
		Soil_obj();

	public:
		enum { _hx_ClassId = 0x0b8441c3 };

		void __construct(Float x,Float y);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="Soil")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"Soil"); }
		static ::hx::ObjectPtr< Soil_obj > __new(Float x,Float y);
		static ::hx::ObjectPtr< Soil_obj > __alloc(::hx::Ctx *_hx_ctx,Float x,Float y);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Soil_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("Soil",9f,4b,31,37); }

		 ::SoilStatus status;
		 ::Crop contains;
		bool use( ::Equipment equipped);
		::Dynamic use_dyn();

		bool till();
		::Dynamic till_dyn();

		bool seed();
		::Dynamic seed_dyn();

};


#endif /* INCLUDED_Soil */ 
