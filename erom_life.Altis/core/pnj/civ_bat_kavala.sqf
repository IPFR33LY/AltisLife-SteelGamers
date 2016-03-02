_this enableSimulation false;
_this allowDamage false;
_this addAction["Concessionaire Maritime",life_fnc_vehicleShopMenu,["civ_ship",civilian,"civ_ship_1","civ","Billy's Boat Rentals & Ownership"]];  
_this addAction["Garage",  {   [[getPlayerUID player,playerSide,"Ship",player],"TON_fnc_getVehicles",false,false] spawn life_fnc_MP;   createDialog "Life_impound_menu";   disableSerialization;   ctrlSetText[2802,"Fetching Vehicles...."];   life_garage_sp = "civ_ship_1"; life_garage_type = "Ship";  },"",0,false,false,"",'playerSide == civilian'];  
_this addAction["Ranger le véhicule ",life_fnc_storeVehicle,"",0,false,false,"",'!life_garage_store'];