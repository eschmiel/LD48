package;


import haxe.io.Bytes;
import lime.utils.AssetBundle;
import lime.utils.AssetLibrary;
import lime.utils.AssetManifest;
import lime.utils.Assets;

#if sys
import sys.FileSystem;
#end

@:access(lime.utils.Assets)


@:keep @:dox(hide) class ManifestResources {


	public static var preloadLibraries:Array<AssetLibrary>;
	public static var preloadLibraryNames:Array<String>;
	public static var rootPath:String;


	public static function init (config:Dynamic):Void {

		preloadLibraries = new Array ();
		preloadLibraryNames = new Array ();

		rootPath = null;

		if (config != null && Reflect.hasField (config, "rootPath")) {

			rootPath = Reflect.field (config, "rootPath");

		}

		if (rootPath == null) {

			#if (ios || tvos || emscripten)
			rootPath = "assets/";
			#elseif android
			rootPath = "";
			#elseif console
			rootPath = lime.system.System.applicationDirectory;
			#else
			rootPath = "./";
			#end

		}

		#if (openfl && !flash && !display)
		openfl.text.Font.registerFont (__ASSET__OPENFL__assets_data_8bithud_ttf);
		openfl.text.Font.registerFont (__ASSET__OPENFL__assets_data_8x8castpixel_ttf);
		openfl.text.Font.registerFont (__ASSET__OPENFL__assets_data_stylish6x5_ttf);
		openfl.text.Font.registerFont (__ASSET__OPENFL__flixel_fonts_nokiafc22_ttf);
		openfl.text.Font.registerFont (__ASSET__OPENFL__flixel_fonts_monsterrat_ttf);
		
		#end

		var data, manifest, library, bundle;

		#if kha

		null
		library = AssetLibrary.fromManifest (manifest);
		Assets.registerLibrary ("null", library);

		if (library != null) preloadLibraries.push (library);
		else preloadLibraryNames.push ("null");

		#else

		data = '{"name":null,"assets":"aoy4:sizei12044y4:typey4:FONTy9:classNamey32:__ASSET__assets_data_8bithud_ttfy2:idy27:assets%2Fdata%2F8BitHud.ttfy7:preloadtgoR0i8860R1R2R3y37:__ASSET__assets_data_8x8castpixel_ttfR5y32:assets%2Fdata%2F8x8CastPixel.ttfR7tgoy4:pathy21:assets%2Fdata%2Fc.fntR0i8296R1y4:TEXTR5R11R7tgoR10y23:assets%2Fdata%2Fc_0.pngR0i3342R1y5:IMAGER5R13R7tgoR10y21:assets%2Fdata%2Fd.fntR0i7928R1R12R5R15R7tgoR10y34:assets%2Fdata%2Fdata-goes-here.txtR0zR1R12R5R16R7tgoR10y23:assets%2Fdata%2Fd_0.pngR0i2922R1R14R5R17R7tgoR10y25:assets%2Fdata%2Ffarm.jsonR0i10390R1R12R5R18R7tgoR10y25:assets%2Fdata%2Ffarm.ogmoR0i12587R1R12R5R19R7tgoR10y28:assets%2Fdata%2FfarmRed.jsonR0i126431R1R12R5R20R7tgoR10y33:assets%2Fdata%2FfarmRedcopy0.jsonR0i10574R1R12R5R21R7tgoR10y21:assets%2Fdata%2Fl.fntR0i8115R1R12R5R22R7tgoR10y23:assets%2Fdata%2Fl_0.pngR0i2948R1R14R5R23R7tgoR10y21:assets%2Fdata%2Fs.fntR0i7980R1R12R5R24R7tgoR0i6168R1R2R3y35:__ASSET__assets_data_stylish6x5_ttfR5y30:assets%2Fdata%2Fstylish6x5.ttfR7tgoR10y33:assets%2Fdata%2Fstylish6x5Bit.fntR0i7992R1R12R5R27R7tgoR10y35:assets%2Fdata%2Fstylish6x5Bit_0.pngR0i1607R1R14R5R28R7tgoR10y35:assets%2Fdata%2Fstylish6x5Bit_0.tgaR0i65580R1y6:BINARYR5R29R7tgoR10y33:assets%2Fdata%2Fstylish6x5_16.fntR0i7993R1R12R5R31R7tgoR10y35:assets%2Fdata%2Fstylish6x5_16_0.pngR0i1670R1R14R5R32R7tgoR10y33:assets%2Fdata%2Fstylish6x5_32.fntR0i8273R1R12R5R33R7tgoR10y35:assets%2Fdata%2Fstylish6x5_32_0.pngR0i1817R1R14R5R34R7tgoR10y33:assets%2Fdata%2Fstylish6x5_48.fntR0i8294R1R12R5R35R7tgoR10y35:assets%2Fdata%2Fstylish6x5_48_0.pngR0i1901R1R14R5R36R7tgoR10y33:assets%2Fdata%2Fstylish6x5_64.fntR0i8328R1R12R5R37R7tgoR10y35:assets%2Fdata%2Fstylish6x5_64_0.pngR0i2032R1R14R5R38R7tgoR10y23:assets%2Fdata%2Fs_0.pngR0i1607R1R14R5R39R7tgoR10y28:assets%2Fimages%2Fcarrot.pngR0i1654R1R14R5R40R7tgoR10y28:assets%2Fimages%2Fcursor.pngR0i189R1R14R5R41R7tgoR10y59:assets%2Fimages%2Fdirt%20tiles%20red-20210425-144109.piskelR0i1316R1R12R5R42R7tgoR10y31:assets%2Fimages%2FdirtTiles.pngR0i696R1R14R5R43R7tgoR10y32:assets%2Fimages%2FdirtTiles2.pngR0i807R1R14R5R44R7tgoR10y34:assets%2Fimages%2FdirtTilesRed.pngR0i699R1R14R5R45R7tgoR10y35:assets%2Fimages%2FdirtTilesRed2.pngR0i801R1R14R5R46R7tgoR10y27:assets%2Fimages%2Ffence.pngR0i162R1R14R5R47R7tgoR10y28:assets%2Fimages%2Ffence2.pngR0i240R1R14R5R48R7tgoR10y33:assets%2Fimages%2FgroundTiles.pngR0i1653R1R14R5R49R7tgoR10y36:assets%2Fimages%2Fimages-go-here.txtR0zR1R12R5R50R7tgoR10y49:assets%2Fimages%2FLD48%20Player%20Run%20Right.gifR0i41337R1R14R5R51R7tgoR10y30:assets%2Fimages%2Fld48idle.gifR0i19233R1R14R5R52R7tgoR10y32:assets%2Fimages%2Fld48Player.pngR0i1488R1R14R5R53R7tgoR10y33:assets%2Fimages%2Fld48Player1.pngR0i1458R1R14R5R54R7tgoR10y45:assets%2Fimages%2FLindas%20Carrot%208x8px.pngR0i1721R1R14R5R55R7tgoR10y33:assets%2Fimages%2FRoad%281%29.pngR0i351R1R14R5R56R7tgoR10y26:assets%2Fimages%2Froad.pngR0i423R1R14R5R57R7tgoR10y27:assets%2Fimages%2Froad2.pngR0i693R1R14R5R58R7tgoR10y26:assets%2Fimages%2Frock.pngR0i129R1R14R5R59R7tgoR10y31:assets%2Fimages%2FsowedSoil.pngR0i114R1R14R5R60R7tgoR10y32:assets%2Fimages%2FtilledSoil.pngR0i111R1R14R5R61R7tgoR10y33:assets%2Fimages%2Ftransparent.pngR0i72R1R14R5R62R7tgoR10y39:assets%2Fimages%2Fturnip-whole-half.pngR0i138R1R14R5R63R7tgoR10y28:assets%2Fimages%2Fturnip.pngR0i129R1R14R5R64R7tgoR10y35:assets%2Fimages%2FturnipGrowing.pngR0i186R1R14R5R65R7tgoR10y26:assets%2Fimages%2Fweed.pngR0i141R1R14R5R66R7tgoR10y54:assets%2Fimages%2FworkedSoilRed-20210425-101510.piskelR0i454R1R12R5R67R7tgoR10y35:assets%2Fimages%2FworkedSoilRed.pngR0i147R1R14R5R68R7tgoR10y36:assets%2Fmusic%2Fmusic-goes-here.txtR0zR1R12R5R69R7tgoR10y36:assets%2Fsounds%2Fsounds-go-here.txtR0zR1R12R5R70R7tgoR0i2114R1y5:MUSICR5y26:flixel%2Fsounds%2Fbeep.mp3y9:pathGroupaR72y26:flixel%2Fsounds%2Fbeep.ogghR7tgoR0i39706R1R71R5y28:flixel%2Fsounds%2Fflixel.mp3R73aR75y28:flixel%2Fsounds%2Fflixel.ogghR7tgoR0i5794R1y5:SOUNDR5R74R73aR72R74hgoR0i33629R1R77R5R76R73aR75R76hgoR0i15744R1R2R3y35:__ASSET__flixel_fonts_nokiafc22_ttfR5y30:flixel%2Ffonts%2Fnokiafc22.ttfR7tgoR0i29724R1R2R3y36:__ASSET__flixel_fonts_monsterrat_ttfR5y31:flixel%2Ffonts%2Fmonsterrat.ttfR7tgoR10y33:flixel%2Fimages%2Fui%2Fbutton.pngR0i519R1R14R5R82R7tgoR10y36:flixel%2Fimages%2Flogo%2Fdefault.pngR0i3280R1R14R5R83R7tgh","rootPath":null,"version":2,"libraryArgs":[],"libraryType":null}';
		manifest = AssetManifest.parse (data, rootPath);
		library = AssetLibrary.fromManifest (manifest);
		Assets.registerLibrary ("default", library);
		

		library = Assets.getLibrary ("default");
		if (library != null) preloadLibraries.push (library);
		else preloadLibraryNames.push ("default");
		

		#end

	}


}


