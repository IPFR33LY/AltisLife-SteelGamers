/*
	ARRAY FORMAT:
		0: STRING (Classname)
		1: STRING (Display Name, leave as "" for default)
		2: SCALAR (Price)
		4: ARRAY (This is for limiting items to certain things)
			0: Variable to read from
			1: Variable Value Type
			2: What to compare to
*/
class Clothing {
	class bruce {
		title = "STR_Shops_C_Bruce";
		license = "";
		side = "civ";

		uniforms[] = {
			{ "NONE", "Enlever l'uniforme", 0, { "", "", -1 } },
			{ "U_C_Poloshirt_blue", "Poloshirt Blue", 250, { "", "", -1 } },
			{ "U_C_Poloshirt_burgundy", "Poloshirt Burgundy", 275, { "", "", -1 } },
			{ "U_C_Poloshirt_redwhite", "Poloshirt Red/White", 150, { "", "", -1 } },
			{ "U_C_Poloshirt_salmon", "Poloshirt Salmon", 175, { "", "", -1 } },
			{ "U_C_Poloshirt_stripped", "Poloshirt stripped", 125, { "", "", -1 } },
			{ "U_C_Poloshirt_tricolour", "Poloshirt Tricolor", 350, { "", "", -1 } },
			{ "cl3_hunter_bushman_hunter2_uniform", "", 350, { "", "", -1 } },			
			{ "cl3_citizen4_8_uniform", "", 350, { "", "", -1 } },			
			{ "cl3_citizen4_6_uniform", "", 350, { "", "", -1 } },			
			{ "cl3_c_poloshirt_1_uniform", "", 350, { "", "", -1 } },			
			{ "cl3_c_poloshirt_13_uniform", "", 350, { "", "", -1 } },			
			{ "cl3_c_poloshirt_2_uniform", "", 350, { "", "", -1 } },
			{ "cl3_c_poloshirt_5_uniform", "", 350, { "", "", -1 } },		
			{ "U_C_Poor_2", "Rag tagged clothes", 250, { "", "", -1 } },
			{ "U_IG_Guerilla2_2", "Green stripped shirt & Pants", 650, { "", "", -1 } },
			{ "U_IG_Guerilla3_1", "Brown Jacket & Pants", 735, { "", "", -1 } },
			{ "U_IG_Guerilla2_3", "The Outback Rangler", 1200, { "", "", -1 } },
			{ "U_C_HunterBody_grn", "The Hunters Look", 1500, { "", "", -1 } },
			{ "U_C_WorkerCoveralls", "Mechanic Coveralls", 2500, { "", "", -1 } },
			{ "U_OrestesBody", "Surfing On Land", 1100, { "", "", -1 } },
			{ "U_NikosAgedBody", "Casual Wears", 5000, { "", "", -1 } }
		};

		headgear[] = {
			{ "NONE", "Enlever le Chapeau", 0, { "", "", -1 } },
			{ "H_Bandanna_camo", "Camo Bandanna", 120, { "", "", -1 } },
			{ "H_Bandanna_surfer", "Surfer Bandanna", 130, { "", "", -1 } },
			{ "H_Bandanna_gry", "Grey Bandanna", 150, { "", "", -1 } },
			{ "H_Bandanna_cbr", "", 165, { "", "", -1 } },
			{ "H_Bandanna_surfer", "", 135, { "", "", -1 } },
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
			{ "NONE", "Enlever les Lunettes", 0, { "", "", -1 } },
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
			{ "NONE", "Enlever le Gilet", 0, { "", "", -1 } }
		};

		backpacks[] = {
			{ "NONE", "Enlever le Sac a Dos", 0, { "", "", -1 } },
			{ "CL3_ParachutePackCptAmer", "", 5000, { "", "", -1 } },
			{ "CL3_ParachutePack", "", 5000, { "", "", -1 } },			
			{ "B_AssaultPack_cbr", "", 2500, { "", "", -1 } },
			{ "B_Kitbag_mcamo", "", 4500, { "", "", -1 } },
			{ "B_TacticalPack_oli", "", 3500, { "", "", -1 } },
			{ "B_FieldPack_ocamo", "", 3000, { "", "", -1 } },
			{ "B_Bergen_sgg", "", 4500, { "", "", -1 } },
			{ "B_Kitbag_cbr", "", 4500, { "", "", -1 } },
			{ "B_Carryall_oli", "", 5000, { "", "", -1 } },
			{ "B_Carryall_khk", "", 5000, { "", "", -1 } }
		};
	};

	class cop {
		title = "STR_Shops_C_Police";
		license = "";
		side = "cop";

		uniforms[] = {
			{ "NONE", "Enlever l'uniforme", 0, { "", "", -1 } },
			{ "U_Rangemaster", "Cop Uniform", 0, { "", "", -1 } },
			{ "U_B_CombatUniform_mcam_tshirt", "", 0, { "life_coplevel", "SCALAR", 1 } },
			{ "U_B_CombatUniform_mcam_worn", "", 0, { "life_coplevel", "SCALAR", 2 } },
            { "U_B_Wetsuit", "", 0, { "life_coplevel", "SCALAR", 2 } },				
			{ "gign_uniform", "Uniforme G.I.G.N", 0, { "life_coplevel", "SCALAR", 8 } }	
		};

