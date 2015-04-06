/*
    DESCRIPTION:
    Tue joueur tirant dans une zone safe
*/

#define SAFETY_ZONES    [["S1", 850],["criminel_1", 120],["criminel_2", 150],["reb_2", 120],["sf_1", 400]] // Syntax: [["marker1", radius1], ["marker2", radius2], ...]
#define MESSAGE "Interdiction de tiré dans une safe zone"

     if (isDedicated) exitWith {};
     waitUntil {!isNull player};

switch (playerSide) do
{
	case west:
	{};
	
	case civilian:
	{


     player addEventHandler ["Fired", {
            if ({(_this select 0) distance getMarkerPos (_x select 0) < _x select 1} count SAFETY_ZONES > 0) then
            {
             deleteVehicle (_this select 6);
			 titleText [MESSAGE, "PLAIN", 3];
			 player action ["SwitchWeapon", player, player, 100]; //Change d'arme
			 life_atmcash = life_atmcash - 500; //- 500 d'argent
			 hint parseText format["<t color='#01B0F0'><t size ='2.5'<t align='center'>Safe Zone<br/><t color='#FFFFFF'><t align='center'><t size='1.5'>Pas de tirs<br/><t color='#FFFFFF'><t align='center'><t size='1.5'>Pas de vols<br/><t color='#FFFFFF'><t align='center'><t size='1.5'>Pas de braquage<br/><t"];
			};
        }];  
	};
};