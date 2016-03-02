_this enableSimulation false;
_this allowDamage false;
_this addAction["Helicopter Médical",life_fnc_vehicleShopMenu,["med_air_hs",independent,"med_car_7","med","Kavala Hosptial"]];  
_this addAction["Helicopter DLC Médical",life_fnc_vehicleShopMenu,["med_air_dlc",independent,"med_car_7","med","Kavala Hosptial"]];
_this addAction["Helicopter Garage",  {   [[getPlayerUID player,playerSide,"Air",player],"TON_fnc_getVehicles",false,false] spawn life_fnc_MP;   createDialog "Life_impound_menu";   disableSerialization;   ctrlSetText[2802,"Recherche...."];   life_garage_sp = "med_car_7"; life_garage_type = "Air";  },"",0,false,false,"",'playerSide == independent ']; ; 
_this addAction["Ranger le Véhicule",life_fnc_storeVehicle,"",0,false,false,"",'!life_garage_store'];  
_this setObjectTexture [0,"sg_pack01\textures\medic_uniform.jpg"];