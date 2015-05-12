/*
	File: initPlayerLocal.sqf
	
	Description:
	Starts the initialization of the player.
*/
#define CONST(var1,var2) var1 = compileFinal (if(typeName var2 == "STRING") then {var2} else {str(var2)})
#include "initBriefing.hpp"

"BIS_fnc_MP_packet" addPublicVariableEventHandler {_this call life_fnc_MPexec};
if(!hasInterface) exitWith {}; //headless client
[] call compileFinal PreprocessFileLineNumbers "KRON_Strings.sqf";
CONST(BIS_fnc_endMission,BIS_fnc_endMission);
//[] execVM "SpyGlass\fn_initSpy.sqf";
[] execVM "core\init.sqf";

//Execute JIP code.
if((_this select 1)) then 
{
	[] execVM "core\jip.sqf";
};