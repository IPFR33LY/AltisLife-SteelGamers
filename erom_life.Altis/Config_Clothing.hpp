/*
*    ARRAY FORMAT:
*        0: STRING (Classname)
*        1: STRING (Display Name, leave as "" for default)
*        2: SCALAR (Price)
*        4: ARRAY (This is for limiting items to certain things)
*            0: Variable to read from
*            1: Variable Value Type (SCALAR / BOOL / EQUAL)
*            2: What to compare to (-1 = Check Disabled)
*
*   Clothing classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Equipment
*   Backpacks/remaining classnames can be found here (TIP: Search page for "pack"): https://community.bistudio.com/wiki/Arma_3_CfgVehicles_EMPTY
*
*/
class Clothing {
    class bruce {
        title = "STR_Shops_C_Bruce";
        license = "";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "U_C_Poloshirt_blue", "Poloshirt Blue", 250, { "", "", -1 } },
            { "U_C_Poloshirt_burgundy", "Poloshirt Burgundy", 275, { "", "", -1 } },
            { "U_C_Poloshirt_redwhite", "Poloshirt Red/White", 150, { "", "", -1 } },
            { "U_C_Poloshirt_salmon", "Poloshirt Salmon", 175, { "", "", -1 } },
            { "U_C_Poloshirt_stripped", "Poloshirt stripped", 125, { "", "", -1 } },
            { "U_C_Poloshirt_tricolour", "Poloshirt Tricolor", 350, { "", "", -1 } },
            { "U_C_Poor_2", "Rag tagged clothes", 250, { "", "", -1 } },
            { "U_IG_Guerilla2_2", "Green stripped shirt & Pants", 650, { "", "", -1 } },
            { "U_IG_Guerilla3_1", "Brown Jacket & Pants", 735, { "", "", -1 } },
            { "U_IG_Guerilla2_3", "The Outback Rangler", 1200, { "", "", -1 } },
            { "U_C_HunterBody_grn", "The Hunters Look", 1500, { "", "", -1 } },
            { "U_C_WorkerCoveralls", "Mechanic Coveralls", 2500, { "", "", -1 } },
            { "U_OrestesBody", "Surfing On Land", 1100, { "", "", -1 } },
            { "U_PMC_CombatUniformRS_ChckDBS_GPSB", "", 1100, { "", "", -1 } },	
            { "U_PMC_CombatUniformRS_ChckLB_GPBB", "", 1100, { "", "", -1 } },		
            { "U_PMC_CombatUniformRS_ChckLR_SPBB", "", 1100, { "", "", -1 } },		
            { "U_PMC_CombatUniformRS_ChckP_BPBB", "", 1100, { "", "", -1 } },
            { "TRYK_U_B_RED_T_BG_BR", "", 1100, { "", "", -1 } },
            { "TRYK_U_B_BLK_T_BG_WH", "", 1100, { "", "", -1 } },
            { "TRYK_U_B_Denim_T_BG_BK", "", 1100, { "", "", -1 } },
            { "TRYK_U_B_Denim_T_BG_WH", "", 1100, { "", "", -1 } },
            { "U_PMC_BluePlaidShirt_BeigeCords", "", 1100, { "", "", -1 } },
            { "U_PMC_RedPlaidShirt_DenimCords", "", 1100, { "", "", -1 } },
            { "U_C_Poor_1", "", 1100, { "", "", -1 } },
            { "U_NikosAgedBody", "Casual Wears", 5000, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            { "H_Bandanna_camo", "Camo Bandanna", 120, { "", "", -1 } },
            { "H_Bandanna_surfer", "Surfer Bandanna", 130, { "", "", -1 } },
            { "H_Bandanna_gry", "Grey Bandanna", 150, { "", "", -1 } },
            { "H_Bandanna_cbr", "", 165, { "", "", -1 } },
            { "H_Bandanna_mcamo", "", 135, { "", "", -1 } },
            { "H_Bandanna_sand", "", 135, { "", "", -1 } },			
            { "H_Bandanna_khk_hs", "", 135, { "", "", -1 } },	
            { "H_Bandanna_surfer_blk", "", 135, { "", "", -1 } },	
            { "H_Bandanna_surfer_grn", "", 135, { "", "", -1 } },	
            { "H_Bandanna_khk", "Khaki Bandanna", 145, { "", "", -1 } },
            { "H_Bandanna_sgg", "Sage Bandanna", 160, { "", "", -1 } },
            { "H_StrawHat", "Straw Fedora", 225, { "", "", -1 } },
            { "H_BandMask_blk", "Hat & Bandanna", 300, { "", "", -1 } },
            { "H_Booniehat_tan", "", 425, { "", "", -1 } },
            { "H_Hat_blue", "", 310, { "", "", -1 } },
            { "H_Hat_brown", "", 276, { "", "", -1 } },
            { "H_Hat_checker", "", 340, { "", "", -1 } },
            { "H_Hat_grey", "", 280, { "", "", -1 } },
            { "H_Hat_tan", "", 265, { "", "", -1 } },
            { "H_Cap_blu", "", 150, { "", "", -1 } },
            { "H_Cap_grn", "", 150, { "", "", -1 } },
            { "H_Cap_grn_BI", "", 150, { "", "", -1 } },
            { "H_Cap_oli", "", 150, { "", "", -1 } },
            { "H_Cap_red", "", 150, { "", "", -1 } },
            { "H_Cap_tan", "", 150, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
            { "G_Shades_Black", "", 25, { "", "", -1 } },
            { "G_Shades_Blue", "", 20, { "", "", -1 } },
            { "G_Sport_Blackred", "", 20, { "", "", -1 } },
            { "G_Sport_Checkered", "", 20, { "", "", -1 } },
            { "G_Sport_Blackyellow", "", 20, { "", "", -1 } },
            { "G_Sport_BlackWhite", "", 20, { "", "", -1 } },
            { "G_Squares", "", 10, { "", "", -1 } },
            { "G_Aviator", "", 100, { "", "", -1 } },
            { "G_Lady_Mirror", "", 150, { "", "", -1 } },
            { "G_Lady_Dark", "", 150, { "", "", -1 } },
            { "G_Lady_Blue", "", 150, { "", "", -1 } },
            { "G_Lowprofile", "", 30, { "", "", -1 } },
            { "G_Combat", "", 55, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },
            { "B_AssaultPack_khk", "", 2000, { "", "", -1 } },
            { "B_AssaultPack_dgtl", "", 2000, { "", "", -1 } },
            { "B_AssaultPack_rgr", "", 2000, { "", "", -1 } },
            { "B_AssaultPack_sgg", "", 2000, { "", "", -1 } },
            { "B_AssaultPack_blk", "", 2000, { "", "", -1 } },
            { "B_AssaultPack_cbr", "", 2000, { "", "", -1 } },
            { "B_AssaultPack_mcamo", "", 2000, { "", "", -1 } },
            { "B_TacticalPack_oli", "", 2500, { "", "", -1 } },
            { "B_Kitbag_mcamo", "", 3500, { "", "", -1 } },
            { "B_Kitbag_sgg", "", 3500, { "", "", -1 } },
            { "B_Kitbag_cbr", "", 3500, { "", "", -1 } },
            { "B_Bergen_sgg", "", 6500, { "", "", -1 } },
            { "B_Bergen_mcamo", "", 6500, { "", "", -1 } },
            { "B_Bergen_rgr", "", 6500, { "", "", -1 } },
            { "B_Bergen_blk", "", 6500, { "", "", -1 } },
            { "B_FieldPack_blk", "", 5000, { "", "", -1 } },
            { "B_FieldPack_ocamo", "", 5000, { "", "", -1 } },
            { "B_FieldPack_oucamo", "", 5000, { "", "", -1 } },
            { "B_Carryall_ocamo", "", 7500, { "", "", -1 } },
            { "B_Carryall_oucamo", "", 7500, { "", "", -1 } },
            { "B_Carryall_mcamo", "", 7500, { "", "", -1 } },
            { "B_Carryall_oli", "", 7500, { "", "", -1 } },
            { "B_Carryall_khk", "", 7500, { "", "", -1 } },
            { "B_Carryall_cbr", "", 7500, { "", "", -1 } },
            { "PMC_AssaultPack_Blk", "", 7500, { "", "", -1 } },
            { "PMC_AssaultPack_Rgr", "", 7500, { "", "", -1 } },
            { "PMC_AssaultPack_Tan", "", 7500, { "", "", -1 } },
            { "TRYK_B_Coyotebackpack_BLK", "", 7500, { "", "", -1 } },
            { "TRYK_B_Coyotebackpack", "", 7500, { "", "", -1 } },
            { "CL3_ParachutePackCptAmer", "", 7500, { "", "", -1 } },
            { "CL3_ParachutePack", "", 7500, { "", "", -1 } },
            { "B_OutdoorPack_blk", "", 500, { "", "", -1 } }
        };
    };

