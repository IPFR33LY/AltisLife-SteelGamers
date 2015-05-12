_this enableSimulation false;
_this allowDamage false;
_this addAction[format["%1 (%2€)",["license_med_air"] call life_fnc_varToStr,[(["mair"] call life_fnc_licensePrice)] call life_fnc_numberText],life_fnc_buyLicense,"mair",0,false,false,"",' !license_med_air && playerSide == independent '];  
_this addAction["Magasin Médecin",life_fnc_weaponShopMenu,"med_basic"];  this addAction["Concession Véhicule",life_fnc_vehicleShopMenu,["med_shop",independent,"car_hop_1","med","Antalya Hosptial"]];  
_this addAction["Car Garage",  {   [[getPlayerUID player,playerSide,"Car",player],"TON_fnc_getVehicles",false,false] spawn life_fnc_MP;   createDialog "Life_impound_menu";   disableSerialization;   ctrlSetText[2802,"Recherche Véhicule...."]; life_garage_sp = "car_hop_2"; life_garage_type = "Car";  },"",0,false,false,"",'playerSide == independent'];  
_this addAction["Ranger le Véhicule",life_fnc_storeVehicle,"",0,false,false,"",'!life_garage_store'];