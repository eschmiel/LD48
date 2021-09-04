package;

import Entity.EntityInterface;
import EquipmentItem.Equipment;
import flixel.FlxSprite;

enum SoilStatus
{
	BLOCKED;
	TILLED;
	CROP;
	WEED;
	SOWED;
	STANDARD;
}

class Soil extends FlxSprite implements EntityInterface
{
	var status:SoilStatus = STANDARD;
	var contains:Crop;

	public function new(x:Float, y:Float)
	{
		super(x, y);
		loadGraphic(AssetPaths.transparent__png, false, 8, 8);
		// allowCollisions = FlxObject.NONE;
	}

	public function use(equipped:Equipment):Bool
	{
		switch (equipped)
		{
			case HOE:
				return till();
			case SEED:
				return seed();
		}
		return false;
	}

	function till():Bool
	{
		switch (status)
		{
			case BLOCKED | CROP | TILLED:
				return false;
			case STANDARD | SOWED:
				{
					status = TILLED;
					loadGraphic(AssetPaths.tilledSoil__png, false, 8, 8);
					return true;
				}
			case WEED:
				{
					status = STANDARD;
					return true;
				}
		}
		return false;
	}

	function seed():Bool
	{
		switch (status)
		{
			case BLOCKED | CROP | SOWED | STANDARD | WEED:
				return false;
			case TILLED:
				{
					status = SOWED;
					loadGraphic(AssetPaths.sowedSoil__png, false, 8, 8);
					return true;
				}
		}
		return false;
	}
}
