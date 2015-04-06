_this enableSimulation false;
_this allowDamage false;    
_this addAction["Traiter la méthamphétamine",life_fnc_processAction,"meth",0,false,false,"",' life_inv_methu > 0 && !life_is_processing'];   
_this addAction[format["%1 (%2€)",localize (getText(missionConfigFile >> "Licenses" >> "meth" >> "displayName")), [(getNumber(missionConfigFile >> "Licenses" >> "meth" >> "price"))] call life_fnc_numberText],life_fnc_buyLicense,"meth",0,false,false,"",' !license_civ_meth && playerSide == civilian '];