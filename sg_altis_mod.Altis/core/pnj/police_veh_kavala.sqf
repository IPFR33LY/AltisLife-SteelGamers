_this enableSimulation false;
_this allowDamage false;
_this addAction["Magasin de Véhicule",life_fnc_vehicleShopMenu,["cop_car",west,["cop_car_1","cop_car_1_3","cop_car_1_2"],"cop","APD - Kavala District"]];  
_this addAction["Garage Véhicule",  {   [[getPlayerUID player,playerSide,"Car",player],"TON_fnc_getVehicles",false,false] spawn life_fnc_MP;   createDialog "Life_impound_menu";   disableSerialization;   ctrlSetText[2802,"Recherche du Vehicule..."];   life_garage_sp = "cop_car_1"; life_garage_type = "Car";  },"",0,false,false,"",'playerSide == west'];  
_this addAction["Mettre le Véhicule dans le Garage",life_fnc_storeVehicle,"",0,false,false,"",'!life_garage_store'];