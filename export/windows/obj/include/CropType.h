// Generated by Haxe 4.1.5
#ifndef INCLUDED_CropType
#define INCLUDED_CropType

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(CropType)


class CropType_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef CropType_obj OBJ_;

	public:
		CropType_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("CropType",8a,e4,22,93); }
		::String __ToString() const { return HX_("CropType.",64,14,65,2b) + _hx_tag; }

		static ::CropType CARROT;
		static inline ::CropType CARROT_dyn() { return CARROT; }
		static ::CropType TURNIP;
		static inline ::CropType TURNIP_dyn() { return TURNIP; }
};


#endif /* INCLUDED_CropType */ 
