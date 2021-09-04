package;

import EquipmentItem.Equipment;
import flixel.FlxSprite;
import flixel.graphics.frames.FlxBitmapFont;
import flixel.group.FlxGroup.FlxTypedGroup;
import flixel.text.FlxBitmapText;
import flixel.text.FlxText;
import flixel.ui.FlxButton;
import flixel.util.FlxColor;

using flixel.util.FlxSpriteUtil;

class FarmMenu extends FlxTypedGroup<FlxSprite>
{
	var equipmentButton:FlxButton;
	var equipment:Map<Equipment, EquipmentItem>;
	var inventoryButton:FlxButton;
	var inventoryItem:Null<Int>;

	var menuBox:FlxSprite;
	var menuBoxBorderLineStyle:LineStyle;

	var font = FlxBitmapFont;

	public function new()
	{
		super();
		menuBoxBorderLineStyle = {
			thickness: 3,
			color: FlxColor.GREEN,
		};

		var color = FlxColor.fromString('#31CFF7');
		menuBox = new FlxSprite(22, 55).makeGraphic(100, 100, FlxColor.fromString('#31CFF7'));
		menuBox.drawRect(0, 0, 480, 360, FlxColor.TRANSPARENT, {thickness: 4, color: FlxColor.fromString('#F7912F')}); // border

		menuBox.drawRect(12, 12, 160, 336, FlxColor.TRANSPARENT, {thickness: 2, color: FlxColor.GREEN}); // sidebar
		menuBox.drawRect(16, 16, 152, 138, FlxColor.RED); // portrait

		menuBox.drawRect(16, 148, 152, 64, FlxColor.BLACK, {thickness: 1, color: FlxColor.GRAY}); // menu button 1
		// var equipText = new FlxBitmapText(205, 285, 'CARROT', 45, true);
		var equipText = new FlxBitmapText(FlxBitmapFont.fromAngelCode(AssetPaths.stylish6x5_16_0__png, AssetPaths.stylish6x5_16__fnt));
		equipText.alignment = LEFT;
		equipText.text = "STYLISH6x5_16";
		equipText.x = 100;
		equipText.y = 100;

		var equipText2 = new FlxBitmapText(FlxBitmapFont.fromAngelCode(AssetPaths.stylish6x5_32_0__png, AssetPaths.stylish6x5_32__fnt));
		equipText2.alignment = LEFT;
		equipText2.text = "STYLISH6x5_32";
		equipText2.x = 100;
		equipText2.y = 200;

		var equipText3 = new FlxBitmapText(FlxBitmapFont.fromAngelCode(AssetPaths.stylish6x5_48_0__png, AssetPaths.stylish6x5_48__fnt));
		equipText3.alignment = LEFT;
		equipText3.text = "STYLISH6x5_48";
		equipText3.x = 100;
		equipText3.y = 300;

		var equipText4 = new FlxBitmapText(FlxBitmapFont.fromAngelCode(AssetPaths.stylish6x5_64_0__png, AssetPaths.stylish6x5_64__fnt));
		equipText4.alignment = LEFT;
		equipText4.text = "STYLISH6x5_64";
		equipText4.x = 100;
		equipText4.y = 400;

		menuBox.drawRect(16, 216, 152, 64, FlxColor.BLUE, {thickness: 1, color: FlxColor.GRAY}); // menu button 2
		var itemText = new FlxText(420, 140, 'X5', 64);
		itemText.alignment = LEFT;
		itemText.font = "stylish6x5";
		// itemText.color = FlxColor.fromString("#f7f2e9");
		// equipText.color = FlxColor.fromString("#000000");

		menuBox.drawRect(16, 284, 152, 64, FlxColor.BLUE, {thickness: 1, color: FlxColor.GRAY}); // menu button 3
		var optionText = new FlxText(48, 340, 'OPTIONS', 48);
		optionText.alignment = LEFT;
		optionText.font = "stylish6x5";

		menuBox.drawLine(176, 160, 474, 160, {thickness: 1, color: FlxColor.PURPLE}); // Equipment/Inventory seperator 1
		menuBox.drawLine(176, 168, 474, 168, {thickness: 1, color: FlxColor.PURPLE}); // Equipment/Inventory seperator 2
		menuBox.drawRect(208, 24, 96, 96, FlxColor.TRANSPARENT, {thickness: 1, color: FlxColor.GRAY, jointStyle: 'miter'}); // Equipped 1
		menuBox.drawRect(336, 24, 96, 96, FlxColor.TRANSPARENT, {thickness: 1, color: FlxColor.GRAY, jointStyle: 'miter'}); // Equipped 2
		menuBox.drawRect(196, 186, 48, 48, FlxColor.TRANSPARENT, {thickness: 1, color: FlxColor.GRAY, jointStyle: 'miter'}); // Inventor 1
		menuBox.drawRect(264, 186, 48, 48, FlxColor.TRANSPARENT, {thickness: 1, color: FlxColor.GRAY, jointStyle: 'miter'}); // Inventor 2
		menuBox.drawRect(332, 186, 48, 48, FlxColor.TRANSPARENT, {thickness: 1, color: FlxColor.GRAY, jointStyle: 'miter'}); // Inventor 3
		menuBox.drawRect(400, 186, 48, 48, FlxColor.TRANSPARENT, {thickness: 1, color: FlxColor.GRAY, jointStyle: 'miter'}); // Inventor 4
		menuBox.scrollFactor.set(0, 0);
		equipText.scrollFactor.set(0, 0);
		itemText.scrollFactor.set(0, 0);
		optionText.scrollFactor.set(0, 0);
		equipText2.scrollFactor.set(0, 0);
		equipText3.scrollFactor.set(0, 0);
		equipText4.scrollFactor.set(0, 0);
		add(menuBox);
		add(equipText);
		add(itemText);
		add(optionText);
		add(equipText2);
		add(equipText3);
		add(equipText4);
	}
}
