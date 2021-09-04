package;

enum CropType
{
	TURNIP;
	CARROT;
}

enum CropQuality
{
	PRIME;
	NORMAL;
	POOR;
}

class Crop
{
	var type:CropType;
	var graphic:String;

	var active:Bool = false;
	var pickable:Bool = false;
	var watered:Bool = false;

	var maxHp:Int = 0;
	var hp:Int = 0;
	var days:Int = 0;
	var dayOfMaturity:Int;
	var dayOfDecline:Int;
	var quality:CropQuality;

	public function new() {}

	public function water()
	{
		if (!watered)
		{
			if (!active)
				active = true;
			if (days < dayOfDecline)
				hp += 2;
			if (hp < maxHp)
				hp = maxHp;
			watered = true;
		}
	}

	public function update()
	{
		graphic = AssetPaths.turnip__png;

		return graphic;
	}
}
