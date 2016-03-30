/*
	File: fn_setupActions.sqf
	
	Description:
	Master addAction file handler for all client-based actions.
*/
switch (playerSide) do {
	case civilian: {
		//Drop fishing net
		life_actions = [player addAction[localize "STR_pAct_DropFishingNet",life_fnc_dropFishingNet,"",0,false,false,"",'
		(surfaceisWater (getPos vehicle player)) && (vehicle player isKindOf "Ship") && life_carryWeight < life_maxWeight && speed (vehicle player) < 2 && speed (vehicle player) > -1 && !life_net_dropped ']];
		//Rob person
		life_actions = life_actions + [player addAction[localize "STR_pAct_RobPerson",life_fnc_robAction,"",0,false,false,"",'
		!isNull cursorTarget && player distance cursorTarget < 3.5 && isPlayer cursorTarget && animationState cursorTarget == "Incapacitated" && !(cursorTarget getVariable["robbed",FALSE]) ']];
		//Boule Quiès
		life_actions = [player addAction["<t color='#ADFF2F'>Boule Quiès Oui/Non</t>",{if (soundVolume != 1) then {1 fadeSound 1;} else {1 fadeSound 0.1;};},"",-6,false,false,"",'vehicle player != player || soundVolume != 1']];	
	};
	case west: {
		//Appel des Renforts
		life_actions pushBack (player addAction["<t color='#ADFF2F'>Demande de renforts</t>",life_fnc_callbackup,"",0,FALSE,FALSE,""]);
		//Boule Quiès
		life_actions = [player addAction["<t color='#ADFF2F'>Boule Quiès Oui/Non</t>",{if (soundVolume != 1) then {1 fadeSound 1;} else {1 fadeSound 0.1;};},"",-6,false,false,"",'vehicle player != player || soundVolume != 1']];	
	};

};