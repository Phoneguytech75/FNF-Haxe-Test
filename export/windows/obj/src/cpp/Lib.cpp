// Generated by Haxe 4.1.5
#include <hxcpp.h>

#ifndef INCLUDED_cpp_Lib
#include <cpp/Lib.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_34d722c4b19f8a18_38_load,"cpp.Lib","load",0xd2b2dcba,"cpp.Lib.load","C:\\HaxeToolkit\\haxe\\std/cpp/Lib.hx",38,0xfc8f8c7e)
HX_LOCAL_STACK_FRAME(_hx_pos_34d722c4b19f8a18_66_loadLazy,"cpp.Lib","loadLazy",0x865efe4e,"cpp.Lib.loadLazy","C:\\HaxeToolkit\\haxe\\std/cpp/Lib.hx",66,0xfc8f8c7e)
HX_LOCAL_STACK_FRAME(_hx_pos_34d722c4b19f8a18_70_loadLazy,"cpp.Lib","loadLazy",0x865efe4e,"cpp.Lib.loadLazy","C:\\HaxeToolkit\\haxe\\std/cpp/Lib.hx",70,0xfc8f8c7e)
HX_LOCAL_STACK_FRAME(_hx_pos_34d722c4b19f8a18_71_loadLazy,"cpp.Lib","loadLazy",0x865efe4e,"cpp.Lib.loadLazy","C:\\HaxeToolkit\\haxe\\std/cpp/Lib.hx",71,0xfc8f8c7e)
HX_LOCAL_STACK_FRAME(_hx_pos_34d722c4b19f8a18_72_loadLazy,"cpp.Lib","loadLazy",0x865efe4e,"cpp.Lib.loadLazy","C:\\HaxeToolkit\\haxe\\std/cpp/Lib.hx",72,0xfc8f8c7e)
HX_LOCAL_STACK_FRAME(_hx_pos_34d722c4b19f8a18_73_loadLazy,"cpp.Lib","loadLazy",0x865efe4e,"cpp.Lib.loadLazy","C:\\HaxeToolkit\\haxe\\std/cpp/Lib.hx",73,0xfc8f8c7e)
HX_LOCAL_STACK_FRAME(_hx_pos_34d722c4b19f8a18_74_loadLazy,"cpp.Lib","loadLazy",0x865efe4e,"cpp.Lib.loadLazy","C:\\HaxeToolkit\\haxe\\std/cpp/Lib.hx",74,0xfc8f8c7e)
HX_LOCAL_STACK_FRAME(_hx_pos_34d722c4b19f8a18_75_loadLazy,"cpp.Lib","loadLazy",0x865efe4e,"cpp.Lib.loadLazy","C:\\HaxeToolkit\\haxe\\std/cpp/Lib.hx",75,0xfc8f8c7e)
namespace cpp{

void Lib_obj::__construct() { }

Dynamic Lib_obj::__CreateEmpty() { return new Lib_obj; }

void *Lib_obj::_hx_vtable = 0;

Dynamic Lib_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Lib_obj > _hx_result = new Lib_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Lib_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x561f6486;
}

 ::Dynamic Lib_obj::load(::String lib,::String prim,int nargs){
            	HX_STACKFRAME(&_hx_pos_34d722c4b19f8a18_38_load)
HXDLIN(  38)		return  ::__loadprim(lib,prim,nargs);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Lib_obj,load,return )

 ::Dynamic Lib_obj::loadLazy(::String lib,::String prim,int nargs){
            	HX_STACKFRAME(&_hx_pos_34d722c4b19f8a18_66_loadLazy)
HXDLIN(  66)		try {
            			HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE(  67)			return  ::__loadprim(lib,prim,nargs);
            		} catch( ::Dynamic _hx_e) {
            			if (_hx_e.IsClass<  ::Dynamic >() ){
            				HX_STACK_BEGIN_CATCH
            				 ::Dynamic _g = _hx_e;
HXLINE(   1)				{
HXLINE(   1)					null();
            				}
HXDLIN(   1)				 ::Dynamic e = ::haxe::Exception_obj::caught(_g)->unwrap();
HXLINE(  69)				switch((int)(nargs)){
            					case (int)0: {
            						HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_1, ::Dynamic,e) HXARGC(0)
            						 ::Dynamic _hx_run(){
            							HX_STACKFRAME(&_hx_pos_34d722c4b19f8a18_70_loadLazy)
HXLINE(  70)							HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(e));
HXDLIN(  70)							return null();
            						}
            						HX_END_LOCAL_FUNC0(return)

HXLINE(  70)						return  ::Dynamic(new _hx_Closure_1(e));
            					}
            					break;
            					case (int)2: {
            						HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_2, ::Dynamic,e) HXARGC(2)
            						 ::Dynamic _hx_run( ::Dynamic _, ::Dynamic _1){
            							HX_STACKFRAME(&_hx_pos_34d722c4b19f8a18_71_loadLazy)
HXLINE(  71)							HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(e));
HXDLIN(  71)							return null();
            						}
            						HX_END_LOCAL_FUNC2(return)

HXLINE(  71)						return  ::Dynamic(new _hx_Closure_2(e));
            					}
            					break;
            					case (int)3: {
            						HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_3, ::Dynamic,e) HXARGC(3)
            						 ::Dynamic _hx_run( ::Dynamic _, ::Dynamic _1, ::Dynamic _2){
            							HX_STACKFRAME(&_hx_pos_34d722c4b19f8a18_72_loadLazy)
HXLINE(  72)							HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(e));
HXDLIN(  72)							return null();
            						}
            						HX_END_LOCAL_FUNC3(return)

