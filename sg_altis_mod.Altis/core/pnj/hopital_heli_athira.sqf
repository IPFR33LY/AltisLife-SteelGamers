_this enableSimulation false;
_this allowDamage false;
_this addAction[format["%1 (%2€)",["license_med_air"] call life_fnc_varToStr,[(["mair"] call life_fnc_licensePrice)] call life_fnc_numberText],life_fnc_buyLicense,"mair",0,false,false,"",' !license_med_air && playerSide == independent '];
_this addAction["Concession d'Hélico",life_fnc_vehicleShopMenu,["med_air_hs",independent,"med_car_3_1","med","Athira Hosptial"]]; 
_this addAction["Concession d'Hélico DLC",life_fnc_vehicleShopMenu,["med_air_dlc",independent,"med_car_3_1","med","Athira Hosptial"]];
_this addAction["Mon Garage d'Hélico",  {   [[getPlayerUID player,playerSide,"Air",player],"TON_fnc_getVehicles",false,false] spawn life_fnc_MP;   createDialog "Life_impound_menu";   disableSerialization;   ctrlSetText[2802,"Recherche d'Hélico...."];   life_garage_sp = "med_car_3_2"; life_garage_type = "Air";  },"",0,false,false,"",'playerSide == independent '];
_this addAction["Ranger le véhicule",life_fnc_storeVehicle,"",0,false,false,"",'!life_garage_store'];