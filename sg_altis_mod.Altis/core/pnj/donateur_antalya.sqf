_this enableSimulation false;
_this allowDamage false;
_this addAction["Armurerie Donateur lvl 1",life_fnc_weaponShopMenu,"donateur_lvl_1"]; 
_this addAction["Armurerie Donateur lvl 2",life_fnc_weaponShopMenu,"donateur_lvl_2"]; 
_this addAction["Armurerie Donateur lvl 3",life_fnc_weaponShopMenu,"donateur_lvl_3"];
_this addAction["Véhicule Donateur",life_fnc_vehicleShopMenu,["donateur",civilian,"donateur_antalya","civ","Véhicule Donateur"]];
_this addAction["<t color='#ADFF2F'>ATM</t>",life_fnc_atmMenu]; 
_this addAction["Stocker le véhicule",life_fnc_storeVehicle,"",0,false,false,"",'!life_garage_store'];