#if kha

null

#else

#if !display
#if flash

@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_8bithud_ttf extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_8x8castpixel_ttf extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_c_fnt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_c_0_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_d_fnt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_data_goes_here_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_d_0_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_farm_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_farm_ogmo extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_farmred_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_farmredcopy0_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_l_fnt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_l_0_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_s_fnt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_stylish6x5_ttf extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_stylish6x5bit_fnt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_stylish6x5bit_0_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_stylish6x5bit_0_tga extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_stylish6x5_16_fnt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_stylish6x5_16_0_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_stylish6x5_32_fnt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_stylish6x5_32_0_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_stylish6x5_48_fnt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_stylish6x5_48_0_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_stylish6x5_64_fnt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_stylish6x5_64_0_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_s_0_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_carrot_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_cursor_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_dirt_tiles_red_20210425_144109_piskel extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_dirttiles_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_dirttiles2_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_dirttilesred_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_dirttilesred2_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_fence_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_fence2_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_groundtiles_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_images_go_here_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_ld48_player_run_right_gif extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_ld48idle_gif extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_ld48player_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_ld48player1_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_lindas_carrot_8x8px_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_road_1__png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_road_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_road2_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_rock_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_sowedsoil_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_tilledsoil_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_transparent_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_turnip_whole_half_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_turnip_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_turnipgrowing_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_weed_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_workedsoilred_20210425_101510_piskel extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_workedsoilred_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_music_music_goes_here_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_sounds_go_here_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_sounds_beep_mp3 extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_sounds_flixel_mp3 extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_sounds_beep_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_sounds_flixel_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_fonts_nokiafc22_ttf extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_fonts_monsterrat_ttf extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_images_ui_button_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_images_logo_default_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__manifest_default_json extends null { }


