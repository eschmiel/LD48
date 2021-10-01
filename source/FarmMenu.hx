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

	function addMenuButton(menu, positionNumber, text)
	{
		final startingPosition = 218;

		final menuButtonWidth = 202;
		final menuButtonHeight = 70;
		final marginLeft = 16;
		final marginTop = 8;

		final buttonYPosition = startingPosition + (menuButtonHeight + marginTop) * positionNumber;

		menu.drawRect(marginLeft, buttonYPosition, menuButtonWidth, menuButtonHeight, FlxColor.BLUE, {thickness: 1, color: FlxColor.GRAY});

		var buttonText = new FlxBitmapText(FlxBitmapFont.fromAngelCode(AssetPaths.stylish6x5_32_0__png, AssetPaths.stylish6x5_32__fnt));
		buttonText.alignment = LEFT;
		buttonText.text = text;
		buttonText.x = marginLeft + 50;
		buttonText.y = buttonYPosition + 16;
	}

	public function new()
	{
		super();
		menuBoxBorderLineStyle = {
			thickness: 3,
			color: FlxColor.GREEN,
		};

		var color = FlxColor.fromString('#31CFF7');
		menuBox = new FlxSprite(0, 0).makeGraphic(640, 480, FlxColor.fromString('#31CFF7'));
		menuBox.drawRect(1, 1, 678, 478, FlxColor.TRANSPARENT, {thickness: 4, color: FlxColor.fromString('#F7912F')}); // border

		menuBox.drawRect(12, 12, 160, 336, FlxColor.TRANSPARENT, {thickness: 2, color: FlxColor.GREEN}); // sidebar
		menuBox.drawRect(16, 16, 202, 202, FlxColor.RED); // portrait

		menuBox.drawRect(16, 222, 202, 70, FlxColor.BLACK, {thickness: 1, color: FlxColor.GRAY}); // menu button 1
		// var equipText = new FlxBitmapText(205, 285, 'CARROT', 45, true);

		var equipText2 = new FlxBitmapText(FlxBitmapFont.fromAngelCode(AssetPaths.stylish6x5_32_0__png, AssetPaths.stylish6x5_32__fnt));
		equipText2.alignment = LEFT;
		equipText2.text = "STYLISH6x5_32";
		equipText2.x = 100;
		equipText2.y = 200;

		menuBox.drawRect(16, 296, 202, 70, FlxColor.BLUE, {thickness: 1, color: FlxColor.GRAY}); // menu button 2
		var itemText = new FlxText(420, 140, 'X5', 64);
		itemText.alignment = LEFT;
		itemText.font = "stylish6x5";
		// itemText.color = FlxColor.fromString("#f7f2e9");
		// equipText.color = FlxColor.fromString("#000000");

		menuBox.drawRect(16, 370, 202, 70, FlxColor.BLUE, {thickness: 1, color: FlxColor.GRAY}); // menu button 3
		// var optionText = new FlxText(48, 340, 'OPTIONS', 48);
		var optionText = new FlxBitmapText(FlxBitmapFont.fromAngelCode(AssetPaths.stylish6x5_32_0__png, AssetPaths.stylish6x5_32__fnt));
		optionText.alignment = LEFT;
		optionText.text = "OPTIONS";
		optionText.x = 100;
		optionText.y = 340;

		menuBox.drawLine(176, 160, 474, 160, {thickness: 1, color: FlxColor.PURPLE}); // Equipment/Inventory seperator 1
		menuBox.drawLine(176, 168, 474, 168, {thickness: 1, color: FlxColor.PURPLE}); // Equipment/Inventory seperator 2
		menuBox.drawRect(208, 24, 96, 96, FlxColor.TRANSPARENT, {thickness: 1, color: FlxColor.GRAY, jointStyle: 'miter'}); // Equipped 1
		menuBox.drawRect(336, 24, 96, 96, FlxColor.TRANSPARENT, {thickness: 1, color: FlxColor.GRAY, jointStyle: 'miter'}); // Equipped 2
		menuBox.drawRect(196, 186, 48, 48, FlxColor.TRANSPARENT, {thickness: 1, color: FlxColor.GRAY, jointStyle: 'miter'}); // Inventor 1
		menuBox.drawRect(264, 186, 48, 48, FlxColor.TRANSPARENT, {thickness: 1, color: FlxColor.GRAY, jointStyle: 'miter'}); // Inventor 2
		menuBox.drawRect(332, 186, 48, 48, FlxColor.TRANSPARENT, {thickness: 1, color: FlxColor.GRAY, jointStyle: 'miter'}); // Inventor 3
		menuBox.drawRect(400, 186, 48, 48, FlxColor.TRANSPARENT, {thickness: 1, color: FlxColor.GRAY, jointStyle: 'miter'}); // Inventor 4
		menuBox.scrollFactor.set(0, 0);

		itemText.scrollFactor.set(0, 0);
		optionText.scrollFactor.set(0, 0);
		equipText2.scrollFactor.set(0, 0);

		add(menuBox);

		add(itemText);
		add(optionText);
		add(equipText2);
	}
}
