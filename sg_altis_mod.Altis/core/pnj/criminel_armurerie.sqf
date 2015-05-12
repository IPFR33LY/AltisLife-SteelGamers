_this enableSimulation false;
_this allowDamage false;
_this addAction["Marché Criminel",life_fnc_virt_menu,"rebel"]; this allowDamage false;  
_this addAction["Vétements Criminel",life_fnc_clothingMenu,"criminel",0,false,false,"",' license_civ_criminel && playerSide == civilian'];  
_this addAction["Armurerie Criminel",life_fnc_weaponShopMenu,"criminel",0,false,false,"",' license_civ_criminel && playerSide == civilian'];  
_this addAction[format["%1 (%2€)",localize (getText(missionConfigFile >> "Licenses" >> "criminel" >> "displayName")), [(getNumber(missionConfigFile >> "Licenses" >> "criminel" >> "price"))] call life_fnc_numberText],life_fnc_buyLicense,"criminel",0,false,false,"",' !license_civ_criminel && playerSide == civilian ']; 
_this addAction["<t color='#FFF700'>Distributeur</t>",life_fnc_atmMenu,"",0,FALSE,FALSE,"",' vehicle player == player && player distance _target < 4 '];