/*
	File: initServer.sqf
	
	Description:
	Starts the initialization of the server.
*/
enableSaving [false,false];
if(!(_this select 0)) exitWith {}; //Not server
[] call compile PreprocessFileLineNumbers "\life_server\init.sqf";