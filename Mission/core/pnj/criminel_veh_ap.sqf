_this enableSimulation false;
_this allowDamage false;
_this addAction["Magasin Véhicule Criminel",life_fnc_vehicleShopMenu,["criminel",civilian,"reb_v_1_2","criminel","Magasin Criminel"],0,false,false,"",'license_civ_criminel']; 
_this addAction["Mon Garage",  {   [[getPlayerUID player,playerSide,"Car",player],"TON_fnc_getVehicles",false,false] spawn life_fnc_MP; life_garage_type = "Car";   createDialog "Life_impound_menu";   disableSerialization;   ctrlSetText[2802,"Recherche Véhicule...."];   life_garage_sp = "reb_v_1_2";  }]; 
_this addAction["Mon Garage Helico",  {   [[getPlayerUID player,playerSide,"Air",player],"TON_fnc_getVehicles",false,false] spawn life_fnc_MP;  life_garage_type = "Air"; createDialog "Life_impound_menu";   disableSerialization;   ctrlSetText[2802,"Recherche d'Hélico...."];   life_garage_sp = "reb_v_1_2";  }]; 
_this addAction["Ranger le véhicule",life_fnc_storeVehicle,"",0,false,false,"",'!life_garage_store'];