#elseif (desktop || cpp)

@:keep @:font("export/html5/obj/webfont/8BitHud.ttf") @:noCompletion #if display private #end class __ASSET__assets_data_8bithud_ttf extends lime.text.Font {}
@:keep @:font("export/html5/obj/webfont/8x8CastPixel.ttf") @:noCompletion #if display private #end class __ASSET__assets_data_8x8castpixel_ttf extends lime.text.Font {}
@:keep @:file("assets/data/c.fnt") @:noCompletion #if display private #end class __ASSET__assets_data_c_fnt extends haxe.io.Bytes {}
@:keep @:image("assets/data/c_0.png") @:noCompletion #if display private #end class __ASSET__assets_data_c_0_png extends lime.graphics.Image {}
@:keep @:file("assets/data/d.fnt") @:noCompletion #if display private #end class __ASSET__assets_data_d_fnt extends haxe.io.Bytes {}
@:keep @:file("assets/data/data-goes-here.txt") @:noCompletion #if display private #end class __ASSET__assets_data_data_goes_here_txt extends haxe.io.Bytes {}
@:keep @:image("assets/data/d_0.png") @:noCompletion #if display private #end class __ASSET__assets_data_d_0_png extends lime.graphics.Image {}
@:keep @:file("assets/data/farm.json") @:noCompletion #if display private #end class __ASSET__assets_data_farm_json extends haxe.io.Bytes {}
@:keep @:file("assets/data/farm.ogmo") @:noCompletion #if display private #end class __ASSET__assets_data_farm_ogmo extends haxe.io.Bytes {}
@:keep @:file("assets/data/farmRed.json") @:noCompletion #if display private #end class __ASSET__assets_data_farmred_json extends haxe.io.Bytes {}
@:keep @:file("assets/data/farmRedcopy0.json") @:noCompletion #if display private #end class __ASSET__assets_data_farmredcopy0_json extends haxe.io.Bytes {}
@:keep @:file("assets/data/l.fnt") @:noCompletion #if display private #end class __ASSET__assets_data_l_fnt extends haxe.io.Bytes {}
@:keep @:image("assets/data/l_0.png") @:noCompletion #if display private #end class __ASSET__assets_data_l_0_png extends lime.graphics.Image {}
@:keep @:file("assets/data/s.fnt") @:noCompletion #if display private #end class __ASSET__assets_data_s_fnt extends haxe.io.Bytes {}
@:keep @:font("export/html5/obj/webfont/stylish6x5.ttf") @:noCompletion #if display private #end class __ASSET__assets_data_stylish6x5_ttf extends lime.text.Font {}
@:keep @:file("assets/data/stylish6x5Bit.fnt") @:noCompletion #if display private #end class __ASSET__assets_data_stylish6x5bit_fnt extends haxe.io.Bytes {}
@:keep @:image("assets/data/stylish6x5Bit_0.png") @:noCompletion #if display private #end class __ASSET__assets_data_stylish6x5bit_0_png extends lime.graphics.Image {}
@:keep @:file("assets/data/stylish6x5Bit_0.tga") @:noCompletion #if display private #end class __ASSET__assets_data_stylish6x5bit_0_tga extends haxe.io.Bytes {}
@:keep @:file("assets/data/stylish6x5_16.fnt") @:noCompletion #if display private #end class __ASSET__assets_data_stylish6x5_16_fnt extends haxe.io.Bytes {}
@:keep @:image("assets/data/stylish6x5_16_0.png") @:noCompletion #if display private #end class __ASSET__assets_data_stylish6x5_16_0_png extends lime.graphics.Image {}
@:keep @:file("assets/data/stylish6x5_32.fnt") @:noCompletion #if display private #end class __ASSET__assets_data_stylish6x5_32_fnt extends haxe.io.Bytes {}
@:keep @:image("assets/data/stylish6x5_32_0.png") @:noCompletion #if display private #end class __ASSET__assets_data_stylish6x5_32_0_png extends lime.graphics.Image {}
@:keep @:file("assets/data/stylish6x5_48.fnt") @:noCompletion #if display private #end class __ASSET__assets_data_stylish6x5_48_fnt extends haxe.io.Bytes {}
@:keep @:image("assets/data/stylish6x5_48_0.png") @:noCompletion #if display private #end class __ASSET__assets_data_stylish6x5_48_0_png extends lime.graphics.Image {}
@:keep @:file("assets/data/stylish6x5_64.fnt") @:noCompletion #if display private #end class __ASSET__assets_data_stylish6x5_64_fnt extends haxe.io.Bytes {}
@:keep @:image("assets/data/stylish6x5_64_0.png") @:noCompletion #if display private #end class __ASSET__assets_data_stylish6x5_64_0_png extends lime.graphics.Image {}
@:keep @:image("assets/data/s_0.png") @:noCompletion #if display private #end class __ASSET__assets_data_s_0_png extends lime.graphics.Image {}
@:keep @:image("assets/images/carrot.png") @:noCompletion #if display private #end class __ASSET__assets_images_carrot_png extends lime.graphics.Image {}
@:keep @:image("assets/images/cursor.png") @:noCompletion #if display private #end class __ASSET__assets_images_cursor_png extends lime.graphics.Image {}
@:keep @:file("assets/images/dirt tiles red-20210425-144109.piskel") @:noCompletion #if display private #end class __ASSET__assets_images_dirt_tiles_red_20210425_144109_piskel extends haxe.io.Bytes {}
@:keep @:image("assets/images/dirtTiles.png") @:noCompletion #if display private #end class __ASSET__assets_images_dirttiles_png extends lime.graphics.Image {}
@:keep @:image("assets/images/dirtTiles2.png") @:noCompletion #if display private #end class __ASSET__assets_images_dirttiles2_png extends lime.graphics.Image {}
@:keep @:image("assets/images/dirtTilesRed.png") @:noCompletion #if display private #end class __ASSET__assets_images_dirttilesred_png extends lime.graphics.Image {}
@:keep @:image("assets/images/dirtTilesRed2.png") @:noCompletion #if display private #end class __ASSET__assets_images_dirttilesred2_png extends lime.graphics.Image {}
@:keep @:image("assets/images/fence.png") @:noCompletion #if display private #end class __ASSET__assets_images_fence_png extends lime.graphics.Image {}
@:keep @:image("assets/images/fence2.png") @:noCompletion #if display private #end class __ASSET__assets_images_fence2_png extends lime.graphics.Image {}
@:keep @:image("assets/images/groundTiles.png") @:noCompletion #if display private #end class __ASSET__assets_images_groundtiles_png extends lime.graphics.Image {}
@:keep @:file("assets/images/images-go-here.txt") @:noCompletion #if display private #end class __ASSET__assets_images_images_go_here_txt extends haxe.io.Bytes {}
@:keep @:image("assets/images/LD48 Player Run Right.gif") @:noCompletion #if display private #end class __ASSET__assets_images_ld48_player_run_right_gif extends lime.graphics.Image {}
@:keep @:image("assets/images/ld48idle.gif") @:noCompletion #if display private #end class __ASSET__assets_images_ld48idle_gif extends lime.graphics.Image {}
@:keep @:image("assets/images/ld48Player.png") @:noCompletion #if display private #end class __ASSET__assets_images_ld48player_png extends lime.graphics.Image {}
@:keep @:image("assets/images/ld48Player1.png") @:noCompletion #if display private #end class __ASSET__assets_images_ld48player1_png extends lime.graphics.Image {}
@:keep @:image("assets/images/Lindas Carrot 8x8px.png") @:noCompletion #if display private #end class __ASSET__assets_images_lindas_carrot_8x8px_png extends lime.graphics.Image {}
@:keep @:image("assets/images/Road(1).png") @:noCompletion #if display private #end class __ASSET__assets_images_road_1__png extends lime.graphics.Image {}
@:keep @:image("assets/images/road.png") @:noCompletion #if display private #end class __ASSET__assets_images_road_png extends lime.graphics.Image {}
@:keep @:image("assets/images/road2.png") @:noCompletion #if display private #end class __ASSET__assets_images_road2_png extends lime.graphics.Image {}
@:keep @:image("assets/images/rock.png") @:noCompletion #if display private #end class __ASSET__assets_images_rock_png extends lime.graphics.Image {}
@:keep @:image("assets/images/sowedSoil.png") @:noCompletion #if display private #end class __ASSET__assets_images_sowedsoil_png extends lime.graphics.Image {}
@:keep @:image("assets/images/tilledSoil.png") @:noCompletion #if display private #end class __ASSET__assets_images_tilledsoil_png extends lime.graphics.Image {}
@:keep @:image("assets/images/transparent.png") @:noCompletion #if display private #end class __ASSET__assets_images_transparent_png extends lime.graphics.Image {}
@:keep @:image("assets/images/turnip-whole-half.png") @:noCompletion #if display private #end class __ASSET__assets_images_turnip_whole_half_png extends lime.graphics.Image {}
@:keep @:image("assets/images/turnip.png") @:noCompletion #if display private #end class __ASSET__assets_images_turnip_png extends lime.graphics.Image {}
@:keep @:image("assets/images/turnipGrowing.png") @:noCompletion #if display private #end class __ASSET__assets_images_turnipgrowing_png extends lime.graphics.Image {}
@:keep @:image("assets/images/weed.png") @:noCompletion #if display private #end class __ASSET__assets_images_weed_png extends lime.graphics.Image {}
@:keep @:file("assets/images/workedSoilRed-20210425-101510.piskel") @:noCompletion #if display private #end class __ASSET__assets_images_workedsoilred_20210425_101510_piskel extends haxe.io.Bytes {}
@:keep @:image("assets/images/workedSoilRed.png") @:noCompletion #if display private #end class __ASSET__assets_images_workedsoilred_png extends lime.graphics.Image {}
@:keep @:file("assets/music/music-goes-here.txt") @:noCompletion #if display private #end class __ASSET__assets_music_music_goes_here_txt extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/sounds-go-here.txt") @:noCompletion #if display private #end class __ASSET__assets_sounds_sounds_go_here_txt extends haxe.io.Bytes {}
@:keep @:file("C:/HaxeToolkit/haxe/lib/flixel/4,9,0/assets/sounds/beep.mp3") @:noCompletion #if display private #end class __ASSET__flixel_sounds_beep_mp3 extends haxe.io.Bytes {}
@:keep @:file("C:/HaxeToolkit/haxe/lib/flixel/4,9,0/assets/sounds/flixel.mp3") @:noCompletion #if display private #end class __ASSET__flixel_sounds_flixel_mp3 extends haxe.io.Bytes {}
@:keep @:file("C:/HaxeToolkit/haxe/lib/flixel/4,9,0/assets/sounds/beep.ogg") @:noCompletion #if display private #end class __ASSET__flixel_sounds_beep_ogg extends haxe.io.Bytes {}
@:keep @:file("C:/HaxeToolkit/haxe/lib/flixel/4,9,0/assets/sounds/flixel.ogg") @:noCompletion #if display private #end class __ASSET__flixel_sounds_flixel_ogg extends haxe.io.Bytes {}
@:keep @:font("export/html5/obj/webfont/nokiafc22.ttf") @:noCompletion #if display private #end class __ASSET__flixel_fonts_nokiafc22_ttf extends lime.text.Font {}
@:keep @:font("export/html5/obj/webfont/monsterrat.ttf") @:noCompletion #if display private #end class __ASSET__flixel_fonts_monsterrat_ttf extends lime.text.Font {}
@:keep @:image("C:/HaxeToolkit/haxe/lib/flixel/4,9,0/assets/images/ui/button.png") @:noCompletion #if display private #end class __ASSET__flixel_images_ui_button_png extends lime.graphics.Image {}
@:keep @:image("C:/HaxeToolkit/haxe/lib/flixel/4,9,0/assets/images/logo/default.png") @:noCompletion #if display private #end class __ASSET__flixel_images_logo_default_png extends lime.graphics.Image {}
@:keep @:file("") @:noCompletion #if display private #end class __ASSET__manifest_default_json extends haxe.io.Bytes {}



