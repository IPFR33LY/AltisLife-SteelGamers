_this enableSimulation false;
_this allowDamage false;
_this addAction["Vendeur d'Hélicoptére",life_fnc_vehicleShopMenu,["cop_air",west,"cop_air_tir","cop","Héliport de Police"]];  
_this addAction["Mon Garage d'Hélico",  {   [[getPlayerUID player,playerSide,"Air",player],"TON_fnc_getVehicles",false,false] spawn life_fnc_MP;   createDialog "Life_impound_menu";   disableSerialization;   ctrlSetText[2802,"Recherche d'Hélicoptére...."];   life_garage_sp = "cop_air_tir"; life_garage_type = "Air";  },"",0,false,false,"",'playerSide == west'];  
_this addAction["Ranger Mon Hélico",life_fnc_storeVehicle,"",0,false,false,"",'!life_garage_store'];