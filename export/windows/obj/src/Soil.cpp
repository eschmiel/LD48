// Generated by Haxe 4.1.5
#include <hxcpp.h>

#ifndef INCLUDED_Crop
#include <Crop.h>
#endif
#ifndef INCLUDED_EntityInterface
#include <EntityInterface.h>
#endif
#ifndef INCLUDED_Equipment
#include <Equipment.h>
#endif
#ifndef INCLUDED_Soil
#include <Soil.h>
#endif
#ifndef INCLUDED_SoilStatus
#include <SoilStatus.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_ae6dc8af62a906a4_17_new,"Soil","new",0xdca4a811,"Soil.new","Soil.hx",17,0x99abc47f)
HX_LOCAL_STACK_FRAME(_hx_pos_ae6dc8af62a906a4_31_use,"Soil","use",0xdcaa03f8,"Soil.use","Soil.hx",31,0x99abc47f)
HX_LOCAL_STACK_FRAME(_hx_pos_ae6dc8af62a906a4_43_till,"Soil","till",0x3768ae64,"Soil.till","Soil.hx",43,0x99abc47f)
HX_LOCAL_STACK_FRAME(_hx_pos_ae6dc8af62a906a4_64_seed,"Soil","seed",0x36bc68a0,"Soil.seed","Soil.hx",64,0x99abc47f)

void Soil_obj::__construct(Float x,Float y){
            	HX_STACKFRAME(&_hx_pos_ae6dc8af62a906a4_17_new)
HXLINE(  19)		this->status = ::SoilStatus_obj::STANDARD_dyn();
HXLINE(  24)		super::__construct(x,y,null());
HXLINE(  25)		this->loadGraphic(HX_("assets/images/transparent.png",42,7a,6c,dd),false,8,8,null(),null());
            	}

Dynamic Soil_obj::__CreateEmpty() { return new Soil_obj; }

void *Soil_obj::_hx_vtable = 0;

Dynamic Soil_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Soil_obj > _hx_result = new Soil_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool Soil_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2c01639b) {
		if (inClassId<=(int)0x0b8441c3) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x0b8441c3;
		} else {
			return inClassId==(int)0x2c01639b;
		}
	} else {
		return inClassId==(int)0x7ccf8994 || inClassId==(int)0x7dab0655;
	}
}

static ::EntityInterface_obj _hx_Soil__hx_EntityInterface= {
	( bool (::hx::Object::*)( ::Equipment))&::Soil_obj::use,
};

void *Soil_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x84b109f6: return &_hx_Soil__hx_EntityInterface;
	}
	return super::_hx_getInterface(inHash);
}

bool Soil_obj::use( ::Equipment equipped){
            	HX_STACKFRAME(&_hx_pos_ae6dc8af62a906a4_31_use)
HXDLIN(  31)		switch((int)(equipped->_hx_getIndex())){
            			case (int)0: {
HXLINE(  34)				return this->till();
            			}
            			break;
            			case (int)1: {
HXLINE(  36)				return this->seed();
            			}
            			break;
            		}
HXLINE(  31)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Soil_obj,use,return )

bool Soil_obj::till(){
            	HX_STACKFRAME(&_hx_pos_ae6dc8af62a906a4_43_till)
HXDLIN(  43)		switch((int)(this->status->_hx_getIndex())){
            			case (int)0: case (int)1: case (int)2: {
HXLINE(  46)				return false;
            			}
            			break;
            			case (int)3: {
HXLINE(  55)				this->status = ::SoilStatus_obj::STANDARD_dyn();
HXLINE(  56)				return true;
            			}
            			break;
            			case (int)4: case (int)5: {
HXLINE(  49)				this->status = ::SoilStatus_obj::TILLED_dyn();
HXLINE(  50)				this->loadGraphic(HX_("assets/images/tilledSoil.png",19,80,d6,e7),false,8,8,null(),null());
HXLINE(  51)				return true;
            			}
            			break;
            		}
HXLINE(  43)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Soil_obj,till,return )

bool Soil_obj::seed(){
            	HX_STACKFRAME(&_hx_pos_ae6dc8af62a906a4_64_seed)
HXDLIN(  64)		switch((int)(this->status->_hx_getIndex())){
            			case (int)1: {
HXLINE(  70)				this->status = ::SoilStatus_obj::SOWED_dyn();
HXLINE(  71)				this->loadGraphic(HX_("assets/images/sowedSoil.png",49,51,6c,18),false,8,8,null(),null());
HXLINE(  72)				return true;
            			}
            			break;
            			case (int)0: case (int)2: case (int)3: case (int)4: case (int)5: {
HXLINE(  67)				return false;
            			}
            			break;
            		}
HXLINE(  64)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Soil_obj,seed,return )


::hx::ObjectPtr< Soil_obj > Soil_obj::__new(Float x,Float y) {
	::hx::ObjectPtr< Soil_obj > __this = new Soil_obj();
	__this->__construct(x,y);
	return __this;
}

::hx::ObjectPtr< Soil_obj > Soil_obj::__alloc(::hx::Ctx *_hx_ctx,Float x,Float y) {
	Soil_obj *__this = (Soil_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Soil_obj), true, "Soil"));
	*(void **)__this = Soil_obj::_hx_vtable;
	__this->__construct(x,y);
	return __this;
}

Soil_obj::Soil_obj()
{
}

void Soil_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Soil);
	HX_MARK_MEMBER_NAME(status,"status");
	HX_MARK_MEMBER_NAME(contains,"contains");
	 ::flixel::FlxSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Soil_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(status,"status");
	HX_VISIT_MEMBER_NAME(contains,"contains");
	 ::flixel::FlxSprite_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Soil_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"use") ) { return ::hx::Val( use_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"till") ) { return ::hx::Val( till_dyn() ); }
		if (HX_FIELD_EQ(inName,"seed") ) { return ::hx::Val( seed_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"status") ) { return ::hx::Val( status ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"contains") ) { return ::hx::Val( contains ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Soil_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"status") ) { status=inValue.Cast<  ::SoilStatus >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"contains") ) { contains=inValue.Cast<  ::Crop >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Soil_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("status",32,e7,fb,05));
	outFields->push(HX_("contains",1f,5a,7b,2c));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Soil_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::SoilStatus */ ,(int)offsetof(Soil_obj,status),HX_("status",32,e7,fb,05)},
	{::hx::fsObject /*  ::Crop */ ,(int)offsetof(Soil_obj,contains),HX_("contains",1f,5a,7b,2c)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Soil_obj_sStaticStorageInfo = 0;
#endif

static ::String Soil_obj_sMemberFields[] = {
	HX_("status",32,e7,fb,05),
	HX_("contains",1f,5a,7b,2c),
	HX_("use",47,2c,59,00),
	HX_("till",35,cb,fc,4c),
	HX_("seed",71,85,50,4c),
	::String(null()) };

::hx::Class Soil_obj::__mClass;

void Soil_obj::__register()
{
	Soil_obj _hx_dummy;
	Soil_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("Soil",9f,4b,31,37);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Soil_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Soil_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Soil_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Soil_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

