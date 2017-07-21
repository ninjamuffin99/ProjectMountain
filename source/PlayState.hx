package;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.group.FlxGroup;
import flixel.text.FlxText;

class PlayState extends FlxState
{
	private static inline var TILE_WIDTH:Int = 70;
	private static inline var TILE_HEIGHT:Int = 70;
	
	private static inline var BASE_SPEED:Int = 250;
	
	private static inline var xAcceleration:Int = 500;
	
	private static inline var xDrag:Int = 200;
	private static inline var yAcceleration:Int = 1400;
	
	private static inline var yVelocity:Int = 1400;
	
	private static inline var jumpDuration:Float = 0.3;
	
	private var _player:FlxSprite;
	private var _jump:Float;
	private var _playJump:Bool;
	private var _jumpPressed:Bool;
	private var _sfxDie:Bool;
	
	// used for camera movement
	private var _ghost:FlxSprite;
	
	private var _edge:Int;
	
	private var _bgImgGrp:FlxGroup;
	private var _bgImg1:FlxSprite;
	private var _bgImg2:FlxSprite;
	private var _bgImg3:FlxSprite;
	private var _bgImg4:FlxSprite;
	private var _bgImg5:FlxSprite;
	private var _bgImages:Array<String>;
	
	private var _collisions:FlxGroup;
	
	private var _tiles:Array<FlxSprite>;
	
	private var _pool:ObjectPool;
	
	private var _change:Bool;
	
	private var _UIGroup:FlxGroup;
	private var _score:Float;
	private var _startDistance:Int;
	
	private var _scoreText:FlxText;
	
	private var _resetPlatforms:Bool;
	
	
	private var _stumps:FlxSprite;
	
	override public function create():Void
	{
		FlxG.worldBounds.setSize(TILE_WIDTH * 100000, 1000);
		FlxG.camera.angle = -15;
		
		FlxG.sound.playMusic("assets/music/Oof.ogg");
		
		
		
		setupBG();
		setupPlayer();
		initPlayer();
		setupUI();
		
		_stumps = new Stump();
		
		setupPlatforms();
		initPlatforms();
		
		initBg();
		
		
		super.create();
	}
	
	private function setupBG():Void
	{
		_bgImg1 = new FlxSprite();
		_bgImg2 = new FlxSprite();
		_bgImg3 = new FlxSprite();
		_bgImg4 = new FlxSprite();
		_bgImg5 = new FlxSprite();
		_bgImg1.loadGraphic("assets/images/parallax_mountain_pack/parallax_mountain_pack/layers/parallax-mountain-bg.png", false, 272, 160);
		_bgImg2.loadGraphic("assets/images/parallax_mountain_pack/parallax_mountain_pack/layers/parallax-mountain-montain-far.png", false, 272, 160);
		_bgImg3.loadGraphic("assets/images/parallax_mountain_pack/parallax_mountain_pack/layers/parallax-mountain-mountains.png", false, 272, 160);
		_bgImg4.loadGraphic("assets/images/parallax_mountain_pack/parallax_mountain_pack/layers/parallax-mountain-trees.png", false, 544, 160);
		_bgImg5.loadGraphic("assets/images/parallax_mountain_pack/parallax_mountain_pack/layers/parallax-mountain-foreground-trees.png", false, 544, 160);
		
		_bgImgGrp = new FlxGroup();
		
		this.add(_bgImgGrp);
		_bgImgGrp.add(_bgImg1);
		_bgImgGrp.add(_bgImg2);
		_bgImgGrp.add(_bgImg3);
		_bgImgGrp.add(_bgImg4);
		_bgImgGrp.add(_bgImg5);
		
	}
	
	private function setupPlayer():Void
	{
		_player = new FlxSprite();
		_player.makeGraphic(70, 100);
		
		_startDistance = Std.int(_player.x);
		
		add(_player);
		
		// something that follows player x movment
		_ghost = new FlxSprite(_player.x + FlxG.width - TILE_WIDTH, FlxG.height * 0.6);
		
		FlxG.camera.follow(_ghost);
	}
	
