// Generated by Haxe 4.1.5
#include <hxcpp.h>

#ifndef INCLUDED_FarmMenu
#include <FarmMenu.h>
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
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInput
#include <flixel/input/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxButton
#include <flixel/ui/FlxButton.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxTypedButton_flixel_text_FlxText
#include <flixel/ui/FlxTypedButton_flixel_text_FlxText.h>
#endif
#ifndef INCLUDED_flixel_util_FlxSpriteUtil
#include <flixel/util/FlxSpriteUtil.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_util__FlxColor_FlxColor_Impl_
#include <flixel/util/_FlxColor/FlxColor_Impl_.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_BalancedTree
#include <haxe/ds/BalancedTree.h>
#endif
#ifndef INCLUDED_haxe_ds_EnumValueMap
#include <haxe/ds/EnumValueMap.h>
#endif
#ifndef INCLUDED_openfl_display__JointStyle_JointStyle_Impl_
#include <openfl/display/_JointStyle/JointStyle_Impl_.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_ae1441be1f493094_23_new,"FarmMenu","new",0x54951207,"FarmMenu.new","FarmMenu.hx",23,0xea914b49)

void FarmMenu_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_ae1441be1f493094_23_new)
HXLINE(  24)		super::__construct(null());
HXLINE(  25)		this->menuBoxBorderLineStyle =  ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("color",63,71,5c,4a),-16744448)
            			->setFixed(1,HX_("thickness",74,f1,66,5a),3));
HXLINE(  29)		 ::Dynamic color = ::flixel::util::_FlxColor::FlxColor_Impl__obj::fromString(HX_("#31CFF7",95,b6,c3,76));
HXLINE(  30)		 ::flixel::FlxSprite _hx_tmp =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,22,55,null());
HXDLIN(  30)		this->menuBox = _hx_tmp->makeGraphic(480,360,::flixel::util::_FlxColor::FlxColor_Impl__obj::fromString(HX_("#31CFF7",95,b6,c3,76)),null(),null());
HXLINE(  31)		 ::flixel::FlxSprite _hx_tmp1 = this->menuBox;
HXDLIN(  31)		::flixel::util::FlxSpriteUtil_obj::drawRect(_hx_tmp1,( (Float)(0) ),( (Float)(0) ),( (Float)(480) ),( (Float)(360) ),0, ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("color",63,71,5c,4a),::flixel::util::_FlxColor::FlxColor_Impl__obj::fromString(HX_("#F7912F",c0,e9,46,7d)))
            			->setFixed(1,HX_("thickness",74,f1,66,5a),4)),null());
HXLINE(  33)		::flixel::util::FlxSpriteUtil_obj::drawRect(this->menuBox,( (Float)(12) ),( (Float)(12) ),( (Float)(160) ),( (Float)(336) ),0, ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("color",63,71,5c,4a),-16744448)
            			->setFixed(1,HX_("thickness",74,f1,66,5a),2)),null());
HXLINE(  34)		::flixel::util::FlxSpriteUtil_obj::drawRect(this->menuBox,( (Float)(16) ),( (Float)(16) ),( (Float)(152) ),( (Float)(138) ),-65536,null(),null());
HXLINE(  36)		::flixel::util::FlxSpriteUtil_obj::drawRect(this->menuBox,( (Float)(16) ),( (Float)(148) ),( (Float)(152) ),( (Float)(64) ),-16777216, ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("color",63,71,5c,4a),-8355712)
            			->setFixed(1,HX_("thickness",74,f1,66,5a),1)),null());
HXLINE(  37)		 ::flixel::text::FlxText equipText =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,205,285,null(),HX_("CARROT",83,de,66,6d),45,true);
HXLINE(  38)		equipText->set_alignment(HX_("left",07,08,b0,47));
HXLINE(  39)		equipText->set_font(HX_("stylish6x5",a9,a3,32,02));
HXLINE(  41)		::flixel::util::FlxSpriteUtil_obj::drawRect(this->menuBox,( (Float)(16) ),( (Float)(216) ),( (Float)(152) ),( (Float)(64) ),-16776961, ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("color",63,71,5c,4a),-8355712)
            			->setFixed(1,HX_("thickness",74,f1,66,5a),1)),null());
