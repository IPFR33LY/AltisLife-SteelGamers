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
			{ "hlc_rifle_ak47", "AK47", 80000 },
			{ "hlc_30Rnd_762x39_b_ak", "Munitions AK47", 350 },
			{ "arifle_mas_akm", "AKM", 90000 },
			{ "30Rnd_mas_762x39_mag", "Munition d'AKM", 500 },
			{ "arifle_mas_akms", "AKMS", 90000 },
			{ "30Rnd_mas_762x39_mag", "Munition d'AKMS", 400 },
			{ "arifle_mas_aks74_gl", "AKS74 GL", 85000 },
			{ "30Rnd_mas_545x39_mag", "Munition AKS74 GL", 500 },
			{ "hlc_optic_kobra", "Optique d'AK47", 1500 },
			{ "optic_Hamr", "Optique RCO", 2000 },
			{ "optic_MRCO", "Optique MRCO", 2000 },
			{ "optic_mas_Arco_blk", "Optique ARCO", 2000 },
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
		    { "hlc_rifle_ak47", "AK47", 80000 },
		    { "hlc_30Rnd_762x39_b_ak", "Munitions AK47", 350 },
		    { "arifle_mas_akm", "AKM", 90000 },
		    { "30Rnd_mas_762x39_mag", "Munition d'AKM", 500 },
		    { "arifle_mas_akms", "AKMS", 90000 },
		    { "30Rnd_mas_762x39_mag", "Munition d'AKMS", 400 },
		    { "arifle_mas_aks74_gl", "AKS74 GL", 85000 },
		    { "30Rnd_mas_545x39_mag", "Munition AKS74 GL", 500 },
		    { "hlc_optic_kobra", "Optique d'AK47", 1500 },
		    { "arifle_mas_bizon", "Bizon", 90000 },
		    { "64Rnd_mas_9x18_mag", "Munitions Bizon", 600 },
		    { "arifle_mas_m70", "M70", 100000 },
            { "30Rnd_mas_762x39_mag", "Munitions M70", 800 },
			{ "srifle_DMR_01_F", "Rahim 7.62", 90000 },
            { "10Rnd_762x54_Mag", "Munitions Rahim", 800 },
			{ "srifle_EBR_F", "Mk18 7.62", 90000 },
            { "20Rnd_762x51_Mag", "Munitions Mk18", 800 },
		    { "hgun_mas_acp_F", "1911 ACP", 2000 },
            { "12Rnd_mas_45acp_Mag", "Munitions 1911ACP", 50 },
		    { "optic_Hamr", "Optique RCO", 2000 },
		    { "optic_MRCO", "Optique MRCO", 2000 },
		    { "optic_mas_Arco_blk", "Optique ARCO", 2000 },
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
	class rebel_lvl_3 {
        name = "Magasin d'équipement Rebelle";
        side = "civ";
        license = "rebel_lvl_3";
        level = -1;
        msg = "";
        items[] = {
		    { "hlc_rifle_ak47", "AK47", 80000 },
		    { "hlc_30Rnd_762x39_b_ak", "Munitions AK47", 350 },
		    { "arifle_mas_akm", "AKM", 90000 },
		    { "30Rnd_mas_762x39_mag", "Munition d'AKM", 500 },
		    { "arifle_mas_akms", "AKMS", 90000 },
		    { "30Rnd_mas_762x39_mag", "Munition d'AKMS", 400 },
			{ "hlc_rifle_aks74u", "AKS74U", 90000 },
            { "hlc_30Rnd_545x39_B_AK", "Munitions AKS74U", 220 },
		    { "arifle_mas_aks74_gl", "AKS74 GL", 85000 },
		    { "30Rnd_mas_545x39_mag", "Munition AKS74 GL", 500 },
		    { "hlc_optic_kobra", "Optique d'AK47", 1500 },
		    { "arifle_mas_bizon", "Bizon", 90000 },
		    { "64Rnd_mas_9x18_mag", "Munitions Bizon", 600 },
		    { "arifle_mas_m70", "M70", 100000 },
            { "30Rnd_mas_762x39_mag", "Munitions M70", 800 },
			{ "srifle_DMR_01_F", "Rahim 7.62", 90000 },
            { "10Rnd_762x54_Mag", "Munitions Rahim", 800 },
			{ "srifle_EBR_F", "Mk18 7.62", 90000 },
            { "20Rnd_762x51_Mag", "Munitions Mk18", 800 },
		    { "hgun_mas_acp_F", "1911 ACP", 2000 },
            { "12Rnd_mas_45acp_Mag", "Munitions 1911ACP", 50 },
		    { "optic_Hamr", "Optique RCO", 2000 },
		    { "optic_MRCO", "Optique MRCO", 2000 },
		    { "optic_mas_Arco_blk", "Optique ARCO", 2000 },
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
	class rebel_lvl_4 {
        name = "Magasin d'équipement Rebelle";
        side = "civ";
        license = "rebel_lvl_4";
        level = -1;
        msg = "";
        items[] = {
		    { "hlc_rifle_ak47", "AK47", 80000 },
		    { "hlc_30Rnd_762x39_b_ak", "Munitions AK47", 350 },
		    { "arifle_mas_akm", "AKM", 90000 },
		    { "30Rnd_mas_762x39_mag", "Munition d'AKM", 500 },
		    { "arifle_mas_akms", "AKMS", 90000 },
		    { "30Rnd_mas_762x39_mag", "Munition d'AKMS", 400 },
			{ "hlc_rifle_aks74u", "AKS74U", 90000 },
            { "hlc_30Rnd_545x39_B_AK", "Munitions AKS74U", 220 },
		    { "arifle_mas_aks74_gl", "AKS74 GL", 85000 },
		    { "30Rnd_mas_545x39_mag", "Munition AKS74 GL", 500 },
		    { "hlc_optic_kobra", "Optique d'AK47", 1500 },
		    { "arifle_mas_bizon", "Bizon", 90000 },
		    { "64Rnd_mas_9x18_mag", "Munitions Bizon", 600 },
		    { "arifle_mas_m70", "M70", 100000 },
            { "30Rnd_mas_762x39_mag", "Munitions M70", 800 },
			{ "srifle_DMR_01_F", "Rahim 7.62", 90000 },
            { "10Rnd_762x54_Mag", "Munitions Rahim", 800 },
			{ "srifle_EBR_F", "Mk18 7.62", 90000 },
            { "20Rnd_762x51_Mag", "Munitions Mk18", 800 },
			{ "hlc_rifle_rpk", "RPK", 100000 },
            { "hlc_75Rnd_762x39_m_rpk", "Munitions RPK", 550 },
			{ "LMG_mas_m72_F", "M72", 110000 },
            { "100Rnd_mas_762x39_mag", "Munitions M72", 200 },
			{ "LMG_Zafir_F", "Zafir", 120000 },
            { "150Rnd_762x54_Box", "Munitions Zafir", 900 },
			{ "arifle_mas_l119_d", "L119A1 CAMO", 90000 },
            { "30Rnd_mas_556x45_Stanag", "Munitions L119A1", 200 },
		    { "hgun_mas_acp_F", "1911 ACP", 2000 },
            { "12Rnd_mas_45acp_Mag", "Munitions 1911ACP", 50 },
			{ "hgun_mas_mak_F", "Makarov", 1500 },
            { "8Rnd_mas_9x18_Mag", "Munitions Makarov", 50 },
		    { "optic_Hamr", "Optique RCO", 2000 },
		    { "optic_MRCO", "Optique MRCO", 2000 },
		    { "optic_mas_Arco_blk", "Optique ARCO", 2000 },
			{ "R3F_NF", "Lunette Night Force X15", 5000 },
			{ "R3F_NF42", "Lunette Night Force X42", 7000},
			{ "optic_mas_aim", "Viseur Aimpoint", 2500 },
			{ "optic_mas_acog_eo", "Viseur ACOG Holo", 2500 },
		    { "acc_flashlight", "Lampe Torche", 700 },
		    { "acc_pointer_IR", "Viseur Laser", 700 },
			{ "hlc_muzzle_762SUP_AK", "Silencieux AK 7.62", 250 },
            { "hlc_muzzle_545SUP_AK", "Silencieux AK 5.45", 250 },
            { "muzzle_mas_snds_Mc", "Silencieux L119A1", 250 },
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
	class rebel_lvl_5 {
        name = "Magasin d'équipement Rebelle";
        side = "civ";
        license = "rebel_lvl_5";
        level = -1;
        msg = "";
        items[] = {
		    { "hlc_rifle_ak47", "AK47", 80000 },
		    { "hlc_30Rnd_762x39_b_ak", "Munitions AK47", 350 },
		    { "arifle_mas_akm", "AKM", 90000 },
		    { "30Rnd_mas_762x39_mag", "Munition d'AKM", 500 },
		    { "arifle_mas_akms", "AKMS", 90000 },
		    { "30Rnd_mas_762x39_mag", "Munition d'AKMS", 400 },
			{ "hlc_rifle_aks74u", "AKS74U", 90000 },
            { "hlc_30Rnd_545x39_B_AK", "Munitions AKS74U", 220 },
		    { "arifle_mas_aks74_gl", "AKS74 GL", 85000 },
		    { "30Rnd_mas_545x39_mag", "Munition AKS74 GL", 500 },
		    { "hlc_optic_kobra", "Optique d'AK47", 1500 },
		    { "arifle_mas_bizon", "Bizon", 90000 },
		    { "64Rnd_mas_9x18_mag", "Munitions Bizon", 600 },
		    { "arifle_mas_m70", "M70", 100000 },
            { "30Rnd_mas_762x39_mag", "Munitions M70", 800 },
			{ "srifle_DMR_01_F", "Rahim 7.62", 90000 },
            { "10Rnd_762x54_Mag", "Munitions Rahim", 800 },
			{ "srifle_EBR_F", "Mk18 7.62", 90000 },
            { "20Rnd_762x51_Mag", "Munitions Mk18", 800 },
			{ "hlc_rifle_rpk", "RPK", 100000 },
            { "hlc_75Rnd_762x39_m_rpk", "Munitions RPK", 550 },
			{ "LMG_mas_m72_F", "M72", 110000 },
            { "100Rnd_mas_762x39_mag", "Munitions M72", 200 },
			{ "LMG_Zafir_F", "Zafir", 120000 },
            { "150Rnd_762x54_Box", "Munitions Zafir", 900 },
			{ "arifle_mas_l119_d", "L119A1 CAMO", 90000 },
            { "30Rnd_mas_556x45_Stanag", "Munitions L119A1", 200 },
			{ "R3F_FRF2_DES", "FrF2", 140000 },
            { "R3F_10Rnd_762x51_FRF2", "Munitions FrF2", 1000 },
			{ "srifle_mas_m91", "M91", 140000 },
            { "10Rnd_mas_762x54_mag", "Munitions M91", 1000 },
		    { "hgun_mas_acp_F", "1911 ACP", 2000 },
            { "12Rnd_mas_45acp_Mag", "Munitions 1911ACP", 50 },
			{ "hgun_mas_mak_F", "Makarov", 1500 },
            { "8Rnd_mas_9x18_Mag", "Munitions Makarov", 50 },
		    { "optic_Hamr", "Optique RCO", 2000 },
		    { "optic_MRCO", "Optique MRCO", 2000 },
		    { "optic_mas_Arco_blk", "Optique ARCO", 2000 },
			{ "R3F_NF", "Lunette Night Force X15", 5000 },
			{ "R3F_NF42", "Lunette Night Force X42", 7000},
			{ "optic_mas_pso_nv", "Lunette PSO Holo", 8500},
			{ "optic_mas_aim", "Viseur Aimpoint", 2500 },
			{ "optic_mas_acog_eo", "Viseur ACOG Holo", 2500 },
		    { "acc_flashlight", "Lampe Torche", 700 },
		    { "acc_pointer_IR", "Viseur Laser", 700 },
			{ "hlc_muzzle_762SUP_AK", "Silencieux AK 7.62", 250 },
            { "hlc_muzzle_545SUP_AK", "Silencieux AK 5.45", 250 },
            { "muzzle_mas_snds_Mc", "Silencieux L119A1", 250 },
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
	class criminel {
        name = "Magasin d'équipement Criminel";
        side = "civ";
        license = "criminel";
        level = -1;
        msg = "";
        items[] = {
			{ "srifle_DMR_01_F", "Rahim 7.62", 80000 },
            { "10Rnd_762x54_Mag", "Munition de Rahim", 500 },
			{ "arifle_mas_aks74u", "AKS74u", 95000 },
			{ "30Rnd_mas_545x39_mag", "Munition AKS74u", 600 },
            { "arifle_Katiba_F", "Katiba 7.62", 85000 },
			{ "30Rnd_65x39_caseless_green", "Munition Katiba", 500 },
			{ "hgun_mas_mak_F", "Makarov", 15000 },
            { "8Rnd_mas_9x18_Mag", "Munition Makarov", 250 },
			{ "hgun_mas_sa61_F", "SA61 Skorpion", 20000 },
            { "20Rnd_mas_765x17_Mag", "Munition SA61 Skorpion", 450 },
            { "optic_Hamr", "Viseur RCO", 3500 },
            { "optic_mas_Arco_blk", "Viseur ARCO", 3500 },
            { "acc_flashlight", "Lampe Torche", 1000 },
            { "acc_pointer_IR", "Viseur Laser", 1000 },
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
        	{ "hgun_mas_m9_F", "M9", 0 },
			{ "15Rnd_mas_9x21_Mag", "Munition M9", 0 },
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
        msg = "Vous devez etre Brigadier ";
        items[] = {
		    { "kosmos_taser_pistol", "Tazer", 0 },
		    { "KMS_Taser_Mag", "Munition Taser", 0 },
		    { "arifle_mas_mp5", "MP5A5", 0 },
		    { "30Rnd_mas_9x21_Stanag", "Munition MP5A5", 0 },
			{ "R3F_AIMPOINT", "Lunette Aimpoint", 0 },
			{ "R3F_EOTECH", "Lunette Eotech", 0 },
			{ "optic_Arco", "Viseur Arco", 0 },
			{ "optic_Hamr", "Viseur RCO", 0 },
			{ "acc_pointer_IR", "Pointeur Laser", 0 },
			{ "acc_flashlight", "Lampe Torche", 0 },
			{ "R3F_SILENCIEUX_HK416", "Silencieux HK416", 0 },
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
        msg = "Vous devez etre Brigadier-Chef";
        items[] = {
		    { "kosmos_taser_pistol", "Tazer", 0 },
		    { "KMS_Taser_Mag", "Munition Taser", 0 },
		    { "arifle_mas_mk16", "SCAR-LS", 0 },
		    { "30Rnd_mas_556x45_Stanag", "Munition SCAR-LS", 0 },
			{ "R3F_AIMPOINT", "Lunette Aimpoint", 0 },
			{ "R3F_EOTECH", "Lunette Eotech", 0 },
			{ "optic_Arco", "Viseur Arco", 0 },
			{ "optic_Hamr", "Viseur RCO", 0 },
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
        msg = "Vous devez etre Sergent";
        items[] = {
		    { "kosmos_taser_pistol", "Tazer", 0 },
		    { "KMS_Taser_Mag", "Munition Taser", 0 },
            { "R3F_HK416M_HG", "HK416", 0 },
		    { "R3F_30Rnd_556x45_HK416", "Munition HK416", 0 },
			{ "R3F_HK417M_HG", "HK417 16 pouces", 0 },
		    { "R3F_20Rnd_762x51_HK417", "Munition HK417", 0 },
			{ "HandGrenade_Stone", "Grenade Flash", 0 },
			{ "R3F_AIMPOINT", "Lunette Aimpoint", 0 },
			{ "R3F_EOTECH", "Lunette Eotech", 0 },
			{ "optic_Arco", "Viseur Arco", 0 },
			{ "optic_Hamr", "Viseur RCO", 0 },
			{ "acc_pointer_IR", "Pointeur Laser", 0 },
			{ "acc_flashlight", "Lampe Torche", 0 },
			{ "R3F_SILENCIEUX_HK416", "Silencieux HK416", 0 },
			{ "R3F_SILENCIEUX_HK417", "Silencieux HK417", 0 },
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
        msg = "Vous devez etre Adjudant";
        items[] = {
		    { "kosmos_taser_pistol", "Tazer", 0 },
		    { "KMS_Taser_Mag", "Munition Taser", 0 },
            { "R3F_HK416M_HG", "HK416", 0 },
		    { "R3F_30Rnd_556x45_HK416", "Munition HK416", 0 },
			{ "R3F_HK417M_HG", "HK417 16 pouces", 0 },
		    { "R3F_20Rnd_762x51_HK417", "Munition HK417", 0 },
			{ "R3F_HK417L", "HK417 20 pouces", 0 },
		    { "R3F_20Rnd_762x51_HK417", "Munition HK417 20 pouces", 0 },
			{ "arifle_mas_m1014", "Benelli M1014", 0 },
		    { "7Rnd_mas_12Gauge_Slug", "Munition Benelli M1014", 0 },			
			{ "HandGrenade_Stone", "Grenade Flash", 0 },
			{ "R3F_AIMPOINT", "Lunette Aimpoint", 0 },
			{ "R3F_EOTECH", "Lunette Eotech", 0 },
			{ "optic_Arco", "Viseur Arco", 0 },
			{ "optic_Hamr", "Viseur RCO", 0 },
			{ "R3F_AIMPOINT_DES", "Lunette Aimpoint CAMO", 0 },
			{ "R3F_EOTECH_DES", "Lunette Eotech CAMO", 0 },
			{ "acc_pointer_IR", "Pointeur Laser", 0 },
			{ "acc_flashlight", "Lampe Torche", 0 },
			{ "R3F_SILENCIEUX_HK416", "Silencieux HK416", 0 },
			{ "R3F_SILENCIEUX_HK417", "Silencieux HK417", 0 },
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
        msg = "Vous devez etre Adjudant-Chef";
        items[] = {
		    { "kosmos_taser_pistol", "Tazer", 0 },
		    { "KMS_Taser_Mag", "Munition Taser", 0 },
            { "R3F_HK416M_HG", "HK416", 0 },
		    { "R3F_30Rnd_556x45_HK416", "Munition HK416", 0 },
			{ "R3F_HK417M_HG", "HK417 16 pouces", 0 },
		    { "R3F_20Rnd_762x51_HK417", "Munition HK417", 0 },
			{ "R3F_HK417L", "HK417 20 pouces", 0 },
		    { "R3F_20Rnd_762x51_HK417", "Munition HK417 20 pouces", 0 },
			{ "R3F_Famas_F1", "FAMAS F1", 0 },
		    { "R3F_25Rnd_556x45_FAMAS", "Munition FAMAS", 0 },
			{ "HandGrenade_Stone", "Grenade Flash", 0 },
			{ "R3F_AIMPOINT", "Lunette Aimpoint", 0 },
			{ "R3F_EOTECH", "Lunette Eotech", 0 },
			{ "optic_Arco", "Viseur Arco", 0 },
			{ "optic_Hamr", "Viseur RCO", 0 },
			{ "R3F_AIMPOINT_DES", "Lunette Aimpoint CAMO", 0 },
			{ "R3F_EOTECH_DES", "Lunette Eotech CAMO", 0 },
			{ "acc_pointer_IR", "Pointeur Laser", 0 },
			{ "acc_flashlight", "Lampe Torche", 0 },
			{ "R3F_SILENCIEUX_HK416", "Silencieux HK416", 0 },
			{ "R3F_SILENCIEUX_HK417", "Silencieux HK417", 0 },
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
        msg = "Vous devez etre Major";
        items[] = {
		    { "kosmos_taser_pistol", "Tazer", 0 },
		    { "KMS_Taser_Mag", "Munition Taser", 0 },
            { "R3F_HK416M_HG", "HK416", 0 },
		    { "R3F_30Rnd_556x45_HK416", "Munition HK416", 0 },	
			{ "R3F_HK417M_HG", "HK417 16 pouces", 0 },
		    { "R3F_20Rnd_762x51_HK417", "Munition HK417", 0 },
			{ "arifle_mas_m4", "M4", 0 },
		    { "30Rnd_mas_556x45_Stanag", "Munition M4", 0 },
			{ "R3F_HK417L", "HK417 20 pouces", 0 },
		    { "R3F_20Rnd_762x51_HK417", "Munition HK417 20 pouces", 0 },
			{ "HandGrenade_Stone", "Grenade Flash", 0 },
			{ "R3F_AIMPOINT", "Lunette Aimpoint", 0 },
			{ "R3F_EOTECH", "Lunette Eotech", 0 },
			{ "optic_Arco", "Viseur Arco", 0 },
			{ "optic_Hamr", "Viseur RCO", 0 },
			{ "R3F_AIMPOINT_DES", "Lunette Aimpoint CAMO", 0 },
			{ "R3F_EOTECH_DES", "Lunette Eotech CAMO", 0 },
			{ "acc_pointer_IR", "Pointeur Laser", 0 },
			{ "acc_flashlight", "Lampe Torche", 0 },
			{ "R3F_SILENCIEUX_HK416", "Silencieux HK416", 0 },
			{ "R3F_SILENCIEUX_HK417", "Silencieux HK417", 0 },
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
        msg = "Vous devez etre Lieutenant";
        items[] = {
		    { "kosmos_taser_pistol", "Tazer", 0 },
		    { "KMS_Taser_Mag", "Munition Taser", 0 },
            { "R3F_HK416M_HG", "HK416", 0 },
		    { "R3F_30Rnd_556x45_HK416", "Munition HK416", 0 },
			{ "R3F_HK417M_HG", "HK417 16 pouces", 0 },
		    { "R3F_20Rnd_762x51_HK417", "Munition HK417", 0 },
			{ "R3F_HK417L", "HK417 20 pouces", 0 },
		    { "R3F_20Rnd_762x51_HK417", "Munition HK417 20 pouces", 0 },
			{ "R3F_M4S90", "Benelli M4", 0 },
		    { "R3F_7Rnd_M4S90", "Munition Benelli M4", 0 },
			{ "arifle_mas_fal", "FN FAL", 0 },
		    { "20Rnd_mas_762x51_Stanag", "Munition FN FAL", 0 },
			{ "HandGrenade_Stone", "Grenade Flash", 0 },
			{ "R3F_AIMPOINT", "Lunette Aimpoint", 0 },
			{ "R3F_EOTECH", "Lunette Eotech", 0 },
			{ "optic_Arco", "Viseur Arco", 0 },
			{ "optic_Hamr", "Viseur RCO", 0 },
			{ "R3F_AIMPOINT_DES", "Lunette Aimpoint CAMO", 0 },
			{ "R3F_EOTECH_DES", "Lunette Eotech CAMO", 0 },
			{ "R3F_NF", "Lunette Night Force X15", 0 },
			{ "acc_pointer_IR", "Pointeur Laser", 0 },
			{ "acc_flashlight", "Lampe Torche", 0 },
			{ "R3F_SILENCIEUX_HK416", "Silencieux HK416", 0 },
			{ "R3F_SILENCIEUX_HK417", "Silencieux HK417", 0 },
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
        msg = "Vous devez etre Capitaine";
        items[] = {
		    { "kosmos_taser_pistol", "Tazer", 0 },
		    { "KMS_Taser_Mag", "Munition Taser", 0 },
            { "R3F_HK416M_HG", "HK416", 0 },
		    { "R3F_30Rnd_556x45_HK416", "Munition HK416", 0 },
			{ "R3F_HK417M_HG", "HK417 16 pouces", 0 },
		    { "R3F_20Rnd_762x51_HK417", "Munition HK417", 0 },
			{ "R3F_HK417L", "HK417 20 pouces", 0 },
		    { "R3F_20Rnd_762x51_HK417", "Munition HK417 20 pouces", 0 },
			{ "R3F_M4S90", "Benelli M4", 0 },
		    { "R3F_7Rnd_M4S90", "Munition Benelli M4", 0 },
			{ "arifle_mas_fal", "FN FAL", 0 },
		    { "20Rnd_mas_762x51_Stanag", "Munition FN FAL", 0 },
			{ "HandGrenade_Stone", "Grenade Flash", 0 },
			{ "R3F_AIMPOINT", "Lunette Aimpoint", 0 },
			{ "R3F_EOTECH", "Lunette Eotech", 0 },
			{ "optic_Arco", "Viseur Arco", 0 },
			{ "optic_Hamr", "Viseur RCO", 0 },
			{ "R3F_AIMPOINT_DES", "Lunette Aimpoint CAMO", 0 },
			{ "R3F_EOTECH_DES", "Lunette Eotech CAMO", 0 },
			{ "R3F_NF", "Lunette Night Force X15", 0 },
			{ "acc_pointer_IR", "Pointeur Laser", 0 },
			{ "acc_flashlight", "Lampe Torche", 0 },
			{ "R3F_SILENCIEUX_HK416", "Silencieux HK416", 0 },
			{ "R3F_SILENCIEUX_HK417", "Silencieux HK417", 0 },
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
        msg = "Vous devez etre Commandant";
        items[] = {
		    { "kosmos_taser_pistol", "Tazer", 0 },
		    { "KMS_Taser_Mag", "Munition Taser", 0 },
            { "R3F_HK416M_HG", "HK416", 0 },
		    { "R3F_30Rnd_556x45_HK416", "Munition HK416", 0 },
			{ "R3F_HK417M_HG", "HK417 16 pouces", 0 },
		    { "R3F_20Rnd_762x51_HK417", "Munition HK417", 0 },
			{ "R3F_HK417L", "HK417 20 pouces", 0 },
		    { "R3F_20Rnd_762x51_HK417", "Munition HK417 20 pouces", 0 },
			{ "R3F_M4S90", "Benelli M4", 0 },
		    { "R3F_7Rnd_M4S90", "Munition Benelli M4", 0 },
			{ "HandGrenade_Stone", "Grenade Flash", 0 },
			{ "R3F_AIMPOINT", "Lunette Aimpoint", 0 },
			{ "R3F_EOTECH", "Lunette Eotech", 0 },
			{ "optic_Arco", "Viseur Arco", 0 },
			{ "optic_Hamr", "Viseur RCO", 0 },
			{ "R3F_AIMPOINT_DES", "Lunette Aimpoint CAMO", 0 },
			{ "R3F_EOTECH_DES", "Lunette Eotech CAMO", 0 },
			{ "R3F_NF", "Lunette Night Force X15", 0 },
			{ "R3F_NF42", "Lunette Night Force X42", 0 },
			{ "acc_pointer_IR", "Pointeur Laser", 0 },
			{ "acc_flashlight", "Lampe Torche", 0 },
			{ "R3F_SILENCIEUX_HK416", "Silencieux HK416", 0 },
			{ "R3F_SILENCIEUX_HK417", "Silencieux HK417", 0 },
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
        msg = "Vous devez etre Général";
        items[] = {
		    { "kosmos_taser_pistol", "Tazer", 0 },
		    { "KMS_Taser_Mag", "Munition Taser", 0 },
            { "R3F_HK416M_HG", "HK416", 0 },
		    { "R3F_30Rnd_556x45_HK416", "Munition HK416", 0 },
			{ "R3F_HK417M_HG", "HK417 16 pouces", 0 },
		    { "R3F_20Rnd_762x51_HK417", "Munition HK417", 0 },
			{ "R3F_HK417L", "HK417 20 pouces", 0 },
		    { "R3F_20Rnd_762x51_HK417", "Munition HK417 20 pouces", 0 },
			{ "arifle_mas_m4", "M4", 0 },
		    { "30Rnd_mas_556x45_Stanag", "Munition M4", 0 },			
			{ "R3F_M4S90", "Benelli M4", 0 },
		    { "R3F_7Rnd_M4S90", "Munition Benelli M4", 0 },
			{ "HandGrenade_Stone", "Grenade Flash", 0 },
			{ "R3F_AIMPOINT", "Lunette Aimpoint", 0 },
			{ "R3F_EOTECH", "Lunette Eotech", 0 },
			{ "R3F_NF", "Lunette Night Force X15", 0 },			
			{ "optic_Arco", "Viseur Arco", 0 },
			{ "optic_Hamr", "Viseur RCO", 0 },
			{ "R3F_AIMPOINT_DES", "Lunette Aimpoint CAMO", 0 },
			{ "R3F_EOTECH_DES", "Lunette Eotech CAMO", 0 },
			{ "R3F_NF", "Lunette Night Force X15", 0 },
			{ "R3F_NF42", "Lunette Night Force X42", 0 },
			{ "R3F_ZEISS", "Lunette ZEISS Diavari", 0 },
			{ "acc_pointer_IR", "Pointeur Laser", 0 },
			{ "acc_flashlight", "Lampe Torche", 0 },
			{ "R3F_SILENCIEUX_HK416", "Silencieux HK416", 0 },
			{ "R3F_SILENCIEUX_HK417", "Silencieux HK417", 0 },
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
