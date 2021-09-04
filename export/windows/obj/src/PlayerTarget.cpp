// Generated by Haxe 4.1.5
#include <hxcpp.h>

#ifndef INCLUDED_Entity
#include <Entity.h>
#endif
#ifndef INCLUDED_EntityInterface
#include <EntityInterface.h>
#endif
#ifndef INCLUDED_PlayerTarget
#include <PlayerTarget.h>
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
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_a29473755d8433a3_12_new,"PlayerTarget","new",0xad323fa4,"PlayerTarget.new","PlayerTarget.hx",12,0xb502804c)
HX_LOCAL_STACK_FRAME(_hx_pos_a29473755d8433a3_22_updatePosition,"PlayerTarget","updatePosition",0x5b67a30e,"PlayerTarget.updatePosition","PlayerTarget.hx",22,0xb502804c)
HX_LOCAL_STACK_FRAME(_hx_pos_a29473755d8433a3_49_clearTarget,"PlayerTarget","clearTarget",0x8a5f5402,"PlayerTarget.clearTarget","PlayerTarget.hx",49,0xb502804c)
HX_LOCAL_STACK_FRAME(_hx_pos_a29473755d8433a3_54_setTarget,"PlayerTarget","setTarget",0x6823a2d7,"PlayerTarget.setTarget","PlayerTarget.hx",54,0xb502804c)
HX_LOCAL_STACK_FRAME(_hx_pos_a29473755d8433a3_59_getTarget,"PlayerTarget","getTarget",0x84d2b6cb,"PlayerTarget.getTarget","PlayerTarget.hx",59,0xb502804c)

void PlayerTarget_obj::__construct(::hx::Null< Float >  __o_startingX,::hx::Null< Float >  __o_startingY){
            		Float startingX = __o_startingX.Default(0);
            		Float startingY = __o_startingY.Default(0);
            	HX_STACKFRAME(&_hx_pos_a29473755d8433a3_12_new)
HXLINE(  13)		super::__construct(startingX,startingY,null());
HXLINE(  14)		this->loadGraphic(HX_("assets/images/transparent.png",42,7a,6c,dd),null(),null(),null(),null(),null());
HXLINE(  15)		this->setSize(( (Float)(1) ),( (Float)(1) ));
HXLINE(  16)		this->offset->set(5,10);
            	}

Dynamic PlayerTarget_obj::__CreateEmpty() { return new PlayerTarget_obj; }

void *PlayerTarget_obj::_hx_vtable = 0;

Dynamic PlayerTarget_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< PlayerTarget_obj > _hx_result = new PlayerTarget_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool PlayerTarget_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x33d23072) {
		if (inClassId<=(int)0x2c01639b) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x2c01639b;
		} else {
			return inClassId==(int)0x33d23072;
		}
	} else {
		return inClassId==(int)0x7ccf8994 || inClassId==(int)0x7dab0655;
	}
}

void PlayerTarget_obj::updatePosition(Float playerX,Float playerY,int playerFacing){
            	HX_STACKFRAME(&_hx_pos_a29473755d8433a3_22_updatePosition)
HXDLIN(  22)		switch((int)(playerFacing)){
            			case (int)1: {
HXLINE(  36)				this->set_x((playerX - ( (Float)(8) )));
HXLINE(  37)				this->set_y((playerY + 1));
            			}
            			break;
            			case (int)16: {
HXLINE(  26)				this->set_x((playerX + 8));
HXLINE(  27)				this->set_y((playerY + 1));
            			}
            			break;
            			case (int)256: {
HXLINE(  41)				this->set_x(playerX);
HXLINE(  42)				this->set_y((playerY - ( (Float)(8) )));
            			}
            			break;
            			case (int)4096: {
HXLINE(  31)				this->set_x(playerX);
HXLINE(  32)				this->set_y((playerY + 8));
            			}
            			break;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(PlayerTarget_obj,updatePosition,(void))

void PlayerTarget_obj::clearTarget(){
            	HX_STACKFRAME(&_hx_pos_a29473755d8433a3_49_clearTarget)
HXDLIN(  49)		this->target = null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(PlayerTarget_obj,clearTarget,(void))

void PlayerTarget_obj::setTarget( ::Entity targetted){
            	HX_STACKFRAME(&_hx_pos_a29473755d8433a3_54_setTarget)
HXDLIN(  54)		this->target = targetted;
            	}


HX_DEFINE_DYNAMIC_FUNC1(PlayerTarget_obj,setTarget,(void))

 ::Entity PlayerTarget_obj::getTarget(){
            	HX_STACKFRAME(&_hx_pos_a29473755d8433a3_59_getTarget)
HXDLIN(  59)		return this->target;
            	}


HX_DEFINE_DYNAMIC_FUNC0(PlayerTarget_obj,getTarget,return )


::hx::ObjectPtr< PlayerTarget_obj > PlayerTarget_obj::__new(::hx::Null< Float >  __o_startingX,::hx::Null< Float >  __o_startingY) {
	::hx::ObjectPtr< PlayerTarget_obj > __this = new PlayerTarget_obj();
	__this->__construct(__o_startingX,__o_startingY);
	return __this;
}

::hx::ObjectPtr< PlayerTarget_obj > PlayerTarget_obj::__alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_startingX,::hx::Null< Float >  __o_startingY) {
	PlayerTarget_obj *__this = (PlayerTarget_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(PlayerTarget_obj), true, "PlayerTarget"));
	*(void **)__this = PlayerTarget_obj::_hx_vtable;
	__this->__construct(__o_startingX,__o_startingY);
	return __this;
}

PlayerTarget_obj::PlayerTarget_obj()
{
}

void PlayerTarget_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PlayerTarget);
	HX_MARK_MEMBER_NAME(target,"target");
	 ::flixel::FlxSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void PlayerTarget_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(target,"target");
	 ::flixel::FlxSprite_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val PlayerTarget_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"target") ) { return ::hx::Val( target ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"setTarget") ) { return ::hx::Val( setTarget_dyn() ); }
		if (HX_FIELD_EQ(inName,"getTarget") ) { return ::hx::Val( getTarget_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"clearTarget") ) { return ::hx::Val( clearTarget_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"updatePosition") ) { return ::hx::Val( updatePosition_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val PlayerTarget_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"target") ) { target=inValue.Cast<  ::Entity >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PlayerTarget_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("target",51,f3,ec,86));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo PlayerTarget_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Entity */ ,(int)offsetof(PlayerTarget_obj,target),HX_("target",51,f3,ec,86)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *PlayerTarget_obj_sStaticStorageInfo = 0;
#endif

static ::String PlayerTarget_obj_sMemberFields[] = {
	HX_("target",51,f3,ec,86),
	HX_("updatePosition",d2,93,24,00),
	HX_("clearTarget",be,00,da,1a),
	HX_("setTarget",93,68,94,e6),
	HX_("getTarget",87,7c,43,03),
	::String(null()) };

::hx::Class PlayerTarget_obj::__mClass;

void PlayerTarget_obj::__register()
{
	PlayerTarget_obj _hx_dummy;
	PlayerTarget_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("PlayerTarget",b2,dd,f0,4a);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(PlayerTarget_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< PlayerTarget_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = PlayerTarget_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = PlayerTarget_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