    class cop {
        title = "STR_Shops_C_Police";
        license = "";
        side = "cop";
        uniforms[] = {
            { "NONE", "Enlever l'uniforme", 0, { "", "", -1 } },
            { "U_Rangemaster", "Cop Uniform", 0, { "", "", -1 } },
            { "TRYK_U_B_wh_blk_Rollup_CombatUniform", "", 0, { "life_coplevel", "SCALAR", 5 } }
        };
        headgear[] = {
            { "NONE", "Enlever le Chapeau", 0, { "", "", -1 } },
            { "H_HelmetB_plain_mcamo", "", 0, { "life_coplevel", "SCALAR", 1 } },
            { "H_Booniehat_mcamo", "", 0, { "life_coplevel", "SCALAR", 1 } },
            { "H_MilCap_blue", "", 0, { "life_coplevel", "SCALAR", 4 } },
            { "H_Watchcap_blk", "", 0, { "life_coplevel", "SCALAR", 4 } },
            { "H_HelmetB_plain_blk", "", 0, { "life_coplevel", "SCALAR", 5 } },
            { "H_PilotHelmetFighter_B", "", 0, { "life_coplevel", "SCALAR", 2 } },
            { "H_PilotHelmetHeli_B", "", 0, { "life_coplevel", "SCALAR", 2 } },
            { "H_Beret_blk", "", 0, { "life_coplevel", "SCALAR", 8 } },			
            { "H_Beret_02", "", 0, { "life_coplevel", "SCALAR", 9 } }
        };
        goggles[] = {
            { "NONE", "Enlever les Lunettes", 0, { "", "", -1 } },
            { "G_Shades_Black", "", 0, { "", "", -1 } },
            { "G_Shades_Blue", "", 0, { "", "", -1 } },
            { "G_Sport_Blackred", "", 0, { "", "", -1 } },
            { "G_Sport_Checkered", "", 0, { "", "", -1 } },
            { "G_Sport_Blackyellow", "", 0, { "", "", -1 } },
            { "G_Sport_BlackWhite", "", 0, { "", "", -1 } },
            { "G_Squares", "", 0, { "", "", -1 } },
            { "G_Aviator", "", 0, { "", "", -1 } },
            { "G_Lady_Mirror", "", 0, { "", "", -1 } },
            { "G_Lady_Dark", "", 0, { "", "", -1 } },
            { "G_Lady_Blue", "", 0, { "", "", -1 } },
            { "G_Lowprofile", "", 0, { "", "", -1 } },
            { "Mask_M40", "", 0, { "life_coplevel", "SCALAR", 1 } },
            { "G_B_Diving", "", 0, { "life_coplevel", "SCALAR", 1 } },
            { "G_Combat", "", 0, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Enlever la Veste", 0, { "", "", -1 } },
            { "V_Rangemaster_belt", "", 800, { "", "", -1 } },
            { "TRYK_V_ArmorVest_Delta", "", 800, { "", "", -1 } },
            { "TRYK_V_Bulletproof", "", 800, { "", "", -1 } },
            { "TRYK_V_Bulletproof_BLK", "", 800, { "", "", -1 } },
            { "V_TacVest_blk_POLICE", "", 800, { "", "", -1 } },
            { "V_Chestrig_blk", "", 1500, { "life_coplevel", "SCALAR", 1 } }
        };
        backpacks[] = {
            { "NONE", "Enlever le Sac", 0, { "", "", -1 } },
            { "B_mas_AssaultPack_black", "", 800, { "", "", -1 } },
            { "B_mas_Kitbag_black", "", 500, { "", "", -1 } },
            { "PMC_B_Carryall_blk", "", 700, { "", "", -1 } }
        };
    };

