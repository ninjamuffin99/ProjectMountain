package;

import flixel.FlxGame;
import openfl.Lib;

/**
 * ...
 * @author 
 */
class GameClass extends FlxGame 
{

	public function new() 
	{
		var stageWidth:Int = Lib.current.stage.stageWidth;
		var stageHeight:Int = Lib.current.stage.stageHeight;
		
		super(stageWidth, stageWidth, MainMenuState, 1, 60, 60, false, false);
		
	}
	
}