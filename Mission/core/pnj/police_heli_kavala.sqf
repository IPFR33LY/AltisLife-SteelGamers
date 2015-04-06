_this enableSimulation false;
_this allowDamage false;
_this addAction["Concessionaire Aérien",life_fnc_vehicleShopMenu,["cop_air",west,"helico_cop_88","cop","APD - Kavala District"]];  
_this addAction["Vehicle Garage",  {   [[getPlayerUID player,playerSide,"Air",player],"TON_fnc_getVehicles",false,false] spawn life_fnc_MP;   createDialog "Life_impound_menu";   disableSerialization;   ctrlSetText[2802,"Fetching Vehicles...."];   life_garage_sp = "helico_cop_88"; life_garage_type = "Air";  },"",0,false,false,"",'playerSide == west'];  
_this addAction["Store vehicle in Garage",life_fnc_storeVehicle,"",0,false,false,"",'!life_garage_store'];