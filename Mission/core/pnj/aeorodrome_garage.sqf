_this enableSimulation false; 
_this allowDamage false; air_g_1
_this addAction["Mon Garage",  {   [[getPlayerUID player,playerSide,"Car",player],"TON_fnc_getVehicles",false,false] spawn life_fnc_MP;  life_garage_type = "Car"; createDialog "Life_impound_menu";   disableSerialization;   ctrlSetText[2802,"Recherche...."];   life_garage_sp = "air_g_1";  }]; 
_this addAction["Ranger le Véhicule",life_fnc_storeVehicle,"",0,false,false,"",'!life_garage_store'];