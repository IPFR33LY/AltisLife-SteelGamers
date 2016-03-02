#include <macro.h>
/*
	File: fn_setupActions.sqf
	
	Description:
	Master addAction file handler for all client-based actions.
*/
switch (playerSide) do
{
	case west:
	{
		//entrer dans un vehicule meme verouillé
		life_actions = life_actions + [player addAction["Monter en conducteur",life_fnc_copentrer,"driver",200,false,false,"",'!isNull cursorTarget && ((cursorTarget isKindOf "Car")||(cursorTarget isKindOf "Air")||(cursorTarget isKindOf "Ship")) && (locked cursorTarget) != 0 && cursorTarget distance player < 5']];
		life_actions = life_actions + [player addAction["Monter en passager",life_fnc_copentrer,"passenger",100,false,false,"",'!isNull cursorTarget && ((cursorTarget isKindOf "Car")||(cursorTarget isKindOf "Air")||(cursorTarget isKindOf "Ship")) && (locked cursorTarget) != 0 && cursorTarget distance player < 5']]; 
		life_actions = life_actions + [player addAction["Descendre",life_fnc_copentrer,"exit",100,false,false,"",'(vehicle player != player) && (locked(vehicle player)==2)']];
		//Saisir Armes et Chargeurs
		life_actions = life_actions + [player addAction["<t color='#ED7F10'>Saisir Armes et Uniformes</t>",life_fnc_seizePlayerWeapon,cursorTarget,0,false,false,"",'!isNull cursorTarget && (player distance cursorTarget) < 6 && speed cursorTarget < 2 && cursorTarget isKindOf "Man" && (isPlayer cursorTarget) && (side cursorTarget == civilian) && (cursorTarget getVariable "restrained")']];
		//Saisir les objets au sol
		life_actions = life_actions + [player addAction["<t color='#FF0000'>Saisir les objets au sol</t>",life_fnc_seizeObjects,cursorTarget,0,false,false,"",'(count(nearestObjects [player,["weaponholder"],3])>0)']];
		//Boule Quiès
		life_actions = [player addAction["<t color='#ADFF2F'>Boule Quiès Oui/Non</t>",{if (soundVolume != 1) then {1 fadeSound 1;} else {1 fadeSound 0.1;};},"",-6,false,false,"",'vehicle player != player || soundVolume != 1']];	
	};
	case civilian:
	{
		//Drop fishing net
		life_actions = [player addAction[localize "STR_pAct_DropFishingNet",life_fnc_dropFishingNet,"",0,false,false,"",'
		(surfaceisWater (getPos vehicle player)) && (vehicle player isKindOf "Ship") && life_carryWeight < life_maxWeight && speed (vehicle player) < 2 && speed (vehicle player) > -1 && !life_net_dropped ']];
		//Rob person
		life_actions = life_actions + [player addAction[localize "STR_pAct_RobPerson",life_fnc_robAction,"",0,false,false,"",'
		!isNull cursorTarget && player distance cursorTarget < 3.5 && isPlayer cursorTarget && animationState cursorTarget == "Incapacitated" && !(cursorTarget getVariable["robbed",FALSE]) ']];
	//Boule Quiès
		life_actions = [player addAction["<t color='#ADFF2F'>Boule Quiès Oui/Non</t>",{if (soundVolume != 1) then {1 fadeSound 1;} else {1 fadeSound 0.1;};},"",-6,false,false,"",'vehicle player != player || soundVolume != 1']];
	};
};