_this enableSimulation false;
_this allowDamage false;
_this addAction["Véhicule Pompier",life_fnc_vehicleShopMenu,["car_pompier",independent,"car_pompier_1","med","Caserne de Kavala"]]; 
_this addAction["Garage",  {   [[getPlayerUID player,playerSide,"Car",player],"TON_fnc_getVehicles",false,false] spawn life_fnc_MP;   createDialog "Life_impound_menu";   disableSerialization;   ctrlSetText[2802,"Recherche...."];   life_garage_sp = "car_pompier_1"; life_garage_type = "Car";  },"",0,false,false,"",'playerSide == independent '];  
_this addAction["Ranger Véhicule",life_fnc_storeVehicle,"",0,false,false,"",'!life_garage_store'];