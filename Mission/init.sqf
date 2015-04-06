StartProgress = false;
enableSaving[false,false];

life_versionInfo = "Altis Life RPG v4.0";
[] execVM "briefing.sqf"; //Load Briefing
[] execVM "KRON_Strings.sqf";

StartProgress = true;

//_igiload = execVM "IgiLoad\IgiLoadInit.sqf";
[] execVM "core\functions\fn_zonesafe.sqf";
[] execVM "Scripts\zlt_fastrope.sqf";