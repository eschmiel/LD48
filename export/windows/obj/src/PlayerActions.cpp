// Generated by Haxe 4.1.5
#include <hxcpp.h>

#ifndef INCLUDED_EntityInterface
#include <EntityInterface.h>
#endif
#ifndef INCLUDED_PlayerActions
#include <PlayerActions.h>
#endif
#ifndef INCLUDED_Soil
#include <Soil.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_82399d157d40126e_5_new,"PlayerActions","new",0xb131bd6e,"PlayerActions.new","PlayerActions.hx",5,0x8bb349c2)
HX_LOCAL_STACK_FRAME(_hx_pos_82399d157d40126e_8_till,"PlayerActions","till",0x5e4e4a67,"PlayerActions.till","PlayerActions.hx",8,0x8bb349c2)

void PlayerActions_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_82399d157d40126e_5_new)
            	}

Dynamic PlayerActions_obj::__CreateEmpty() { return new PlayerActions_obj; }

void *PlayerActions_obj::_hx_vtable = 0;

Dynamic PlayerActions_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< PlayerActions_obj > _hx_result = new PlayerActions_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool PlayerActions_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x02de43bc;
}

void PlayerActions_obj::till( ::Soil target){
            	HX_STACKFRAME(&_hx_pos_82399d157d40126e_8_till)
            	}


HX_DEFINE_DYNAMIC_FUNC1(PlayerActions_obj,till,(void))


::hx::ObjectPtr< PlayerActions_obj > PlayerActions_obj::__new() {
	::hx::ObjectPtr< PlayerActions_obj > __this = new PlayerActions_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< PlayerActions_obj > PlayerActions_obj::__alloc(::hx::Ctx *_hx_ctx) {
	PlayerActions_obj *__this = (PlayerActions_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(PlayerActions_obj), false, "PlayerActions"));
	*(void **)__this = PlayerActions_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

PlayerActions_obj::PlayerActions_obj()
{
}

::hx::Val PlayerActions_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"till") ) { return ::hx::Val( till_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *PlayerActions_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *PlayerActions_obj_sStaticStorageInfo = 0;
#endif

static ::String PlayerActions_obj_sMemberFields[] = {
	HX_("till",35,cb,fc,4c),
	::String(null()) };

::hx::Class PlayerActions_obj::__mClass;

void PlayerActions_obj::__register()
{
	PlayerActions_obj _hx_dummy;
	PlayerActions_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("PlayerActions",7c,2e,97,26);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(PlayerActions_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< PlayerActions_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = PlayerActions_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = PlayerActions_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

