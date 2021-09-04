// Generated by Haxe 4.1.5
#ifndef INCLUDED_openfl_display_OpenGLRenderer
#define INCLUDED_openfl_display_OpenGLRenderer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_display_DisplayObjectRenderer
#include <openfl/display/DisplayObjectRenderer.h>
#endif
HX_DECLARE_CLASS4(lime,_internal,backend,native,NativeOpenGLRenderContext)
HX_DECLARE_CLASS2(lime,utils,ArrayBufferView)
HX_DECLARE_CLASS2(lime,utils,ObjectPool)
HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectRenderer)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectShader)
HX_DECLARE_CLASS2(openfl,display,GraphicsShader)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,OpenGLRenderer)
HX_DECLARE_CLASS2(openfl,display,Shader)
HX_DECLARE_CLASS3(openfl,display,_internal,Context3DMaskShader)
HX_DECLARE_CLASS3(openfl,display,_internal,ShaderBuffer)
HX_DECLARE_CLASS2(openfl,display3D,Context3D)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,geom,ColorTransform)
HX_DECLARE_CLASS2(openfl,geom,Matrix)
HX_DECLARE_CLASS2(openfl,geom,Rectangle)

namespace openfl{
namespace display{


class HXCPP_CLASS_ATTRIBUTES OpenGLRenderer_obj : public  ::openfl::display::DisplayObjectRenderer_obj
{
	public:
		typedef  ::openfl::display::DisplayObjectRenderer_obj super;
		typedef OpenGLRenderer_obj OBJ_;
		OpenGLRenderer_obj();

	public:
		enum { _hx_ClassId = 0x08dfcae4 };

		void __construct( ::openfl::display3D::Context3D context, ::openfl::display::BitmapData defaultRenderTarget);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl.display.OpenGLRenderer")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"openfl.display.OpenGLRenderer"); }
		static ::hx::ObjectPtr< OpenGLRenderer_obj > __new( ::openfl::display3D::Context3D context, ::openfl::display::BitmapData defaultRenderTarget);
		static ::hx::ObjectPtr< OpenGLRenderer_obj > __alloc(::hx::Ctx *_hx_ctx, ::openfl::display3D::Context3D context, ::openfl::display::BitmapData defaultRenderTarget);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~OpenGLRenderer_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("OpenGLRenderer",f2,e4,ab,68); }

		static void __boot();
		static  ::Dynamic __meta__;
		static ::Array< Float > _hx___alphaValue;
		static ::Array< Float > _hx___colorMultipliersValue;
		static ::Array< Float > _hx___colorOffsetsValue;
		static ::Array< Float > _hx___defaultColorMultipliersValue;
		static ::Array< Float > _hx___emptyColorValue;
		static ::Array< Float > _hx___emptyAlphaValue;
		static ::Array< bool > _hx___hasColorTransformValue;
		static  ::openfl::geom::Rectangle _hx___scissorRectangle;
		static ::Array< Float > _hx___textureSizeValue;
		 ::lime::_internal::backend::native::NativeOpenGLRenderContext gl;
		 ::openfl::display3D::Context3D _hx___context3D;
		::Array< ::Dynamic> _hx___clipRects;
		 ::openfl::display::Shader _hx___currentDisplayShader;
		 ::openfl::display::Shader _hx___currentGraphicsShader;
		 ::openfl::display::BitmapData _hx___currentRenderTarget;
		 ::openfl::display::Shader _hx___currentShader;
		 ::openfl::display::_internal::ShaderBuffer _hx___currentShaderBuffer;
		 ::openfl::display::DisplayObjectShader _hx___defaultDisplayShader;
		 ::openfl::display::GraphicsShader _hx___defaultGraphicsShader;
		 ::openfl::display::BitmapData _hx___defaultRenderTarget;
		 ::openfl::display::Shader _hx___defaultShader;
		int _hx___displayHeight;
		int _hx___displayWidth;
		bool _hx___flipped;
		 ::lime::_internal::backend::native::NativeOpenGLRenderContext _hx___gl;
		int _hx___height;
		 ::openfl::display::_internal::Context3DMaskShader _hx___maskShader;
		 ::lime::utils::ArrayBufferView _hx___matrix;
		::Array< ::Dynamic> _hx___maskObjects;
		int _hx___numClipRects;
		int _hx___offsetX;
		int _hx___offsetY;
		 ::lime::utils::ArrayBufferView _hx___projection;
		 ::lime::utils::ArrayBufferView _hx___projectionFlipped;
		 ::lime::utils::ObjectPool _hx___scrollRectMasks;
		 ::openfl::display::DisplayObjectRenderer _hx___softwareRenderer;
		int _hx___stencilReference;
		 ::openfl::geom::Rectangle _hx___tempRect;
		bool _hx___updatedStencil;
		bool _hx___upscaled;
		::Array< Float > _hx___values;
		int _hx___width;
		void applyAlpha(Float alpha);
		::Dynamic applyAlpha_dyn();

