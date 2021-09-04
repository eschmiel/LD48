package;

import flixel.FlxObject;
import flixel.FlxSprite;

class Cursor extends FlxSprite
{
	public function new(startingX:Float = 0, startingY:Float = 0)
	{
		super(startingX, startingY);
		loadGraphic(AssetPaths.cursor__png, true, 8, 8);
		animation.add("targeting", [0, 1, 2, 3], 5, true);
	}

	override public function update(elapsed:Float)
	{
		animation.play("targeting");
		super.update(elapsed);
	}

	public function placeOn(object:FlxObject)
	{
		setPosition(object.x, object.y);
	}
}
