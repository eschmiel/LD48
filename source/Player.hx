package;

import EquipmentItem.Equipment;
import flixel.FlxSprite;

class Player extends FlxSprite
{
	var playerControls:PlayerControls;
	var playerAnimator:PlayerAnimator;

	var target:Entity;

	var equipment:Map<Equipment, EquipmentItem>;
	var equipped:Equipment;

	public function new(x:Float = 0, y:Float = 0)
	{
		super(x, y);
		playerAnimator = new PlayerAnimator(this);
		playerControls = new PlayerControls(this);
		equipment = new Map<Equipment, EquipmentItem>();

		setSize(4, 6);
		offset.set(5, 10);

		equipped = HOE;
		addEquipment(SEED);
		addEquipment(HOE);
	}

	public function loadTarget(targetLoad:Entity)
	{
		target = targetLoad;
	}

	public function getTarget():Entity
	{
		return target;
	}

	public function getEquipped():Equipment
	{
		return equipped;
	}

	public function equip(equipmentItem:Equipment)
	{
		if (equipment.exists(equipmentItem))
			equipped = equipmentItem;
	}

	public function addEquipment(equipmentItem:Equipment, ?quantity:Int)
	{
		if (equipment.exists(equipmentItem))
		{
			if (quantity != null)
				equipment[equipmentItem].add(quantity);
		}
		else if (quantity != null)
			equipment.set(equipmentItem, new EquipmentItem(equipmentItem, quantity));
		else
			equipment.set(equipmentItem, new EquipmentItem(equipmentItem));
	}

	public function removeEquipment(equipmentItem:Equipment, quantity:Int)
	{
		if (equipment.exists(equipmentItem))
		{
			if (quantity > 0)
				equipment[equipmentItem].remove(quantity);
			if (equipment[equipmentItem].getQuantity() < 1)
				equipment.remove(equipmentItem);
		}
	}

	public function getEquipment():Map<Equipment, EquipmentItem>
	{
		return equipment;
	}

	override function update(elapsed:Float)
	{
		playerControls.checkInputs();

		if (velocity.x != 0 || velocity.y != 0)
			playerAnimator.setAnimationState("RUN");
		else
			playerAnimator.setAnimationState('IDLE');

		playerAnimator.updateAnimation();

		super.update(elapsed);
	}
}
