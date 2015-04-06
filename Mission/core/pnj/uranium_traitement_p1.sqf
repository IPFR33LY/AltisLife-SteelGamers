_this enableSimulation false;
_this allowDamage false;
_this addAction["Nettoyage de L'uranium [Phase 1]",life_fnc_processAction,"uranium",0,false,false,"",' life_inv_uranium > 0 && !life_is_processing'];
_this addAction[format["%1 (%2€)",localize (getText(missionConfigFile >> "Licenses" >> "uranium" >> "displayName")), [(getNumber(missionConfigFile >> "Licenses" >> "uranium" >> "price"))] call life_fnc_numberText],life_fnc_buyLicense,"uranium",0,false,false,"",' !license_civ_uranium && playerSide == civilian ']; 
