waitUntil {!(isNull (findDisplay 46))};
disableSerialization;

_rscLayer = "statusBar" call BIS_fnc_rscLayer;
_rscLayer cutRsc["statusBar","PLAIN"];
systemChat format["Steel Gamer's Life", _rscLayer];

[] spawn {
	sleep 5;
	_statusText = "Steel Gamer's Life";
	_counter = 180;
	_timeSinceLastUpdate = 0;
	while {true} do
	{
		sleep 1;
		_counter = _counter - 1;
		((uiNamespace getVariable "osefStatusBar")displayCtrl 1000)ctrlSetText
    format["elysium-gaming.ddns.net:9996 | Fps: %2 | Police: %3 | Civil: %4 | Secours: %5 | Argent: %6 | Banque: %7 | %8", _statusText, round diag_fps, 
    west countSide playableUnits, civilian countSide playableUnits,
    independent countSide playableUnits,[life_cash] call life_fnc_numberText,[life_atmcash] call   
    life_fnc_numberText, mapGridPosition player, _counter];
	}; 
};
