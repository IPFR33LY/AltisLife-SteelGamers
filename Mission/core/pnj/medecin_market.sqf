_this enableSimulation false;
_this allowDamage false;
_this addAction[format["%1 (%2€)",["license_med_air"] call life_fnc_varToStr,[(["mair"] call life_fnc_licensePrice)] call life_fnc_numberText],life_fnc_buyLicense,"mair",0,false,false,"",' !license_med_air && playerSide == independent '];  
_this addAction["Magasin Médecin",life_fnc_weaponShopMenu,"med_basic"];