    class dive {
        title = "STR_Shops_C_Diving";
        license = "dive";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "U_B_Wetsuit", "", 2000, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
            { "G_Diving", "", 500, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "V_RebreatherB", "", 5000, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } }
        };
    };

    class gun_clothing {
        title = "STR_Shops_C_Gun";
        license = "gun";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "V_Rangemaster_belt", "", 4900, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } }
        };
    };

    class gang_clothing {
        title = "STR_Shops_C_Gang";
        license = "";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "V_Rangemaster_belt", "", 1900, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } }
        };
    };

    class med_clothing {
        title = "STR_MAR_EMS_Clothing_Shop";
        license = "";
        side = "med";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "U_Rangemaster", "EMS Uniform", 50, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            { "H_Cap_blu", "", 10, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
            { "G_Shades_Blue", "", 10, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },
            { "B_FieldPack_oli", "EMS Backpack", 3000, { "", "", -1 } }
        };
    };

	class reb {
		title = "STR_Shops_C_Rebel";
		license = "rebel";
		side = "civ";
		uniforms[] = {
			{ "NONE", "Enlever l'uniforme", 0, { "", "", -1 } },
			{ "U_I_Wetsuit", "Tenue de Plongée", 10000, {"", "", -1} },
			{ "TRYK_U_B_MARPAT_Desert2_Tshirt", "Ghillie Suit", 10000, { "", "", -1 } },
			{ "TRYK_U_B_MARPAT_Wood_Tshirt", "Tenue de Guerilla", 10000, { "", "", -1 } },
			{ "TRYK_U_B_MTP_CombatUniform", "Treillis", 10000, { "", "", -1 } },
			{ "TRYK_U_B_Woodland_Tshirt", "Uniforme Rebelle", 10000, { "", "", -1 } },
			{ "TRYK_U_B_wood_CombatUniform", "Uniforme de Guerillo", 10000, { "", "", -1 } },
			{ "TRYK_U_B_BLOD_T", "Uniforme de Combat", 10000, { "", "", -1 } },
			{ "TRYK_U_B_BLKTAN_CombatUniform", "Vetement de Guerilla", 10000, { "", "", -1 } },
			{ "TRYK_U_B_BLKTAN_Tshirt", "", 10000, { "", "", -1 } },
			{ "TRYK_U_B_BLK_Tshirt", "", 10000, { "", "", -1 } },
			{ "TRYK_U_B_BLK_OD_Tshirt", "", 10000, { "", "", -1 } },
			{ "TRYK_U_B_ODTAN_Tshirt", "", 10000, { "", "", -1 } },
			{ "TRYK_U_B_BLK_TAN_2", "", 10000, { "", "", -1 } },
			{ "TRYK_U_B_fleece", "", 10000, { "", "", -1 } },
			{ "TRYK_U_B_fleece_UCP", "", 10000, { "", "", -1 } },
			{ "TRYK_U_B_GRTANR_CombatUniformTshirt", "", 10000, { "", "", -1 } },
			{ "TRYK_U_B_OD_OD_R_CombatUniform", "", 10000, { "", "", -1 } },
			{ "TRYK_U_B_ODTANR_CombatUniformTshirt", "", 10000, { "", "", -1 } },
			{ "TRYK_U_B_BLK_OD_Rollup_CombatUniform", "", 10000, { "", "", -1 } },
			{ "TRYK_U_B_BLK_tan_Rollup_CombatUniform", "", 10000, { "", "", -1 } },
			{ "TRYK_U_pad_hood_Blod", "", 10000, { "", "", -1 } },
			{ "TRYK_U_pad_hood_BKT2", "", 10000, { "", "", -1 } },
			{ "TRYK_B_USMC_R", "", 10000, { "", "", -1 } },
			{ "U_I_G_Story_Protagonist_F", "", 10000, { "", "", -1 } },
			{ "rpima_uniform", "", 10000, { "", "", -1 } },
			{ "U_I_GhillieSuit", "", 20000, { "", "", -1 } },
			{ "U_O_GhillieSuit", "", 20000, { "", "", -1 } },
			{ "U_I_FullGhillie_lsh", "Camouflage Complet", 40000, { "", "", -1 } },
			{ "U_O_FullGhillie_sard", "Camouflage Complet Blindée", 60000, { "", "", -1 } }
		};
		headgear[] = {
			{ "NONE", "Enlever le Chapeau", 0, { "", "", -1 } },
			{ "H_Watchcap_cbr", "Bonnet Vert", 100, { "", "", -1 } },
			{ "H_Watchcap_camo", "Bonnet Militaire", 100, { "", "", -1 } },
			{ "H_Bandanna_khk_hs", "Bandana Vert", 100, { "", "", -1 } },
			{ "H_Bandanna_cbr", "", 100, { "", "", -1 } },
			{ "H_Bandanna_khk", "", 100, { "", "", -1 } },
			{ "H_Bandanna_mcamo", "", 100, { "", "", -1 } },
			{ "H_Bandanna_gry", "", 100, { "", "", -1 } },
			{ "H_Bandanna_sand", "", 100, { "", "", -1 } },
			{ "H_Bandanna_camo", "", 100, { "", "", -1 } },
			{ "H_HelmetIA", "Casque de Combat", 100, { "", "", -1 } },
			{ "H_Booniehat_dgtl", "Chapeau de Brousse", 100, { "", "", -1 } },
			{ "H_Booniehat_DMARPAT", "", 100, { "", "", -1 } },
			{ "H_Booniehat_rgr", "", 100, { "", "", -1 } },
			{ "H_Booniehat_GCAMO", "", 100, { "", "", -1 } },
			{ "TRYK_H_Booniehat_3CD", "", 100, { "", "", -1 } },
			{ "TRYK_H_Booniehat_AOR1", "", 100, { "", "", -1 } },
			{ "TRYK_H_Booniehat_AOR2", "", 100, { "", "", -1 } },
			{ "TRYK_H_Booniehat_CC", "", 100, { "", "", -1 } },
			{ "TRYK_H_Booniehat_MARPAT_Desert", "", 100, { "", "", -1 } },
			{ "TRYK_H_Booniehat_MARPAT_WOOD", "", 100, { "", "", -1 } },
			{ "TRYK_H_Booniehat_JSDF", "", 100, { "", "", -1 } },
			{ "TRYK_H_Booniehat_WOOD", "", 100, { "", "", -1 } },
			{ "H_Hat_camo", "", 100, { "", "", -1 } },
			{ "H_MilCap_dgtl", "Képi Camo", 100, { "", "", -1 } },
			{ "H_Shemag_olive", "Keffief Olive", 100, { "", "", -1 } },
			{ "H_ShemagOpen_tan", "", 100, { "", "", -1 } },
			{ "H_Shemag_olive_hs", "", 100, { "", "", -1 } },
			{ "H_Beret_Colonel", "Béret", 500, { "", "", -1 } },
			{ "H_HelmetB_camo", "Casque de Camouflage", 500, { "", "", -1 } },
			{ "TRYK_H_PASGT_BLK", "", 500, { "", "", -1 } },
			{ "TRYK_H_PASGT_OD", "", 500, { "", "", -1 } },
			{ "TRYK_H_PASGT_TAN", "", 500, { "", "", -1 } }
		};
		goggles[] = {
			{ "NONE", "Enlever les Lunettes", 0, { "", "", -1 } },
			{ "G_I_Diving", "Lunettes de Plongée", 20, { "", "", -1 } },
			{ "G_Balaclava_oli", "Baclava Verte", 20, { "", "", -1 } },
			{ "G_Balaclava_blk", "Baclava Noir", 20, { "", "", -1 } },
			{ "G_Shades_Black", "", 25, { "", "", -1 } },
			{ "G_Shades_Blue", "", 20, { "", "", -1 } },
			{ "G_Sport_Blackred", "", 20, { "", "", -1 } },
			{ "G_Sport_Checkered", "", 20, { "", "", -1 } },
			{ "G_Sport_Blackyellow", "", 20, { "", "", -1 } },
			{ "G_Sport_BlackWhite", "", 20, { "", "", -1 } },
			{ "G_Squares", "", 10, { "", "", -1 } },
			{ "G_Bandanna_aviator", "", 10, { "", "", -1 } },
			{ "G_Bandanna_tan", "", 10, { "", "", -1 } },
			{ "G_Bandanna_beast", "", 10, { "", "", -1 } },
			{ "G_Bandanna_khk", "", 10, { "", "", -1 } },
			{ "G_Bandanna_blk", "", 10, { "", "", -1 } },
			{ "G_Bandanna_oli", "", 10, { "", "", -1 } },
			{ "rpima_goggle_black", "", 200, { "", "", -1 } },
			{ "G_Lowprofile", "", 200, { "", "", -1 } },
			{ "G_Combat", "", 200, { "", "", -1 } },
			{ "Pomi_Goggles_Snd", "", 200, { "", "", -1 } }
		};
		vests[] = {
			{ "NONE", "Enlever le Gilet", 0, { "", "", -1 } },
			{ "V_BandollierB_cbr", "", 10000, { "", "", -1 } },
			{ "V_BandollierB_khk", "", 10000, { "", "", -1 } },
			{ "V_BandollierB_blk", "", 10000, { "", "", -1 } },
			{ "V_BandollierB_oli", "", 10000, { "", "", -1 } },
			{ "V_BandollierB_rgr", "", 10000, { "", "", -1 } },
			{ "V_Chestrig_khk", "", 15000, { "", "", -1 } },
			{ "V_Chestrig_blk", "", 15000, { "", "", -1 } },
			{ "V_Chestrig_oli", "", 15000, { "", "", -1 } },
			{ "TRYK_V_harnes_blk_L", "", 15000, { "", "", -1 } },
			{ "TRYK_V_harnes_od_L", "", 15000, { "", "", -1 } },
			{ "TRYK_V_harnes_TAN_L", "", 15000, { "", "", -1 } },
			{ "V_Chestrig_rgr", "", 15000, { "", "", -1 } },
			{ "V_TacVest_camo", "", 20000, { "", "", -1 } },
			{ "V_TacVest_khk", "", 20000, { "", "", -1 } },
			{ "V_TacVest_blk", "", 20000, { "", "", -1 } },
			{ "V_TacVest_oli", "", 20000, { "", "", -1 } },
			{ "TRYK_V_Bulletproof_BLK", "", 20000, { "", "", -1 } },
			{ "TRYK_V_PlateCarrier_coyo", "", 20000, { "", "", -1 } },
			{ "TRYK_V_PlateCarrier_wood", "", 20000, { "", "", -1 } }
		};
		backpacks[] = {
			{ "NONE", "Enlever le Sac a Dos", 0, { "", "", -1 } },
			{"PMC_AssaultPack_Blk", "", 5000, { "", "", -1 }},
			{ "PMC_AssaultPack_Tan", "", 5000, { "", "", -1 } },
			{ "B_mas_AssaultPack_black", "", 5000, { "", "", -1 } },
			{ "B_mas_AssaultPack_des", "", 5000, { "", "", -1 } },
			{ "B_mas_AssaultPack_rng", "", 5000, { "", "", -1 } },
			{ "B_mas_AssaultPack_mul", "", 5000, { "", "", -1 } },
			{ "B_AssaultPack_ocamo", "", 5000, { "", "", -1 } },
			{ "B_mas_Kitbag_black", "", 10000, { "", "", -1 } },
			{ "B_mas_Kitbag_des", "", 10000, { "", "", -1 } },
			{ "B_mas_Kitbag_rng", "", 10000, { "", "", -1 } },
			{ "B_mas_Kitbag_mul", "", 10000, { "", "", -1 } },
			{ "B_FieldPack_cbr", "", 10000, { "", "", -1 } },
			{ "B_FieldPack_khk", "", 10000, { "", "", -1 } },
			{ "B_FieldPack_blk", "", 10000, { "", "", -1 } },
			{ "B_FieldPack_oli", "", 10000, { "", "", -1 } },
			{ "PMC_B_Carryall_blk", "", 15000, { "", "", -1 } },
			{ "B_Carryall_ocamo", "", 15000, { "", "", -1 } },
			{ "B_Carryall_mcamo", "", 15000, { "", "", -1 } },
			{ "B_Carryall_oucamo", "", 15000, { "", "", -1 } },
			{ "B_Carryall_cbr", "", 15000, { "", "", -1 } },
			{ "TRYK_B_Coyotebackpack_BLK", "", 15000, { "", "", -1 } },
			{ "TRYK_B_Coyotebackpack", "", 15000, { "", "", -1 } },
			{ "TRYK_B_Coyotebackpack_OD", "", 15000, { "", "", -1 } },
			{ "TRYK_B_Carryall_JSDF", "", 15000, { "", "", -1 } },
			{ "TRYK_B_Carryall_blk", "", 15000, { "", "", -1 } },
			{ "TRYK_B_Carryall_wood", "", 15000, { "", "", -1 } }
		};
	};
	
	class criminel {
		title = "STR_Shops_C_Rebel";
		license = "criminel";
		side = "civ";
		uniforms[] = {
			{ "NONE", "Enlever l'uniforme", 0, { "", "", -1 } },
			{ "TRYK_U_B_BLOD_T", "", 10000, {"", "", -1} },
			{ "TRYK_U_B_BLKTAN_CombatUniform", "", 10000, { "", "", -1 } },
			{ "TRYK_U_B_BLKTAN_Tshirt", "", 10000, { "", "", -1 } },
			{ "TRYK_U_B_BLK_OD_Tshirt", "", 10000, { "", "", -1 } },
			{ "TRYK_U_B_ODTAN_Tshirt", "", 10000, { "", "", -1 } },
			{ "TRYK_U_B_BLK_TAN_2", 10000, { "", "", -1 } },
			{ "TRYK_U_B_fleece", "", 10000, { "", "", -1 } },
     		{ "TRYK_U_B_fleece_UCP", "", 10000, { "", "", -1 } },
			{ "TRYK_U_B_GRTANR_CombatUniformTshirt", "", 10000, { "", "", -1 } },
			{ "TRYK_U_B_OD_OD_R_CombatUniform", "", 10000, { "", "", -1 } },
			{ "TRYK_U_B_ODTANR_CombatUniformTshirt", "", 10000, { "", "", -1 } },
			{ "TRYK_U_B_BLK_OD_Rollup_CombatUniform", "", 10000, { "", "", -1 } },
			{ "TRYK_U_B_BLK_tan_Rollup_CombatUniform", "", 10000, { "", "", -1 } },
			{ "TRYK_U_pad_hood_Blod", "", 10000, { "", "", -1 } },
			{ "TRYK_U_pad_hood_BKT2", "", 10000, { "", "", -1 } },
			{ "TRYK_B_USMC_R", "", 10000, { "", "", -1 } },
			{ "U_I_G_Story_Protagonist_F", "", 10000, { "", "", -1 } }
		};
		headgear[] = {
			{ "NONE", "Enlever le Chapeau", 0, { "", "", -1 } },
			{ "H_ShemagOpen_tan", "", 850, { "", "", -1 } },
			{ "H_Shemag_olive", "", 850, { "", "", -1 } },
			{ "H_ShemagOpen_khk", "", 800, { "", "", -1 } },
			{ "H_HelmetO_ocamo", "", 2500, { "", "", -1 } },
			{ "H_MilCap_oucamo", "", 1200, { "", "", -1 } },
			{ "H_Bandanna_camo", "", 650, { "", "", -1 } }
		};
		goggles[] = {
			{ "NONE", "Enlever les Lunettes", 0, { "", "", -1 } },
			{ "G_Shades_Black", "", 25, { "", "", -1 } },
			{ "G_Shades_Blue", "", 20, { "", "", -1 } },
			{ "G_Sport_Blackred", "", 20, { "", "", -1 } },
			{ "G_Sport_Checkered", "", 20, { "", "", -1 } },
			{ "G_Sport_Blackyellow", "", 20, { "", "", -1 } },
			{ "G_Sport_BlackWhite", "", 20, { "", "", -1 } },
			{ "G_Squares", "", 10, { "", "", -1 } },
			{ "G_Lowprofile", "", 30, { "", "", -1 } },
			{ "G_Combat", "", 55, { "", "", -1 } }
		};
		vests[] = {
			{ "NONE", "Enlever le Gilet", 0, { "", "", -1 } },
			{ "V_BandollierB_cbr", "", 10000, { "", "", -1 } },
			{ "V_BandollierB_khk", "", 10000, { "", "", -1 } },
			{ "V_BandollierB_blk", "", 10000, { "", "", -1 } },
			{ "V_BandollierB_oli", "", 10000, { "", "", -1 } },
			{ "V_BandollierB_rgr", "", 10000, { "", "", -1 } },
			{ "V_Chestrig_khk", "", 15000, { "", "", -1 } },
			{ "V_Chestrig_blk", "", 15000, { "", "", -1 } },
			{ "V_Chestrig_oli", "", 15000, { "", "", -1 } },
			{ "TRYK_V_harnes_blk_L", "", 15000, { "", "", -1 } },
			{ "TRYK_V_harnes_od_L", "", 15000, { "", "", -1 } },
			{ "TRYK_V_harnes_TAN_L", "", 15000, { "", "", -1 } },
			{ "V_Chestrig_rgr", "", 15000, { "", "", -1 } },
			{ "V_TacVest_camo", "", 20000, { "", "", -1 } },
			{ "V_TacVest_khk", "", 20000, { "", "", -1 } },
			{ "V_TacVest_blk", "", 20000, { "", "", -1 } },
			{ "V_TacVest_oli", "", 20000, { "", "", -1 } },
			{ "TRYK_V_Bulletproof_BLK", "", 20000, { "", "", -1 } }
		};
		backpacks[] = {
			{ "NONE", "Enlever le Sac a Dos", 0, { "", "", -1 } },
			{"PMC_AssaultPack_Blk", "", 5000, { "", "", -1 }},
			{ "PMC_AssaultPack_Tan", "", 5000, { "", "", -1 } },
			{ "B_mas_AssaultPack_black", "", 5000, { "", "", -1 } },
			{ "B_mas_AssaultPack_des", "", 5000, { "", "", -1 } },
			{ "B_mas_AssaultPack_rng", "", 5000, { "", "", -1 } },
			{ "B_mas_AssaultPack_mul", "", 5000, { "", "", -1 } },
			{ "B_AssaultPack_ocamo", "", 5000, { "", "", -1 } },
			{ "B_mas_Kitbag_black", "", 10000, { "", "", -1 } },
			{ "B_mas_Kitbag_des", "", 10000, { "", "", -1 } },
			{ "B_mas_Kitbag_rng", "", 10000, { "", "", -1 } },
			{ "B_mas_Kitbag_mul", "", 10000, { "", "", -1 } },
			{ "B_FieldPack_cbr", "", 10000, { "", "", -1 } },
			{ "B_FieldPack_khk", "", 10000, { "", "", -1 } },
			{ "B_FieldPack_blk", "", 10000, { "", "", -1 } },
			{ "B_FieldPack_oli", "", 10000, { "", "", -1 } },
			{ "PMC_B_Carryall_blk", "", 15000, { "", "", -1 } },
			{ "B_Carryall_ocamo", "", 15000, { "", "", -1 } },
			{ "B_Carryall_mcamo", "", 15000, { "", "", -1 } },
			{ "B_Carryall_oucamo", "", 15000, { "", "", -1 } },
			{ "B_Carryall_cbr", "", 15000, { "", "", -1 } },
			{ "TRYK_B_Coyotebackpack_BLK", "", 15000, { "", "", -1 } },
			{ "TRYK_B_Coyotebackpack", "", 15000, { "", "", -1 } },
			{ "TRYK_B_Coyotebackpack_OD", "", 15000, { "", "", -1 } },
			{ "TRYK_B_Carryall_JSDF", "", 15000, { "", "", -1 } },
			{ "TRYK_B_Carryall_blk", "", 15000, { "", "", -1 } },
			{ "TRYK_B_Carryall_wood", "", 15000, { "", "", -1 } }
		};
	};
	
    class kart {
        title = "STR_Shops_C_Kart";
        license = "";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "U_C_Driver_1_black", "", 1500, { "", "", -1 } },
            { "U_C_Driver_1_blue", "", 1500, { "", "", -1 } },
            { "U_C_Driver_1_red", "", 1500, { "", "", -1 } },
            { "U_C_Driver_1_orange", "", 1500, { "", "", -1 } },
            { "U_C_Driver_1_green", "", 1500, { "", "", -1 } },
            { "U_C_Driver_1_white", "", 1500, { "", "", -1 } },
            { "U_C_Driver_1_yellow", "", 1500, { "", "", -1 } },
            { "U_C_Driver_2", "", 3500, { "", "", -1 } },
            { "U_C_Driver_1", "", 3600, { "", "", -1 } },
            { "U_C_Driver_3", "", 3700, { "", "", -1 } },
            { "U_C_Driver_4", "", 3700, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            { "H_RacingHelmet_1_black_F", "", 1000, { "", "", -1 } },
            { "H_RacingHelmet_1_red_F", "", 1000, { "", "", -1 } },
            { "H_RacingHelmet_1_white_F", "", 1000, { "", "", -1 } },
            { "H_RacingHelmet_1_blue_F", "", 1000, { "", "", -1 } },
            { "H_RacingHelmet_1_yellow_F", "", 1000, { "", "", -1 } },
            { "H_RacingHelmet_1_green_F", "", 1000, { "", "", -1 } },
            { "H_RacingHelmet_1_F", "", 2500, { "", "", -1 } },
            { "H_RacingHelmet_2_F", "", 2500, { "", "", -1 } },
            { "H_RacingHelmet_3_F", "", 2500, { "", "", -1 } },
            { "H_RacingHelmet_4_F", "", 2500, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } }
        };
    };
};
