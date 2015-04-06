_this enableSimulation false;
_this allowDamage false;
_this addAction["Concessionnaire",life_fnc_vehicleShopMenu,["cop_car",west,"cop_car_5","cop","Concessionnaire de Police"]];  
_this addAction["Mon Garage",  {   [[getPlayerUID player,playerSide,"Car",player],"TON_fnc_getVehicles",false,false] spawn life_fnc_MP;   createDialog "Life_impound_menu";   disableSerialization;   ctrlSetText[2802,"Recherche...."];   life_garage_sp = "cop_car_5"; life_garage_type = "Car";  },"",0,false,false,"",'playerSide == west'];  
_this addAction["Ranger Mon Véhicule",life_fnc_storeVehicle,"",0,false,false,"",'!life_garage_store']; 
_this setVariable["realname","Concessionnaire de Police"]; 
_this addAction["<t color='#FFF700'>Distributeur</t>",life_fnc_atmMenu,"",0,FALSE,FALSE,"",' vehicle player == player && player distance _target < 4 '];