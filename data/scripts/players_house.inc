LittlerootTown_BrendansHouse_2F_EventScript_2926FE:: @ 82926FE
LittlerootTown_MaysHouse_2F_EventScript_2926FE:: @ 82926FE
	setvar VAR_LITTLEROOT_INTRO_STATE, 5
	return

LittlerootTown_BrendansHouse_1F_EventScript_29274D:: @ 829274D
	applymovement EVENT_OBJ_ID_PLAYER, Common_Movement_WalkInPlaceRight
	waitmovement 0
	return

LittlerootTown_BrendansHouse_1F_EventScript_292758:: @ 8292758
	applymovement EVENT_OBJ_ID_PLAYER, Common_Movement_WalkInPlaceLeft
	waitmovement 0
	return

LittlerootTown_BrendansHouse_1F_Movement_292763: @ 8292763
	walk_up
	step_end

LittlerootTown_BrendansHouse_2F_EventScript_292781:: @ 8292781
	lockall
	setvar VAR_0x8004, 0
	goto LittlerootTown_BrendansHouse_2F_EventScript_292799
	end

LittlerootTown_MaysHouse_2F_EventScript_29278D:: @ 829278D
	lockall
	setvar VAR_0x8004, 1
	goto LittlerootTown_MaysHouse_2F_EventScript_292799
	end

LittlerootTown_BrendansHouse_2F_EventScript_292799:: @ 8292799
LittlerootTown_MaysHouse_2F_EventScript_292799:: @ 8292799
	goto_if_set FLAG_SET_WALL_CLOCK, LittlerootTown_BrendansHouse_2F_EventScript_29283F
	msgbox LittlerootTown_BrendansHouse_2F_Text_1F8668, MSGBOX_DEFAULT
	call LittlerootTown_BrendansHouse_2F_EventScript_292849
	delay 30
	setvar VAR_LITTLEROOT_INTRO_STATE, 6
	setflag FLAG_SET_WALL_CLOCK
	setflag FLAG_HIDE_LITTLEROOT_TOWN_PLAYERS_HOUSE_VIGOROTH_1
	setflag FLAG_HIDE_LITTLEROOT_TOWN_PLAYERS_HOUSE_VIGOROTH_2
	checkplayergender
	compare VAR_RESULT, MALE
	call_if_eq LittlerootTown_BrendansHouse_2F_EventScript_2927DF
	compare VAR_RESULT, FEMALE
	call_if_eq LittlerootTown_BrendansHouse_2F_EventScript_29280F
	playse SE_KAIDAN
	removeobject VAR_0x8008
	releaseall
	end

LittlerootTown_BrendansHouse_2F_EventScript_2927DF:: @ 82927DF
	setvar VAR_0x8008, 14
	addobject VAR_0x8008
	applymovement VAR_0x8008, LittlerootTown_BrendansHouse_2F_Movement_292850
	waitmovement 0
	applymovement EVENT_OBJ_ID_PLAYER, Common_Movement_WalkInPlaceRight
	waitmovement 0
	msgbox LittlerootTown_BrendansHouse_2F_Text_1F869A, MSGBOX_DEFAULT
	closemessage
	applymovement VAR_0x8008, LittlerootTown_BrendansHouse_2F_Movement_292857
	waitmovement 0
	return

LittlerootTown_BrendansHouse_2F_EventScript_29280F:: @ 829280F
	setvar VAR_0x8008, 14
	addobject VAR_0x8008
	applymovement VAR_0x8008, LittlerootTown_BrendansHouse_2F_Movement_29285B
	waitmovement 0
	applymovement EVENT_OBJ_ID_PLAYER, Common_Movement_WalkInPlaceLeft
	waitmovement 0
	msgbox LittlerootTown_BrendansHouse_2F_Text_1F869A, MSGBOX_DEFAULT
	closemessage
	applymovement VAR_0x8008, LittlerootTown_BrendansHouse_2F_Movement_292862
	waitmovement 0
	return

