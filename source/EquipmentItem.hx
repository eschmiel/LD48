package;

enum EquipmentType
{
	GEAR;
	SEEDS;
}

enum Equipment
{
	HOE;
	SEED;
}

class EquipmentItem
{
	var name:String;
	var graphic:String;
	var quantity:Int;
	var type:EquipmentType;

	public function new(equipment:Equipment, ?startingQuantity:Int = 1)
	{
		switch (equipment)
		{
			case HOE:
				{
					graphic = AssetPaths.rock__png;
					name = "Hoe";
					type = GEAR;
					quantity = 1;
				}
			case SEED:
				{
					graphic = AssetPaths.carrot__png;
					name = "Seeds";
					type = SEEDS;
					quantity = startingQuantity;
				}
		}
	}

	public function add(x:Int)
	{
		if (type == SEEDS)
			quantity += x;
	}

	public function remove(x:Int)
	{
		quantity -= x;
	}

	public function getType():EquipmentType
	{
		return type;
	}

	public function getQuantity():Int
	{
		return quantity;
	}
}
