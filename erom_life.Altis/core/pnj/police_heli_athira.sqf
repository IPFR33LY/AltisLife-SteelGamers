_this enableSimulation false;
_this allowDamage false;
_this addAction["Concession d'Hélico",life_fnc_vehicleShopMenu,["cop_air",west,"cop_air_k1","cop","APD - Kavala District"]];  
_this addAction["Mon Garage d'Hélico",  {   [[getPlayerUID player,playerSide,"Air",player],"TON_fnc_getVehicles",false,false] spawn life_fnc_MP;   createDialog "Life_impound_menu";   disableSerialization;   ctrlSetText[2802,"Recherche d'Hélico...."];   life_garage_sp = "cop_air_k1"; life_garage_type = "Air";  },"",0,false,false,"",'playerSide == west'];  
_this addAction["Ranger le Véhicule",life_fnc_storeVehicle,"",0,false,false,"",'!life_garage_store']; this enableSimulation false; this allowDamage false; 
_this addAction["<t color='#FFF700'>Distributeur</t>",life_fnc_atmMenu,"",0,FALSE,FALSE,"",' vehicle player == player && player distance _target < 4 '];