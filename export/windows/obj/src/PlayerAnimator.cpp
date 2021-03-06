// Generated by Haxe 4.1.5
#include <hxcpp.h>

#ifndef INCLUDED_Player
#include <Player.h>
#endif
#ifndef INCLUDED_PlayerAnimator
#include <PlayerAnimator.h>
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
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_0b1a801c339a7061_13_new,"PlayerAnimator","new",0x28bec4fa,"PlayerAnimator.new","PlayerAnimator.hx",13,0xc7ee77b6)
static const int _hx_array_data_458e8008_1[] = {
	(int)3,(int)4,(int)5,(int)2,
};
static const int _hx_array_data_458e8008_2[] = {
	(int)2,(int)1,(int)0,(int)1,
};
static const int _hx_array_data_458e8008_3[] = {
	(int)9,(int)10,(int)11,(int)8,
};
static const int _hx_array_data_458e8008_4[] = {
	(int)8,(int)7,(int)6,(int)7,
};
static const int _hx_array_data_458e8008_5[] = {
	(int)15,(int)16,(int)17,(int)14,
};
static const int _hx_array_data_458e8008_6[] = {
	(int)14,(int)13,(int)12,(int)13,
};
HX_LOCAL_STACK_FRAME(_hx_pos_0b1a801c339a7061_32_updateAnimation,"PlayerAnimator","updateAnimation",0x27943355,"PlayerAnimator.updateAnimation","PlayerAnimator.hx",32,0xc7ee77b6)
HX_LOCAL_STACK_FRAME(_hx_pos_0b1a801c339a7061_45_setAnimationState,"PlayerAnimator","setAnimationState",0xeb9c9dc9,"PlayerAnimator.setAnimationState","PlayerAnimator.hx",45,0xc7ee77b6)

void PlayerAnimator_obj::__construct( ::Player animatedPlayer){
            	HX_STACKFRAME(&_hx_pos_0b1a801c339a7061_13_new)
HXLINE(  14)		this->player = animatedPlayer;
HXLINE(  16)		this->player->loadGraphic(HX_("assets/images/ld48Player.png",23,0b,9e,53),true,16,16,null(),null());
HXLINE(  17)		this->player->_facingFlip->set(1, ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("x",78,00,00,00),true)
            			->setFixed(1,HX_("y",79,00,00,00),false)));
HXLINE(  18)		this->player->_facingFlip->set(16, ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("x",78,00,00,00),false)
            			->setFixed(1,HX_("y",79,00,00,00),false)));
HXLINE(  20)		this->player->animation->add(HX_("runLR",91,d2,57,f1),::Array_obj< int >::fromData( _hx_array_data_458e8008_1,4),5,false,null(),null());
HXLINE(  21)		this->player->animation->add(HX_("idleLR",9a,d6,3a,d7),::Array_obj< int >::fromData( _hx_array_data_458e8008_2,4),5,false,null(),null());
HXLINE(  23)		this->player->animation->add(HX_("runDown",4d,0d,ab,cf),::Array_obj< int >::fromData( _hx_array_data_458e8008_3,4),5,false,null(),null());
HXLINE(  24)		this->player->animation->add(HX_("idleDown",96,e5,5d,37),::Array_obj< int >::fromData( _hx_array_data_458e8008_4,4),5,false,null(),null());
HXLINE(  26)		this->player->animation->add(HX_("runUp",86,da,57,f1),::Array_obj< int >::fromData( _hx_array_data_458e8008_5,4),5,false,null(),null());
HXLINE(  27)		this->player->animation->add(HX_("idleUp",8f,de,3a,d7),::Array_obj< int >::fromData( _hx_array_data_458e8008_6,4),5,false,null(),null());
            	}

Dynamic PlayerAnimator_obj::__CreateEmpty() { return new PlayerAnimator_obj; }

void *PlayerAnimator_obj::_hx_vtable = 0;

Dynamic PlayerAnimator_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< PlayerAnimator_obj > _hx_result = new PlayerAnimator_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool PlayerAnimator_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x277a02c8;
}

