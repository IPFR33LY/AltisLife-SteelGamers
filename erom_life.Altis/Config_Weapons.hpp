/*
*    Format:
*        level: ARRAY (This is for limiting items to certain things)
*            0: Variable to read from
*            1: Variable Value Type (SCALAR / BOOL / EQUAL)
*            2: What to compare to (-1 = Check Disabled)
*            3: Custom exit message (Optional)
*
*    items: { Classname, Itemname, BuyPrice, SellPrice }
*
*    Itemname only needs to be filled if you want to rename the original object name.
*
*    Weapon classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Weapons
*    Item classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Items
*
*/
class WeaponShops {
    //Armory Shops
    class gun {
        name = "Magasin d'Armement Civil";
        side = "civ";
        license = "gun";
        level = -1;
        msg = "";
        items[] = {
			{ "arifle_SDAR_F", "", 20000 },
            { "30Rnd_556x45_Stanag", "", 300 },
            { "hgun_Rook40_F", "", 6500 },
            { "hgun_Pistol_heavy_02_F", "", 9850 },
            { "hgun_ACPC2_F", "", 11500 },
            { "hgun_PDW2000_F", "", 20000 },
            { "hgun_mas_uzi_F", "UZI", 15500 },
            { "25Rnd_mas_9x19_Mag", "UZI", 80 },
            { "optic_ACO_grn_smg", "", 2500 },
            { "V_Rangemaster_belt", "", 4900 },
            { "16Rnd_9x21_Mag", "", 25 },
            { "9Rnd_45ACP_Mag", "", 45 },
            { "6Rnd_45ACP_Cylinder", "", 50 },
            { "30Rnd_9x21_Mag", "", 75 }
        };
    };
    class rebel {
        name = "Magasin d'équipement Rebelle";
        side = "civ";
        license = "rebel";
        level = -1;
        msg = "";
        items[] = {		
			{ "arifle_mas_ak_74m", "AK-47M", 100000 },
			{ "arifle_mas_ak_74m_c", "AK-47M Camo", 120000 },
			{ "30Rnd_mas_545x39_mag", "Munitions AK47M", 500 },
			{ "30Rnd_mas_545x39_T_mag", "Munitions AK47M Tracante", 100 },
			{ "arifle_mas_ak_74m_sf", "AK-47M SF", 100000 },
			{ "arifle_mas_ak_74m_sf", "AK-47M SF Camo", 120000 },
			{ "30Rnd_mas_545x39_mag", "Munition d'AKM", 500 },
			{ "30Rnd_mas_545x39_T_mag", "Munition d'AKM Tracante", 100 },
			{ "arifle_mas_m16", "M-16", 150000 },
			{ "30Rnd_mas_556x45_Stanag", "Munition M-16", 500 },
			{ "30Rnd_mas_556x45_T_Stanag", "Munition M-16 Tracante", 100 },
			{ "arifle_mas_hk416", "HK-416", 200000 },
			{ "arifle_mas_hk416_d", "HK-416 Camo désert", 210000 },
			{ "arifle_mas_hk416_v", "HK-416 Camo Foret", 210000 },
			{ "30Rnd_mas_556x45_Stanag", "Munition HK-416", 500 },
			{ "30Rnd_mas_556x45_T_Stanag", "Munition HK-416 Tracante", 100 },
			{ "hlc_rifle_ak12", "AK-12", 250000 },
			{ "hlc_30Rnd_545x39_B_AK", "Munition AK-12", 500 },
			{ "hlc_30Rnd_545x39_S_AK", "Munition AK-12 Tracante Vert", 100 },
			{ "hlc_30Rnd_545x39_t_ak", "Munition AK-12 Tracante Jaune", 100 },
			{ "hlc_45Rnd_545x39_t_rpk", "Munition AK-12 Tracante Rouge", 100 },
			{ "hlc_30Rnd_545x39_EP_ak", "Munition AK-12 Subsonic", 50 },
			{ "arifle_mas_l119", "L-119", 300000 },
			{ "arifle_mas_hk416_d", "L-119 Camo désert", 310000 },
			{ "arifle_mas_hk416_v", "L-119 Camo Foret", 310000 },
			{ "30Rnd_mas_556x45_Stanag", "Munition L-119", 500 },
			{ "30Rnd_mas_556x45_T_Stanag", "Munition L-119 Tracante", 100 },
			{ "arifle_mas_m4", "M-4", 300000 },
			{ "arifle_mas_m4_d", "M-4 Camo désert", 310000 },
			{ "arifle_mas_m4_v", "M-4 Camo Foret", 310000 },
			{ "30Rnd_mas_556x45_Stanag", "Munition M-4", 500 },
			{ "30Rnd_mas_556x45_T_Stanag", "Munition M-4 Tracante", 100 },
			{ "arifle_mas_mk16_l", "Scar-L", 350000 },
			{ "arifle_mas_mk16", "Scar-LS Camo désert", 360000 },
			{ "30Rnd_mas_556x45_Stanag", "Munition Scar-L et Scar-LS", 500 },
			{ "30Rnd_mas_556x45_T_Stanag", "Munition Scar-L et Scar-LS Tracante", 100 },
			{ "R3F_M4S90", "Fusils à Pompe", 400000 },
			{ "R3F_7Rnd_M4S90", "Munition Fusils à Pompe", 500 },
			{ "arifle_mas_akm", "AKM", 400000 },
			{ "arifle_mas_akms", "AKMS", 410000 },
			{ "arifle_mas_akms_c", "AKMS Foret", 430000 },
			{ "30Rnd_mas_762x39_mag", "Munition AKM et AKMS", 500 },
			{ "30Rnd_mas_762x39_T_mag", "Munition AKM et AKMS Tracante", 100 },
			{ "arifle_mas_g3", "G-3", 400000 },
			{ "30Rnd_mas_556x45_Stanag", "Munition G-3", 500 },
			{ "30Rnd_mas_556x45_T_Stanag", "Munition G-3 Tracante", 100 },
			{ "arifle_mas_mk17", "Scar-H", 400000 },
			{ "20Rnd_mas_762x51_Stanag", "Munition Scar-H", 500 },
			{ "20Rnd_mas_762x51_T_Stanag", "Munition Scar-H Tracante", 100 },
			{ "arifle_mas_m70", "M-70", 400000 },
			{ "30Rnd_mas_762x39_mag", "Munition M-70", 500 },
			{ "30Rnd_mas_762x39_T_mag", "Munition M-70 Tracante", 100 },
			{ "arifle_mas_fal", "FN-Fal", 500000 },
			{ "20Rnd_mas_762x51_Stanag", "Munition FN-Fal", 500 },
			{ "20Rnd_mas_762x51_T_Stanag", "Munition FN-Fal Tracante", 100 },
			{ "arifle_mas_fal", "RPK", 300000 },
			{ "hlc_45Rnd_545x39_t_rpk", "Munition RPK", 500 },
			{ "LMG_mas_M249_F", "M-249", 500000 },
			{ "LMG_mas_M249_F_d", "M-249 Camo désert", 510000 },
			{ "LMG_mas_M249_F_v", "M-249 Camo Foret", 510000 },
			{ "200Rnd_mas_556x45_Stanag", "Munition M-249", 1000 },
			{ "200Rnd_mas_556x45_T_Stanag", "Munition M-249 Tracante", 1000 },
			{ "LMG_mas_pkm_F", "RPK", 550000 },
			{ "100Rnd_mas_762x54_mag", "Munition PKM", 1000 },
			{ "100Rnd_mas_762x54_T_mag", "Munition PKM Tracante", 1000 },
			{ "LMG_mas_mk48_F", "MK-48", 600000 },
			{ "LMG_mas_mk48_F_d", "MK-48 Camo désert", 610000 },
			{ "LMG_mas_mk48_F_v", "MK-48 Camo Foret", 610000 },
			{ "100Rnd_mas_762x51_Stanag", "Munition MK-48", 1000 },
			{ "100Rnd_mas_762x51_T_Stanag", "Munition MK-48 Tracante", 1000 },
			{ "srifle_mas_ebr", "M-14 EBR", 500000 },
			{ "20Rnd_mas_762x51_Stanag", "Munition M-14 EBR", 1000 },
			{ "20Rnd_mas_762x51_T_Stanag", "Munition M-14 EBR Tracante", 1000 },
			{ "srifle_mas_m110", "M-110", 500000 },
			{ "20Rnd_mas_762x51_Stanag", "Munition M-110", 1000 },
			{ "20Rnd_mas_762x51_T_Stanag", "Munition M-110 Tracante", 1000 },
			{ "srifle_mas_m24", "M-24", 600000 },
			{ "srifle_mas_m24_d", "M-24 Camo désert", 610000 },
			{ "srifle_mas_m24_v", "M-24 Camo Foret", 610000 },
			{ "5Rnd_mas_762x51_Stanag", "Munition M-24", 1000 },
			{ "5Rnd_mas_762x51_T_Stanag", "Munition M-24 Tracante", 1000 },
			{ "R3F_FRF2", "FRF2", 700000 },
			{ "srifle_mas_m24_d", "FRF2 Camo désert", 710000 },
			{ "R3F_10Rnd_762x51_FRF2", "Munition FRF2", 1000 }
			{ "srifle_mas_ksvk", "KSVK", 1200000 },
			{ "srifle_mas_m24_d", "KSVK Camo désert", 1200000 },
			{ "5Rnd_mas_127x108_mag", "Munition KSVK", 1000 },
			{ "5Rnd_mas_127x108_T_mag", "Munition KSVK Tracante", 1000 },
			{ "M32_EP1", "Lanceur M-32", 120000 },
			{ "FlareGreen_M32_mag", "Munition M-32 Lumière Vert", 1000 },
			{ "FlareRed_M32_mag", "Munition M-32 Lumière Rouge", 1000 },
			{ "FlareYellow_M32_mag", "Munition M-32 Lumière Jaune", 1000 },
			{ "FlareCIR_M32_mag", "Munition M-32 Lumière IR", 1000 },
			{ "Smoke_M32_mag", "Munition M-32 Fumigene Blanc", 1000 },
			{ "SmokeRed_M32_mag", "Munition M-32 Fumigene Rouge", 1000 },
			{ "SmokeGreen_M32_mag", "Munition M-32 Fumigene Vert", 1000 },
			{ "SmokeYellow_M32_mag", "Munition M-32 Fumigene Jaune", 1000 },
			{ "SmokePurple_M32_mag", "Munition M-32 Fumigene Violet", 1000 },
			{ "optic_Aco", "ACO", 5000},
			{ "optic_mas_ACO_grn_camo", "ACO amo Vert Mire Vert", 5000},
			{ "optic_mas_Aco_camo", "ACO Camo vert Mire rouge", 5000},
			{ "optic_mas_aim", "AIMpoint", 5000},
			{ "optic_mas_aim_c", "AimPoint camo", 5000},
			{ "optic_Holosight", "Holoslight", 5000},
			{ "optic_Hamr", "Optique RCO", 7500 },
			{ "optic_MRCO", "Optique MRCO", 7500 },
			{ "optic_mas_acog", "Optique ACOG", 7500 },
			{ "optic_mas_Arco_blk", "Optique ARCO", 7500 },
			{ "optic_DMS", "DMS", 10000 },
			{ "optic_mas_DMS_c", "DMS Camo", 7500 },
			{ "optic_LRPS", "LRPS", 20000 },
			{ "optic_SOS", "SOS", 20000 },
			{ "acc_flashlight", "Lampe Torche", 700 },
			{ "acc_pointer_IR", "Viseur Laser", 700 },
			{ "ItemMap", "Carte d’Altis", 50 },
			{ "Rangefinder", "", 5000 },
			{ "ItemWatch", "Montre", 40 },
			{ "ItemRadio", "Radio", 100 },
			{ "ItemGPS", "GPS", 320 },
			{ "NVGoggles", "Lunette de Vision nocturne", 10000 },
			{ "ToolKit", "Kit de Réparation", 10000 },
			{ "FirstAidKit", "Kit de soin", 150 }
        };
    };
    class rebel_lvl_2 {
        name = "Magasin d'équipement Rebelle";
        side = "civ";
        license = "rebel_lvl_2";
        level = -1;
        msg = "";
        items[] = {
        };
    };
	class rebel_lvl_3 {
        name = "Magasin d'équipement Rebelle";
        side = "civ";
        license = "rebel_lvl_3";
        level = -1;
        msg = "";
        items[] = {
        };
    };
	class rebel_lvl_4 {
        name = "Magasin d'équipement Rebelle";
        side = "civ";
        license = "rebel_lvl_4";
        level = -1;
        msg = "";
        items[] = {
        };
    };
	class rebel_lvl_5 {
        name = "Magasin d'équipement Rebelle";
        side = "civ";
        license = "rebel_lvl_5";
        level = -1;
        msg = "";
        items[] = {
        };
    };
	class criminel {
        name = "Magasin d'équipement Criminel";
        side = "civ";
        license = "criminel";
        level = -1;
        msg = "";
        items[] = {
			{ "SMG_01_F", "Vermin SMG", 75000 },
            { "30Rnd_45ACP_Mag_SMG_01_Tracer_Red", "Munition de Vermin", 500 },
			{ "arifle_mas_mp5", "MP5", 150000 },
			{ "arifle_mas_mp5_d", "MP5", 200000 },
			{ "arifle_mas_mp5_v", "MP5", 200000 },
			{ "30Rnd_mas_9x21_Stanag", "Munition de MP5", 500 },
			{ "30Rnd_9x21_Mag", "Munition de MP5", 500 },
            { "hgun_PDW2000_F", "PDW", 150000 },
			{ "30Rnd_9x21_Mag", "Munition de PDW", 500 },
			{ "30Rnd_9x21_Red_Mag", "Munition de PDW Tracante", 100 },
			{ "arifle_TRG20_F", "TRG-20", 250000 },
            { "30Rnd_556x45_Stanag", "Munition  de TRG-20", 500 },
			{ "30Rnd_556x45_Stanag_Tracer_Red", "Munition  de TRG-20 Tracante", 100 },
			{ "hlc_rifle_aku12", "AK-12", 400000 },
            { "hlc_30Rnd_545x39_B_AK", "Munition Ak-12", 500 },
			{ "hlc_30Rnd_545x39_S_AK", "Munition Ak-12 Tracante Vert", 100 },
			{ "hlc_30Rnd_545x39_t_ak", "Munition Ak-12 Tracante Jaune", 100 },
			{ "hlc_45Rnd_545x39_t_rpk", "Munition Ak-12 Tracante Rouge", 100 },
			{ "hlc_30Rnd_545x39_EP_ak", "Munition Ak-12 Subsonic", 100 },
			{ "arifle_mas_aks74u", "AK-74u", 500000 },
			{ "arifle_mas_aks74u_c", "AK-74u Camo", 550000 },
			{ "30Rnd_mas_545x39_mag", "Munition Ak-74u", 500 },
			{ "30Rnd_mas_545x39_T_mag", "Munition Ak-74u Tracante", 100 },
			{ "arifle_mas_bizon", "Bizon", 600000 },
			{ "64Rnd_mas_9x18_mag", "Munition Bizon", 500 },
			{ "hlc_rifle_aek971", "AEK", 750000 },
			{ "hlc_30Rnd_545x39_S_AK", "Munition AEK", 500 },
			{ "HLC_Optic_1p29", "Viseur AEK", 10000 },
			{ "optic_mas_ACO_grn_camo", "Viseur point vert", 5000 },
            { "optic_mas_aim", "Viseur AIMPoint", 5000 },
			{ "optic_Holosight", "Viseur AIMPoint", 6000 },
            { "optic_MRCO", "Viseur MRCO", 7500 },
			{ "optic_Hamr", "Viseur RCO", 10000 },
            { "Rangefinder", "", 250 }			
        };
    };
    class gang {
        name = "Armurerie Planque de Gang";
        side = "civ";
        license = "";
        level = -1;
        msg = "";
        items[] = {
            { "hgun_Rook40_F", "", 1500 },
            { "hgun_Pistol_heavy_02_F", "", 2500 },
            { "hgun_ACPC2_F", "", 4500 },
            { "hgun_PDW2000_F", "", 9500 },
            { "optic_ACO_grn_smg", "", 950 },
            { "V_Rangemaster_belt", "", 1900 },
            { "16Rnd_9x21_Mag", "", 25 },
            { "9Rnd_45ACP_Mag", "", 45 },
            { "6Rnd_45ACP_Cylinder", "", 50 },
            { "30Rnd_9x21_Mag", "", 75 }
        };
    };

