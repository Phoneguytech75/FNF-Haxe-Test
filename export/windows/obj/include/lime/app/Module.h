// Generated by Haxe 4.1.5
#ifndef INCLUDED_lime_app_Module
#define INCLUDED_lime_app_Module

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
HX_DECLARE_CLASS2(lime,app,Application)
HX_DECLARE_CLASS2(lime,app,IModule)
HX_DECLARE_CLASS2(lime,app,Module)
HX_DECLARE_CLASS2(lime,app,_Event_Int_Void)

namespace lime{
namespace app{


class HXCPP_CLASS_ATTRIBUTES Module_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Module_obj OBJ_;
		Module_obj();

	public:
		enum { _hx_ClassId = 0x7f8386d8 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="lime.app.Module")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"lime.app.Module"); }
		static ::hx::ObjectPtr< Module_obj > __new();
		static ::hx::ObjectPtr< Module_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Module_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("Module",cc,a8,67,f5); }

		 ::lime::app::_Event_Int_Void onExit;
		virtual void _hx___registerLimeModule( ::lime::app::Application application);
		::Dynamic _hx___registerLimeModule_dyn();

		virtual void _hx___unregisterLimeModule( ::lime::app::Application application);
		::Dynamic _hx___unregisterLimeModule_dyn();

};

} // end namespace lime
} // end namespace app

#endif /* INCLUDED_lime_app_Module */ 
