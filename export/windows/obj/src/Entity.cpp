// Generated by Haxe 4.1.5
#include <hxcpp.h>

#ifndef INCLUDED_Entity
#include <Entity.h>
#endif
#ifndef INCLUDED_EntityInterface
#include <EntityInterface.h>
#endif
#ifndef INCLUDED_Equipment
#include <Equipment.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_6b3cf7183208346f_10_new,"Entity","new",0x9c9485b5,"Entity.new","Entity.hx",10,0x5c8a675b)
HX_LOCAL_STACK_FRAME(_hx_pos_6b3cf7183208346f_14_use,"Entity","use",0x9c99e19c,"Entity.use","Entity.hx",14,0x5c8a675b)

void Entity_obj::__construct( ::Dynamic X, ::Dynamic Y, ::Dynamic Width, ::Dynamic Height){
            	HX_STACKFRAME(&_hx_pos_6b3cf7183208346f_10_new)
HXDLIN(  10)		super::__construct(X,Y,Width,Height);
            	}

Dynamic Entity_obj::__CreateEmpty() { return new Entity_obj; }

void *Entity_obj::_hx_vtable = 0;

Dynamic Entity_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Entity_obj > _hx_result = new Entity_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool Entity_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x7ccf8994) {
		if (inClassId<=(int)0x01484e67) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x01484e67;
		} else {
			return inClassId==(int)0x7ccf8994;
		}
	} else {
		return inClassId==(int)0x7dab0655;
	}
}

static ::EntityInterface_obj _hx_Entity__hx_EntityInterface= {
	( bool (::hx::Object::*)( ::Equipment))&::Entity_obj::use,
};

void *Entity_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x84b109f6: return &_hx_Entity__hx_EntityInterface;
	}
	return super::_hx_getInterface(inHash);
}

bool Entity_obj::use( ::Equipment equipped){
            	HX_STACKFRAME(&_hx_pos_6b3cf7183208346f_14_use)
HXDLIN(  14)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,use,return )


::hx::ObjectPtr< Entity_obj > Entity_obj::__new( ::Dynamic X, ::Dynamic Y, ::Dynamic Width, ::Dynamic Height) {
	::hx::ObjectPtr< Entity_obj > __this = new Entity_obj();
	__this->__construct(X,Y,Width,Height);
	return __this;
}

::hx::ObjectPtr< Entity_obj > Entity_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic X, ::Dynamic Y, ::Dynamic Width, ::Dynamic Height) {
	Entity_obj *__this = (Entity_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Entity_obj), true, "Entity"));
	*(void **)__this = Entity_obj::_hx_vtable;
	__this->__construct(X,Y,Width,Height);
	return __this;
}

Entity_obj::Entity_obj()
{
}

::hx::Val Entity_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"use") ) { return ::hx::Val( use_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Entity_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Entity_obj_sStaticStorageInfo = 0;
#endif

static ::String Entity_obj_sMemberFields[] = {
	HX_("use",47,2c,59,00),
	::String(null()) };

::hx::Class Entity_obj::__mClass;

void Entity_obj::__register()
{
	Entity_obj _hx_dummy;
	Entity_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("Entity",43,87,b0,39);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Entity_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Entity_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Entity_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Entity_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