#else

@:keep @:expose('__ASSET__assets_data_8bithud_ttf') @:noCompletion #if display private #end class __ASSET__assets_data_8bithud_ttf extends lime.text.Font { public function new () { #if !html5 __fontPath = "assets/data/8BitHud"; #else ascender = 2867; descender = -409; height = 3276; numGlyphs = 102; underlinePosition = 153; underlineThickness = 102; unitsPerEM = 2048; #end name = "8-bit HUD Regular"; super (); }}
@:keep @:expose('__ASSET__assets_data_8x8castpixel_ttf') @:noCompletion #if display private #end class __ASSET__assets_data_8x8castpixel_ttf extends lime.text.Font { public function new () { #if !html5 __fontPath = "assets/data/8x8CastPixel"; #else ascender = 682; descender = 0; height = 682; numGlyphs = 99; underlinePosition = -153; underlineThickness = 51; unitsPerEM = 1024; #end name = "8x8BoldWideMono"; super (); }}
@:keep @:expose('__ASSET__assets_data_stylish6x5_ttf') @:noCompletion #if display private #end class __ASSET__assets_data_stylish6x5_ttf extends lime.text.Font { public function new () { #if !html5 __fontPath = "assets/data/stylish6x5"; #else ascender = 682; descender = -64; height = 746; numGlyphs = 83; underlinePosition = -153; underlineThickness = 51; unitsPerEM = 1024; #end name = "stylish6x5"; super (); }}
@:keep @:expose('__ASSET__flixel_fonts_nokiafc22_ttf') @:noCompletion #if display private #end class __ASSET__flixel_fonts_nokiafc22_ttf extends lime.text.Font { public function new () { #if !html5 __fontPath = "flixel/fonts/nokiafc22"; #else ascender = 2048; descender = -512; height = 2816; numGlyphs = 172; underlinePosition = -640; underlineThickness = 256; unitsPerEM = 2048; #end name = "Nokia Cellphone FC Small"; super (); }}
@:keep @:expose('__ASSET__flixel_fonts_monsterrat_ttf') @:noCompletion #if display private #end class __ASSET__flixel_fonts_monsterrat_ttf extends lime.text.Font { public function new () { #if !html5 __fontPath = "flixel/fonts/monsterrat"; #else ascender = 968; descender = -251; height = 1219; numGlyphs = 263; underlinePosition = -150; underlineThickness = 50; unitsPerEM = 1000; #end name = "Monsterrat"; super (); }}


