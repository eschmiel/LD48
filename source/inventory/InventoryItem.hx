package source.inventory;

import flixel.FlxSprite;
import flixel.system.FlxAssets.FlxGraphicAsset;

class InventoryItem extends FlxSprite
{
	var itemGraphic:FlxGraphicAsset;
	var name:String;

	public function new(startingX:Float = 0, startingY:Float = 0)
	{
		super(startingX, startingY);
	}

	public function getName():String
	{
		return name;
	}

	public function getGraphic():FlxGraphicAsset
	{
		return itemGraphic;
	}
}
