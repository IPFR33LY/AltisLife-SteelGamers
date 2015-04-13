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
		_statusText = "Steel Gamer's Life";
		((uiNamespace getVariable "statusBar")displayCtrl 1000)ctrlSetText format["%3 | FPS: %1 | Joueur connecte : %2 | TS3 : tsaltis.steel-gamers.com", round diag_fps, count playableUnits, _statusText, _counter];
	};
};