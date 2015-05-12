_this enableSimulation false;
_this allowDamage false;
_this addAction["Concession d'Hélico",life_fnc_vehicleShopMenu,["cop_air",west,"heli_cop_1","cop","APD - Kavala District"]];  
_this addAction["Mon Garage",  {   [[getPlayerUID player,playerSide,"Air",player],"TON_fnc_getVehicles",false,false] spawn life_fnc_MP;   createDialog "Life_impound_menu";   disableSerialization;   ctrlSetText[2802,"Recherche Véhicule...."];   life_garage_sp = "heli_cop_1"; life_garage_type = "Air";  },"",0,false,false,"",'playerSide == west'];  
_this addAction["Store vehicle in Garage",life_fnc_storeVehicle,"",0,false,false,"",'!life_garage_store'];