void PlayerAnimator_obj::updateAnimation(){
            	HX_STACKFRAME(&_hx_pos_0b1a801c339a7061_32_updateAnimation)
HXDLIN(  32)		switch((int)(this->player->facing)){
            			case (int)1: case (int)16: {
HXLINE(  35)				this->player->animation->play(this->lrAnimation,null(),null(),null());
            			}
            			break;
            			case (int)256: {
HXLINE(  39)				this->player->animation->play(this->upAnimation,null(),null(),null());
            			}
            			break;
            			case (int)4096: {
HXLINE(  37)				this->player->animation->play(this->downAnimation,null(),null(),null());
            			}
            			break;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(PlayerAnimator_obj,updateAnimation,(void))

void PlayerAnimator_obj::setAnimationState(::String state){
            	HX_STACKFRAME(&_hx_pos_0b1a801c339a7061_45_setAnimationState)
HXDLIN(  45)		::String _hx_switch_0 = state;
            		if (  (_hx_switch_0==HX_("IDLE",14,6f,74,30)) ){
HXLINE(  55)			this->lrAnimation = HX_("idleLR",9a,d6,3a,d7);
HXLINE(  56)			this->downAnimation = HX_("idleDown",96,e5,5d,37);
HXLINE(  57)			this->upAnimation = HX_("idleUp",8f,de,3a,d7);
HXLINE(  54)			goto _hx_goto_8;
            		}
            		if (  (_hx_switch_0==HX_("RUN",2b,83,3e,00)) ){
HXLINE(  49)			this->lrAnimation = HX_("runLR",91,d2,57,f1);
HXLINE(  50)			this->downAnimation = HX_("runDown",4d,0d,ab,cf);
HXLINE(  51)			this->upAnimation = HX_("runUp",86,da,57,f1);
HXLINE(  48)			goto _hx_goto_8;
            		}
            		_hx_goto_8:;
            	}


HX_DEFINE_DYNAMIC_FUNC1(PlayerAnimator_obj,setAnimationState,(void))


::hx::ObjectPtr< PlayerAnimator_obj > PlayerAnimator_obj::__new( ::Player animatedPlayer) {
	::hx::ObjectPtr< PlayerAnimator_obj > __this = new PlayerAnimator_obj();
	__this->__construct(animatedPlayer);
	return __this;
}

::hx::ObjectPtr< PlayerAnimator_obj > PlayerAnimator_obj::__alloc(::hx::Ctx *_hx_ctx, ::Player animatedPlayer) {
	PlayerAnimator_obj *__this = (PlayerAnimator_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(PlayerAnimator_obj), true, "PlayerAnimator"));
	*(void **)__this = PlayerAnimator_obj::_hx_vtable;
	__this->__construct(animatedPlayer);
	return __this;
}

PlayerAnimator_obj::PlayerAnimator_obj()
{
}

void PlayerAnimator_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PlayerAnimator);
	HX_MARK_MEMBER_NAME(lrAnimation,"lrAnimation");
	HX_MARK_MEMBER_NAME(downAnimation,"downAnimation");
	HX_MARK_MEMBER_NAME(upAnimation,"upAnimation");
	HX_MARK_MEMBER_NAME(player,"player");
	HX_MARK_END_CLASS();
}

void PlayerAnimator_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(lrAnimation,"lrAnimation");
	HX_VISIT_MEMBER_NAME(downAnimation,"downAnimation");
	HX_VISIT_MEMBER_NAME(upAnimation,"upAnimation");
	HX_VISIT_MEMBER_NAME(player,"player");
}

::hx::Val PlayerAnimator_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"player") ) { return ::hx::Val( player ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"lrAnimation") ) { return ::hx::Val( lrAnimation ); }
		if (HX_FIELD_EQ(inName,"upAnimation") ) { return ::hx::Val( upAnimation ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"downAnimation") ) { return ::hx::Val( downAnimation ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"updateAnimation") ) { return ::hx::Val( updateAnimation_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"setAnimationState") ) { return ::hx::Val( setAnimationState_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val PlayerAnimator_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"player") ) { player=inValue.Cast<  ::Player >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"lrAnimation") ) { lrAnimation=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"upAnimation") ) { upAnimation=inValue.Cast< ::String >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"downAnimation") ) { downAnimation=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PlayerAnimator_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("lrAnimation",9e,6f,06,ec));
	outFields->push(HX_("downAnimation",42,ba,9c,35));
	outFields->push(HX_("upAnimation",29,45,43,f3));
	outFields->push(HX_("player",61,eb,b8,37));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo PlayerAnimator_obj_sMemberStorageInfo[] = {
	{::hx::fsString,(int)offsetof(PlayerAnimator_obj,lrAnimation),HX_("lrAnimation",9e,6f,06,ec)},
	{::hx::fsString,(int)offsetof(PlayerAnimator_obj,downAnimation),HX_("downAnimation",42,ba,9c,35)},
	{::hx::fsString,(int)offsetof(PlayerAnimator_obj,upAnimation),HX_("upAnimation",29,45,43,f3)},
	{::hx::fsObject /*  ::Player */ ,(int)offsetof(PlayerAnimator_obj,player),HX_("player",61,eb,b8,37)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *PlayerAnimator_obj_sStaticStorageInfo = 0;
#endif

static ::String PlayerAnimator_obj_sMemberFields[] = {
	HX_("lrAnimation",9e,6f,06,ec),
	HX_("downAnimation",42,ba,9c,35),
	HX_("upAnimation",29,45,43,f3),
	HX_("player",61,eb,b8,37),
	HX_("updateAnimation",bb,bf,bf,9a),
	HX_("setAnimationState",af,8f,10,2a),
	::String(null()) };

::hx::Class PlayerAnimator_obj::__mClass;

void PlayerAnimator_obj::__register()
{
	PlayerAnimator_obj _hx_dummy;
	PlayerAnimator_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("PlayerAnimator",08,80,8e,45);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(PlayerAnimator_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< PlayerAnimator_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = PlayerAnimator_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = PlayerAnimator_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

