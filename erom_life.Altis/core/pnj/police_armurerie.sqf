_this addAction[localize"STR_MAR_Cop_Item_Shop",life_fnc_virt_menu,"cop"];
_this addAction[localize"STR_MAR_Cop_Clothing_Shop",life_fnc_clothingMenu,"cop"];  
_this addAction[localize"STR_MAR_Cop_Weapon_Shop",life_fnc_weaponShopMenu,"cop_basic"];  
_this addAction[localize"STR_MAR_Patrol_Officer_Weapon_Shop",life_fnc_weaponShopMenu,"cop_patrol"];  
_this addAction[localize"STR_MAR_Sergeant_Weapon_Shop",life_fnc_weaponShopMenu,"cop_sergeant"];  
_this addAction[format["%1 (%2€)",localize (getText(missionConfigFile >> "Licenses" >> "cAir" >> "displayName")), [(getNumber(missionConfigFile >> "Licenses" >> "cAir" >> "price"))] call life_fnc_numberText],life_fnc_buyLicense,"cAir",0,false,false,"",' !license_cop_cAir && playerSide == west '];  
_this addAction[format["%1 (%2€)",localize (getText(missionConfigFile >> "Licenses" >> "cg" >> "displayName")), [(getNumber(missionConfigFile >> "Licenses" >> "cg" >> "price"))] call life_fnc_numberText],life_fnc_buyLicense,"cg",0,false,false,"",' !license_cop_cg && playerSide == west ']; 
_this addAction["<t color='#ADFF2F'>ATM</t>",life_fnc_atmMenu,"",0,FALSE,FALSE,"",' vehicle player == player && player distance _target < 4 '];
_this setObjectTextureGlobal [0,"textures\cop_uniform.jpg"];