package;

import flixel.FlxG;
import flixel.FlxObject;
import flixel.math.FlxPoint;

typedef DirectionsContainer =
{
	up:Bool,
	down:Bool,
	left:Bool,
	right:Bool
}

class PlayerControls
{
	var player:Player;
	var target:PlayerTarget;
	var playerActions:PlayerActions;

	static inline var SPEED:Float = 90;

	public function new(controlledPlayer:Player)
	{
		player = controlledPlayer;
		playerActions = new PlayerActions();

		player.drag.x = 1600;
		player.drag.y = 1600;
	}

	public function checkInputs()
	{
		var directions:DirectionsContainer = {
			up: false,
			down: false,
			left: false,
			right: false
		};

		directions.up = FlxG.keys.anyPressed([UP, W]);
		directions.down = FlxG.keys.anyPressed([DOWN, S]);
		directions.left = FlxG.keys.anyPressed([LEFT, A]);
		directions.right = FlxG.keys.anyPressed([RIGHT, D]);

		if (directions.up && directions.down)
		{
			directions.up = false;
			directions.down = false;
		}
		if (directions.left && directions.right)
		{
			directions.left = false;
			directions.right = false;
		}

		if (directions.up || directions.down || directions.left || directions.right)
			updateMovement(directions);

		if (FlxG.keys.anyJustPressed([Z]))
		{
			action();
		}

		if (FlxG.keys.anyJustPressed([X]))
		{
			var equipped = player.getEquipped();
			if (equipped == HOE)
				player.equip(SEED);
			else
				player.equip(HOE);
		}
	}

	function updateMovement(directions:DirectionsContainer)
	{
		var newAngle:Float = 0;

		if (directions.up)
		{
			newAngle = -90;
			if (directions.left)
				newAngle = -135;
			if (directions.right)
				newAngle = -45;
			player.facing = FlxObject.UP;
		}
		else if (directions.down)
		{
			newAngle = 90;
			if (directions.left)
				newAngle = 135;
			if (directions.right)
				newAngle = 45;
			player.facing = FlxObject.DOWN;
		}
		else if (directions.left)
		{
			newAngle = 180;
			player.facing = FlxObject.LEFT;
		}
		else if (directions.right)
		{
			newAngle = 0;
			player.facing = FlxObject.RIGHT;
		}

		player.velocity.set(SPEED, 0);
		player.velocity.rotate(FlxPoint.weak(0, 0), newAngle);
	}

	function action()
	{
		var target = player.getTarget();
		var equipped = player.getEquipped();
		target.use(equipped);
	}
}
