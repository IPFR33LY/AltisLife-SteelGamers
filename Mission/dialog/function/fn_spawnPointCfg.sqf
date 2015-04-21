/*
	File: fn_spawnPointCfg.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Master configuration for available spawn points depending on the units side.
	
	Return:
	[Spawn Marker,Spawn Name,Image Path]
*/
private["_side","_return"];
_side = [_this,0,civilian,[civilian]] call BIS_fnc_param;

//Spawn Marker, Spawn Name, PathToImage
switch (_side) do
{
	case west:
	{
		_return = [
			["cop_spawn_1","Poste de Kavala","\a3\ui_f\data\map\MapControl\watertower_ca.paa"],
			["police_hq_2_1","Poste de Pyrgos","\a3\ui_f\data\map\MapControl\fuelstation_ca.paa"],
			["cop_spawn_3","Poste d'Athira","\a3\ui_f\data\map\GroupIcons\badge_rotate_0_gs.paa"],
			["cop_spawn_4","Centre de Formation","\a3\ui_f\data\map\Markers\NATO\b_air.paa"],
			["cop_spawn_5","Poste de Contrôle","\a3\ui_f\data\map\GroupIcons\badge_rotate_0_gs.paa"],
			["gign_spawn","Base du G.I.G.N","\a3\ui_f\data\map\Markers\NATO\b_air.paa"]		
		];
	};
	
	case civilian:
	{
		_return = [
			["civ_spawn_1","Kavala","\a3\ui_f\data\map\MapControl\watertower_ca.paa"],
			["spawn_civ_anta","Antalya","\a3\ui_f\data\map\MapControl\watertower_ca.paa"],			
			["civ_spawn_2","Pyrgos","\a3\ui_f\data\map\MapControl\watertower_ca.paa"],
			["civ_spawn_3","Athira","\a3\ui_f\data\map\MapControl\watertower_ca.paa"],
			["civ_spawn_4","Sofia","\a3\ui_f\data\map\MapControl\watertower_ca.paa"]
		];
		
		if(license_civ_criminel && playerSide == civilian) then {
		_return = [
				["civ_spawn_1","Kavala","\a3\ui_f\data\map\MapControl\watertower_ca.paa"],
				["spawn_civ_anta","Antalya","\a3\ui_f\data\map\MapControl\watertower_ca.paa"],					
				["civ_spawn_2","Pyrgos","\a3\ui_f\data\map\MapControl\watertower_ca.paa"],
				["civ_spawn_3","Athira","\a3\ui_f\data\map\MapControl\watertower_ca.paa"],
				["civ_spawn_4","Sofia","\a3\ui_f\data\map\MapControl\watertower_ca.paa"],
				["criminel_1","Avant-Poste Criminel","\a3\ui_f\data\map\MapControl\watertower_ca.paa"],
				["criminel_2","Base Criminel","\a3\ui_f\data\map\MapControl\watertower_ca.paa"]
			];
		};

		if(license_civ_rebel && playerSide == civilian) then {
		_return = [
				["reb_2","Camps Rebelle","\a3\ui_f\data\map\MapControl\watertower_ca.paa"],
				["civ_spawn_1","Kavala","\a3\ui_f\data\map\MapControl\watertower_ca.paa"],
				["spawn_civ_anta","Antalya","\a3\ui_f\data\map\MapControl\watertower_ca.paa"],					
				["civ_spawn_2","Pyrgos","\a3\ui_f\data\map\MapControl\watertower_ca.paa"],
				["civ_spawn_3","Athira","\a3\ui_f\data\map\MapControl\watertower_ca.paa"],
				["civ_spawn_4","Sofia","\a3\ui_f\data\map\MapControl\watertower_ca.paa"]
			];
		};		
		
		if(count life_houses > 0) then {
			{
				_pos = call compile format["%1",_x select 0];
				_house = nearestBuilding _pos;
				_houseName = getText(configFile >> "CfgVehicles" >> (typeOf _house) >> "displayName");
				
				_return pushBack [format["house_%1",_house getVariable "uid"],_houseName,"\a3\ui_f\data\map\MapControl\lighthouse_ca.paa"];
			} foreach life_houses;
		};	
	};
	
	case independent: {
		_return = [
			["medic_spawn_1","Kavala Hôpital","\a3\ui_f\data\map\MapControl\hospital_ca.paa"],
			["medic_spawn_3_1","Antalya Hôpital","\a3\ui_f\data\map\MapControl\hospital_ca.paa"],			
			["medic_spawn_2","Athira Regional","\a3\ui_f\data\map\MapControl\hospital_ca.paa"],
			["medic_spawn_5","Sofia Hôpital","\a3\ui_f\data\map\MapControl\hospital_ca.paa"],
			["medic_spawn_4","Pygros Hôpital","\a3\ui_f\data\map\MapControl\hospital_ca.paa"]
		];
		
		if(license_med_pompier && playerSide == independent) then {
		_return = [
				["pompier_1","Caserne de Kavala","\a3\ui_f\data\map\MapControl\watertower_ca.paa"],
				["pompier_4","Caserne d'Antalya","\a3\ui_f\data\map\MapControl\watertower_ca.paa"],
				["pompier_3","Caserne Athira","\a3\ui_f\data\map\MapControl\watertower_ca.paa"],				
				["pompier_2","Caserne de Pyrgos","\a3\ui_f\data\map\MapControl\watertower_ca.paa"]					
			];
		};				
	};
};

_return;