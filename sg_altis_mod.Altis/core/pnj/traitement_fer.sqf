_this enableSimulation false;
_this allowDamage false;
_this addAction["Traitement de Fer",life_fnc_processAction,"iron",0,false,false,"",' life_inv_ironUnrefined > 0 && !life_is_processing'];  
_this addAction[format["%1 ($%2)",localize (getText(missionConfigFile >> "Licenses" >> "iron" >> "displayName")), [(getNumber(missionConfigFile >> "Licenses" >> "iron" >> "price"))] call life_fnc_numberText],life_fnc_buyLicense,"iron",0,false,false,"",' !license_civ_iron && playerSide == civilian '];