#end

#if (openfl && !flash)

#if html5
@:keep @:expose('__ASSET__OPENFL__assets_data_8bithud_ttf') @:noCompletion #if display private #end class __ASSET__OPENFL__assets_data_8bithud_ttf extends openfl.text.Font { public function new () { __fromLimeFont (new __ASSET__assets_data_8bithud_ttf ()); super (); }}
@:keep @:expose('__ASSET__OPENFL__assets_data_8x8castpixel_ttf') @:noCompletion #if display private #end class __ASSET__OPENFL__assets_data_8x8castpixel_ttf extends openfl.text.Font { public function new () { __fromLimeFont (new __ASSET__assets_data_8x8castpixel_ttf ()); super (); }}
@:keep @:expose('__ASSET__OPENFL__assets_data_stylish6x5_ttf') @:noCompletion #if display private #end class __ASSET__OPENFL__assets_data_stylish6x5_ttf extends openfl.text.Font { public function new () { __fromLimeFont (new __ASSET__assets_data_stylish6x5_ttf ()); super (); }}
@:keep @:expose('__ASSET__OPENFL__flixel_fonts_nokiafc22_ttf') @:noCompletion #if display private #end class __ASSET__OPENFL__flixel_fonts_nokiafc22_ttf extends openfl.text.Font { public function new () { __fromLimeFont (new __ASSET__flixel_fonts_nokiafc22_ttf ()); super (); }}
@:keep @:expose('__ASSET__OPENFL__flixel_fonts_monsterrat_ttf') @:noCompletion #if display private #end class __ASSET__OPENFL__flixel_fonts_monsterrat_ttf extends openfl.text.Font { public function new () { __fromLimeFont (new __ASSET__flixel_fonts_monsterrat_ttf ()); super (); }}

