/*
	File: fn_licensePrice.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Returns the license price.
*/
private["_type"];
_type = [_this,0,"",[""]] call BIS_fnc_param;
if(_type == "") exitWith {-1};

switch (_type) do
{
	case "driver": {2000}; //Drivers License cost
	case "boat": {10000}; //Boating license cost
	case "pilot": {25000}; //Pilot/air license cost
	case "gun": {50000}; //Firearm/gun license cost
	case "dive": {2000}; //Diving license cost
	case "oil": {25000}; //Oil processing license cost
	case "cair": {25000}; //Cop Pilot License cost
	case "swat": {35000}; //Swat License cost
	case "cg": {8000}; //Coast guard license cost
	case "heroin": {100000}; //Heroin processing license cost
	case "marijuana": {100000}; //Marijuana processing license cost
	case "medmarijuana": {100000}; //Medical Marijuana processing license cost
	case "gang": {10000}; //Gang license cost
	case "rebel": {75000}; //Rebel license cost
	case "truck": {35000}; //Truck license cost
	case "diamond": {40000};
	case "salt": {30000};
	case "cocaine": {100000};
	case "sand": {20000};
	case "iron": {15000};
	case "copper": {8000};
	case "cement": {6500};
	case "mair": {15000};
	case "home": {200000};
};