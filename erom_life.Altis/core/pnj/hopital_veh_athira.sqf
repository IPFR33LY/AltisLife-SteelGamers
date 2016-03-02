_this enableSimulation false;
_this allowDamage false;
_this addAction["Concession Véhicule",life_fnc_vehicleShopMenu,["med_shop",independent,"med_car_3","med","Athira Hosptial"]]; 
_this addAction["Car Garage",  {   [[getPlayerUID player,playerSide,"Car",player],"TON_fnc_getVehicles",false,false] spawn life_fnc_MP;   createDialog "Life_impound_menu";   disableSerialization;   ctrlSetText[2802,"Recherche Véhicule...."];   life_garage_sp = "med_car_3_4"; life_garage_type = "Car";  },"",0,false,false,"",'playerSide == independent']; 
_this addAction["Ranger le Véhicule",life_fnc_storeVehicle,"",0,false,false,"",'!life_garage_store'];