		headgear[] = {
			{ "NONE", "Enlever le Chapeau", 0, { "", "", -1 } },
			{ "H_HelmetB_plain_mcamo", "", 0, { "life_coplevel", "SCALAR", 1 } },
			{ "Straat_sniper_cap", "", 0, { "life_coplevel", "SCALAR", 1 } },			
			{ "H_Booniehat_mcamo", "", 0, { "life_coplevel", "SCALAR", 1 } },
			{ "H_MilCap_mcamo", "", 0, { "life_coplevel", "SCALAR", 2 } },
			{ "H_PilotHelmetFighter_B", "", 0, { "life_coplevel", "SCALAR", 5 } },
			{ "H_PilotHelmetHeli_B", "", 0, { "life_coplevel", "SCALAR", 5 } },
			{ "gign_Balaclava", "", 0, { "life_coplevel", "SCALAR", 8 } },
			{ "H_Beret_blk", "", 0, { "life_coplevel", "SCALAR", 7 } },
			{ "H_Beret_02", "", 0, { "life_coplevel", "SCALAR", 9 } },			
			{ "gign_helm", "", 0, { "life_coplevel", "SCALAR", 8 } },
			{ "gign_helm3", "", 0, { "life_coplevel", "SCALAR", 8 } },
			{ "gign_helm4", "", 0, { "life_coplevel", "SCALAR", 8 } }			
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
			{ "Mask_M40", "", 0, { "life_coplevel", "SCALAR", 2 } },
			{ "G_B_Diving", "", 0, { "life_coplevel", "SCALAR", 2 } },
			{ "G_Balaclava_combat", "", 0, { "life_coplevel", "SCALAR", 8 } },
			{ "G_Balaclava_lowprofile", "", 0, { "life_coplevel", "SCALAR", 8 } },
			{ "G_Balaclava_blk", "", 0, { "life_coplevel", "SCALAR", 8 } },			
			{ "G_Combat", "", 0, { "", "", -1 } }
		};

		vests[] = {
			{ "NONE", "Enlever le Gilet", 0, { "", "", -1 } },
			{ "V_Rangemaster_belt", "", 0, { "", "", -1 } },
			{ "V_PlateCarrier2_rgr", "", 0, { "", "", -1 } },
			{ "V_RebreatherB", "", 0, { "", "", -1 } },
			{ "gign_HeavyVest", "", 0, { "", "", -1 } },
			{ "gign_BlackVest", "", 0, { "", "", -1 } }			
		};

		backpacks[] = {
			{ "NONE", "Enlever le Sac a Dos", 0, { "", "", -1 } },
			{ "B_mas_Kitbag_black", "", 0, { "", "", -1 } },
			{ "B_mas_AssaultPack_black_AA", "", 0, { "", "", -1 } },
			{ "cl3_police_tacticalbelt", "", 0, { "", "", -1 } }
		};
	};

	class dive {
		title = "STR_Shops_C_Diving";
		license = "dive";
		side = "civ";

		uniforms[] = {
			{ "NONE", "Enlever l'uniforme", 0, { "", "", -1 } },
			{ "U_B_Wetsuit", "", 2000, { "", "", -1 } }
		};

		headgear[] = {
			{ "NONE", "Enlever le Chapeau", 0, { "", "", -1 } }
		};

		goggles[] = {
			{ "NONE", "Enlever les Lunettes", 0, { "", "", -1 } },
			{ "G_Diving", "", 500, { "", "", -1 } }
		};

		vests[] = {
			{ "NONE", "Enlever le Gilet", 0, { "", "", -1 } },
			{ "V_RebreatherB", "", 5000, { "", "", -1 } }
		};

		backpacks[] = {
			{ "NONE", "Enlever le Sac a Dos", 0, { "", "", -1 } }
		};
	};

	class reb {
		title = "STR_Shops_C_Rebel";
		license = "rebel";
		side = "civ";

		uniforms[] = {
			{ "NONE", "Enlever l'uniforme", 0, { "", "", -1 } },
			{ "U_I_Wetsuit", "Tenue de Plongée", 15000, {"", "", -1} },
			{ "U_I_GhillieSuit", "Ghillie Suit", 40000, { "", "", -1 } },
			{ "U_BG_Guerrilla_6_1", "Tenue de Guerilla", 10000, { "", "", -1 } },
			{ "U_I_CombatUniform_shortsleeve", "Treillis", 10000, { "", "", -1 } },
			{ "U_I_OfficerUniform", "Uniforme Rebelle", 15000, { "", "", -1 } },
			{ "U_BG_leader", "Uniforme de Guerillo", 7500, { "", "", -1 } },
			{ "CL3_cn_uniform", "Uniforme de Combat", 12000, { "", "", -1 } },
			{ "U_BG_Guerilla1_1", "Vetement de Guerilla", 9850, { "", "", -1 } },
			{ "U_I_G_Story_Protagonist_F", "Vieux Treillis", 10000, { "", "", -1 } },
			{ "U_I_FullGhillie_lsh", "Camouflage Complet", 80000, { "", "", -1 } },
			{ "U_O_FullGhillie_sard", "Camouflage Complet Blindée", 95000, { "", "", -1 } }
		};