HXLINE(  42)		 ::flixel::text::FlxText itemText =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,420,140,null(),HX_("X5",dd,4c,00,00),64,null());
HXLINE(  43)		itemText->set_alignment(HX_("left",07,08,b0,47));
HXLINE(  44)		itemText->set_font(HX_("stylish6x5",a9,a3,32,02));
HXLINE(  46)		equipText->set_color(( (int)(::flixel::util::_FlxColor::FlxColor_Impl__obj::fromString(HX_("#000000",63,3a,ab,a3))) ));
HXLINE(  48)		::flixel::util::FlxSpriteUtil_obj::drawRect(this->menuBox,( (Float)(16) ),( (Float)(284) ),( (Float)(152) ),( (Float)(64) ),-16776961, ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("color",63,71,5c,4a),-8355712)
            			->setFixed(1,HX_("thickness",74,f1,66,5a),1)),null());
HXLINE(  49)		 ::flixel::text::FlxText optionText =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,48,340,null(),HX_("OPTIONS",3e,07,d2,5f),48,null());
HXLINE(  50)		optionText->set_alignment(HX_("left",07,08,b0,47));
HXLINE(  51)		optionText->set_font(HX_("stylish6x5",a9,a3,32,02));
HXLINE(  53)		::flixel::util::FlxSpriteUtil_obj::drawLine(this->menuBox,( (Float)(176) ),( (Float)(160) ),( (Float)(474) ),( (Float)(160) ), ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("color",63,71,5c,4a),-8388480)
            			->setFixed(1,HX_("thickness",74,f1,66,5a),1)),null());
HXLINE(  54)		::flixel::util::FlxSpriteUtil_obj::drawLine(this->menuBox,( (Float)(176) ),( (Float)(168) ),( (Float)(474) ),( (Float)(168) ), ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("color",63,71,5c,4a),-8388480)
            			->setFixed(1,HX_("thickness",74,f1,66,5a),1)),null());
HXLINE(  55)		 ::flixel::FlxSprite _hx_tmp2 = this->menuBox;
HXDLIN(  55)		::flixel::util::FlxSpriteUtil_obj::drawRect(_hx_tmp2,( (Float)(208) ),( (Float)(24) ),( (Float)(96) ),( (Float)(96) ),0, ::Dynamic(::hx::Anon_obj::Create(3)
            			->setFixed(0,HX_("jointStyle",87,ef,1c,e2),::openfl::display::_JointStyle::JointStyle_Impl__obj::fromString(HX_("miter",05,00,6d,08)))
            			->setFixed(1,HX_("color",63,71,5c,4a),-8355712)
            			->setFixed(2,HX_("thickness",74,f1,66,5a),1)),null());
HXLINE(  56)		 ::flixel::FlxSprite _hx_tmp3 = this->menuBox;
HXDLIN(  56)		::flixel::util::FlxSpriteUtil_obj::drawRect(_hx_tmp3,( (Float)(336) ),( (Float)(24) ),( (Float)(96) ),( (Float)(96) ),0, ::Dynamic(::hx::Anon_obj::Create(3)
            			->setFixed(0,HX_("jointStyle",87,ef,1c,e2),::openfl::display::_JointStyle::JointStyle_Impl__obj::fromString(HX_("miter",05,00,6d,08)))
            			->setFixed(1,HX_("color",63,71,5c,4a),-8355712)
            			->setFixed(2,HX_("thickness",74,f1,66,5a),1)),null());
HXLINE(  57)		 ::flixel::FlxSprite _hx_tmp4 = this->menuBox;
HXDLIN(  57)		::flixel::util::FlxSpriteUtil_obj::drawRect(_hx_tmp4,( (Float)(196) ),( (Float)(186) ),( (Float)(48) ),( (Float)(48) ),0, ::Dynamic(::hx::Anon_obj::Create(3)
            			->setFixed(0,HX_("jointStyle",87,ef,1c,e2),::openfl::display::_JointStyle::JointStyle_Impl__obj::fromString(HX_("miter",05,00,6d,08)))
            			->setFixed(1,HX_("color",63,71,5c,4a),-8355712)
            			->setFixed(2,HX_("thickness",74,f1,66,5a),1)),null());
