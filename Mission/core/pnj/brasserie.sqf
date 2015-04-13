_this allowDamage false; 
_this enableSimulation false;
_this setVariable["realname","Brasserie"]; 
_this addAction["Brasser la bière",life_fnc_processAction,"beer",0,false,false,"",' life_inv_hops > 0 && !life_is_processing']; 
_this addAction[format["%1 (%2€)",localize (getText(missionConfigFile >> "Licenses" >> "liquor" >> "displayName")), [(getNumber(missionConfigFile >> "Licenses" >> "liquor" >> "price"))] call life_fnc_numberText],life_fnc_buyLicense,"liquor",0,false,false,"",' !license_civ_liquor && playerSide == civilian '];