		headgear[] = {
			{ "NONE", "Enlever le Chapeau", 0, { "", "", -1 } },
			{ "H_Watchcap_camo", "Bonnet Vert", 50, { "", "", -1 } },
			{ "H_Bandanna_khk_hs", "Bandana Vert", 40, { "", "", -1 } },
			{ "H_HelmetIA", "Casque de Combat", 90, { "", "", -1 } },
			{ "H_Booniehat_dgtl", "Chapeau de Brousse", 60, { "", "", -1 } },
			{ "H_MilCap_dgtl", "Képi Camo", 50, { "", "", -1 } },
			{ "H_Shemag_olive", "Keffief Olive", 65, { "", "", -1 } },
			{ "H_Beret_Colonel", "Béret", 65, { "", "", -1 } },
			{ "H_HelmetB_camo", "Casque de Camouflage", 100, { "", "", -1 } }
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
			{ "G_Squares", "", 10, { "", "", -1 } }
		};

		vests[] = {
			{ "NONE", "Enlever le Gilet", 0, { "", "", -1 } },
			{ "V_RebreatherIA", "Recycleur", 4000, { "", "", -1 } },
			{ "V_PlateCarrier1_rgr", "Gilet Léger", 6500, { "", "", -1 } },
			{ "V_I_G_resistanceLeader_F", "Gilet par-balles", 4500, { "", "", -1 } },
			{ "V_PlateCarrierIA2_dgtl", "Gilet Modulable Léger AV", 5000, { "", "", -1 } },
			{ "V_Chestrig_oli", "Gilet Modulable", 3000, { "", "", -1 } },
			{ "V_PlateCarrierIAGL_dgtl", "Gilet Lourd", 7800, { "", "", -1 } }
		};

		backpacks[] = {
			{ "NONE", "Enlever le Sac a Dos", 0, { "", "", -1 } },
			{ "B_mas_AssaultPack_rng", "Sac à Dos", 1000, { "", "", -1 }},
			{ "I_Mortar_01_support_F", "Sac à Dos", 2500, { "", "", -1 } },
			{ "B_Kitbag_rgr", "Sac à Dos", 3000, { "", "", -1 } },
			{ "B_Carryall_oli", "Sac à Dos", 45000, { "", "", -1 } },
			{ "CL3_ParachutePackPhyco", "Parachute Phyco", 3000, { "", "", -1 } }
		};
	};

	class criminel {
		title = "STR_Shops_C_Rebel";
		license = "criminel";
		side = "civ";

		uniforms[] = {
			{ "NONE", "Enlever l'uniforme", 0, { "", "", -1 } },
			{ "U_IG_Guerilla1_1", "", 5000, {"", "", -1} },
			{ "U_I_G_Story_Protagonist_F", "", 7500, { "", "", -1 } },
			{ "U_I_G_resistanceLeader_F", "", 11500, { "", "", -1 } },
			{ "U_O_SpecopsUniform_ocamo", "", 17500, { "", "", -1 } },
			{ "U_O_PilotCoveralls", "", 15610, { "", "", -1 } },
			{ "U_IG_leader", "Guerilla Leader", 15340, { "", "", -1 } },
			{ "U_O_GhillieSuit", "", 50000, { "", "", -1 } }
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
			{ "V_TacVest_khk", "", 12500, { "", "", -1 } },
			{ "V_BandollierB_cbr", "", 4500, { "", "", -1 } },
			{ "V_HarnessO_brn", "", 7500, { "", "", -1 } }
		};

		backpacks[] = {
			{ "NONE", "Enlever le Sac a Dos", 0, { "", "", -1 } },
			{"B_AssaultPack_cbr", "", 2500, { "", "", -1 }},
			{ "B_Kitbag_mcamo", "", 4500, { "", "", -1 } },
			{ "B_TacticalPack_oli", "", 3500, { "", "", -1 } },
			{ "B_FieldPack_ocamo", "", 3000, { "", "", -1 } },
			{ "B_Bergen_sgg", "", 4500, { "", "", -1 } },
			{ "B_Kitbag_cbr", "", 4500, { "", "", -1 } },
			{ "B_Carryall_oli", "", 5000, { "", "", -1 } },
			{ "B_Carryall_khk", "", 5000, { "", "", -1 } }
		};
	};
	
	class kart {
		title = "STR_Shops_C_Kart";
		license = "";
		side = "civ";

		uniforms[] = {
			{ "NONE", "Enlever l'uniforme", 0, { "", "", -1 } },
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
			{ "NONE", "Enlever le Chapeau", 0, { "", "", -1 } },
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
			{ "NONE", "Enlever les Lunettes", 0, { "", "", -1 } }
		};

		vests[] = {
			{ "NONE", "Enlever le Gilet", 0, { "", "", -1 } }
		};

		backpacks[] = {
			{ "NONE", "Enlever le Sac a Dos", 0, { "", "", -1 } }
		};
	};
};