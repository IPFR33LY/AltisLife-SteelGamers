_this enableSimulation false;
_this allowDamage false;
_this addAction["Magasin de Plongée",life_fnc_clothingMenu,"dive"]; 
_this addAction[format["%1 (%2€)",["license_civ_dive"] call life_fnc_varToStr,[(["dive"] call life_fnc_licensePrice)] call life_fnc_numberText],life_fnc_buyLicense,"dive",0,false,false,"",' !license_civ_dive && playerSide == civilian '];