HXLINE(  58)		 ::flixel::FlxSprite _hx_tmp5 = this->menuBox;
HXDLIN(  58)		::flixel::util::FlxSpriteUtil_obj::drawRect(_hx_tmp5,( (Float)(264) ),( (Float)(186) ),( (Float)(48) ),( (Float)(48) ),0, ::Dynamic(::hx::Anon_obj::Create(3)
            			->setFixed(0,HX_("jointStyle",87,ef,1c,e2),::openfl::display::_JointStyle::JointStyle_Impl__obj::fromString(HX_("miter",05,00,6d,08)))
            			->setFixed(1,HX_("color",63,71,5c,4a),-8355712)
            			->setFixed(2,HX_("thickness",74,f1,66,5a),1)),null());
HXLINE(  59)		 ::flixel::FlxSprite _hx_tmp6 = this->menuBox;
HXDLIN(  59)		::flixel::util::FlxSpriteUtil_obj::drawRect(_hx_tmp6,( (Float)(332) ),( (Float)(186) ),( (Float)(48) ),( (Float)(48) ),0, ::Dynamic(::hx::Anon_obj::Create(3)
            			->setFixed(0,HX_("jointStyle",87,ef,1c,e2),::openfl::display::_JointStyle::JointStyle_Impl__obj::fromString(HX_("miter",05,00,6d,08)))
            			->setFixed(1,HX_("color",63,71,5c,4a),-8355712)
            			->setFixed(2,HX_("thickness",74,f1,66,5a),1)),null());
HXLINE(  60)		 ::flixel::FlxSprite _hx_tmp7 = this->menuBox;
HXDLIN(  60)		::flixel::util::FlxSpriteUtil_obj::drawRect(_hx_tmp7,( (Float)(400) ),( (Float)(186) ),( (Float)(48) ),( (Float)(48) ),0, ::Dynamic(::hx::Anon_obj::Create(3)
            			->setFixed(0,HX_("jointStyle",87,ef,1c,e2),::openfl::display::_JointStyle::JointStyle_Impl__obj::fromString(HX_("miter",05,00,6d,08)))
            			->setFixed(1,HX_("color",63,71,5c,4a),-8355712)
            			->setFixed(2,HX_("thickness",74,f1,66,5a),1)),null());
HXLINE(  61)		this->menuBox->scrollFactor->set(0,0);
HXLINE(  62)		equipText->scrollFactor->set(0,0);
HXLINE(  63)		itemText->scrollFactor->set(0,0);
HXLINE(  64)		optionText->scrollFactor->set(0,0);
HXLINE(  65)		this->add(this->menuBox);
HXLINE(  66)		this->add(equipText);
HXLINE(  67)		this->add(itemText);
HXLINE(  68)		this->add(optionText);
            	}

Dynamic FarmMenu_obj::__CreateEmpty() { return new FarmMenu_obj; }

void *FarmMenu_obj::_hx_vtable = 0;

Dynamic FarmMenu_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FarmMenu_obj > _hx_result = new FarmMenu_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool FarmMenu_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x62817b24) {
		if (inClassId<=(int)0x4b8cf555) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x4b8cf555;
		} else {
			return inClassId==(int)0x62817b24;
		}
	} else {
		return inClassId==(int)0x7ccf8994;
	}
}


::hx::ObjectPtr< FarmMenu_obj > FarmMenu_obj::__new() {
	::hx::ObjectPtr< FarmMenu_obj > __this = new FarmMenu_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< FarmMenu_obj > FarmMenu_obj::__alloc(::hx::Ctx *_hx_ctx) {
	FarmMenu_obj *__this = (FarmMenu_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FarmMenu_obj), true, "FarmMenu"));
	*(void **)__this = FarmMenu_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

FarmMenu_obj::FarmMenu_obj()
{
}