LittlerootTown_BrendansHouse_2F_EventScript_29283F:: @ 829283F
	incrementgamestat 45
	fadescreen 1
	special Special_ViewWallClock
	waitstate
	releaseall
	end

LittlerootTown_BrendansHouse_2F_EventScript_292849:: @ 8292849
	fadescreen 1
	special StartWallClock
	waitstate
	return

LittlerootTown_BrendansHouse_2F_Movement_292850: @ 8292850
	delay_8
	walk_down
	walk_in_place_fastest_left
	delay_16
	delay_8
	walk_left
	step_end

LittlerootTown_BrendansHouse_2F_Movement_292857: @ 8292857
	walk_right
	walk_up
	delay_8
	step_end

LittlerootTown_BrendansHouse_2F_Movement_29285B: @ 829285B
	delay_8
	walk_down
	walk_in_place_fastest_right
	delay_16
	delay_8
	walk_right
	step_end

LittlerootTown_BrendansHouse_2F_Movement_292862: @ 8292862
	walk_left
	walk_up
	delay_8
	step_end

LittlerootTown_BrendansHouse_1F_EventScript_292866:: @ 8292866
LittlerootTown_MaysHouse_1F_EventScript_292866:: @ 8292866
	setvar VAR_LITTLEROOT_INTRO_STATE, 7
	releaseall
	end

LittlerootTown_BrendansHouse_1F_Movement_292989: @ 8292989
	walk_up
	walk_right
	walk_right
	walk_right
	walk_right
	walk_down
	walk_in_place_fastest_right
	step_end

LittlerootTown_BrendansHouse_1F_Movement_292991: @ 8292991
	walk_up
	walk_left
	walk_left
	walk_left
	walk_left
	walk_down
	walk_in_place_fastest_left
	step_end

LittlerootTown_BrendansHouse_1F_Movement_292999: @ 8292999
	walk_right
	step_end

LittlerootTown_BrendansHouse_1F_Movement_29299B: @ 829299B
	walk_left
	step_end

LittlerootTown_BrendansHouse_1F_Movement_29299D: @ 829299D
	walk_in_place_fastest_left
	delay_16
	delay_16
	delay_16
	delay_16
	walk_in_place_fastest_right
	delay_16
	delay_16
	step_end

LittlerootTown_BrendansHouse_1F_Movement_2929A6: @ 82929A6
	walk_in_place_fastest_right
	delay_16
	delay_16
	delay_16
	delay_16
	walk_in_place_fastest_left
	delay_16
	delay_16
	step_end

LittlerootTown_BrendansHouse_1F_Movement_2929AF: @ 82929AF
	walk_up
	walk_left
	walk_left
	step_end

LittlerootTown_BrendansHouse_1F_Movement_2929B3: @ 82929B3
	walk_up
	walk_right
	walk_right
	step_end

LittlerootTown_BrendansHouse_1F_Movement_2929B7: @ 82929B7
	walk_left
	walk_in_place_fastest_right
	step_end

LittlerootTown_MaysHouse_1F_Movement_2929BA: @ 82929BA
	walk_right
	walk_in_place_fastest_left
	step_end

LittlerootTown_BrendansHouse_1F_Movement_2929BD: @ 82929BD
	walk_left
	walk_down
	walk_in_place_fastest_right
	step_end

LittlerootTown_BrendansHouse_1F_Movement_292AE6: @ 8292AE6
	walk_left
	step_end

LittlerootTown_MaysHouse_1F_Movement_292AE8: @ 8292AE8
	walk_down
	walk_down
	walk_right
	walk_right
	walk_right
	step_end

LittlerootTown_MaysHouse_1F_Movement_292AEE: @ 8292AEE
	walk_right
	step_end

LittlerootTown_BrendansHouse_1F_Movement_292AF0: @ 8292AF0
	walk_up
	step_end

