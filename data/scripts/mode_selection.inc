EventScript_ModeSelection::
	lock
	faceplayer
	msgbox Text_RandomizeMode, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq EventScript_EnableRandomizer
	msgbox Text_SwapMode, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq EventScript_EnableSwapTeam
	clearflag FLAG_RANDOMIZE_MODE
	clearflag FLAG_SWAP_TEAM_MODE
	goto EventScript_ContinueNewGame

EventScript_EnableRandomizer::
	setflag FLAG_RANDOMIZE_MODE
	clearflag FLAG_SWAP_TEAM_MODE
	goto EventScript_ContinueNewGame

EventScript_EnableSwapTeam::
	clearflag FLAG_RANDOMIZE_MODE
	setflag FLAG_SWAP_TEAM_MODE
	goto EventScript_ContinueNewGame

EventScript_ContinueNewGame::
    special SetUpTruckScene
	release
	end

Text_RandomizeMode:
	.string "Randomize mode?$"

Text_SwapMode:
	.string "Swap team mode?$"
