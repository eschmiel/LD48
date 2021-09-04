import EquipmentItem.Equipment;
import Soil.SoilStatus;
import flixel.FlxObject;

interface EntityInterface
{
	public function use(equipped:Equipment):Bool;
}

class Entity extends FlxObject implements EntityInterface
{
	public function use(equipped:Equipment):Bool
	{
		return false;
	};
}