    //Basic Shops
    class genstore {
        name = "Centre Commercial";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
			{ "ItemMap", "Carte d’Altis", 50 },
			{ "ItemWatch", "Montre", 40 },
			{ "ItemRadio", "Radio", 0 },
			{ "ItemGPS", "GPS", 320 },
			{ "ToolKit", "Kit de Réparation", 10000 },
			{ "FirstAidKit", "Kit de soin", 1000 },
			{ "NVGoggles", "JVN", 1200 },
			{ "Chemlight_red", "Baton Lumineux Rouge", 300 },
			{ "Chemlight_yellow", "Baton Lumineux Jaunes", 300 },
			{ "Chemlight_green", "Baton Lumineux Vert", 300 },
			{ "Chemlight_blue", "Baton Lumineux Bleu", 300 }
        };
        mags[] = {};
    };

    class f_station_store {
        name = "Altis Fuel Station Store";
        side = "";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "Binocular", "", 750, -1 },
            { "ItemGPS", "", 500, 45 },
            { "ItemMap", "", 250, 35 },
            { "ItemCompass", "", 250, 25 },
            { "ItemWatch", "", 250, -1 },
            { "ToolKit", "", 1250, 75 },
            { "FirstAidKit", "", 750, 65 },
            { "NVGoggles", "", 10000, 980 },
            { "Chemlight_red", "", 1500, -1 },
            { "Chemlight_yellow", "", 1500, 50 },
            { "Chemlight_green", "", 1500, 50 },
            { "Chemlight_blue", "", 1500, 50 }
        };
        mags[] = {};
    };

    //Cop Shops
    class cop_recrue {
        name = "Magasin d'équipement de Gendarmerie";
        side = "cop";
        license = "";
        level = 1;
        msg = "";
        items[] = {
		    { "kosmos_taser_pistol", "Tazer", 0 },
		    { "KMS_Taser_Mag", "Munition Taser", 0 },
        	{ "R3F_MP5A5", "MP5", 0 },
			{ "R3F_30Rnd_9x19_MP5", "Munition M5", 0 },
			{ "ItemCompass", "Boussole", 0 },
			{ "ItemMap", "Carte d’Altis", 0 },
			{ "ItemWatch", "Montre", 0 },
			{ "ItemRadio", "Radio", 0 },
			{ "ItemGPS", "GPS", 0 },
			{ "ToolKit", "Kit de Réparation", 0 },
			{ "Medikit", "Trousse de soin", 0 },
			{ "FirstAidKit", "Kit de soin", 0 },
            { "Rangefinder", "", 0 },,	
			{ "NVGoggles_OPFOR", "Lunette de Vision nocturne", 0 }
        };
    };
    class cop_brigadier {
        name = "Magasin d'équipement de Gendarmerie";
        side = "cop";
        license = "";
        level = 2;
        msg = "Vous devez etre Gardien de la Paix ";
        items[] = {
		    { "kosmos_taser_pistol", "Tazer", 0 },
		    { "KMS_Taser_Mag", "Munition Taser", 0 },
			{ "hgun_mas_usp_F", "USP", 0 },
			{ "12Rnd_mas_45acp_Mag", "Munition USP", 0 },
		    { "R3F_MP5A5", "MP5", 0 },
		    { "R3F_30Rnd_9x19_MP5", "Munition MP5", 0 },
			{ "R3F_Famas_surb", "Famas", 0 },
			{ "R3F_30Rnd_556x45_FAMAS", "Munition Famas", 0 },
			{ "R3F_30Rnd_556x45_TRACER_FAMAS", "Munition Tracante Famas", 0 },
			{ "optic_Aco", "Lunette Aimpoint", 0 },
			{ "acc_pointer_IR", "Pointeur Laser", 0 },
			{ "acc_flashlight", "Lampe Torche", 0 },
			{ "ItemCompass", "Boussole", 0 },
			{ "ItemMap", "Carte d’Altis", 0 },
			{ "ItemWatch", "Montre", 0 },
			{ "ItemRadio", "Radio", 0 },
			{ "ItemGPS", "GPS", 0 },
            { "Rangefinder", "", 0 },	
			{ "ToolKit", "Kit de Réparation", 0 },
			{ "Medikit", "Trousse de soin", 0 },
			{ "FirstAidKit", "Kit de soin", 0 },
			{ "NVGoggles_OPFOR", "Lunette de Vision nocturne", 0 }
        };
    };
    class cop_brigadierchef {
        name = "Magasin d'équipement de Gendarmerie";
        side = "cop";
        license = "";
        level = 3;
        msg = "Vous devez etre Brigadier";
        items[] = {
		    { "kosmos_taser_pistol", "Tazer", 0 },
		    { "KMS_Taser_Mag", "Munition Taser", 0 },
			{ "hgun_mas_usp_F", "USP", 0 },
			{ "12Rnd_mas_45acp_Mag", "Munition USP", 0 },
		    { "R3F_MP5A5", "MP5", 0 },
		    { "R3F_30Rnd_9x19_MP5", "Munition MP5", 0 },
			{ "R3F_Famas_surb", "Famas", 0 },
			{ "R3F_Famas_surb_HG", "Famas HG", 0 },
			{ "R3F_Famas_F1", "Famas F1", 0 },
			{ "R3F_30Rnd_556x45_FAMAS", "Munition Famas", 0 },
			{ "R3F_30Rnd_556x45_TRACER_FAMAS", "Munition Tracante Famas", 0 },
			{ "optic_Aco", "Lunette Aimpoint", 0 },
			{ "optic_Holosight", "Lunette Holoslghit", 0 },
			{ "optic_Arco", "Lunette ARCO", 0 },
			{ "acc_pointer_IR", "Pointeur Laser", 0 },
			{ "acc_flashlight", "Lampe Torche", 0 },
			{ "ItemCompass", "Boussole", 0 },
			{ "ItemMap", "Carte d’Altis", 0 },
			{ "ItemWatch", "Montre", 0 },
			{ "ItemRadio", "Radio", 0 },
			{ "ItemGPS", "GPS", 0 },
            { "Rangefinder", "", 0 },	
			{ "ToolKit", "Kit de Réparation", 0 },
			{ "Medikit", "Trousse de soin", 0 },
			{ "FirstAidKit", "Kit de soin", 0 },
			{ "NVGoggles_OPFOR", "Lunette de Vision nocturne", 0 }
        };
    };
	class cop_sergent {
        name = "Magasin d'équipement de Gendarmerie";
        side = "cop";
        license = "";
        level = 4;
        msg = "Vous devez etre Brigadier-Chef";
        items[] = {
		    { "kosmos_taser_pistol", "Tazer", 0 },
		    { "KMS_Taser_Mag", "Munition Taser", 0 },
			{ "hgun_mas_usp_F", "USP", 0 },
			{ "12Rnd_mas_45acp_Mag", "Munition USP", 0 },
		    { "R3F_MP5A5", "MP5", 0 },
		    { "R3F_30Rnd_9x19_MP5", "Munition MP5", 0 },
			{ "R3F_Famas_surb", "Famas", 0 },
			{ "R3F_Famas_surb_HG", "Famas HG", 0 },
			{ "R3F_Famas_F1", "Famas F1", 0 },
			{ "R3F_Famas_F1_HG", "Famas F1 HG", 0 },
			{ "R3F_Famas_G2_M203", "Famas G2 M203", 0 },
			{ "R3F_30Rnd_556x45_FAMAS", "Munition Famas", 0 },
			{ "R3F_30Rnd_556x45_TRACER_FAMAS", "Munition Tracante Famas", 0 },
			{ "optic_Aco", "Lunette Aimpoint", 0 },
			{ "optic_Holosight", "Lunette Holoslghit", 0 },
			{ "optic_Arco", "Lunette ARCO", 0 },
			{ "acc_pointer_IR", "Pointeur Laser", 0 },
			{ "acc_flashlight", "Lampe Torche", 0 },
			{ "ItemCompass", "Boussole", 0 },
			{ "ItemMap", "Carte d’Altis", 0 },
			{ "ItemWatch", "Montre", 0 },
			{ "ItemRadio", "Radio", 0 },
			{ "ItemGPS", "GPS", 0 },
            { "Rangefinder", "", 0 },
			{ "ToolKit", "Kit de Réparation", 0 },
			{ "Medikit", "Trousse de soin", 0 },
			{ "FirstAidKit", "Kit de soin", 0 },
			{ "NVGoggles_OPFOR", "Lunette de Vision nocturne", 0 }
        };
    };
	class cop_adjudant {
        name = "Magasin d'équipement de Gendarmerie";
        side = "cop";
        license = "";
        level = 5;
        msg = "Vous devez etre Major";
        items[] = {
		    { "kosmos_taser_pistol", "Tazer", 0 },
		    { "KMS_Taser_Mag", "Munition Taser", 0 },
			{ "hgun_mas_usp_F", "USP", 0 },
			{ "12Rnd_mas_45acp_Mag", "Munition USP", 0 },
		    { "R3F_MP5A5", "MP5", 0 },
		    { "R3F_30Rnd_9x19_MP5", "Munition MP5", 0 },
			{ "R3F_Famas_surb", "Famas", 0 },
			{ "R3F_Famas_surb_HG", "Famas HG", 0 },
			{ "R3F_Famas_F1", "Famas F1", 0 },
			{ "R3F_Famas_F1_HG", "Famas F1 HG", 0 },
			{ "R3F_Famas_G2_M203", "Famas G2 M203", 0 },
			{ "R3F_30Rnd_556x45_FAMAS", "Munition Famas", 0 },
			{ "R3F_30Rnd_556x45_TRACER_FAMAS", "Munition Tracante Famas", 0 },
			{ "R3F_HK416M_HG", "HK-416 HG", 0 },
			{ "R3F_HK416M_M203", "HK-416 HG", 0 },
			{ "R3F_30Rnd_556x45_HK416", "Munition HK-416", 0 },
			{ "R3F_30Rnd_556x45_TRACER_HK416", "Munition Tracante HK-416", 0 },
			{ "1Rnd_Smoke_Grenade_shell", "Munition GL Fumigene Blanc", 0 },
			{ "UGL_FlareWhite_F", "Munition GL Lumiière Blanche", 0 },
			{ "optic_Aco", "Lunette Aimpoint", 0 },
			{ "optic_Holosight", "Lunette Holoslghit", 0 },
			{ "optic_Arco", "Lunette ARCO", 0 },
			{ "acc_pointer_IR", "Pointeur Laser", 0 },
			{ "acc_flashlight", "Lampe Torche", 0 },
			{ "ItemCompass", "Boussole", 0 },
			{ "ItemMap", "Carte d’Altis", 0 },
			{ "ItemWatch", "Montre", 0 },
			{ "ItemRadio", "Radio", 0 },
			{ "ItemGPS", "GPS", 0 },
            { "Rangefinder", "", 0 },
			{ "ToolKit", "Kit de Réparation", 0 },
			{ "Medikit", "Trousse de soin", 0 },
			{ "FirstAidKit", "Kit de soin", 0 },
			{ "NVGoggles_OPFOR", "Lunette de Vision nocturne", 0 }
        };
    };
	class cop_adjudantchef {
        name = "Magasin d'équipement de Gendarmerie";
        side = "cop";
        license = "";
        level = 6;
        msg = "Vous devez etre Lieutenant";
        items[] = {
		    { "kosmos_taser_pistol", "Tazer", 0 },
		    { "KMS_Taser_Mag", "Munition Taser", 0 },
			{ "hgun_mas_usp_F", "USP", 0 },
			{ "12Rnd_mas_45acp_Mag", "Munition USP", 0 },
		    { "R3F_MP5A5", "MP5", 0 },
		    { "R3F_30Rnd_9x19_MP5", "Munition MP5", 0 },
			{ "R3F_Famas_surb", "Famas", 0 },
			{ "R3F_Famas_surb_HG", "Famas HG", 0 },
			{ "R3F_Famas_F1", "Famas F1", 0 },
			{ "R3F_Famas_F1_HG", "Famas F1 HG", 0 },
			{ "R3F_Famas_G2_M203", "Famas G2 M203", 0 },
			{ "R3F_30Rnd_556x45_FAMAS", "Munition Famas", 0 },
			{ "R3F_30Rnd_556x45_TRACER_FAMAS", "Munition Tracante Famas", 0 },
			{ "R3F_HK416M_HG", "HK-416 HG", 0 },
			{ "R3F_HK416M_M203", "HK-416 HG", 0 },
			{ "R3F_30Rnd_556x45_HK416", "Munition HK-416", 0 },
			{ "R3F_30Rnd_556x45_TRACER_HK416", "Munition Tracante HK-416", 0 },
			{ "1Rnd_Smoke_Grenade_shell", "Munition GL Fumigene Blanc", 0 },
			{ "UGL_FlareWhite_F", "Munition GL Lumiière Blanche", 0 },
			{ "arifle_mas_mk16_l", "Scar-L", 0 },
			{ "30Rnd_mas_556x45_Stanag", "Munition Scar-L", 0 },
			{ "30Rnd_mas_556x45_T_Stanag", "Munition Tracante Scar-L", 0 },
			{ "LMG_mas_M249_F", "M-249", 0 },
			{ "200Rnd_mas_556x45_Stanag", "Munition M-249", 0 },
			{ "200Rnd_mas_556x45_T_Stanag", "Munition Tracante M-249", 0 },
			{ "optic_Aco", "Lunette Aimpoint", 0 },
			{ "optic_Holosight", "Lunette Holoslghit", 0 },
			{ "optic_Arco", "Lunette ARCO", 0 },
			{ "acc_pointer_IR", "Pointeur Laser", 0 },
			{ "acc_flashlight", "Lampe Torche", 0 },
			{ "ItemCompass", "Boussole", 0 },
			{ "ItemMap", "Carte d’Altis", 0 },
			{ "ItemWatch", "Montre", 0 },
			{ "ItemRadio", "Radio", 0 },
			{ "ItemGPS", "GPS", 0 },
            { "Rangefinder", "", 0 },	
			{ "ToolKit", "Kit de Réparation", 0 },
			{ "Medikit", "Trousse de soin", 0 },
			{ "FirstAidKit", "Kit de soin", 0 },
			{ "NVGoggles_OPFOR", "Lunette de Vision nocturne", 0 }
        };
    };
	class cop_major {
        name = "Magasin d'équipement de Gendarmerie";
        side = "cop";
        license = "";
        level = 7;
        msg = "Vous devez etre Capitaine";
        items[] = {
		    { "kosmos_taser_pistol", "Tazer", 0 },
		    { "KMS_Taser_Mag", "Munition Taser", 0 },
			{ "hgun_mas_usp_F", "USP", 0 },
			{ "12Rnd_mas_45acp_Mag", "Munition USP", 0 },
		    { "R3F_MP5A5", "MP5", 0 },
		    { "R3F_30Rnd_9x19_MP5", "Munition MP5", 0 },
			{ "R3F_Famas_surb", "Famas", 0 },
			{ "R3F_Famas_surb_HG", "Famas HG", 0 },
			{ "R3F_Famas_F1", "Famas F1", 0 },
			{ "R3F_Famas_F1_HG", "Famas F1 HG", 0 },
			{ "R3F_Famas_G2_M203", "Famas G2 M203", 0 },
			{ "R3F_30Rnd_556x45_FAMAS", "Munition Famas", 0 },
			{ "R3F_30Rnd_556x45_TRACER_FAMAS", "Munition Tracante Famas", 0 },
			{ "R3F_HK416M_HG", "HK-416 HG", 0 },
			{ "R3F_HK416M_M203", "HK-416 HG", 0 },
			{ "R3F_30Rnd_556x45_HK416", "Munition HK-416", 0 },
			{ "R3F_30Rnd_556x45_TRACER_HK416", "Munition Tracante HK-416", 0 },
			{ "1Rnd_Smoke_Grenade_shell", "Munition GL Fumigene Blanc", 0 },
			{ "UGL_FlareWhite_F", "Munition GL Lumiière Blanche", 0 },
			{ "arifle_mas_mk16_l", "Scar-L", 0 },
			{ "30Rnd_mas_556x45_Stanag", "Munition Scar-L", 0 },
			{ "30Rnd_mas_556x45_T_Stanag", "Munition Tracante Scar-L", 0 },
			{ "LMG_mas_M249_F", "M-249", 0 },
			{ "200Rnd_mas_556x45_Stanag", "Munition M-249", 0 },
			{ "200Rnd_mas_556x45_T_Stanag", "Munition Tracante M-249", 0 },
			{ "LMG_mas_M249_F", "MK-48", 0 },
			{ "100Rnd_mas_762x51_Stanag", "Munition MK-48", 0 },
			{ "100Rnd_mas_762x51_T_Stanag", "Munition Tracante MK-48", 0 },
			{ "optic_Aco", "Lunette Aimpoint", 0 },
			{ "optic_Holosight", "Lunette Holoslghit", 0 },
			{ "optic_Arco", "Lunette ARCO", 0 },
			{ "acc_pointer_IR", "Pointeur Laser", 0 },
			{ "acc_flashlight", "Lampe Torche", 0 },
			{ "ItemCompass", "Boussole", 0 },
			{ "ItemMap", "Carte d’Altis", 0 },
			{ "ItemWatch", "Montre", 0 },
			{ "ItemRadio", "Radio", 0 },
			{ "ItemGPS", "GPS", 0 },
            { "Rangefinder", "", 0 },	
			{ "ToolKit", "Kit de Réparation", 0 },
			{ "Medikit", "Trousse de soin", 0 },
			{ "FirstAidKit", "Kit de soin", 0 },
			{ "NVGoggles_OPFOR", "Lunette de Vision nocturne", 0 }
        };
    };
	class cop_lieutenant {
        name = "Magasin d'équipement de Gendarmerie";
        side = "cop";
        license = "";
        level = 8;
        msg = "Vous devez etre Commandant";
        items[] = {
		    { "kosmos_taser_pistol", "Tazer", 0 },
		    { "KMS_Taser_Mag", "Munition Taser", 0 },
			{ "hgun_mas_usp_F", "USP", 0 },
			{ "12Rnd_mas_45acp_Mag", "Munition USP", 0 },
		    { "R3F_MP5A5", "MP5", 0 },
		    { "R3F_30Rnd_9x19_MP5", "Munition MP5", 0 },
			{ "R3F_Famas_surb", "Famas", 0 },
			{ "R3F_Famas_surb_HG", "Famas HG", 0 },
			{ "R3F_Famas_F1", "Famas F1", 0 },
			{ "R3F_Famas_F1_HG", "Famas F1 HG", 0 },
			{ "R3F_Famas_G2_M203", "Famas G2 M203", 0 },
			{ "R3F_30Rnd_556x45_FAMAS", "Munition Famas", 0 },
			{ "R3F_30Rnd_556x45_TRACER_FAMAS", "Munition Tracante Famas", 0 },
			{ "R3F_HK416M_HG", "HK-416 HG", 0 },
			{ "R3F_HK416M_M203", "HK-416 HG", 0 },
			{ "R3F_30Rnd_556x45_HK416", "Munition HK-416", 0 },
			{ "R3F_30Rnd_556x45_TRACER_HK416", "Munition Tracante HK-416", 0 },
			{ "1Rnd_Smoke_Grenade_shell", "Munition GL Fumigene Blanc", 0 },
			{ "UGL_FlareWhite_F", "Munition GL Lumiière Blanche", 0 },
			{ "arifle_mas_mk16_l", "Scar-L", 0 },
			{ "30Rnd_mas_556x45_Stanag", "Munition Scar-L", 0 },
			{ "30Rnd_mas_556x45_T_Stanag", "Munition Tracante Scar-L", 0 },
			{ "LMG_mas_M249_F", "M-249", 0 },
			{ "200Rnd_mas_556x45_Stanag", "Munition M-249", 0 },
			{ "200Rnd_mas_556x45_T_Stanag", "Munition Tracante M-249", 0 },
			{ "LMG_mas_M249_F", "MK-48", 0 },
			{ "100Rnd_mas_762x51_Stanag", "Munition MK-48", 0 },
			{ "100Rnd_mas_762x51_T_Stanag", "Munition Tracante MK-48", 0 },
			{ "optic_Aco", "Lunette Aimpoint", 0 },
			{ "optic_Holosight", "Lunette Holoslghit", 0 },
			{ "optic_Arco", "Lunette ARCO", 0 },
			{ "acc_pointer_IR", "Pointeur Laser", 0 },
			{ "acc_flashlight", "Lampe Torche", 0 },
			{ "ItemCompass", "Boussole", 0 },
			{ "ItemMap", "Carte d’Altis", 0 },
			{ "ItemWatch", "Montre", 0 },
			{ "ItemRadio", "Radio", 0 },
			{ "ItemGPS", "GPS", 0 },
            { "Rangefinder", "", 0 },	
			{ "ToolKit", "Kit de Réparation", 0 },
			{ "Medikit", "Trousse de soin", 0 },
			{ "FirstAidKit", "Kit de soin", 0 },
			{ "NVGoggles_OPFOR", "Lunette de Vision nocturne", 0 }
        };
    };
	class cop_capitaine {
        name = "Magasin d'équipement de Gendarmerie";
        side = "cop";
        license = "";
        level = 9;
        msg = "Vous devez etre Comissaire";
        items[] = {
		    { "kosmos_taser_pistol", "Tazer", 0 },
		    { "KMS_Taser_Mag", "Munition Taser", 0 },
			{ "hgun_mas_usp_F", "USP", 0 },
			{ "12Rnd_mas_45acp_Mag", "Munition USP", 0 },
		    { "R3F_MP5A5", "MP5", 0 },
		    { "R3F_30Rnd_9x19_MP5", "Munition MP5", 0 },
			{ "R3F_Famas_surb", "Famas", 0 },
			{ "R3F_Famas_surb_HG", "Famas HG", 0 },
			{ "R3F_Famas_F1", "Famas F1", 0 },
			{ "R3F_Famas_F1_HG", "Famas F1 HG", 0 },
			{ "R3F_Famas_G2_M203", "Famas G2 M203", 0 },
			{ "R3F_30Rnd_556x45_FAMAS", "Munition Famas", 0 },
			{ "R3F_30Rnd_556x45_TRACER_FAMAS", "Munition Tracante Famas", 0 },
			{ "R3F_HK416M_HG", "HK-416 HG", 0 },
			{ "R3F_HK416M_M203", "HK-416 HG", 0 },
			{ "R3F_30Rnd_556x45_HK416", "Munition HK-416", 0 },
			{ "R3F_30Rnd_556x45_TRACER_HK416", "Munition Tracante HK-416", 0 },
			{ "1Rnd_Smoke_Grenade_shell", "Munition GL Fumigene Blanc", 0 },
			{ "UGL_FlareWhite_F", "Munition GL Lumiière Blanche", 0 },
			{ "arifle_mas_mk16_l", "Scar-L", 0 },
			{ "30Rnd_mas_556x45_Stanag", "Munition Scar-L", 0 },
			{ "30Rnd_mas_556x45_T_Stanag", "Munition Tracante Scar-L", 0 },
			{ "LMG_mas_M249_F", "M-249", 0 },
			{ "200Rnd_mas_556x45_Stanag", "Munition M-249", 0 },
			{ "200Rnd_mas_556x45_T_Stanag", "Munition Tracante M-249", 0 },
			{ "LMG_mas_M249_F", "MK-48", 0 },
			{ "100Rnd_mas_762x51_Stanag", "Munition MK-48", 0 },
			{ "100Rnd_mas_762x51_T_Stanag", "Munition Tracante MK-48", 0 },
			{ "optic_Aco", "Lunette Aimpoint", 0 },
			{ "optic_Holosight", "Lunette Holoslghit", 0 },
			{ "optic_Arco", "Lunette ARCO", 0 },
			{ "acc_pointer_IR", "Pointeur Laser", 0 },
			{ "acc_flashlight", "Lampe Torche", 0 },
			{ "ItemCompass", "Boussole", 0 },
			{ "ItemMap", "Carte d’Altis", 0 },
			{ "ItemWatch", "Montre", 0 },
			{ "ItemRadio", "Radio", 0 },
			{ "ItemGPS", "GPS", 0 },
			{ "ToolKit", "Kit de Réparation", 0 },
			{ "Medikit", "Trousse de soin", 0 },
			{ "FirstAidKit", "Kit de soin", 0 },
            { "Rangefinder", "", 0 },
			{ "NVGoggles_OPFOR", "Lunette de Vision nocturne", 0 }
        };
    };
	
	class cop_commandant {
        name = "Magasin d'équipement de Gendarmerie";
        side = "cop";
        license = "";
        level = 10;
        msg = "Vous devez etre Membre de la BRI";
        items[] = {
			{ "acc_pointer_IR", "Pointeur Laser", 0 },
			{ "acc_flashlight", "Lampe Torche", 0 },
			{ "ItemCompass", "Boussole", 0 },
			{ "ItemMap", "Carte d’Altis", 0 },
			{ "ItemWatch", "Montre", 0 },
			{ "ItemRadio", "Radio", 0 },
			{ "ItemGPS", "GPS", 0 },
            { "Rangefinder", "", 0 },	
			{ "ToolKit", "Kit de Réparation", 0 },
			{ "Medikit", "Trousse de soin", 0 },
			{ "FirstAidKit", "Kit de soin", 0 },
			{ "NVGoggles_OPFOR", "Lunette de Vision nocturne", 0 }
        };
    };
	class cop_general {
        name = "Magasin d'équipement de Gendarmerie";
        side = "cop";
        license = "";
        level = 11;
        msg = "Vous devez etre Membre du RAID";
        items[] = {
		    { "R3F_HK417L", "HK-417", 0 },
		    { "arifle_mas_hk417c", "HK-417C", 0 },
            { "R3F_20Rnd_762x51_HK417", "Munition HK-417, 0 },
		    { "R3F_20Rnd_762x51_TRACER_HK417", "Munition Tracante HK417", 0 },
			{ "R3F_M4S90", "Fusils à Pompe", 0 },
		    { "R3F_7Rnd_M4S90", "Munition Fusils à Pompe", 0 },
			{ "R3F_M107", "Barette 12.7", 0 },
		    { "R3F_10Rnd_127x99_M107", "Munition Barette", 0 },			
			{ "HandGrenade_Stone", "Grenade Flash", 0 },
			{ "optic_Aco", "Lunette Aimpoint", 0 },
			{ "optic_Holosight", "Lunette Holoslghit", 0 },
			{ "optic_Arco", "Lunette ARCO", 0 },
			{ "optic_DMS", "Lunette DMS", 0 },
			{ "optic_LRPS", "Lunette LRPS", 0 },
			{ "optic_SOS", "Lunette SOS", 0 },
			{ "acc_pointer_IR", "Pointeur Laser", 0 },
			{ "acc_flashlight", "Lampe Torche", 0 },
			{ "ItemCompass", "Boussole", 0 },
			{ "ItemMap", "Carte d’Altis", 0 },
			{ "ItemWatch", "Montre", 0 },
			{ "ItemRadio", "Radio", 0 },
			{ "ItemGPS", "GPS", 0 },
			{ "ToolKit", "Kit de Réparation", 0 },
			{ "Medikit", "Trousse de soin", 0 },
			{ "FirstAidKit", "Kit de soin", 0 },
            { "Rangefinder", "", 0 },	
			{ "NVGoggles_OPFOR", "Lunette de Vision nocturne", 0 }
        };
    };
	class cop_gign {
        name = "Magasin d'équipement du G.I.G.N";
        side = "cop";
        license = "";
        level = 12;
        msg = "Vous devez faire partie du G.I.G.N";
        items[] = {
		    { "hgun_mas_m9_F", "M9", 0 },
			{ "15Rnd_mas_9x21_Mag", "Munition M9", 0 },
			{ "wirk_p90", "P90", 0 },
			{ "wirk_p90_mag", "Munition P90", 0 },
            { "R3F_HK416M_HG", "HK416", 0 },
		    { "R3F_30Rnd_556x45_HK416", "Munition HK416", 0 },
			{ "R3F_HK417M_HG", "HK417", 0 },
		    { "R3F_20Rnd_762x51_HK417", "Munition HK417", 0 },
			{ "R3F_HK417L", "HK417 20 pouces", 0 },
		    { "R3F_20Rnd_762x51_HK417", "Munition HK417 20 pouces", 0 },
			{ "srifle_mas_sr25", "SR25", 0 },
		    { "20Rnd_mas_762x51_Stanag", "Munition SR25", 0 },
			{ "srifle_mas_mk17s", "SCAR-H Mark", 0 },
		    { "20Rnd_mas_762x51_Stanag", "Munition SCAR-H Mark", 0 },
			{ "R3F_Famas_F1", "FAMAS F1", 0 },
		    { "R3F_25Rnd_556x45_FAMAS", "Munition FAMAS F1", 0 },
			{ "R3F_Famas_G2_HG", "FAMAS G2", 0 },
		    { "R3F_30Rnd_556x45_FAMAS", "Munition FAMAS G2", 0 },
			{ "R3F_M4S90", "Benelli M4", 0 },
		    { "R3F_7Rnd_M4S90", "Munition Benelli M4", 0 },
			{ "arifle_mas_saiga", "Saiga 12", 0 },
		    { "10Rnd_mas_12Gauge_Slug", "Munition Saiga 12", 0 },
			{ "R3F_Minimi_762_HG", "Minimi Para 7.62 Garde Main", 0 },
		    { "R3F_100Rnd_762x51_MINIMI", "Munition Minimi Para 7.62", 0 },
			{ "R3F_Minimi_762", "Minimi Para 7.62 Bipied", 0 },
		    { "R3F_100Rnd_762x51_MINIMI", "Munition Minimi Para 7.62", 0 },
			{ "srifle_EBR_F", "Mk18 7.62", 0 },
            { "20Rnd_762x51_Mag", "Munitions Mk18", 0 },
			{ "M32_EP1", "M32 Fumigène", 0 },
		    { "Smoke_M32_mag", "Munition Fumigène", 0 },
			{ "LMG_mas_mk48_F", "Mk 48", 0 },
		    { "100Rnd_mas_762x51_Stanag", "Munition Mk 48", 0 },
			{ "R3F_PGM_Hecate_II_POLY", "PGM Polymere", 0 },
			{ "R3F_7Rnd_127x99_PGM", "Munition PGM Polymere", 0 },
			{ "R3F_FRF2_DES", "FRF2", 0 },
		    { "R3F_10Rnd_762x51_FRF2", "Munition FRF2", 0 },
			{ "HandGrenade_Stone", "Grenade Flash", 0 },
			{ "R3F_AIMPOINT", "Lunette Aimpoint", 0 },
			{ "R3F_EOTECH", "Lunette Eotech", 0 },
			{ "optic_Arco", "Viseur Arco", 0 },
			{ "optic_Hamr", "Viseur RCO", 0 },
			{ "FHQ_optic_HWS", "Viseur Eotech Black", 0 },
			{ "R3F_AIMPOINT_DES", "Lunette Aimpoint CAMO", 0 },
			{ "R3F_EOTECH_DES", "Lunette Eotech CAMO", 0 },
			{ "optic_mas_acog_rd", "Lunette Acog", 0 },
			{ "R3F_J4", "Lunette Scrome J4", 0 },
			{ "R3F_NF", "Lunette Night Force X15", 0 },
			{ "R3F_NF42", "Lunette Night Force X42", 0 },
			{ "R3F_ZEISS", "Lunette ZEISS Diavari", 0 },
			{ "R3F_PIRAT", "Pointeur Laser PIRAT", 0 },
			{ "R3F_LAMPE_SURB", "Lampe Torche SURB", 0 },
			{ "acc_pointer_IR", "Pointeur Laser", 0 },
			{ "acc_flashlight", "Lampe Torche", 0 },
			{ "R3F_SILENCIEUX_HK416", "Silencieux HK416", 0 },
			{ "R3F_SILENCIEUX_HK417", "Silencieux HK417", 0 },
			{ "R3F_SILENCIEUX_FAMAS", "Silencieux FAMAS", 0 },
			{ "muzzle_mas_snds_SM", "Silencieux SCAR-H/SR25", 0 },
			{ "R3F_SILENCIEUX_FRF2", "Silencieux FRF2", 0 },
			{ "muzzle_snds_B", "Silencieux Mk18", 0 },
			{ "Rangefinder", "", 0 },
			{ "ItemCompass", "Boussole", 0 },
			{ "ItemMap", "Carte d’Altis", 0 },
			{ "ItemWatch", "Montre", 0 },
			{ "ItemRadio", "Radio", 0 },
			{ "ItemGPS", "GPS", 0 },
			{ "ToolKit", "Kit de Réparation", 0 },
			{ "Medikit", "Trousse de soin", 0 },
			{ "FirstAidKit", "Kit de soin", 0 },
			{ "NVGoggles", "Lunette de Vision nocturne", 0 }
        };
    };

    //Medic et Pompier Shops
    class med_basic {
        name = "Magasin Médecin";
        side = "med";
        license = "";
        level = -1;
        items[] = {
            { "ItemGPS", "", 100 },
			{ "Binocular", "", 150 },
			{ "ToolKit", "", 10000 },
			{ "FirstAidKit", "", 150 },
			{ "Medikit", "", 500 },
			{ "NVGoggles", "", 1200 },
			{ "B_FieldPack_ocamo", "", 3000 }
        };
    };
    class pompier_basic {
        name = "Magasin Pompier";
        side = "med";
        license = "pompier";
        level = -1;
        items[] = {
            { "ItemGPS", "", 100 },
			{ "Binocular", "", 150 },
			{ "ToolKit", "", 10000 },
			{ "FirstAidKit", "", 150 },
			{ "Medikit", "", 500 },
			{ "NVGoggles", "", 1200 },
			{ "B_FieldPack_ocamo", "", 3000 }
        };
    };	
	
	// Donateur Shop
	class donateur_lvl_1 {
        name = "Magasin donateur LVL1";
        side = "civ";
        license = "donateur_lvl_1";
        level = -1;
        msg = "Vous n'êtes pas donateur LVL1";
        items[] = {
			{ "srifle_mas_mk17s", "SCAR-H Mark", 75000 },
		    { "20Rnd_mas_762x51_Stanag", "Munition SCAR-H Mark", 200 },
			{ "hlc_rifle_ak47", "AK47", 80000 },
            { "hlc_30Rnd_762x39_b_ak", "Munitions AK47", 350 },
			{ "hlc_rifle_saiga12k", "Saiga 12K", 80000 },
		    { "hlc_10rnd_12g_buck_S12", "Munition Saiga 12K", 250 },
			{ "hlc_rifle_ak74_dirty", "AK74", 80000 },
            { "hlc_30Rnd_545x39_B_AK", "Munitions AK74", 350 },
			{ "hlc_rifle_akm", "AKM", 90000 },
            { "hlc_30Rnd_762x39_b_ak", "Munitions AKM", 200 },
			{ "hlc_rifle_aks74", "AKS74", 90000 },
            { "hlc_30Rnd_545x39_B_AK", "Munitions AKS74", 320 },
			{ "hlc_rifle_aku12", "AKU12", 95000 },
			{ "hlc_30Rnd_545x39_B_AK", "Munitions AKU12", 230 },
			{ "arifle_mas_bizon", "Bizon", 95000 },
			{ "64Rnd_mas_9x18_mag", "Munitions Bizon", 900 },
			{ "hlc_rifle_rpk", "RPK", 90000 },
            { "hlc_45Rnd_545x39_t_rpk", "Munitions RPK12", 600 },
			{ "hgun_mas_sa61_F", "SA61 Skorpion", 80000 },
            { "20Rnd_mas_765x17_Mag", "Munitions SA61", 200 },
			{ "R3F_FRF2_DES", "FRF2 CAMO", 75000 },
            { "R3F_10Rnd_762x51_FRF2", "Munitions FRF2", 200 },
			{ "srifle_GM6_camo_F", "Lynx CAMO", 85000 },
            { "5Rnd_127x108_Mag", "Munitions Lynx", 200 },
			{ "srifle_mas_m110", "M110", 95000 },
            { "20Rnd_mas_762x51_Stanag", "Munitions M110", 200 },
			{ "arifle_mas_l119_d", "L119A1 CAMO", 115000 },
			{ "30Rnd_mas_556x45_Stanag", "Munitions L119A1", 200 },			
			{ "LMG_Zafir_F", "Zafir", 90000 },
            { "150Rnd_762x54_Box", "Munitions Zafir 7.62", 200 },
			{ "hgun_mas_acp_F", "1911 ACP", 2000 },
            { "12Rnd_mas_45acp_Mag", "Munitions 1911ACP", 50 },
			{ "hgun_mas_mak_F", "Makarov", 1500 },
            { "8Rnd_mas_9x18_Mag", "Munitions Makarov", 50 },
			{ "hgun_mas_bhp_F", "Browning HP", 1500 },
            { "15Rnd_mas_9x21_Mag", "Munitions Browning HP", 50 },
			{ "R3F_J4", "Lunette Scrome J4", 1500 },
			{ "R3F_NF", "Lunette Night Force X15", 1800 },
			{ "R3F_NF42", "Lunette Night Force X42", 2000},
			{ "hlc_optic_kobra", "Lunette Kobra", 2500 },
            { "optic_ACO_grn", "", 1200 },
            { "FHQ_optic_MicroCCO", "", 1200 },
            { "optic_Holosight", "", 1250 },
			{ "optic_LRPS", "Lunette LRPS", 2500 },
			{ "optic_Arco", "Viseur Arco", 2500 },
			{ "optic_Hamr", "Viseur RCO", 2500 },
			{ "optic_mas_aim", "Viseur Aimpoint", 2500 },
			{ "optic_mas_acog_eo", "Viseur ACOG Holo", 2500 },
			{ "hlc_muzzle_762SUP_AK", "Silencieux AK 7.62", 250 },
            { "hlc_muzzle_545SUP_AK", "Silencieux AK 5.45", 250 },
            { "muzzle_mas_snds_Mc", "Silencieux L119A1", 250 },
			{ "ItemMap", "Carte d’Altis", 50 },
			{ "ItemWatch", "Montre", 40 },
			{ "ItemRadio", "Radio", 100 },
			{ "ItemGPS", "GPS", 320 },
			{ "ToolKit", "Kit de Réparation", 10000 },
			{ "FirstAidKit", "Kit de soin", 150 },
			{ "NVGoggles", "Lunette de Vision nocturne", 0 },
			{ "Chemlight_red", "Baton Lumineux Rouge", 300 },
			{ "Chemlight_yellow", "Baton Lumineux Jaunes", 300 },
			{ "Chemlight_green", "Baton Lumineux Vert", 300 },
			{ "Chemlight_blue", "Baton Lumineux Bleu", 300 }
        };
    };
	class donateur_lvl_2 {
        name = "Magasin donateur LVL2";
        side = "civ";
        license = "donateur_lvl_2";
        level = -1;
        msg = "Vous n'êtes pas donateur LVL2";
        items[] = {
			{ "srifle_mas_mk17s", "SCAR-H Mark", 75000 },
		    { "20Rnd_mas_762x51_Stanag", "Munition SCAR-H Mark", 200 },
			{ "hlc_rifle_ak47", "AK47", 80000 },
            { "hlc_30Rnd_762x39_b_ak", "Munitions AK47", 350 },
			{ "hlc_rifle_saiga12k", "Saiga 12K", 80000 },
		    { "hlc_10rnd_12g_buck_S12", "Munition Saiga 12K", 250 },
			{ "hlc_rifle_ak74_dirty", "AK74", 80000 },
            { "hlc_30Rnd_545x39_B_AK", "Munitions AK74", 350 },
			{ "hlc_rifle_akm", "AKM", 90000 },
            { "hlc_30Rnd_762x39_b_ak", "Munitions AKM", 200 },
			{ "hlc_rifle_aks74", "AKS74", 90000 },
            { "hlc_30Rnd_545x39_B_AK", "Munitions AKS74", 320 },
			{ "hlc_rifle_aku12", "AKU12", 95000 },
			{ "hlc_30Rnd_545x39_B_AK", "Munitions AKU12", 230 },
			{ "arifle_mas_bizon", "Bizon", 95000 },
			{ "64Rnd_mas_9x18_mag", "Munitions Bizon", 900 },
			{ "hlc_rifle_rpk", "RPK", 90000 },
            { "hlc_45Rnd_545x39_t_rpk", "Munitions RPK12", 600 },
			{ "hgun_mas_sa61_F", "SA61 Skorpion", 80000 },
            { "20Rnd_mas_765x17_Mag", "Munitions SA61", 200 },
			{ "R3F_FRF2_DES", "FRF2 CAMO", 75000 },
            { "R3F_10Rnd_762x51_FRF2", "Munitions FRF2", 200 },
			{ "srifle_GM6_camo_F", "Lynx CAMO", 85000 },
            { "5Rnd_127x108_Mag", "Munitions Lynx", 200 },
			{ "srifle_mas_m110", "M110", 95000 },
            { "20Rnd_mas_762x51_Stanag", "Munitions M110", 200 },
			{ "arifle_mas_l119_d", "L119A1 CAMO", 115000 },
			{ "30Rnd_mas_556x45_Stanag", "Munitions L119A1", 200 },
			{ "R3F_PGM_Hecate_II_DES", "PGM CAMO", 80000 }, 
			{ "R3F_7Rnd_127x99_PGM", "Munitions PGM", 200 },			
			{ "LMG_Zafir_F", "Zafir", 90000 },
            { "150Rnd_762x54_Box", "Munitions Zafir 7.62", 200 },
			{ "hgun_mas_acp_F", "1911 ACP", 2000 },
            { "12Rnd_mas_45acp_Mag", "Munitions 1911ACP", 50 },
			{ "hgun_mas_mak_F", "Makarov", 1500 },
            { "8Rnd_mas_9x18_Mag", "Munitions Makarov", 50 },
			{ "hgun_mas_bhp_F", "Browning HP", 1500 },
            { "15Rnd_mas_9x21_Mag", "Munitions Browning HP", 50 },
			{ "R3F_J4", "Lunette Scrome J4", 1500 },
			{ "R3F_NF", "Lunette Night Force X15", 1800 },
			{ "R3F_NF42", "Lunette Night Force X42", 2000},
			{ "hlc_optic_kobra", "Lunette Kobra", 2500 },
            { "optic_ACO_grn", "", 1200 },
            { "FHQ_optic_MicroCCO", "", 1200 },
            { "optic_Holosight", "", 1250 },
			{ "optic_LRPS", "Lunette LRPS", 2500 },
			{ "optic_Arco", "Viseur Arco", 2500 },
			{ "optic_Hamr", "Viseur RCO", 2500 },
			{ "optic_mas_aim", "Viseur Aimpoint", 2500 },
			{ "optic_mas_acog_eo", "Viseur ACOG Holo", 2500 },
			{ "hlc_muzzle_762SUP_AK", "Silencieux AK 7.62", 250 },
            { "hlc_muzzle_545SUP_AK", "Silencieux AK 5.45", 250 },
            { "muzzle_mas_snds_Mc", "Silencieux L119A1", 250 },
			{ "ItemMap", "Carte d’Altis", 50 },
			{ "ItemWatch", "Montre", 40 },
			{ "ItemRadio", "Radio", 100 },
			{ "ItemGPS", "GPS", 320 },
			{ "ToolKit", "Kit de Réparation", 10000 },
			{ "FirstAidKit", "Kit de soin", 150 },
			{ "NVGoggles", "Lunette de Vision nocturne", 0 },
			{ "Chemlight_red", "Baton Lumineux Rouge", 300 },
			{ "Chemlight_yellow", "Baton Lumineux Jaunes", 300 },
			{ "Chemlight_green", "Baton Lumineux Vert", 300 },
			{ "Chemlight_blue", "Baton Lumineux Bleu", 300 }
        };
    };
	class donateur_lvl_3 {
        name = "Magasin donateur LVL3";
        side = "civ";
        license = "donateur_lvl_3";
        level = -1;
        msg = "Vous n'êtes pas donateur LVL3";
        items[] = {
			{ "srifle_mas_mk17s", "SCAR-H Mark", 75000 },
		    { "20Rnd_mas_762x51_Stanag", "Munition SCAR-H Mark", 200 },
			{ "hlc_rifle_ak47", "AK47", 80000 },
            { "hlc_30Rnd_762x39_b_ak", "Munitions AK47", 350 },
			{ "hlc_rifle_saiga12k", "Saiga 12K", 80000 },
		    { "hlc_10rnd_12g_buck_S12", "Munition Saiga 12K", 250 },
			{ "hlc_rifle_ak74_dirty", "AK74", 80000 },
            { "hlc_30Rnd_545x39_B_AK", "Munitions AK74", 350 },
			{ "hlc_rifle_akm", "AKM", 90000 },
            { "hlc_30Rnd_762x39_b_ak", "Munitions AKM", 200 },
			{ "hlc_rifle_aks74", "AKS74", 90000 },
            { "hlc_30Rnd_545x39_B_AK", "Munitions AKS74", 320 },
			{ "hlc_rifle_aku12", "AKU12", 95000 },
			{ "hlc_30Rnd_545x39_B_AK", "Munitions AKU12", 230 },
			{ "arifle_mas_bizon", "Bizon", 95000 },
			{ "64Rnd_mas_9x18_mag", "Munitions Bizon", 900 },
			{ "hlc_rifle_rpk", "RPK", 90000 },
            { "hlc_45Rnd_545x39_t_rpk", "Munitions RPK12", 600 },
			{ "hgun_mas_sa61_F", "SA61 Skorpion", 80000 },
            { "20Rnd_mas_765x17_Mag", "Munitions SA61", 200 },
			{ "R3F_FRF2_DES", "FRF2 CAMO", 75000 },
            { "R3F_10Rnd_762x51_FRF2", "Munitions FRF2", 200 },
			{ "srifle_GM6_camo_F", "Lynx CAMO", 85000 },
            { "5Rnd_127x108_Mag", "Munitions Lynx", 200 },
			{ "srifle_mas_m110", "M110", 95000 },
            { "20Rnd_mas_762x51_Stanag", "Munitions M110", 200 },
			{ "LMG_mas_Mk200_F", "MK200", 115000 },
            { "200Rnd_mas_556x45_Stanag", "Munitions MK200", 200 },
			{ "arifle_mas_l119_d", "L119A1 CAMO", 80000 }, 
			{ "30Rnd_mas_556x45_Stanag", "Munitions L119A1", 200 },
			{ "R3F_PGM_Hecate_II_DES", "PGM CAMO", 80000 }, 
			{ "R3F_7Rnd_127x99_PGM", "Munitions PGM", 200 },			
			{ "LMG_Zafir_F", "Zafir", 90000 },
            { "150Rnd_762x54_Box", "Munitions Zafir 7.62", 200 },
			{ "hgun_mas_acp_F", "1911 ACP", 2000 },
            { "12Rnd_mas_45acp_Mag", "Munitions 1911ACP", 50 },
			{ "hgun_mas_mak_F", "Makarov", 1500 },
            { "8Rnd_mas_9x18_Mag", "Munitions Makarov", 50 },
			{ "hgun_mas_bhp_F", "Browning HP", 1500 },
            { "15Rnd_mas_9x21_Mag", "Munitions Browning HP", 50 },
			{ "R3F_J4", "Lunette Scrome J4", 1500 },
			{ "R3F_NF", "Lunette Night Force X15", 1800 },
			{ "R3F_NF42", "Lunette Night Force X42", 2000},
			{ "hlc_optic_kobra", "Lunette Kobra", 2500 },
            { "optic_ACO_grn", "", 1200 },
            { "FHQ_optic_MicroCCO", "", 1200 },
            { "optic_Holosight", "", 1250 },
			{ "optic_LRPS", "Lunette LRPS", 2500 },
			{ "optic_Arco", "Viseur Arco", 2500 },
			{ "optic_Hamr", "Viseur RCO", 2500 },
			{ "optic_mas_aim", "Viseur Aimpoint", 2500 },
			{ "optic_mas_acog_eo", "Viseur ACOG Holo", 2500 },
			{ "hlc_muzzle_762SUP_AK", "Silencieux AK 7.62", 250 },
            { "hlc_muzzle_545SUP_AK", "Silencieux AK 5.45", 250 },
            { "muzzle_mas_snds_Mc", "Silencieux L119A1", 250 },
			{ "ItemMap", "Carte d’Altis", 50 },
			{ "ItemWatch", "Montre", 40 },
			{ "ItemRadio", "Radio", 100 },
			{ "ItemGPS", "GPS", 320 },
			{ "ToolKit", "Kit de Réparation", 10000 },
			{ "FirstAidKit", "Kit de soin", 150 },
			{ "NVGoggles", "Lunette de Vision nocturne", 0 },
			{ "Chemlight_red", "Baton Lumineux Rouge", 300 },
			{ "Chemlight_yellow", "Baton Lumineux Jaunes", 300 },
			{ "Chemlight_green", "Baton Lumineux Vert", 300 },
			{ "Chemlight_blue", "Baton Lumineux Bleu", 300 }
        };
    };
};
