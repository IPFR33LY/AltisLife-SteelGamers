#include <macro.h>
/*
    Uniform Script
    Author: Eldayia
    Created for http://altisdev.com
*/
    
    if (FETCH_CONST(life_coplevel) > 1) then {
        if ((uniform player) == "U_Rangemaster")  then {
            player setObjectTextureGlobal [0, "sg_pack01\textures\cop\pologendarmerie.paa"]; //Tenue d'intendant - Cop
        };
    };

    if (FETCH_CONST(life_coplevel) > 1) then {
        if ((uniform player) == "U_B_CombatUniform_mcam_worn")  then {
            player setObjectTextureGlobal [0, "sg_pack01\textures\cop\uniformegrandfroidgendarmerie.paa"]; //Tenue d'intendant - Cop
        };
    };
	
    if (license_med_pompier && playerSide == independent) then {
        if ((uniform player) == "U_Rangemaster")  then {
            player setObjectTextureGlobal [0, "sg_pack01\textures\pompiers\Polo Pompiers.paa"]; //Tenue Pompier
        };
    };
	
    if (license_med_pompier && playerSide == independent) then {
        if ((uniform player) == "U_I_OfficerUniform")  then {
            player setObjectTextureGlobal [0, "sg_pack01\textures\pompiers\SapeursPompiers.paa"]; //Tenue Pompier D'intervention
        };
    };