@ Never called.
LittlerootTown_BrendansHouse_1F_EventScript_292C72:: @ 8292C72
	setflag FLAG_SYS_TV_LATIAS_LATIOS
	return

LittlerootTown_BrendansHouse_1F_EventScript_292C76:: @ 8292C76
	setvar VAR_0x8008, 0
	setvar VAR_0x8009, 5
	setvar VAR_0x800A, 1
	return

LittlerootTown_BrendansHouse_1F_EventScript_292C86:: @ 8292C86
	setvar VAR_0x8008, 1
	setvar VAR_0x8009, 5
	setvar VAR_0x800A, 1
	return

LittlerootTown_BrendansHouse_1F_EventScript_292C96:: @ 8292C96
	applymovement VAR_0x8009, LittlerootTown_BrendansHouse_1F_Movement_292DB2
	waitmovement 0
	return

LittlerootTown_BrendansHouse_1F_EventScript_292CA1:: @ 8292CA1
	applymovement VAR_0x8009, LittlerootTown_BrendansHouse_1F_Movement_292DB5
	waitmovement 0
	return

LittlerootTown_BrendansHouse_1F_EventScript_292CAC:: @ 8292CAC
	applymovement VAR_0x800A, LittlerootTown_BrendansHouse_1F_Movement_292989
	waitmovement 0
	applymovement VAR_0x8009, LittlerootTown_BrendansHouse_1F_Movement_292DB8
	waitmovement 0
	return

LittlerootTown_BrendansHouse_1F_EventScript_292CC1:: @ 8292CC1
	applymovement VAR_0x800A, LittlerootTown_BrendansHouse_1F_Movement_292991
	waitmovement 0
	applymovement VAR_0x8009, LittlerootTown_BrendansHouse_1F_Movement_292DBA
	waitmovement 0
	return

LittlerootTown_BrendansHouse_1F_EventScript_292CD6:: @ 8292CD6
	applymovement EVENT_OBJ_ID_PLAYER, LittlerootTown_BrendansHouse_1F_Movement_292DCC
	applymovement VAR_0x800A, LittlerootTown_BrendansHouse_1F_Movement_292DCC
	applymovement VAR_0x8009, LittlerootTown_BrendansHouse_1F_Movement_292DBC
	waitmovement 0
	return

LittlerootTown_BrendansHouse_1F_EventScript_292CEF:: @ 8292CEF
	applymovement EVENT_OBJ_ID_PLAYER, LittlerootTown_BrendansHouse_1F_Movement_292DCC
	applymovement VAR_0x800A, LittlerootTown_BrendansHouse_1F_Movement_292DCC
	applymovement VAR_0x8009, LittlerootTown_BrendansHouse_1F_Movement_292DC1
	waitmovement 0
	return

LittlerootTown_BrendansHouse_1F_EventScript_292D08:: @ 8292D08
	applymovement EVENT_OBJ_ID_PLAYER, LittlerootTown_BrendansHouse_1F_Movement_292DC6
	waitmovement 0
	return

LittlerootTown_BrendansHouse_1F_EventScript_292D13:: @ 8292D13
	applymovement EVENT_OBJ_ID_PLAYER, LittlerootTown_BrendansHouse_1F_Movement_292DD1
	waitmovement 0
	return

LittlerootTown_BrendansHouse_1F_EventScript_292D1E:: @ 8292D1E
	applymovement EVENT_OBJ_ID_PLAYER, LittlerootTown_BrendansHouse_1F_Movement_292DD7
	waitmovement 0
	applymovement VAR_0x800A, Common_Movement_WalkInPlaceLeft
	waitmovement 0
	return

LittlerootTown_BrendansHouse_1F_EventScript_292D33:: @ 8292D33
	applymovement EVENT_OBJ_ID_PLAYER, LittlerootTown_BrendansHouse_1F_Movement_292DDE
	waitmovement 0
	applymovement VAR_0x800A, Common_Movement_WalkInPlaceRight
	waitmovement 0
	return