#else
@:keep @:expose('__ASSET__OPENFL__assets_data_8bithud_ttf') @:noCompletion #if display private #end class __ASSET__OPENFL__assets_data_8bithud_ttf extends openfl.text.Font { public function new () { __fromLimeFont (new __ASSET__assets_data_8bithud_ttf ()); super (); }}
@:keep @:expose('__ASSET__OPENFL__assets_data_8x8castpixel_ttf') @:noCompletion #if display private #end class __ASSET__OPENFL__assets_data_8x8castpixel_ttf extends openfl.text.Font { public function new () { __fromLimeFont (new __ASSET__assets_data_8x8castpixel_ttf ()); super (); }}
@:keep @:expose('__ASSET__OPENFL__assets_data_stylish6x5_ttf') @:noCompletion #if display private #end class __ASSET__OPENFL__assets_data_stylish6x5_ttf extends openfl.text.Font { public function new () { __fromLimeFont (new __ASSET__assets_data_stylish6x5_ttf ()); super (); }}
@:keep @:expose('__ASSET__OPENFL__flixel_fonts_nokiafc22_ttf') @:noCompletion #if display private #end class __ASSET__OPENFL__flixel_fonts_nokiafc22_ttf extends openfl.text.Font { public function new () { __fromLimeFont (new __ASSET__flixel_fonts_nokiafc22_ttf ()); super (); }}
@:keep @:expose('__ASSET__OPENFL__flixel_fonts_monsterrat_ttf') @:noCompletion #if display private #end class __ASSET__OPENFL__flixel_fonts_monsterrat_ttf extends openfl.text.Font { public function new () { __fromLimeFont (new __ASSET__flixel_fonts_monsterrat_ttf ()); super (); }}

#end

#end
#end

#end
