_this enableSimulation false;
_this allowDamage false;
_this addAction["<t color='#E80000'>Vehicule De Luxe</t>",life_fnc_vehicleShopMenu,["civ_car_gt",civilian,"vdl_car_civ_3","civ","Concept Car"]];  
_this addAction["Véhicule Garage",  {   [[getPlayerUID player,playerSide,"Car",player],"TON_fnc_getVehicles",false,false] spawn life_fnc_MP; life_garage_type = "Car";   createDialog "Life_impound_menu";   disableSerialization;   ctrlSetText[2802,"Recherche...."];   life_garage_sp = "vdl_car_civ_3";  }];  
_this addAction["Ranger Véhicule",life_fnc_storeVehicle,"",0,false,false,"",'!life_garage_store'];