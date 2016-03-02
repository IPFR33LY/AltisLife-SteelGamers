_this enableSimulation false;
_this allowDamage false;
_this addAction["Magasin véhicule criminel",life_fnc_vehicleShopMenu,["criminel",civilian,"reb_v_6","criminel","Magasin criminel"],0,false,false,"",'license_civ_criminel']; 
_this addAction["Mon Garage Auto",  {   [[getPlayerUID player,playerSide,"Car",player],"TON_fnc_getVehicles",false,false] spawn life_fnc_MP; life_garage_type = "Car";   createDialog "Life_impound_menu";   disableSerialization;   ctrlSetText[2802,"Recherche...."];   life_garage_sp = "reb_v_6";  }]; 
_this addAction["Mon Garage Helico",  {   [[getPlayerUID player,playerSide,"Air",player],"TON_fnc_getVehicles",false,false] spawn life_fnc_MP;  life_garage_type = "Air"; createDialog "Life_impound_menu";   disableSerialization;   ctrlSetText[2802,"Recherche...."];   life_garage_sp = "reb_v_6";  }]; 
_this addAction["Stocker le véhicule",life_fnc_storeVehicle,"",0,false,false,"",'!life_garage_store'];