LittlerootTown_BrendansHouse_1F_EventScript_292D48:: @ 8292D48
	applymovement VAR_0x800A, LittlerootTown_BrendansHouse_1F_Movement_292999
	waitmovement 0
	applymovement EVENT_OBJ_ID_PLAYER, Common_Movement_WalkInPlaceLeft
	waitmovement 0
	return

LittlerootTown_BrendansHouse_1F_EventScript_292D5D:: @ 8292D5D
	applymovement VAR_0x800A, LittlerootTown_BrendansHouse_1F_Movement_29299B
	waitmovement 0
	applymovement EVENT_OBJ_ID_PLAYER, Common_Movement_WalkInPlaceRight
	waitmovement 0
	return

LittlerootTown_BrendansHouse_1F_EventScript_292D72:: @ 8292D72
	applymovement VAR_0x800A, LittlerootTown_BrendansHouse_1F_Movement_29299D
	waitmovement 0
	return

LittlerootTown_BrendansHouse_1F_EventScript_292D7D:: @ 8292D7D
	applymovement VAR_0x800A, LittlerootTown_BrendansHouse_1F_Movement_2929A6
	waitmovement 0
	return

LittlerootTown_BrendansHouse_1F_EventScript_292D88:: @ 8292D88
	applymovement VAR_0x800A, LittlerootTown_BrendansHouse_1F_Movement_2929AF
	waitmovement 0
	applymovement EVENT_OBJ_ID_PLAYER, Common_Movement_WalkInPlaceRight
	waitmovement 0
	return

LittlerootTown_BrendansHouse_1F_EventScript_292D9D:: @ 8292D9D
	applymovement VAR_0x800A, LittlerootTown_BrendansHouse_1F_Movement_2929B3
	waitmovement 0
	applymovement EVENT_OBJ_ID_PLAYER, Common_Movement_WalkInPlaceLeft
	waitmovement 0
	return

LittlerootTown_BrendansHouse_1F_Movement_292DB2: @ 8292DB2
	walk_right
	walk_right
	step_end

LittlerootTown_BrendansHouse_1F_Movement_292DB5: @ 8292DB5
	walk_left
	walk_left
	step_end

LittlerootTown_BrendansHouse_1F_Movement_292DB8: @ 8292DB8
	face_left
	step_end

LittlerootTown_BrendansHouse_1F_Movement_292DBA: @ 8292DBA
	face_right
	step_end

LittlerootTown_BrendansHouse_1F_Movement_292DBC: @ 8292DBC
	walk_down
	walk_right
	walk_down
	delay_8
	step_end

LittlerootTown_BrendansHouse_1F_Movement_292DC1: @ 8292DC1
	walk_down
	walk_left
	walk_down
	delay_8
	step_end

LittlerootTown_BrendansHouse_1F_Movement_292DC6: @ 8292DC6
	delay_16
	walk_down
	walk_down
	walk_down
	walk_in_place_fastest_left
	step_end

LittlerootTown_BrendansHouse_1F_Movement_292DCC: @ 8292DCC
	delay_8
	delay_16
	delay_16
	walk_in_place_fastest_down
	step_end

LittlerootTown_BrendansHouse_1F_Movement_292DD1: @ 8292DD1
	delay_16
	walk_down
	walk_down
	walk_down
	walk_in_place_fastest_right
	step_end

LittlerootTown_BrendansHouse_1F_Movement_292DD7: @ 8292DD7
	walk_up
	walk_left
	walk_left
	walk_left
	walk_left
	walk_in_place_fastest_up
	step_end

LittlerootTown_BrendansHouse_1F_Movement_292DDE: @ 8292DDE
	walk_up
	walk_right
	walk_right
	walk_right
	walk_right
	walk_in_place_fastest_up
	step_end
