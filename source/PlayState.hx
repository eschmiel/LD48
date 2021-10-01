package;

import flixel.FlxG;
import flixel.FlxObject;
import flixel.FlxState;
import flixel.addons.editors.ogmo.FlxOgmo3Loader;
import flixel.group.FlxGroup.FlxTypedGroup;
import flixel.tile.FlxTilemap;

class PlayState extends FlxState
{
	var player:Player;
	var playerTarget:PlayerTarget;
	var cursor:Cursor;

	var map:FlxOgmo3Loader;

	var soil:FlxTypedGroup<Soil>;
	var deco:FlxTypedGroup<Deco>;

	var fence:FlxTilemap;
	var ground:FlxTilemap;

	var farmMenu:FarmMenu;

	override public function create()
	{
		map = new FlxOgmo3Loader(AssetPaths.farm__ogmo, AssetPaths.farmRed__json);

		setupMap();
		setupEntities();
		setupPlayer();
		farmMenu = new FarmMenu();
		add(farmMenu);

		super.create();

		FlxG.camera.zoom = 1;
		FlxG.camera.follow(player, TOPDOWN_TIGHT, 1);
	}

	override public function update(elapsed:Float)
	{
		super.update(elapsed);

		playerTarget.clearTarget();
		updatePlayerTarget();

		FlxG.collide(player, fence);
		FlxG.collide(player, deco);

		FlxG.overlap(playerTarget, soil, setTarget);
		player.loadTarget(playerTarget.getTarget());
		updateCursor();
	}

	function setTarget(playerTargetObject, target:FlxObject)
	{
		playerTargetObject.setTarget(target);
	}

	function updatePlayerTarget()
	{
		var playerMidpoint = player.getMidpoint();

		playerTarget.updatePosition(playerMidpoint.x, playerMidpoint.y, player.facing);
	}

	function updateCursor()
	{
		var target = playerTarget.getTarget();

		if (target != null)
			cursor.placeOn(target);
	}

	function setupSoil(entity:EntityData)
	{
		soil.add(new Soil(entity.x, entity.y));
	}

	function placeDeco(entity:EntityData)
	{
		var x:Float = entity.x;
		var y:Float = entity.y;

		switch (entity.name)
		{
			case "rock":
				deco.add(new Deco(x, y, "ROCK"));
			case "carrot":
				deco.add(new Deco(x, y, "CARROT"));
			case "turnip":
				deco.add(new Deco(x, y, "TURNIP"));
			case "weed":
				deco.add(new Deco(x, y, "WEED"));
		}
	}

	function setupMap()
	{
		fence = map.loadTilemap(AssetPaths.groundTiles__png, "fence");
		fence.follow();
		for (tile in 31...55)
			fence.setTileProperties(tile, FlxObject.ANY);
		fence.setTileProperties(1, FlxObject.NONE);
		add(fence);

		ground = map.loadTilemap(AssetPaths.groundTiles__png, "ground");
		for (tile in 6...70)
			ground.setTileProperties(tile, FlxObject.NONE);
		add(ground);
	}

	function setupEntities()
	{
		soil = new FlxTypedGroup<Soil>();
		add(soil);
		map.loadEntities(setupSoil, "soil");

		deco = new FlxTypedGroup<Deco>();
		add(deco);
		map.loadEntities(placeDeco, "deco");
	}

	function setupPlayer()
	{
		player = new Player(80, 100);
		add(player);

		playerTarget = new PlayerTarget();
		add(playerTarget);

		cursor = new Cursor();
		add(cursor);
	}
}
