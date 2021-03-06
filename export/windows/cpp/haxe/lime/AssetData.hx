package lime;


import lime.utils.Assets;


class AssetData {

	private static var initialized:Bool = false;
	
	public static var library = new #if haxe3 Map <String, #else Hash <#end LibraryType> ();
	public static var path = new #if haxe3 Map <String, #else Hash <#end String> ();
	public static var type = new #if haxe3 Map <String, #else Hash <#end AssetType> ();	
	
	public static function initialize():Void {
		
		if (!initialized) {
			
			path.set ("assets/data/data-goes-here.txt", "assets/data/data-goes-here.txt");
			type.set ("assets/data/data-goes-here.txt", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/images/bearded.png", "assets/images/bearded.png");
			type.set ("assets/images/bearded.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/boulder.png", "assets/images/boulder.png");
			type.set ("assets/images/boulder.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/cardboardrun.png", "assets/images/cardboardrun.png");
			type.set ("assets/images/cardboardrun.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/dead.png", "assets/images/dead.png");
			type.set ("assets/images/dead.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/images-go-here.txt", "assets/images/images-go-here.txt");
			type.set ("assets/images/images-go-here.txt", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/images/marshmellow.png", "assets/images/marshmellow.png");
			type.set ("assets/images/marshmellow.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/marshmellowblue.png", "assets/images/marshmellowblue.png");
			type.set ("assets/images/marshmellowblue.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/marshmellowfire.png", "assets/images/marshmellowfire.png");
			type.set ("assets/images/marshmellowfire.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/old.png", "assets/images/old.png");
			type.set ("assets/images/old.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/parallax_mountain_pack/parallax_mountain_pack/layers/parallax-mountain-bg.png", "assets/images/parallax_mountain_pack/parallax_mountain_pack/layers/parallax-mountain-bg.png");
			type.set ("assets/images/parallax_mountain_pack/parallax_mountain_pack/layers/parallax-mountain-bg.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/parallax_mountain_pack/parallax_mountain_pack/layers/parallax-mountain-foreground-trees.png", "assets/images/parallax_mountain_pack/parallax_mountain_pack/layers/parallax-mountain-foreground-trees.png");
			type.set ("assets/images/parallax_mountain_pack/parallax_mountain_pack/layers/parallax-mountain-foreground-trees.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/parallax_mountain_pack/parallax_mountain_pack/layers/parallax-mountain-montain-far.png", "assets/images/parallax_mountain_pack/parallax_mountain_pack/layers/parallax-mountain-montain-far.png");
			type.set ("assets/images/parallax_mountain_pack/parallax_mountain_pack/layers/parallax-mountain-montain-far.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/parallax_mountain_pack/parallax_mountain_pack/layers/parallax-mountain-mountains.png", "assets/images/parallax_mountain_pack/parallax_mountain_pack/layers/parallax-mountain-mountains.png");
			type.set ("assets/images/parallax_mountain_pack/parallax_mountain_pack/layers/parallax-mountain-mountains.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/parallax_mountain_pack/parallax_mountain_pack/layers/parallax-mountain-trees.png", "assets/images/parallax_mountain_pack/parallax_mountain_pack/layers/parallax-mountain-trees.png");
			type.set ("assets/images/parallax_mountain_pack/parallax_mountain_pack/layers/parallax-mountain-trees.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/parallax_mountain_pack/parallax_mountain_pack/license.txt", "assets/images/parallax_mountain_pack/parallax_mountain_pack/license.txt");
			type.set ("assets/images/parallax_mountain_pack/parallax_mountain_pack/license.txt", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/images/parallax_mountain_pack/parallax_mountain_pack/parallax-mountain.psd", "assets/images/parallax_mountain_pack/parallax_mountain_pack/parallax-mountain.psd");
			type.set ("assets/images/parallax_mountain_pack/parallax_mountain_pack/parallax-mountain.psd", Reflect.field (AssetType, "binary".toUpperCase ()));
			path.set ("assets/images/parallax_mountain_pack.zip", "assets/images/parallax_mountain_pack.zip");
			type.set ("assets/images/parallax_mountain_pack.zip", Reflect.field (AssetType, "binary".toUpperCase ()));
			path.set ("assets/images/penguin.png", "assets/images/penguin.png");
			type.set ("assets/images/penguin.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/poof.png", "assets/images/poof.png");
			type.set ("assets/images/poof.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/reset.png", "assets/images/reset.png");
			type.set ("assets/images/reset.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/run.png", "assets/images/run.png");
			type.set ("assets/images/run.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/run2.png", "assets/images/run2.png");
			type.set ("assets/images/run2.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/running.png", "assets/images/running.png");
			type.set ("assets/images/running.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/running.txt", "assets/images/running.txt");
			type.set ("assets/images/running.txt", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/images/run_nolegs.png", "assets/images/run_nolegs.png");
			type.set ("assets/images/run_nolegs.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/sky.jpg", "assets/images/sky.jpg");
			type.set ("assets/images/sky.jpg", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/skyday.jpg", "assets/images/skyday.jpg");
			type.set ("assets/images/skyday.jpg", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/skynight.jpg", "assets/images/skynight.jpg");
			type.set ("assets/images/skynight.jpg", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/space.png", "assets/images/space.png");
			type.set ("assets/images/space.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/tiles.jpg", "assets/images/tiles.jpg");
			type.set ("assets/images/tiles.jpg", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/tiles.png", "assets/images/tiles.png");
			type.set ("assets/images/tiles.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/title.jpg", "assets/images/title.jpg");
			type.set ("assets/images/title.jpg", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/tree.png", "assets/images/tree.png");
			type.set ("assets/images/tree.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/whiteface.png", "assets/images/whiteface.png");
			type.set ("assets/images/whiteface.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/music/music-goes-here.txt", "assets/music/music-goes-here.txt");
			type.set ("assets/music/music-goes-here.txt", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/music/Oof.mp3", "assets/music/Oof.mp3");
			type.set ("assets/music/Oof.mp3", Reflect.field (AssetType, "music".toUpperCase ()));
			path.set ("assets/music/Oof.ogg", "assets/music/Oof.ogg");
			type.set ("assets/music/Oof.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("assets/sounds/sounds-go-here.txt", "assets/sounds/sounds-go-here.txt");
			type.set ("assets/sounds/sounds-go-here.txt", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("flixel/sounds/beep.ogg", "flixel/sounds/beep.ogg");
			type.set ("flixel/sounds/beep.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("flixel/sounds/flixel.ogg", "flixel/sounds/flixel.ogg");
			type.set ("flixel/sounds/flixel.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("flixel/fonts/nokiafc22.ttf", "flixel/fonts/nokiafc22.ttf");
			type.set ("flixel/fonts/nokiafc22.ttf", Reflect.field (AssetType, "font".toUpperCase ()));
			path.set ("flixel/fonts/monsterrat.ttf", "flixel/fonts/monsterrat.ttf");
			type.set ("flixel/fonts/monsterrat.ttf", Reflect.field (AssetType, "font".toUpperCase ()));
			path.set ("flixel/images/ui/button.png", "flixel/images/ui/button.png");
			type.set ("flixel/images/ui/button.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("flixel/images/logo/default.png", "flixel/images/logo/default.png");
			type.set ("flixel/images/logo/default.png", Reflect.field (AssetType, "image".toUpperCase ()));
			
			
			initialized = true;
			
		} //!initialized
		
	} //initialize
	
	
} //AssetData
