package;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.group.FlxGroup;

class PlayState extends FlxState
{
	private static inline var TILE_WIDTH:Int = 70;
	private static inline var TILE_HEIGHT:Int = 70;
	
	private static inline var BASE_SPEED:Int = 250;
	
	private static inline var xAcceleration:Int = 1000;
	
	private static inline var xDrag:Int = 200;
	private static inline var yAcceleration:Int = 1400;
	
	private static inline var yVelocity:Int = 1400;
	
	private static inline var jumpDuration:Float = 0.25;
	
	private var _player:FlxSprite;
	private var _jump:Float;
	private var _playJump:Bool;
	private var _jumpPressed:Bool;
	private var _sfxDie:Bool;
	
	// used for camera movement
	private var _ghost:FlxSprite;
	
	private var _edge:Int;
	
	private var _collisions:FlxGroup;
	
	private var _tiles:Array<FlxSprite>;
	
	private var _pool:ObjectPool;
	
	private var _change:Bool;
	
	private var _score:Int;
	private var _startDistance:Int;
	
	private var _resetPlatforms:Bool;
	
	override public function create():Void
	{
		FlxG.worldBounds.setSize(FlxG.width * 10000, FlxG.height * 100000);
		
		setupBG();
		setupPlayer();
		initPlayer();
		setupPlatforms();
		initPlatforms();
		
		
		super.create();
	}
	
	private function setupBG():Void
	{
		//filler
	}
	
	private function setupPlayer():Void
	{
		_player = new FlxSprite();
		_player.makeGraphic(70, 100);
		
		_startDistance = Std.int(_player.x);
		
		add(_player);
		
		// something that follows player x movment
		_ghost = new FlxSprite(_player.x + FlxG.width - TILE_WIDTH, FlxG.height / 2);
		
		FlxG.camera.follow(_ghost);
	}
	
	private function setupPlatforms():Void
	{
		_pool = new ObjectPool(TILE_WIDTH, TILE_HEIGHT, "assets/images/tiles.png");
		
		_tiles = new Array<FlxSprite>();
		
		_collisions = new FlxGroup();
		add(_collisions);
		
		_resetPlatforms = false;
	}
	
	private inline function initBg():Void
	{
		var i:Int = FlxG.random.int(0, 4);
	}
	
	private inline function initPlayer():Void
	{
		_jump = -1;
		_playJump = true;
		_jumpPressed = false;
		_sfxDie = true;
		
		_player.setPosition(_startDistance * TILE_WIDTH, 0);
		_player.drag.x = xDrag;
		_player.velocity.set(0, 0);
		_player.maxVelocity.set(BASE_SPEED, yVelocity);
		_player.acceleration.set(xAcceleration, yAcceleration);
		
		//this is for later??
		//setAnimations();
		
		_ghost.x = _player.x - (TILE_WIDTH * 0.2) + (FlxG.width * 0.5);
	}
	
	private inline function initUI():Void
	{
		//fillthis in later too!
	}
	
	private inline function initPlatforms():Void
	{
		_change = false;
		
		_edge = (_startDistance - 10) * TILE_WIDTH;
		
		makePlatform(15, 4);
		makePlatform();
	}
	
	private function onReset():Void
	{
		//blahblah filfill
	}
	
	override public function update(elapsed:Float):Void 
	{
		
		if (_player.y > FlxG.height)
		{
			super.update(elapsed);
			
			return;
		}
		
		updatePlatforms();
		
		updatePlayer();
		
		if (_change)
		{
			
			_collisions.update(elapsed);
			
			_change = false;
		}
		
		if (FlxG.collide(_player, _collisions))
		{
			_playJump = false;
			
			if (_player.velocity.x == 0)
			{
				
				_jump = -1;
				_playJump = false;
				//sfxDie();
			}
			else if (!_jumpPressed)
			{
				_jump = 0;
				//_sfxDie = true;
			}
		}
		
		//playerAnimation();
		super.update(elapsed);
		
		
		//temp!
		_ghost.x = _player.x - (TILE_WIDTH * .2) + (FlxG.width * .5);
		//updateUI();
	}
	
	private inline function updatePlayer():Void
	{
		_player.maxVelocity.x = BASE_SPEED + Std.int(_player.x * 0.05);
		
		_jumpPressed = FlxG.keys.anyPressed(["UP", "W", "SPACE"]);
		
		if (_jump != -1 && _jumpPressed)
		{
			if (_jump == 0)
			{
				//sfxJump();
			}
			
			_jump += FlxG.elapsed;
			
			if (_player.velocity.y >= 0)
			{
				
				_playJump = true;
				
				_player.y -= 1;
				
				_player.velocity.y = -yAcceleration * 0.5;
				
				_player.acceleration.y = -yAcceleration;
			}
			
			if (_jump > jumpDuration)
			{
				_player.velocity.y = -yAcceleration * 0.5;
				
				_jump = -1;
				
				_playJump = true;
				
			}
		}
		
		else if (!_jumpPressed || _jump == -1)
		{
			if (_player.velocity.y < 0)
			{
				_player.acceleration.y = yAcceleration;
				
				_player.velocity.y = yAcceleration * 0.25;
				
				_jump = -1;
				
			}
		}
	}
	
	private inline function updatePlatforms():Void
	{
		removeBlocks();
		
		while (_player.x + FlxG.width > _edge)
		{
			//makePlatform();
		}
		
	}
	
	
	
	
	
	private function removeBlocks():Void
	{
		var distance:Float = _player.x - (TILE_WIDTH * 2);
		
		
		if (_resetPlatforms)
		{
			distance += _edge;
		}
		
		var ticker:Bool = true;
		
		while (ticker && _tiles.length != 0)
		{
			if (_tiles[0].x < distance)
			{
				_block = _tiles.shift();
				
				_collisions.remove(_block);
				
				_pool.returnObj(_block);
				
				ticker = true;
				
				_change = true;
			}
			else
			{
				ticker = false;
			}
		}
	}
	
	private var _block:FlxSprite;
	
	private function makePlatform(wide:Int = 0, high:Int = 0):Void
	{
		if (wide == 0)
		{
			wide = FlxG.random.int(0, 5) + 4 + Std.int(_player.x * 0.0001);
		}
		if (high == 0)
		{
			high = FlxG.random.int(0, 3) + 1;
		}
		
		var line:Int = FlxG.random.int(0, 9) * 4;
		
		var top:Int = FlxG.height - (high * TILE_HEIGHT);
		
		makeBlock(_edge, top, line);
		
		makeBlock(_edge + TILE_WIDTH, top, line + 1);
		
		_edge += TILE_WIDTH * 2;
		
		for (row in 0...wide)
		{
			makeBlock(_edge, top, line + 1);
			
			for (c in 1...high)
			{
				makeBlock(_edge, top + (c * TILE_HEIGHT), line + 3);
			}
			
			_edge += TILE_WIDTH;
		}
		
		makeBlock(_edge, top, line + 1);
		
		makeBlock(_edge + TILE_WIDTH, top, line + 2);
		
		_edge += Std.int(_player.x / (TILE_WIDTH * 0.9)) + ((FlxG.random.int(0, 2) + 3) * TILE_WIDTH);
		
		_change = true;
		
	}
	
	private inline function makeBlock(x:Float, y:Float, tile:Int):Void
	{
		_block = _pool.getObj();
		_block.setPosition(x, y);
		_block.frame = _block.frames.frames[tile];
		
		_tiles.push(_block);
		
		_collisions.add(_block);
	}
	
}