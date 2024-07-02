# 1 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 2 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
.set LOCALID_WALLYS_DAD, 1
# 3 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 4 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_MapScripts::
# 5 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PetalburgCity_WallysHouse_OnFrame
# 6 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, PetalburgCity_WallysHouse_OnWarp
# 7 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.byte 0
# 8 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 9 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_OnWarp:
# 10 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	map_script_2 VAR_PETALBURG_CITY_STATE, 4, PetalburgCity_WallysHouse_EventScript_PlayerWallysDadFaceEachOther
# 11 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.2byte 0
# 12 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 13 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_EventScript_PlayerWallysDadFaceEachOther::
# 14 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
# 15 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	turnobject LOCALID_WALLYS_DAD, DIR_WEST
# 16 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	end
# 17 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 18 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_OnFrame:
# 19 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	map_script_2 VAR_PETALBURG_CITY_STATE, 4, PetalburgCity_WallysHouse_EventScript_GiveHMSurf
# 20 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.2byte 0
# 21 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 22 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_EventScript_GiveHMSurf::
# 23 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	lockall
# 24 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	msgbox PetalburgCity_WallysHouse_Text_PleaseExcuseUs, MSGBOX_DEFAULT
# 25 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	giveitem ITEM_HM_SURF
# 26 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	setflag FLAG_RECEIVED_HM_SURF
# 27 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	msgbox PetalburgCity_WallysHouse_Text_SurfGoAllSortsOfPlaces, MSGBOX_DEFAULT
# 28 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	setvar VAR_PETALBURG_CITY_STATE, 5
# 29 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	releaseall
# 30 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	end
# 31 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 32 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_EventScript_WallysDad::
# 33 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	lock
# 34 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	faceplayer
# 35 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	goto_if_set FLAG_DEFEATED_WALLY_VICTORY_ROAD, PetalburgCity_WallysHouse_EventScript_DefeatedWallyInVictoryRoad
# 36 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	goto_if_set FLAG_RECEIVED_HM_SURF, PetalburgCity_WallysHouse_EventScript_ReceievedHMSurf
# 37 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_WallysHouse_EventScript_NewGiveHMSurf
# 38 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	goto_if_set FLAG_THANKED_FOR_PLAYING_WITH_WALLY, PetalburgCity_WallysHouse_EventScript_PlayedWithWally
# 39 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	msgbox PetalburgCity_WallysHouse_Text_ThanksForPlayingWithWally, MSGBOX_DEFAULT
# 40 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	setflag FLAG_THANKED_FOR_PLAYING_WITH_WALLY
# 41 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	release
# 42 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	end
# 43 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 44 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_EventScript_ReceievedHMSurf::
# 45 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	msgbox PetalburgCity_WallysHouse_Text_WallyIsComingHomeSoon, MSGBOX_DEFAULT
# 46 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	release
# 47 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	end
# 48 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 49 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_EventScript_DefeatedWallyInVictoryRoad::
# 50 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	msgbox PetalburgCity_WallysHouse_Text_YouMetWallyInEverGrandeCity, MSGBOX_DEFAULT
# 51 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	release
# 52 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	end
# 53 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 54 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_EventScript_PlayedWithWally::
# 55 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	msgbox PetalburgCity_WallysHouse_Text_WonderHowWallyIsDoing, MSGBOX_DEFAULT
# 56 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	release
# 57 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	end
# 58 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 59 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_EventScript_WallysMom::
# 60 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	lock
# 61 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	faceplayer
# 62 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	goto_if_set FLAG_RECEIVED_HM_SURF, PetalburgCity_WallysHouse_EventScript_ReceivedHMSurf
# 63 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	msgbox PetalburgCity_WallysHouse_Text_WallyWasReallyHappy, MSGBOX_DEFAULT
# 64 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	release
# 65 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	end
# 66 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 67 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_EventScript_ReceivedHMSurf::
# 68 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	msgbox PetalburgCity_WallysHouse_Text_WallyLeftWithoutTelling, MSGBOX_DEFAULT
# 69 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	release
# 70 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	end
# 71 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 72 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_Text_ThanksForPlayingWithWally:
# 73 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "You're…\n"
# 74 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "Ah, you must be {PLAYER}{KUN}, right?\p"
# 75 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "Thank you for playing with WALLY a\n"
# 76 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "little while ago.\p"
# 77 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "He's been frail and sickly ever\n"
# 78 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "since he was a baby.\p"
# 79 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "We've sent him to stay with my relatives\n"
# 80 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "in VERDANTURF TOWN for a while.\p"
# 81 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "The air is a lot cleaner there\n"
# 82 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "than it is here.\p"
# 83 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "What's that? Where's WALLY?\n"
# 84 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "He's already left, our WALLY.\p"
# 85 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "I wonder where he could have\n"
# 86 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "gotten by now?$"
# 87 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 88 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_Text_WonderHowWallyIsDoing:
# 89 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "I wonder how our WALLY is doing?$"
# 90 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 91 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_Text_PleaseExcuseUs:
# 92 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "{PLAYER}{KUN}! Please excuse us for\n"
# 93 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "dragging you here this way.\p"
# 94 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "But our WALLY's become very healthy\n"
# 95 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "since he went to VERDANTURF TOWN.\p"
# 96 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "We owe it all to you!\p"
# 97 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "When WALLY left town, you helped\n"
# 98 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "him catch a POKéMON, right?\p"
# 99 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "I think that made WALLY really\n"
# 100 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "happy.\p"
# 101 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "Actually, not just WALLY.\n"
# 102 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "It made me, his father, happy too.\p"
# 103 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "Happy that he's gained such a great\n"
# 104 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "friend as you.\p"
# 105 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "This isn't a bribe or anything, but\n"
# 106 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "I'd really like you to have this.$"
# 107 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 108 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_Text_SurfGoAllSortsOfPlaces:
# 109 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "If your POKéMON can SURF, you'll be\n"
# 110 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "able to go to all sorts of places.$"
# 111 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 112 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_Text_WallyIsComingHomeSoon:
# 113 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "WALLY's coming home soon.\n"
# 114 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "I'm looking forward to that.$"
# 115 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 116 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_Text_YouMetWallyInEverGrandeCity:
# 117 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "Oh? You met WALLY in\n"
# 118 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "EVER GRANDE CITY?\p"
# 119 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "Oh, {PLAYER}{KUN}, don't be silly.\p"
# 120 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "He may have gotten healthy, but he\n"
# 121 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "can't go somewhere far away like\l"
# 122 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "that all by himself.$"
# 123 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 124 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_Text_WallyWasReallyHappy:
# 125 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "WALLY was really happy when he told\n"
# 126 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "us that he caught a POKéMON.\p"
# 127 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "It's been ages since I've seen him\n"
# 128 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "smile like that.$"
# 129 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 130 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_Text_WallyLeftWithoutTelling:
# 131 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "I want you to keep this a secret\n"
# 132 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "from my husband…\p"
# 133 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "But our WALLY left VERDANTURF TOWN\n"
# 134 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "without telling anyone.\p"
# 135 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "You know, WALLY is frail, but\n"
# 136 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "he's surprisingly strong-willed.\p"
# 137 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "I'm sure that he'll come back safe\n"
# 138 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "and sound one day!$"
# 139 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 140 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_Text_GiveSurf:
# 141 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "{PLAYER}{KUN}, how are you doing?\p"
# 142 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "...\p"
# 143 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "You already beat your dad? That's\n"
# 144 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "very impressive! Here, I have\p"
# 145 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "something to celebrate!$"
# 146 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 147 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_Text_AfterSurf:
# 148 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "That little machine should let you\n"
# 149 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "traverse water with ease.\p"
# 150 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "Hopefully it helps you on your\n"
# 151 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "journey.\p"
# 152 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "When I was young, I used it for\n"
# 153 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "a shortcut to Slateport City over\p"
# 154 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "on Route 103.$"

PetalburgCity_WallysHouse_EventScript_NewGiveHMSurf::
# 158 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	lockall
# 159 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	msgbox PetalburgCity_WallysHouse_Text_GiveSurf, MSGBOX_NPC
# 160 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	closemessage
# 161 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	giveitem ITEM_HM_SURF
# 162 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	setflag FLAG_RECEIVED_HM_SURF
# 163 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	msgbox PetalburgCity_WallysHouse_Text_AfterSurf, MSGBOX_NPC
# 164 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	closemessage
# 165 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	releaseall
	return

