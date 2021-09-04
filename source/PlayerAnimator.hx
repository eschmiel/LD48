package;

import flixel.FlxObject;

class PlayerAnimator
{
	var lrAnimation:String;
	var downAnimation:String;
	var upAnimation:String;
	var player:Player;

	public function new(animatedPlayer:Player)
	{
		player = animatedPlayer;

		player.loadGraphic(AssetPaths.ld48Player__png, true, 16, 16);
		player.setFacingFlip(FlxObject.LEFT, true, false);
		player.setFacingFlip(FlxObject.RIGHT, false, false);

		player.animation.add('runLR', [3, 4, 5, 2], 5, false);
		player.animation.add('idleLR', [2, 1, 0, 1], 5, false);

		player.animation.add('runDown', [9, 10, 11, 8], 5, false);
		player.animation.add('idleDown', [8, 7, 6, 7], 5, false);

		player.animation.add('runUp', [15, 16, 17, 14], 5, false);
		player.animation.add('idleUp', [14, 13, 12, 13], 5, false);
	}

	public function updateAnimation()
	{
		switch (player.facing)
		{
			case FlxObject.LEFT, FlxObject.RIGHT:
				player.animation.play(lrAnimation);
			case FlxObject.DOWN:
				player.animation.play(downAnimation);
			case FlxObject.UP:
				player.animation.play(upAnimation);
		}
	}

	public function setAnimationState(state:String)
	{
		switch (state)
		{
			case "RUN":
				{
					lrAnimation = "runLR";
					downAnimation = "runDown";
					upAnimation = "runUp";
				}
			case "IDLE":
				{
					lrAnimation = "idleLR";
					downAnimation = "idleDown";
					upAnimation = "idleUp";
				}
		}
	}
}
