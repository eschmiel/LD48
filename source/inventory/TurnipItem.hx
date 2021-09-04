package source.inventory;

import source.inventory.InventoryItem;

class TurnipItem extends InventoryItem
{
	public function new(startingX:Float = 0, startingY:Float = 0)
	{
		super(startingX, startingY);
		name = "Turnip";
		itemGraphic = AssetPaths.turnip__png;
	}
}