HXLINE(  72)						return  ::Dynamic(new _hx_Closure_3(e));
            					}
            					break;
            					case (int)4: {
            						HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_4, ::Dynamic,e) HXARGC(4)
            						 ::Dynamic _hx_run( ::Dynamic _, ::Dynamic _1, ::Dynamic _2, ::Dynamic _3){
            							HX_STACKFRAME(&_hx_pos_34d722c4b19f8a18_73_loadLazy)
HXLINE(  73)							HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(e));
HXDLIN(  73)							return null();
            						}
            						HX_END_LOCAL_FUNC4(return)

HXLINE(  73)						return  ::Dynamic(new _hx_Closure_4(e));
            					}
            					break;
            					case (int)5: {
            						HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_5, ::Dynamic,e) HXARGC(5)
            						 ::Dynamic _hx_run( ::Dynamic _, ::Dynamic _1, ::Dynamic _2, ::Dynamic _3, ::Dynamic _4){
            							HX_STACKFRAME(&_hx_pos_34d722c4b19f8a18_74_loadLazy)
HXLINE(  74)							HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(e));
HXDLIN(  74)							return null();
            						}
            						HX_END_LOCAL_FUNC5(return)

HXLINE(  74)						return  ::Dynamic(new _hx_Closure_5(e));
            					}
            					break;
            					default:{
            						HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::Dynamic,e) HXARGC(1)
            						 ::Dynamic _hx_run( ::Dynamic _){
            							HX_STACKFRAME(&_hx_pos_34d722c4b19f8a18_75_loadLazy)
HXLINE(  75)							HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(e));
HXDLIN(  75)							return null();
            						}
            						HX_END_LOCAL_FUNC1(return)

HXLINE(  75)						return  ::Dynamic(new _hx_Closure_0(e));
            					}
            				}
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
HXLINE(  66)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Lib_obj,loadLazy,return )


Lib_obj::Lib_obj()
{
}

bool Lib_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"load") ) { outValue = load_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"loadLazy") ) { outValue = loadLazy_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Lib_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Lib_obj_sStaticStorageInfo = 0;
#endif

::hx::Class Lib_obj::__mClass;

static ::String Lib_obj_sStaticFields[] = {
	HX_("load",26,9a,b7,47),
	HX_("loadLazy",ba,e1,4c,b8),
	::String(null())
};

void Lib_obj::__register()
{
	Lib_obj _hx_dummy;
	Lib_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("cpp.Lib",5a,26,48,78);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Lib_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Lib_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Lib_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Lib_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Lib_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace cpp
