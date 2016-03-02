_this enableSimulation false;
_this allowDamage false;
_this addAction["Garage",  {   [[getPlayerUID player,playerSide,"Car",player],"TON_fnc_getVehicles",false,false] spawn life_fnc_MP;  life_garage_type = "Car"; createDialog "Life_impound_menu";   disableSerialization;   ctrlSetText[2802,"Fetching Vehicles...."];   life_garage_sp = "car_avion_1";  }]; 
_this addAction["Ranger le véhicule ",life_fnc_storeVehicle,"",0,false,false,"",'!life_garage_store'];