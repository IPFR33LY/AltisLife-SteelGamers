_this enableSimulation false;
_this allowDamage false;
_this addAction["Gang Market",life_fnc_virt_menu,"gang",0,false,false,"",' _b = (nearestObjects[getPosATL player,["Land_u_Barracks_V2_F","Land_i_Barracks_V2_F"],25]) select 0; !isNil {_b getVariable "gangOwner"} && {(_b getVariable "gangOwner") == (group player)} '];