		void applyBitmapData( ::openfl::display::BitmapData bitmapData,bool smooth,::hx::Null< bool >  repeat);
		::Dynamic applyBitmapData_dyn();

		void applyColorTransform( ::openfl::geom::ColorTransform colorTransform);
		::Dynamic applyColorTransform_dyn();

		void applyHasColorTransform(bool enabled);
		::Dynamic applyHasColorTransform_dyn();

		void applyMatrix(::Array< Float > matrix);
		::Dynamic applyMatrix_dyn();

		 ::lime::utils::ArrayBufferView getMatrix( ::openfl::geom::Matrix transform);
		::Dynamic getMatrix_dyn();

		void setShader( ::openfl::display::Shader shader);
		::Dynamic setShader_dyn();

		void setViewport();
		::Dynamic setViewport_dyn();

		void updateShader();
		::Dynamic updateShader_dyn();

		void useAlphaArray();
		::Dynamic useAlphaArray_dyn();

		void useColorTransformArray();
		::Dynamic useColorTransformArray_dyn();

		void _hx___cleanup();
		::Dynamic _hx___cleanup_dyn();

		void _hx___clear();

		void _hx___clearShader();
		::Dynamic _hx___clearShader_dyn();

		void _hx___copyShader( ::openfl::display::OpenGLRenderer other);
		::Dynamic _hx___copyShader_dyn();

		::Array< Float > _hx___getMatrix( ::openfl::geom::Matrix transform, ::Dynamic pixelSnapping);
		::Dynamic _hx___getMatrix_dyn();

		 ::openfl::display::Shader _hx___initShader( ::openfl::display::Shader shader);
		::Dynamic _hx___initShader_dyn();

		 ::openfl::display::Shader _hx___initDisplayShader( ::openfl::display::Shader shader);
		::Dynamic _hx___initDisplayShader_dyn();

		 ::openfl::display::Shader _hx___initGraphicsShader( ::openfl::display::Shader shader);
		::Dynamic _hx___initGraphicsShader_dyn();

		 ::openfl::display::Shader _hx___initShaderBuffer( ::openfl::display::_internal::ShaderBuffer shaderBuffer);
		::Dynamic _hx___initShaderBuffer_dyn();

		void _hx___popMask();

		void _hx___popMaskObject( ::openfl::display::DisplayObject object,::hx::Null< bool >  handleScrollRect);

		void _hx___popMaskRect();

		void _hx___pushMask( ::openfl::display::DisplayObject mask);

		void _hx___pushMaskObject( ::openfl::display::DisplayObject object,::hx::Null< bool >  handleScrollRect);

		void _hx___pushMaskRect( ::openfl::geom::Rectangle rect, ::openfl::geom::Matrix transform);

		void _hx___render(::Dynamic object);

		void _hx___renderFilterPass( ::openfl::display::BitmapData source, ::openfl::display::Shader shader,bool smooth,::hx::Null< bool >  clear);
		::Dynamic _hx___renderFilterPass_dyn();

		void _hx___resize(int width,int height);

		void _hx___resumeClipAndMask( ::openfl::display::OpenGLRenderer childRenderer);
		::Dynamic _hx___resumeClipAndMask_dyn();

		void _hx___scissorRect( ::openfl::geom::Rectangle clipRect);
		::Dynamic _hx___scissorRect_dyn();

		void _hx___setBlendMode( ::Dynamic value);

		void _hx___setRenderTarget( ::openfl::display::BitmapData renderTarget);
		::Dynamic _hx___setRenderTarget_dyn();

		void _hx___setShaderBuffer( ::openfl::display::_internal::ShaderBuffer shaderBuffer);
		::Dynamic _hx___setShaderBuffer_dyn();

		void _hx___suspendClipAndMask();
		::Dynamic _hx___suspendClipAndMask_dyn();

		void _hx___updateShaderBuffer(int bufferOffset);
		::Dynamic _hx___updateShaderBuffer_dyn();

};

} // end namespace openfl
} // end namespace display

#endif /* INCLUDED_openfl_display_OpenGLRenderer */ 
