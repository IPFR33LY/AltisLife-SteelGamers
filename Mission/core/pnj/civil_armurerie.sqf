_this enableSimulation false;
_this allowDamage false;
_this addAction["Magasin d'arme Légal",life_fnc_weaponShopMenu,"gun",0,false,false,"",' license_civ_gun && playerSide == civilian']; 
_this addAction[format["%1 (%2€)",localize (getText(missionConfigFile >> "Licenses" >> "gun" >> "displayName")), [(getNumber(missionConfigFile >> "Licenses" >> "gun" >> "price"))] call life_fnc_numberText],life_fnc_buyLicense,"gun",0,false,false,"",' !license_civ_gun && playerSide == civilian ']; 
_this addAction["<t color='#FFF700'>Distributeur</t>",life_fnc_atmMenu,"",0,FALSE,FALSE,"",' vehicle player == player && player distance _target < 4 '];