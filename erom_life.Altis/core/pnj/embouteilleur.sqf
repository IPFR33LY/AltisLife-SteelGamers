_this allowDamage false;
_this enableSimulation false;
_this setVariable["realname","Embouteilleur"];
_this addAction["Fabriation de Bouteille",life_fnc_processAction,"glassbottle",0,false,false,"",' life_inv_glass > 0 && !life_is_processing']; 
_this addAction["Bouteille de bière",life_fnc_processAction,"bottledbeer",0,false,false,"",'life_inv_beerp > 0 && !life_is_processing'];
_this addAction["Bouteille de Whiskey",life_fnc_processAction,"bottledwhiskey",0,false,false,"",'life_inv_whiskey > 0 && !life_is_processing'];
_this addAction["Bouteille d'alcool Illégal",life_fnc_processAction,"bottledshine",0,false,false,"",'life_inv_moonshine > 0 && !life_is_processing']; 
_this addAction[format["%1 (%2€)",localize (getText(missionConfigFile >> "Licenses" >> "bottler" >> "displayName")), [(getNumber(missionConfigFile >> "Licenses" >> "bottler" >> "price"))] call life_fnc_numberText],life_fnc_buyLicense,"bottler",0,false,false,"",' !license_civ_bottler && playerSide == civilian '];