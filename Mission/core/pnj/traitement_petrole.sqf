_this enableSimulation false;
_this allowDamage false;
_this addAction["Raffinage du Pétrole",life_fnc_processAction,"oil",0,false,false,"",' life_inv_oilUnprocessed > 0 && !life_is_processing'];  
_this addAction[format["%1 (%2€)",localize (getText(missionConfigFile >> "Licenses" >> "oil" >> "displayName")), [(getNumber(missionConfigFile >> "Licenses" >> "oil" >> "price"))] call life_fnc_numberText],life_fnc_buyLicense,"oil",0,false,false,"",' !license_civ_oil && playerSide == civilian '];