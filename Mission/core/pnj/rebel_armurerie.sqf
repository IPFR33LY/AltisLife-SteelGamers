_this enableSimulation false;
_this allowDamage false;
_this enableSimulation false; this addAction["Marché Rebel",life_fnc_virt_menu,"rebel"]; this allowDamage false;  
_this addAction["Vendeur Vétements Rebel",life_fnc_clothingMenu,"reb",0,false,false,"",' license_civ_rebel && playerSide == civilian']; 
_this addAction["Armes Rebel lvl 1",life_fnc_weaponShopMenu,"rebel",0,false,false,"",' license_civ_rebel && playerSide == civilian']; 
_this addAction["Armes Rebel lvl 2",life_fnc_weaponShopMenu,"rebel_lvl_2",0,false,false,"",' license_civ_rebel_lvl_2 && playerSide == civilian']; 
_this addAction["Armes Rebel lvl 3",life_fnc_weaponShopMenu,"rebel_lvl_3",0,false,false,"",' license_civ_rebel_lvl_3 && playerSide == civilian']; 
_this addAction["<t color='#FFF700'>Distributeur</t>",life_fnc_atmMenu,"",0,FALSE,FALSE,"",' vehicle player == player && player distance _target < 4 '];