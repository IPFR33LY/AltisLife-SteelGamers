_this addAction[format["%1 (%2€)",localize (getText(missionConfigFile >> "Licenses" >> "mAir" >> "displayName")), [(getNumber(missionConfigFile >> "Licenses" >> "mAir" >> "price"))] call life_fnc_numberText],life_fnc_buyLicense,"mAir",0,false,false,"",' !license_med_mAir && playerSide == independent ']; 
_this addAction[localize"STR_MAR_EMS_Item_Shop",life_fnc_weaponShopMenu,"med_basic"]; 
_this addAction[localize"STR_MAR_EMS_Clothing_Shop",life_fnc_clothingMenu,"med_clothing"]; 
_this addAction[localize"STR_MAR_W_E_Vehicle Shop",life_fnc_vehicleShopMenu,["med_shop",independent,"med_car_2","med","Pyrgos Hospital"]]; 
_this addAction[localize"STR_MAR_Helicopter_Shop", life_fnc_vehicleShopMenu,["med_air_hs",independent,"medic_spawn_3","med","Pyrgos Hospital"]]; this addAction[localize"STR_MAR_W_Car_Garage",  {   [getPlayerUID player,playerSide,"Car",player] remoteExecCall ["TON_fnc_getVehicles",2];   createDialog "Life_impound_menu";   disableSerialization;   ctrlSetText[2802,"Fetching Vehicles...."];   life_garage_sp = "med_car_2"; life_garage_type = "Car";  },"",0,false,false,"",'playerSide == independent']; 
_this addAction[localize"STR_MAR_Helicopter_Garage",  {   [getPlayerUID player,playerSide,"Air",player] remoteExecCall ["TON_fnc_getVehicles",2];   createDialog "Life_impound_menu";   disableSerialization;   ctrlSetText[2802,"Fetching Vehicles...."];   life_garage_sp = "medic_spawn_3"; life_garage_type = "Air";  },"",0,false,false,"",'playerSide == independent ']; 
_this addAction[localize"STR_MAR_Store_vehicle_in_Garage",life_fnc_storeVehicle,"",0,false,false,"",'!life_garage_store']; 
_this setObjectTextureGlobal [0,"textures\medic_uniform.jpg"];