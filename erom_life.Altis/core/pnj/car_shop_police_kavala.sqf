_this addAction[localize"STR_MAR_W_E_Vehicle Shop",life_fnc_vehicleShopMenu,["cop_car",west,"cop_car_1","cop","APD - Kavala District"]];  
_this addAction[localize"STR_Garage_Title",  {   [getPlayerUID player,playerSide,"Car",player] remoteExecCall ["TON_fnc_getVehicles",2];   createDialog "Life_impound_menu";   disableSerialization;   ctrlSetText[2802,"Fetching Vehicles...."];   life_garage_sp = "cop_car_1"; life_garage_type = "Car";  },"",0,false,false,"",'playerSide == west'];  
_this addAction[localize"STR_MAR_Store_vehicle_in_Garage",life_fnc_storeVehicle,"",0,false,false,"",'!life_garage_store']; this setVariable["realname","Cop Vehicle Store"]; 
_this setObjectTextureGlobal [0,"textures\cop_uniform.jpg"];