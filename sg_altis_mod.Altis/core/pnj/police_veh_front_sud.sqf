_this enableSimulation false;
_this allowDamage false;
_this addAction["Concessionaire de Véhicule",life_fnc_vehicleShopMenu,["cop_car",west,"cop_car_front_1","cop","Concessionnaire de Police"]];  
_this addAction["Mon Garage",  {   [[getPlayerUID player,playerSide,"Car",player],"TON_fnc_getVehicles",false,false] spawn life_fnc_MP;   createDialog "Life_impound_menu";   disableSerialization;   ctrlSetText[2802,"Recherche Véhicule...."];   life_garage_sp = "cop_car_front_1"; life_garage_type = "Car";  },"",0,false,false,"",'playerSide == west'];  
_this addAction["Ranger le Véhicule",life_fnc_storeVehicle,"",0,false,false,"",'!life_garage_store']; 
_this setVariable["realname","Concessionnaire de Police"];