/*
	File: initServer.sqf
	
	Description:
	Starts the initialization of the server.
*/
enableSaving [false,false];
if(!(_this select 0)) exitWith {}; //Not server
[] call compile PreprocessFileLineNumbers "\life_server\init.sqf";

[] spawn 
{
	while {true} do 
	{
		{
			if ((agent _x isKindOf "Snake_random_F")) then {deleteVehicle agent _x;};
		} forEach agents;
		sleep 2;
	};
};