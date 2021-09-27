// Generated by Haxe 4.1.5
#ifndef INCLUDED_Player
#define INCLUDED_Player

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
HX_DECLARE_CLASS0(Player)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)



class HXCPP_CLASS_ATTRIBUTES Player_obj : public  ::flixel::FlxSprite_obj
{
	public:
		typedef  ::flixel::FlxSprite_obj super;
		typedef Player_obj OBJ_;
		Player_obj();

	public:
		enum { _hx_ClassId = 0x33e526a5 };

		void __construct(::hx::Null< int >  __o_w,::hx::Null< int >  __o_l);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="Player")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"Player"); }
		static ::hx::ObjectPtr< Player_obj > __new(::hx::Null< int >  __o_w,::hx::Null< int >  __o_l);
		static ::hx::ObjectPtr< Player_obj > __alloc(::hx::Ctx *_hx_ctx,::hx::Null< int >  __o_w,::hx::Null< int >  __o_l);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Player_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Player",81,5f,4d,6c); }

		void update(Float elapsed);

};


#endif /* INCLUDED_Player */ 
