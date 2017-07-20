package;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.system.FlxAssets.FlxGraphicAsset;
import flixel.util.FlxColor;

/**
 * ...
 * @author 
 */
class Boulder extends FlxSprite 
{

	public function new(?X:Float=0, ?Y:Float=0) 
	{
		super(X, Y);
		
		
		makeGraphic(30, 30, FlxColor.RED);
	}
	
	override public function update(elapsed:Float):Void 
	{
		var timer:Float = 0;
		
		timer += FlxG.elapsed;
		
		if (timer >= 0.3)
		{
			angle += 25;
			timer = 0;
		}
		
		super.update(elapsed);
	}
	
}