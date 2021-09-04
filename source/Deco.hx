package;

import flixel.FlxSprite;

class Deco extends FlxSprite
{
	public function new(assignedX:Float, assignedY:Float, type:String)
	{
		super(assignedX, assignedY);
		var graphic = AssetPaths.transparent__png;
		immovable = true;

		switch (type)
		{
			case "CARROT":
				graphic = AssetPaths.carrot__png;
			case "TURNIP":
				graphic = AssetPaths.turnip__png;
			case "WEED":
				graphic = AssetPaths.weed__png;
			case "ROCK":
				graphic = AssetPaths.rock__png;
		}

		loadGraphic(graphic, false, 8, 8);
	}
}
