package source.inventory;

import source.inventory.InventoryItem;

class CarrotItem extends InventoryItem
{
	public function new(startingX:Float = 0, startingY:Float = 0)
	{
		super(startingX, startingY);
		name = "Carrot";
		itemGraphic = AssetPaths.carrot__png;
	}
}
