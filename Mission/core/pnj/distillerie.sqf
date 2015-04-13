_this enableSimulation false;
_this allowDamage false; 
_this addAction["Fermentation du Whiskey",life_fnc_processAction,"whiskey",0,false,false,"",' life_inv_rye > 0 && life_inv_yeast > 0 && !life_is_processing'];
_this addAction["Fabrication Alcool Illégal",life_fnc_processAction,"moonshine",0,false,false,"",' life_inv_mash > 0 && life_inv_yeast > 0 && !life_is_processing'];
_this addAction["Ecraser",life_fnc_processAction,"mash",0,false,false,"",' life_inv_cornmeal > 0 && life_inv_water > 0 && !life_is_processing'];
_this setVariable["realname","Distillerie"]; 
_this addAction[format["%1 (%2€)",localize (getText(missionConfigFile >> "Licenses" >> "stiller" >> "displayName")), [(getNumber(missionConfigFile >> "Licenses" >> "stiller" >> "price"))] call life_fnc_numberText],life_fnc_buyLicense,"stiller",0,false,false,"",' !license_civ_stiller && playerSide == civilian '];