void FarmMenu_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FarmMenu);
	HX_MARK_MEMBER_NAME(equipmentButton,"equipmentButton");
	HX_MARK_MEMBER_NAME(equipment,"equipment");
	HX_MARK_MEMBER_NAME(inventoryButton,"inventoryButton");
	HX_MARK_MEMBER_NAME(inventoryItem,"inventoryItem");
	HX_MARK_MEMBER_NAME(menuBox,"menuBox");
	HX_MARK_MEMBER_NAME(menuBoxBorderLineStyle,"menuBoxBorderLineStyle");
	 ::flixel::group::FlxTypedGroup_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FarmMenu_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(equipmentButton,"equipmentButton");
	HX_VISIT_MEMBER_NAME(equipment,"equipment");
	HX_VISIT_MEMBER_NAME(inventoryButton,"inventoryButton");
	HX_VISIT_MEMBER_NAME(inventoryItem,"inventoryItem");
	HX_VISIT_MEMBER_NAME(menuBox,"menuBox");
	HX_VISIT_MEMBER_NAME(menuBoxBorderLineStyle,"menuBoxBorderLineStyle");
	 ::flixel::group::FlxTypedGroup_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val FarmMenu_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"menuBox") ) { return ::hx::Val( menuBox ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"equipment") ) { return ::hx::Val( equipment ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"inventoryItem") ) { return ::hx::Val( inventoryItem ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"equipmentButton") ) { return ::hx::Val( equipmentButton ); }
		if (HX_FIELD_EQ(inName,"inventoryButton") ) { return ::hx::Val( inventoryButton ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"menuBoxBorderLineStyle") ) { return ::hx::Val( menuBoxBorderLineStyle ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val FarmMenu_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"menuBox") ) { menuBox=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"equipment") ) { equipment=inValue.Cast<  ::haxe::ds::EnumValueMap >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"inventoryItem") ) { inventoryItem=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"equipmentButton") ) { equipmentButton=inValue.Cast<  ::flixel::ui::FlxButton >(); return inValue; }
		if (HX_FIELD_EQ(inName,"inventoryButton") ) { inventoryButton=inValue.Cast<  ::flixel::ui::FlxButton >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"menuBoxBorderLineStyle") ) { menuBoxBorderLineStyle=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FarmMenu_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("equipmentButton",e0,38,63,82));
	outFields->push(HX_("equipment",4e,34,85,3a));
	outFields->push(HX_("inventoryButton",ae,29,7c,ff));
	outFields->push(HX_("inventoryItem",cf,e5,44,27));
	outFields->push(HX_("menuBox",ac,3d,4b,ba));
	outFields->push(HX_("menuBoxBorderLineStyle",c5,49,97,56));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FarmMenu_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::ui::FlxButton */ ,(int)offsetof(FarmMenu_obj,equipmentButton),HX_("equipmentButton",e0,38,63,82)},
	{::hx::fsObject /*  ::haxe::ds::EnumValueMap */ ,(int)offsetof(FarmMenu_obj,equipment),HX_("equipment",4e,34,85,3a)},
	{::hx::fsObject /*  ::flixel::ui::FlxButton */ ,(int)offsetof(FarmMenu_obj,inventoryButton),HX_("inventoryButton",ae,29,7c,ff)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(FarmMenu_obj,inventoryItem),HX_("inventoryItem",cf,e5,44,27)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(FarmMenu_obj,menuBox),HX_("menuBox",ac,3d,4b,ba)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(FarmMenu_obj,menuBoxBorderLineStyle),HX_("menuBoxBorderLineStyle",c5,49,97,56)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *FarmMenu_obj_sStaticStorageInfo = 0;
#endif

static ::String FarmMenu_obj_sMemberFields[] = {
	HX_("equipmentButton",e0,38,63,82),
	HX_("equipment",4e,34,85,3a),
	HX_("inventoryButton",ae,29,7c,ff),
	HX_("inventoryItem",cf,e5,44,27),
	HX_("menuBox",ac,3d,4b,ba),
	HX_("menuBoxBorderLineStyle",c5,49,97,56),
	::String(null()) };

::hx::Class FarmMenu_obj::__mClass;

void FarmMenu_obj::__register()
{
	FarmMenu_obj _hx_dummy;
	FarmMenu_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("FarmMenu",95,02,fc,ef);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FarmMenu_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FarmMenu_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FarmMenu_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FarmMenu_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}
