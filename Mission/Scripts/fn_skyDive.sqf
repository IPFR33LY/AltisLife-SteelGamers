#include <macro.h>
/*
	File: fn_skyDive.sqf
	Author: blaster
	Modifié : CaPTaiN_DruX
  this enableSimulation false; this allowDamage false; this addAction[""Faire un Saut en Parachute"",life_fnc_skyDive];
  
*/
private ["_num","_color","_backpackName","_backpackItems","_x"];

titleCut ["", "BLACK FADED", 999];

life_action_inUse = true;
sleep 2;

_backpackName = backpack player;
_backpackItems = backpackItems player;
sleep 1;

removeBackpack player;
player addBackpack "B_Parachute"; 
player setPos [getPos player select 0, getPos player select 1, 500]; //500 m. up
sleep 2;

titlecut [" ","BLACK IN",3]; 

waitUntil {(vehicle player != player)};	
	

	_num = floor(random 7);

	_color = switch (_num) do {
		case 0: {"SmokeShell";};
		case 1: {"SmokeShellRed";};
		case 2: {"SmokeShellBlue";};
		case 3: {"SmokeShellOrange";};
		case 4: {"SmokeShellYellow";};
		case 5: {"SmokeShellPurple";};
		case 6: {"SmokeShell";};
	};

	_smoke = _color createVehicle position player;
    _smoke attachTo [vehicle player, [0,-0.1,1.5]];

waitUntil {isTouchingGround player};
	sleep 1;
	
	removeBackpack player;
	sleep 1;
	
	player addBackpack _backpackName;
	clearBackpackCargo player;
	{
		[_x,true,true] call life_fnc_handleItem;
	} foreach _backpackItems;


life_action_inUse = false; 
