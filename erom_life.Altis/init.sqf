StartProgress = false;

[] execVM "briefing.sqf"; //Load Briefing
[] execVM "KRON_Strings.sqf";
[] execVM "Scripts\zlt_fastrope.sqf";
[] execVM "Scripts\init_weather.sqf";
[] execVM "Scripts\Bar.sqf";
[] call life_fnc_zonesafe;
introSpawn = nil;

StartProgress = true;