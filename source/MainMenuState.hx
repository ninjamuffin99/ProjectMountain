package;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.text.FlxText;
import flixel.ui.FlxButton;
import flixel.util.FlxColor;

/**
 * ...
 * @author 
 */
class MainMenuState extends FlxState 
{

	private var background:FlxSprite;
	private var title:FlxText;
	private var BtnRun:FlxSprite;
	private var credits:FlxButton;
	private var timer:Float = 0.3;
	
	override public function create():Void 
	{
		background = new FlxSprite();
		background.loadGraphic("assets/images/title.jpg", false, 1136, 640);
		add(background);
		
		background.setGraphicSize(0, FlxG.height);
		background.screenCenter();
		
		
		BtnRun = new FlxSprite(0, FlxG.height * 0.75);
		BtnRun.loadGraphic("assets/images/space.png", false, 128, 128);
		add(BtnRun);
		BtnRun.screenCenter(X);
		
		super.create();
	}
	
	override public function update(elapsed:Float):Void 
	{
		
		timer -= FlxG.elapsed;
		if (timer <= 0)
		{
			BtnRun.visible = !BtnRun.visible;
			timer += 0.3;
		}
		
		if (FlxG.keys.justPressed.SPACE)
		{
			FlxG.camera.fade(FlxColor.WHITE, 0.05, false, function()
			{
				FlxG.switchState(new PlayState());
			});
		}
		
		
		
		super.update(elapsed);
	}
	
}