package;

import flixel.FlxObject;
import flixel.FlxSprite;
import flixel.util.FlxColor;

class PlayerTarget extends FlxSprite
{
	var target:Entity;

	public function new(startingX:Float = 0, startingY:Float = 0)
	{
		super(startingX, startingY);
		loadGraphic(AssetPaths.transparent__png);
		setSize(1, 1);
		offset.set(5, 10);
		// makeGraphic(1, 1, FlxColor.BLUE);
	}

	public function updatePosition(playerX:Float, playerY:Float, playerFacing:Int)
	{
		switch (playerFacing)
		{
			case FlxObject.RIGHT:
				{
					x = playerX + 8;
					y = playerY + 1;
				}
			case FlxObject.DOWN:
				{
					x = playerX;
					y = playerY + 8;
				}
			case FlxObject.LEFT:
				{
					x = playerX - 8;
					y = playerY + 1;
				}
			case FlxObject.UP:
				{
					x = playerX;
					y = playerY - 8;
				}
		}
	}

	public function clearTarget()
	{
		target = null;
	}

	public function setTarget(targetted:Entity)
	{
		target = targetted;
	}

	public function getTarget():Entity
	{
		return target;
	}
}