	private function setupUI():Void
	{
		_scoreText = new FlxText(0, 0, TILE_WIDTH * 4, "");
		_scoreText.alignment = "right";
		add(_scoreText);
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
		_bgImg1.scrollFactor.x = 0;
		_bgImg2.scrollFactor.x = 0.05;
		_bgImg3.scrollFactor.x = 0.1;
		_bgImg3.scrollFactor.x = 0.3;
		_bgImg3.scrollFactor.x = 0.35;
		
		
		_bgImg1.setGraphicSize(FlxG.width * 2, FlxG.height + 100);
		_bgImg2.setGraphicSize(FlxG.width * 2, FlxG.height + 100);
		_bgImg3.setGraphicSize(FlxG.width * 2, FlxG.height + 100);
		_bgImg4.setGraphicSize(FlxG.width * 4, FlxG.height + 500);
		_bgImg5.setGraphicSize(FlxG.width * 4, FlxG.height + 500);
		
		_bgImg4.y = _bgImg5.y = _player.y;
		
		_bgImg2.x = FlxG.random.float(0, FlxG.width);
		_bgImg3.x = FlxG.random.float(0, FlxG.width);
		
		_bgImg1.screenCenter();
		_bgImg2.screenCenter();
		_bgImg3.screenCenter();
		_bgImg4.screenCenter(X);
		_bgImg5.screenCenter(X);
		
		_bgImg1.angle = 15;
		_bgImg2.angle = 15;
		_bgImg3.angle = 15;
	}
	
	private inline function initPlayer():Void
	{
		_jump = -1;
		_playJump = true;
		_jumpPressed = false;
		_sfxDie = true;
		
		_player.setPosition(_startDistance * (TILE_WIDTH * 2), 0);
		_player.drag.x = xDrag;
		_player.velocity.set(0, 0);
		_player.maxVelocity.set(BASE_SPEED, yVelocity);
		_player.acceleration.set(xAcceleration, yAcceleration);
		
		//this is for later??
		setAnimations();
		
		_ghost.x = _player.x - (TILE_WIDTH * 0.2) + (FlxG.width * 0.5);
	}
	
	private inline function initUI():Void
	{
		_scoreText.y = 20;
		_score = 0;
	}
	
	private inline function initPlatforms():Void
	{
		_change = false;
		
		_edge = (_startDistance - 1) * TILE_WIDTH;
		
		makePlatform(16, 4);
		makePlatform();
	}
	
	private function onReset():Void
	{
		_resetPlatforms = true;
		removeBlocks();
		_resetPlatforms = false;
		
		initPlayer();
		
		initUI();
		
		initPlatforms();
		
		initBg();
		
	}
	
	override public function update(elapsed:Float):Void 
	{
		
		if (FlxG.keys.justPressed.R)
		{
			onReset();
			
			return;
		}
		
		
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
		
		updateUI();
	}
	
	private inline function updateUI():Void
	{
		_score += FlxG.elapsed;
		//_scoreText.text = Std.string(_score);
		FlxG.watch.add(FlxG.sound.music, "time");
		positionText();
		
		_ghost.x = _player.x - (TILE_WIDTH * .2) + (FlxG.width * .5);
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
				
				_player.velocity.y += yAcceleration * 0.03;
				
				_jump = -1;
				
			}
		}
	}
	
	private inline function updateBg():Void
	{
		
	}
	
	
	private inline function updatePlatforms():Void
	{
		removeBlocks();
		
		while (_player.x + FlxG.width > _edge)
		{
			makePlatform();
		}
		
	}
	
	
	
	
	
	private function removeBlocks():Void
	{
		var distance:Float = _player.x - (TILE_WIDTH * 6);
		
		
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
			wide = FlxG.random.int(0, 5) + 4 + Std.int(_player.x * 0.00015);
			
			FlxG.log.add(wide);
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
		
		if (FlxG.random.bool())
		{
			_stumps.x = _edge + FlxG.random.int(TILE_WIDTH * -wide, TILE_WIDTH);
			_stumps.y = top - TILE_HEIGHT;
			
			add(_stumps);
			
			_collisions.add(_stumps);
		}
		
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
	
	private inline function setAnimations():Void
	{
		var line:Int = FlxG.random.int(0, 5) * 6;
	}
	
	private inline function positionText():Void
	{
		_scoreText.x = _player.x + FlxG.width - (4 * TILE_WIDTH);
	}
	
}