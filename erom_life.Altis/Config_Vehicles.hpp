class CarShops {
    /*
    *    ARRAY FORMAT:
    *        0: STRING (Classname)
    *        1: SCALAR (Rental Price)
    *        2: ARRAY (license required)
    *            Ex: { "driver", "trucking", "rebel" }
    *        3: ARRAY (This is for limiting items to certain things)
    *            0: Variable to read from
    *            1: Variable Value Type (SCALAR / BOOL /EQUAL)
    *            2: What to compare to (-1 = Check Disabled)
    *
    *   BLUFOR Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_WEST
    *   OPFOR Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_EAST
    *   Independent Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_GUER
    *   Civilian Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_CIV
    */
    class civ_car {
        side = "civ";
        vehicles[] = {
            { "B_Quadbike_01_F", 2500, { "" }, { "", "", -1 } },
            { "C_Hatchback_01_F", 9500, { "driver" }, { "", "", -1 } },
            { "C_Offroad_01_F", 12500, { "driver" }, { "", "", -1 } },
            { "C_SUV_01_F", 30000, { "driver" }, { "", "", -1 } },
            { "C_Hatchback_01_sport_F", 40000, { "driver" }, { "", "", -1 } },
			{ "cl3_polo_gti_yellow", 40000, { "driver" }, { "", "", -1 } },
			{ "cl3_golf_mk2_yellow", 30000, { "driver" }, { "", "", -1 } },
			{ "cl3_insignia_yellow", 30000, { "driver" }, { "", "", -1 } },
            { "C_Van_01_transport_F", 45000, { "driver" }, { "", "", -1 } },
			{ "cl3_transit_yellow" , 40000, { "driver" }, { "", "", -1 } },
			{ "cl3_range_rover_yellow" , 40000, { "driver" }, { "", "", -1 } },
			{ "cl3_e63_amg_yellow" , 40000, { "driver" }, { "", "", -1 } },
			{ "cl3_reventon_yellow" , 40000, { "driver" }, { "", "", -1 } },
			{ "cl3_defender_110_yellow" , 40000, { "driver" }, { "", "", -1 } },
			{ "cl3_murcielago_yellow" , 40000, { "driver" }, { "", "", -1 } },
			{ "cl3_lamborghini_gt1_yellow" , 40000, { "driver" }, { "", "", -1 } },
			{ "cl3_aventador_lp7004_yellow" , 40000, { "driver" }, { "", "", -1 } },
			{ "cl3_civic_vti_yellow" , 40000, { "driver" }, { "", "", -1 } },
			{ "cl3_458_yellow" , 40000, { "driver" }, { "", "", -1 } },
			{ "cl3_dumper_truck_yellow" , 40000, { "driver" }, { "", "", -1 } },
			{ "cl3_z4_2008_yellow", 40000, { "driver" }, { "", "", -1 } },
			{ "cl3_e60_m5_yellow" , 40000, { "driver" }, { "", "", -1 } },
			{ "cl3_r8_spyder_yellow" , 40000, { "driver" }, { "", "", -1 } },
			{ "cl3_q7_yellow" , 40000, { "driver" }, { "", "", -1 } },
			{ "cl3_dbs_volante_yellow" , 40000, { "driver" }, { "", "", -1 } },
			{ "cl3_arielatom_race_yellow" , 40000, { "driver" }, { "", "", -1 } },
			{ "Mrshounka_yamaha_p" , 40000, { "driver" }, { "", "", -1 } },
			{ "C_Hatchback_01_F" , 40000, { "driver" }, { "", "", -1 } },
			{ "cl3_dodge_chargerum_s_black" , 40000, { "driver" }, { "", "", -1 } },
			{ "cl3_dodge_chargerum_o_black" , 40000, { "driver" }, { "", "", -1 } },
			{ "cl3_suv_taxi" , 40000, { "driver" }, { "", "", -1 } },
			{ "cl3_dodge_chargerum_f_black" , 40000, { "driver" }, { "", "", -1 } },
			{ "C_Offroad_01_F" , 40000, { "driver" }, { "", "", -1 } },
			{ "C_SUV_01_F" , 40000, { "driver" }, { "", "", -1 } },
			{ "Jonzie_STI" , 40000, { "driver" }, { "", "", -1 } },
			{ "Mrshounka_r5_violet" , 40000, { "driver" }, { "", "", -1 } },
			{ "Mrshounka_r5_rouge" , 40000, { "driver" }, { "", "", -1 } },
			{ "Mrshounka_r5_rose" , 40000, { "driver" }, { "", "", -1 } },
			{ "Mrshounka_r5_orange" , 40000, { "driver" }, { "", "", -1 } },
			{ "Mrshounka_r5_noir" , 40000, { "driver" }, { "", "", -1 } },
			{ "Mrshounka_r5_grise" , 40000, { "driver" }, { "", "", -1 } },
			{ "Mrshounka_r5_bleufonce" , 40000, { "driver" }, { "", "", -1 } },
			{ "Mrshounka_r5_civ" , 40000, { "driver" }, { "", "", -1 } },
			{ "Mrshounka_r5_jaune" , 40000, { "driver" }, { "", "", -1 } },
			{ "cl3_lada_red" , 40000, { "driver" }, { "", "", -1 } },
			{ "O_Quadbike_01_F" , 40000, { "driver" }, { "", "", -1 } },
			{ "shounka_porsche911" , 40000, { "driver" }, { "", "", -1 } },
			{ "IVORY_PRIUS" , 40000, { "driver" }, { "", "", -1 } },
			{ "Mrshounka_a3_308_civ" , 40000, { "driver" }, { "", "", -1 } },
			{ "Jonzie_Mini_Cooper" , 40000, { "driver" }, { "", "", -1 } },
			{ "Jonzie_Mini_Cooper_R_spec" , 40000, { "driver" }, { "", "", -1 } },
			{ "Jonzie_Galant" , 40000 , { "driver" }, { "", "", -1 } },
			{ "cl3_carrera_gt_yellow" , 40000, { "driver" }, { "", "", -1 } },
			{ "Mrshounka_mercedes_190_p_civ" , 40000, { "driver" }, { "", "", -1 } },
			{ "Jonzie_Quattroporte" , 40000 , { "driver" }, { "", "", -1 } },
			{ "Mrshounka_lykan_c" , 40000 , { "driver" }, { "", "", -1 } },
			{ "shounka_limo_civ" , 40000 , { "driver" }, { "", "", -1 } },
			{ "cl3_golf_learner_white", 40000, { "driver" }, { "", "", -1 } },
			{ "Jonzie_Ceed" , 40000, { "driver" }, { "", "", -1 } },
			{ "C_Kart_01_F" , 40000, { "driver" }, { "", "", -1 } },
			{ "cl3_volha_grey" , 40000, { "driver" }, { "", "", -1 } },
			{ "C_Van_01_box_F" , 40000, { "driver" }, { "", "", -1 } },
			{ "Jonzie_Forklift" , 40000, { "driver" }, { "", "", -1 } },
			{ "Jonzie_Transit" , 40000, { "driver" }, { "", "", -1 } },
			{ "Jonzie_XB" , 40000, { "driver" }, { "", "", -1 } },
			{ "Jonzie_Raptor" , 40000, { "driver" }, { "", "", -1 } },
			{ "shounka_f430_spider" , 40000, { "driver" }, { "", "", -1 } },
			{ "cl3_f150repo_black" , 40000, { "driver" }, { "", "", -1 } },
			{ "Jonzie_Viper" , 40000, { "driver" }, { "", "", -1 } },
			{ "Jonzie_Datsun_Z432" , 40000, { "driver" }, { "", "", -1 } },
			{ "Jonzie_Datsun_510" , 40000, { "driver" }, { "", "", -1 } },
			{ "Mrshounka_corbillard_c" , 40000, { "driver" }, { "", "", -1 } },
			{ "shounka_a3_cliors_civ" , 40000, { "driver" }, { "", "", -1 } },
			{ "shounka_monsteur" , 40000, { "driver" }, { "", "", -1 } },
			{ "shounka_avalanche" , 40000, { "driver" }, { "", "", -1 } },
			{ "Jonzie_Escalade" , 40000, { "driver" }, { "", "", -1 } },
			{ "shounka_buggy" , 40000, { "driver" }, { "", "", -1 } },
			{ "Jonzie_30CSL" , 40000, { "driver" }, { "", "", -1 } },
			{ "cl3_veyron_lblue_dblue" , 40000, { "driver" }, { "", "", -1 } },
			{ "cl3_s1203_blue" , 40000, { "driver" }, { "", "", -1 } },
			{ "cl3_suv_black" , 40000, { "driver" }, { "", "", -1 } },
			{ "cl3_s1203_ambulance" , 40000, { "driver" }, { "", "", -1 } },
			{ "DAR_TaurusCiv" , 40000, { "driver" }, { "", "", -1 } },
			{ "DAR_TaurusCivBlack" , 40000, { "driver" }, { "", "", -1 } },
			{ "DAR_ChargerCiv" , 40000, { "driver" }, { "", "", -1 } },
			{ "DAR_FusionCivRed" , 40000, { "driver" }, { "", "", -1 } },
			{ "DAR_ChallengerCivWhite" , 40000, { "driver" }, { "", "", -1 } },
			{ "DAR_TahoePoliceDet" , 40000, { "driver" }, { "", "", -1 } },
			{ "Jonzie_96_Impala" , 40000, { "driver" }, { "", "", -1 } }
		}; 		
    };

    class kart_shop {
        side = "civ";
        vehicles[] = {
            { "C_Kart_01_Blu_F", 15000 , { "driver" }, { "", "", -1 } },
            { "C_Kart_01_Fuel_F", 15000, { "driver" }, { "", "", -1 } },
            { "C_Kart_01_Red_F", 15000, { "driver" }, { "", "", -1 } },
            { "C_Kart_01_Vrana_F", 15000, { "driver" }, { "", "", -1 } }
        };
    };

    class med_shop {
        side = "med";
        vehicles[] = {
            { "C_Offroad_01_F", 10000, { "" }, { "", "", -1 } },
            { "I_Truck_02_medical_F", 25000, { "" }, { "", "", -1 } },
            { "O_Truck_03_medical_F", 45000, { "" }, { "", "", -1 } },
            { "B_Truck_01_medical_F", 60000, { "" }, { "", "", -1 } }
        };
    };

    class med_air_hs {
        side = "med";
        vehicles[] = {
            { "B_Heli_Light_01_F", 50000, { "mAir" }, { "", "", -1 } },
            { "O_Heli_Light_02_unarmed_F", 75000, { "mAir" }, { "", "", -1 } }
        };
    };

    class civ_truck {
        side = "civ";
        vehicles[] = {
            { "C_Van_01_box_F", 60000, { "trucking" }, { "", "", -1 } },
            { "I_Truck_02_transport_F", 75000, { "trucking" }, { "", "", -1 } },
            { "I_Truck_02_covered_F", 100000, { "trucking" }, { "", "", -1 } },
            { "B_Truck_01_transport_F", 275000, { "trucking" }, { "", "", -1 } },
            { "O_Truck_03_transport_F", 200000, { "trucking" }, { "", "", -1 } },
            { "O_Truck_03_covered_F", 250000, { "trucking" }, { "", "", -1 } },
            { "B_Truck_01_box_F", 350000, { "trucking" }, { "", "", -1 } },
			{ "Jonzie_Western", 350000, { "trucking" }, { "", "", -1 } },
			{ "O_Truck_02_covered_F", 350000, { "trucking" }, { "", "", -1 } },
			{ "O_Truck_02_transport_F", 350000, { "trucking" }, { "", "", -1 } },
			{ "Jonzie_Corolla", 350000, { "trucking" }, { "", "", -1 } },
			{ "O_Truck_03_repair_F", 350000, { "trucking" }, { "", "", -1 } },
			{ "O_Truck_03_ammo_F", 350000, { "trucking" }, { "", "", -1 } },
			{ "O_Truck_03_medical_F", 350000, { "trucking" }, { "", "", -1 } },
			{ "O_Truck_03_fuel_F", 350000, { "trucking" }, { "", "", -1 } },
			{ "O_Truck_02_box_F", 350000, { "trucking" }, { "", "", -1 } },
			{ "Jonzie_Tow_Truck", 350000, { "trucking" }, { "", "", -1 } },
			{ "Jonzie_Tanker_Truck", 350000, { "trucking" }, { "", "", -1 } },
			{ "Jonzie_Log_Truck", 350000, { "trucking" }, { "", "", -1 } },
			{ "Jonzie_Flat_Bed", 350000, { "trucking" }, { "", "", -1 } },
			{ "Jonzie_Box_Truck", 350000, { "trucking" }, { "", "", -1 } },
			{ "Jonzie_Superliner", 350000, { "trucking" }, { "", "", -1 } },
			{ "Mrshounka_a3_iveco_f", 350000, { "trucking" }, { "", "", -1 } },
			{ "B_Truck_01_transport_F", 350000, { "trucking" }, { "", "", -1 } },
            { "O_Truck_03_device_F", 450000, { "trucking" }, { "", "", -1 } }
        };
    };

    class reb_car {
        side = "civ";
        vehicles[] = {
            { "B_Quadbike_01_F", 2500, { "" }, { "", "", -1 } },
            { "B_G_Offroad_01_F", 12500, { "" }, { "", "", -1 } },
            { "O_MRAP_02_F", 150000, { "" }, { "", "", -1 } },
            { "B_Heli_Light_01_F", 325000, { "" }, { "", "", -1 } },
            { "B_G_Offroad_01_armed_F", 750000, { "rebel" }, { "", "", -1 } }
        };
    };

    class cop_car {
        side = "cop";
        vehicles[] = {
			{ "DAR_TahoePolice", 50000, { "" }, { "", "", -1 } },
			{ "DAR_CVPIPolice", 50000, { "" }, { "", "", -1 } },
			{ "C_Hatchback_01_sport_F", 50000, { "" }, { "", "", -1 } },
			{ "DAR_ChargerPolice", 50000, { "" }, { "", "", -1 } },
			{ "DAR_TaurusPolice", 50000, { "" }, { "", "", -1 } },
			{ "DAR_ImpalaPolice", 50000, { "" }, { "", "", -1 } },
			{ "cl3_dodge_charger_patrol", 50000, { "" }, { "", "", -1 } },
			{ "Mrshounka_a3_308_gend", 50000, { "" }, { "", "", -1 } },		
			{ "DAR_TahoePoliceDet", 50000, { "" }, { "life_coplevel", "SCALAR", 5 } },
			{ "DAR_TaurusCiv", 50000, { "" }, { "life_coplevel", "SCALAR", 5 } },
			{ "DAR_ImpalaPoliceDet", 50000, { "" }, { "life_coplevel", "SCALAR", 5 } },
            { "Jonzie_Tow_Truck", 100000, { "" }, { "life_coplevel", "SCALAR", 5 } },
            { "cl3_q7_clpd_patrol", 50000, { "" }, { "life_coplevel", "SCALAR", 5 } },
            { "B_MRAP_01_F", 50000, { "" }, { "life_coplevel", "SCALAR", 5 } },
            { "DAR_CVPIAux", 50000, { "" }, { "life_coplevel", "SCALAR", 5 } },
			{ "DAR_ChargerPoliceState", 50000, { "" }, { "life_coplevel", "SCALAR", 5 } },
            { "DAR_ExplorerPolice", 50000, { "" }, { "life_coplevel", "SCALAR", 5 } },			
			{ "DAR_TaurusPoliceState", 50000, { "" }, { "life_coplevel", "SCALAR", 5 } },
			{ "cl3_suv_black", 50000, { "" }, { "life_coplevel", "SCALAR", 5 } },
			{ "shounka_a3_suburbangign_transport", 50000, { "" }, { "life_coplevel", "SCALAR", 5 } },
			{ "DAR_SWATPolice", 50000, { "" }, { "life_coplevel", "SCALAR", 5 } },
			{ "shounka_a3_suburbangign", 50000, { "" }, { "life_coplevel", "SCALAR", 5 } }
        };
    };

    class civ_air {
        side = "civ";
        vehicles[] = {
            { "B_Heli_Light_01_F", 253000, { "pilot" }, { "", "", -1 } },
            { "O_Heli_Light_02_unarmed_F", 750000, { "pilot" }, { "", "", -1 } }
        };
    };

    class cop_air {
        side = "cop";
        vehicles[] = {
            { "B_Heli_Light_01_F", 75000, { "cAir" }, { "", "", -1 } },
            { "B_Heli_Transport_01_F", 200000, { "cAir" }, { "life_coplevel", "SCALAR", 3 } }
        };
    };

    class cop_ship {
        side = "cop";
        vehicles[] = {
            { "B_Boat_Transport_01_F", 3000, { "cg" }, { "", "", -1 } },
            { "C_Boat_Civil_01_police_F", 20000, { "cg" }, { "", "", -1 } },
            { "B_Boat_Armed_01_minigun_F", 75000, { "cg" }, { "life_coplevel", "SCALAR", 3 } },
            { "B_SDV_01_F", 100000, { "cg" }, { "", "", -1 } }
        };
    };

    class civ_ship {
        side = "civ";
        vehicles[] = {
            { "C_Rubberboat", 5000, { "boat" }, { "", "", -1 } },
			{ "Cl3MOD_C_Rubberboat_civilian", 5000, { "boat" }, { "", "", -1 } },
			{ "B_SDV_01_F", 5000, { "boat" }, { "", "", -1 } },
			{ "B_Lifeboat", 5000, { "boat" }, { "", "", -1 } },
            { "C_Boat_Civil_01_F", 22000, { "boat" }, { "", "", -1 } },
			{ "Burnes_MK10_1", 10000000, { "boat" }, { "", "", -1 } },
            { "B_SDV_01_F", 150000, { "boat" }, { "", "", -1 } }
        };
    };
};

class LifeCfgVehicles {
    /*
    *    Vehicle Configs (Contains textures and other stuff)
    *
    *    storageFee (Getting vehicles out of garage) format:
    *        INDEX 0: Civilian Price
    *        INDEX 1: Cop Price
    *        INDEX 2: EMS Price
    *        INDEX 3: OPFOR Price (Not implemented in vanilla but still leaving support
    *
    *    garageSell (Selling vehicles from garage) format:
    *        INDEX 0: Civilian Price
    *        INDEX 1: Cop Price
    *        INDEX 2: EMS Price
    *        INDEX 3: OPFOR Price (Not implemented in vanilla but still leaving support
    *
    *    Textures config follows { Texture Name, side, {texture(s)path}}
    *    Texture(s)path follows this format:
    *    INDEX 0: Texture Layer 0
    *    	INDEX 1: Texture Layer 1
    *    INDEX 2: Texture Layer 2
    *    etc etc etc
    */

    class Default {
        vItemSpace = -1;
        storageFee[] = { 1000, 1000, 1000, 1000 };
        garageSell[] = { 0, 0, 0, 0 };
        insurance = 2500;
        chopShop = 1200;
        textures[] = {};
    };
	
	class cl3_golf_mk2_yellow {
        vItemSpace = 20;
        storageFee[] = { 0, 0, 1500, 0 };
        garageSell[] = { 0, 0, 5000, 0 };
        insurance = 2500;
        chopShop = 12500;
        textures[] = {};
    };	
		
	class cl3_transit_yellow {
        vItemSpace = 20;
        storageFee[] = { 0, 0, 1500, 0 };
        garageSell[] = { 0, 0, 5000, 0 };
        insurance = 2500;
        chopShop = 12500;
        textures[] = {};
    };	
    
	class cl3_polo_gti_yellow {
        vItemSpace = 20;
        storageFee[] = { 0, 0, 1500, 0 };
        garageSell[] = { 0, 0, 5000, 0 };
        insurance = 2500;
        chopShop = 12500;
        textures[] = {};
    };	
    
	class cl3_insignia_yellow {
        vItemSpace = 20;
        storageFee[] = { 0, 0, 1500, 0 };
        garageSell[] = { 0, 0, 5000, 0 };
        insurance = 2500;
        chopShop = 12500;
        textures[] = {};
    };	
	
	class cl3_range_rover_yellow {
        vItemSpace = 60;
        storageFee[] = { 0, 0, 1500, 0 };
        garageSell[] = { 0, 0, 5000, 0 };
        insurance = 2500;
        chopShop = 12500;
        textures[] = {};
    };	
	
	class cl3_e63_amg_yellow {
        vItemSpace = 60;
        storageFee[] = { 0, 0, 1500, 0 };
        garageSell[] = { 0, 0, 5000, 0 };
        insurance = 2500;
        chopShop = 12500;
        textures[] = {};
    };	
	
	class cl3_carrera_gt_yellow {
        vItemSpace = 60;
        storageFee[] = { 0, 0, 1500, 0 };
        garageSell[] = { 0, 0, 5000, 0 };
        insurance = 2500;
        chopShop = 12500;
        textures[] = {};
    };	
	
	class Jonzie_Galant{
        vItemSpace = 60;
        storageFee[] = { 0, 0, 1500, 0 };
        garageSell[] = { 0, 0, 5000, 0 };
        insurance = 2500;
        chopShop = 12500;
        textures[] = {};
    };	
	
	class cl3_reventon_yellow {
        vItemSpace = 60;
        storageFee[] = { 0, 0, 1500, 0 };
        garageSell[] = { 0, 0, 5000, 0 };
        insurance = 2500;
        chopShop = 12500;
        textures[] = {};
    };	
	
	class cl3_murcielago_yellow {
        vItemSpace = 60;
        storageFee[] = { 0, 0, 1500, 0 };
        garageSell[] = { 0, 0, 5000, 0 };
        insurance = 2500;
        chopShop = 12500;
        textures[] = {};
    };	
	
	class cl3_defender_110_yellow {
        vItemSpace = 60;
        storageFee[] = { 0, 0, 1500, 0 };
        garageSell[] = { 0, 0, 5000, 0 };
        insurance = 2500;
        chopShop = 12500;
        textures[] = {};
    };	
	
	class cl3_lamborghini_gt1_yellow {
        vItemSpace = 60;
        storageFee[] = { 0, 0, 1500, 0 };
        garageSell[] = { 0, 0, 5000, 0 };
        insurance = 2500;
        chopShop = 12500;
        textures[] = {};
    };	
	
	class cl3_aventador_lp7004_yellow {
        vItemSpace = 60;
        storageFee[] = { 0, 0, 1500, 0 };
        garageSell[] = { 0, 0, 5000, 0 };
        insurance = 2500;
        chopShop = 12500;
        textures[] = {};
    };	
	
	class cl3_civic_vti_yellow {
        vItemSpace = 60;
        storageFee[] = { 0, 0, 1500, 0 };
        garageSell[] = { 0, 0, 5000, 0 };
        insurance = 2500;
        chopShop = 12500;
        textures[] = {};
    };	
	
	class IVORY_PRIUS {
        vItemSpace = 60;
        storageFee[] = { 0, 0, 1500, 0 };
        garageSell[] = { 0, 0, 5000, 0 };
        insurance = 2500;
        chopShop = 12500;
        textures[] = {};
    };	
	
	class cl3_458_yellow {
        vItemSpace = 20;
        storageFee[] = { 0, 0, 1500, 0 };
        garageSell[] = { 0, 0, 5000, 0 };
        insurance = 2500;
        chopShop = 12500;
        textures[] = {};
    };	
	
	class cl3_e60_m5_yellow {
        vItemSpace = 20;
        storageFee[] = { 0, 0, 1500, 0 };
        garageSell[] = { 0, 0, 5000, 0 };
        insurance = 2500;
        chopShop = 12500;
        textures[] = {};
    };	
	
	class Mrshounka_mercedes_190_p_civ {
        vItemSpace = 20;
        storageFee[] = { 0, 0, 1500, 0 };
        garageSell[] = { 0, 0, 5000, 0 };
        insurance = 2500;
        chopShop = 12500;
        textures[] = {};
	};
	
	class Mrshounka_lykan_c {
        vItemSpace = 20;
        storageFee[] = { 0, 0, 1500, 0 };
        garageSell[] = { 0, 0, 5000, 0 };
        insurance = 2500;
        chopShop = 12500;
        textures[] = {};
	};
	
	class shounka_limo_civ {
        vItemSpace = 20;
        storageFee[] = { 0, 0, 1500, 0 };
        garageSell[] = { 0, 0, 5000, 0 };
        insurance = 2500;
        chopShop = 12500;
        textures[] = {};
	};
	
	class cl3_golf_learner_white {
        vItemSpace = 20;
        storageFee[] = { 0, 0, 1500, 0 };
        garageSell[] = { 0, 0, 5000, 0 };
        insurance = 2500;
        chopShop = 12500;
        textures[] = {};
	};
	
	class Jonzie_Ceed {
        vItemSpace = 20;
        storageFee[] = { 0, 0, 1500, 0 };
        garageSell[] = { 0, 0, 5000, 0 };
        insurance = 2500;
        chopShop = 12500;
        textures[] = {};
	};
	
	class C_Kart_01_F {
        vItemSpace = 20;
        storageFee[] = { 0, 0, 1500, 0 };
        garageSell[] = { 0, 0, 5000, 0 };
        insurance = 2500;
        chopShop = 12500;
        textures[] = {};
	};
	
	class cl3_volha_grey {
        vItemSpace = 20;
        storageFee[] = { 0, 0, 1500, 0 };
        garageSell[] = { 0, 0, 5000, 0 };
        insurance = 2500;
        chopShop = 12500;
        textures[] = {};
	};
	
	class Jonzie_Forklift {
        vItemSpace = 20;
        storageFee[] = { 0, 0, 1500, 0 };
        garageSell[] = { 0, 0, 5000, 0 };
        insurance = 2500;
        chopShop = 12500;
        textures[] = {};
	};
	
	class Jonzie_Transit {
        vItemSpace = 20;
        storageFee[] = { 0, 0, 1500, 0 };
        garageSell[] = { 0, 0, 5000, 0 };
        insurance = 2500;
        chopShop = 12500;
        textures[] = {};
	};
	
	class Jonzie_XB {
        vItemSpace = 20;
        storageFee[] = { 0, 0, 1500, 0 };
        garageSell[] = { 0, 0, 5000, 0 };
        insurance = 2500;
        chopShop = 12500;
        textures[] = {};
	};
	
	class Jonzie_Raptor {
        vItemSpace = 20;
        storageFee[] = { 0, 0, 1500, 0 };
        garageSell[] = { 0, 0, 5000, 0 };
        insurance = 2500;
        chopShop = 12500;
        textures[] = {};
	};

	class Jonzie_Quattroporte {
        vItemSpace = 20;
        storageFee[] = { 0, 0, 1500, 0 };
        garageSell[] = { 0, 0, 5000, 0 };
        insurance = 2500;
        chopShop = 12500;
        textures[] = {};
	};
	
	class cl3_r8_spyder_yellow {
        vItemSpace = 20;
        storageFee[] = { 0, 0, 1500, 0 };
        garageSell[] = { 0, 0, 5000, 0 };
        insurance = 2500;
        chopShop = 12500;
        textures[] = {};
	};
	
	class cl3_f150repo_black {
        vItemSpace = 20;
        storageFee[] = { 0, 0, 1500, 0 };
        garageSell[] = { 0, 0, 5000, 0 };
        insurance = 2500;
        chopShop = 12500;
        textures[] = {};
	};
	
	class Jonzie_Viper {
        vItemSpace = 20;
        storageFee[] = { 0, 0, 1500, 0 };
        garageSell[] = { 0, 0, 5000, 0 };
        insurance = 2500;
        chopShop = 12500;
        textures[] = {};
	};
    
	class Jonzie_Mini_Cooper_R_spec {
        vItemSpace = 20;
        storageFee[] = { 0, 0, 1500, 0 };
        garageSell[] = { 0, 0, 5000, 0 };
        insurance = 2500;
        chopShop = 12500;
        textures[] = {};
	};    

	class cl3_batmobile {
        vItemSpace = 20;
        storageFee[] = { 0, 0, 1500, 0 };
        garageSell[] = { 0, 0, 5000, 0 };
        insurance = 2500;
        chopShop = 12500;
        textures[] = {};
	};
	
	class Jonzie_Mini_Cooper {
        vItemSpace = 20;
        storageFee[] = { 0, 0, 1500, 0 };
        garageSell[] = { 0, 0, 5000, 0 };
        insurance = 2500;
        chopShop = 12500;
        textures[] = {};
	};
	
	class Jonzie_Datsun_Z432 {
        vItemSpace = 20;
        storageFee[] = { 0, 0, 1500, 0 };
        garageSell[] = { 0, 0, 5000, 0 };
        insurance = 2500;
        chopShop = 12500;
        textures[] = {};
	};
	
	class Jonzie_Datsun_510 {
        vItemSpace = 20;
        storageFee[] = { 0, 0, 1500, 0 };
        garageSell[] = { 0, 0, 5000, 0 };
        insurance = 2500;
        chopShop = 12500;
        textures[] = {};
	};
	
	
	class Mrshounka_corbillard_c {
        vItemSpace = 20;
        storageFee[] = { 0, 0, 1500, 0 };
        garageSell[] = { 0, 0, 5000, 0 };
        insurance = 2500;
        chopShop = 12500;
        textures[] = {};
	};
	
	class shounka_a3_cliors_civ {
        vItemSpace = 20;
        storageFee[] = { 0, 0, 1500, 0 };
        garageSell[] = { 0, 0, 5000, 0 };
        insurance = 2500;
        chopShop = 12500;
        textures[] = {};
	};
	
	class shounka_monsteur {
        vItemSpace = 20;
        storageFee[] = { 0, 0, 1500, 0 };
        garageSell[] = { 0, 0, 5000, 0 };
        insurance = 2500;
        chopShop = 12500;
        textures[] = {};
	};
	
	class shounka_avalanche {
        vItemSpace = 20;
        storageFee[] = { 0, 0, 1500, 0 };
        garageSell[] = { 0, 0, 5000, 0 };
        insurance = 2500;
        chopShop = 12500;
        textures[] = {};
	};
	
	class Jonzie_Escalade {
        vItemSpace = 20;
        storageFee[] = { 0, 0, 1500, 0 };
        garageSell[] = { 0, 0, 5000, 0 };
        insurance = 2500;
        chopShop = 12500;
        textures[] = {};
	};
	
	class shounka_buggy {
        vItemSpace = 20;
        storageFee[] = { 0, 0, 1500, 0 };
        garageSell[] = { 0, 0, 5000, 0 };
        insurance = 2500;
        chopShop = 12500;
        textures[] = {};
	};
	
	class Jonzie_30CSL {
        vItemSpace = 20;
        storageFee[] = { 0, 0, 1500, 0 };
        garageSell[] = { 0, 0, 5000, 0 };
        insurance = 2500;
        chopShop = 12500;
        textures[] = {};
	};
	
	class cl3_veyron_lblue_dblue {
        vItemSpace = 20;
        storageFee[] = { 0, 0, 1500, 0 };
        garageSell[] = { 0, 0, 5000, 0 };
        insurance = 2500;
        chopShop = 12500;
        textures[] = {};
	};
	
	class cl3_s1203_blue {
        vItemSpace = 20;
        storageFee[] = { 0, 0, 1500, 0 };
        garageSell[] = { 0, 0, 5000, 0 };
        insurance = 2500;
        chopShop = 12500;
        textures[] = {};
	};
	
	class cl3_suv_black {
        vItemSpace = 20;
        storageFee[] = { 0, 0, 1500, 0 };
        garageSell[] = { 0, 0, 5000, 0 };
        insurance = 2500;
        chopShop = 12500;
        textures[] = {};
	};
	
	class Mrshounka_a3_308_civ {
        vItemSpace = 20;
        storageFee[] = { 0, 0, 1500, 0 };
        garageSell[] = { 0, 0, 5000, 0 };
        insurance = 2500;
        chopShop = 12500;
        textures[] = {};
	};
	
	class DAR_TaurusCiv {
        vItemSpace = 20;
        storageFee[] = { 0, 0, 1500, 0 };
        garageSell[] = { 0, 0, 5000, 0 };
        insurance = 2500;
        chopShop = 12500;
        textures[] = {};
	};
	
	class DAR_TaurusCivBlack {
        vItemSpace = 20;
        storageFee[] = { 0, 0, 1500, 0 };
        garageSell[] = { 0, 0, 5000, 0 };
        insurance = 2500;
        chopShop = 12500;
        textures[] = {};
	};
	
	class DAR_ChargerCiv {
        vItemSpace = 20;
        storageFee[] = { 0, 0, 1500, 0 };
        garageSell[] = { 0, 0, 5000, 0 };
        insurance = 2500;
        chopShop = 12500;
        textures[] = {};
	};
	
	class DAR_FusionCivRed {
        vItemSpace = 20;
        storageFee[] = { 0, 0, 1500, 0 };
        garageSell[] = { 0, 0, 5000, 0 };
        insurance = 2500;
        chopShop = 12500;
        textures[] = {};
	};
	
	class DAR_ChallengerCivWhite {
        vItemSpace = 20;
        storageFee[] = { 0, 0, 1500, 0 };
        garageSell[] = { 0, 0, 5000, 0 };
        insurance = 2500;
        chopShop = 12500;
        textures[] = {};
	};
	
	class Jonzie_96_Impala {
        vItemSpace = 20;
        storageFee[] = { 0, 0, 1500, 0 };
        garageSell[] = { 0, 0, 5000, 0 };
        insurance = 2500;
        chopShop = 12500;
        textures[] = {};
	};
	
	class shounka_porsche911 {
        vItemSpace = 20;
        storageFee[] = { 0, 0, 1500, 0 };
        garageSell[] = { 0, 0, 5000, 0 };
        insurance = 2500;
        chopShop = 12500;
        textures[] = {};
	};
	
	class Mrshounka_r5_grise {
        vItemSpace = 20;
        storageFee[] = { 0, 0, 1500, 0 };
        garageSell[] = { 0, 0, 5000, 0 };
        insurance = 2500;
        chopShop = 12500;
        textures[] = {};
	};
	
	class Mrshounka_r5_bleufonce {
        vItemSpace = 20;
        storageFee[] = { 0, 0, 1500, 0 };
        garageSell[] = { 0, 0, 5000, 0 };
        insurance = 2500;
        chopShop = 12500;
        textures[] = {};
	};
	
	class Mrshounka_r5_civ {
        vItemSpace = 20;
        storageFee[] = { 0, 0, 1500, 0 };
        garageSell[] = { 0, 0, 5000, 0 };
        insurance = 2500;
        chopShop = 12500;
        textures[] = {};
	};
	
	class cl3_lada_red{
        vItemSpace = 20;
        storageFee[] = { 0, 0, 1500, 0 };
        garageSell[] = { 0, 0, 5000, 0 };
        insurance = 2500;
        chopShop = 12500;
        textures[] = {};
	};
	
	class Mrshounka_r5_jaune {
        vItemSpace = 20;
        storageFee[] = { 0, 0, 1500, 0 };
        garageSell[] = { 0, 0, 5000, 0 };
        insurance = 2500;
        chopShop = 12500;
        textures[] = {};
	};
	
	class Mrshounka_r5_orange {
        vItemSpace = 20;
        storageFee[] = { 0, 0, 1500, 0 };
        garageSell[] = { 0, 0, 5000, 0 };
        insurance = 2500;
        chopShop = 12500;
        textures[] = {};
	};
	
	class Mrshounka_r5_rouge {
        vItemSpace = 20;
        storageFee[] = { 0, 0, 1500, 0 };
        garageSell[] = { 0, 0, 5000, 0 };
        insurance = 2500;
        chopShop = 12500;
        textures[] = {};
	};
	
	class Mrshounka_r5_noir {
        vItemSpace = 20;
        storageFee[] = { 0, 0, 1500, 0 };
        garageSell[] = { 0, 0, 5000, 0 };
        insurance = 2500;
        chopShop = 12500;
        textures[] = {};
	};
	
	class Mrshounka_r5_rose {
        vItemSpace = 20;
        storageFee[] = { 0, 0, 1500, 0 };
        garageSell[] = { 0, 0, 5000, 0 };
        insurance = 2500;
        chopShop = 12500;
        textures[] = {};
	};
	
	class Jonzie_STI {
        vItemSpace = 20;
        storageFee[] = { 0, 0, 1500, 0 };
        garageSell[] = { 0, 0, 5000, 0 };
        insurance = 2500;
        chopShop = 12500;
        textures[] = {};
	};
	
	class Mrshounka_r5_violet {
        vItemSpace = 20;
        storageFee[] = { 0, 0, 1500, 0 };
        garageSell[] = { 0, 0, 5000, 0 };
        insurance = 2500;
        chopShop = 12500;
        textures[] = {};
	};
	
	class cl3_suv_taxi {
        vItemSpace = 20;
        storageFee[] = { 0, 0, 1500, 0 };
        garageSell[] = { 0, 0, 5000, 0 };
        insurance = 2500;
        chopShop = 12500;
        textures[] = {};
    };	
	
	class cl3_dodge_chargerum_f_black {
        vItemSpace = 20;
        storageFee[] = { 0, 0, 1500, 0 };
        garageSell[] = { 0, 0, 5000, 0 };
        insurance = 2500;
        chopShop = 12500;
        textures[] = {};
    };	
	
	class cl3_dodge_chargerum_o_black {
        vItemSpace = 20;
        storageFee[] = { 0, 0, 1500, 0 };
        garageSell[] = { 0, 0, 5000, 0 };
        insurance = 2500;
        chopShop = 12500;
        textures[] = {};
    };	
	
	class cl3_dodge_chargerum_s_black {
        vItemSpace = 20;
        storageFee[] = { 0, 0, 1500, 0 };
        garageSell[] = { 0, 0, 5000, 0 };
        insurance = 2500;
        chopShop = 12500;
        textures[] = {};
    };	
	
	class Mrshounka_yamaha_p{
        vItemSpace = 20;
        storageFee[] = { 0, 0, 1500, 0 };
        garageSell[] = { 0, 0, 5000, 0 };
        insurance = 2500;
        chopShop = 12500;
        textures[] = {};
    };	
	
	class cl3_arielatom_race_yellow {
        vItemSpace = 20;
        storageFee[] = { 0, 0, 1500, 0 };
        garageSell[] = { 0, 0, 5000, 0 };
        insurance = 2500;
        chopShop = 12500;
        textures[] = {};
    };	
	
	class cl3_dbs_volante_yellow {
        vItemSpace = 20;
        storageFee[] = { 0, 0, 1500, 0 };
        garageSell[] = { 0, 0, 5000, 0 };
        insurance = 2500;
        chopShop = 12500;
        textures[] = {};
    };	
	
	class cl3_q7_yellow {
        vItemSpace = 20;
        storageFee[] = { 0, 0, 1500, 0 };
        garageSell[] = { 0, 0, 5000, 0 };
        insurance = 2500;
        chopShop = 12500;
        textures[] = {};
    };	
	
	class cl3_dumper_truck_yellow {
        vItemSpace = 20;
        storageFee[] = { 0, 0, 1500, 0 };
        garageSell[] = { 0, 0, 5000, 0 };
        insurance = 2500;
        chopShop = 12500;
        textures[] = {};
    };	
	
	class cl3_z4_2008_yellow {
        vItemSpace = 20;
        storageFee[] = { 0, 0, 1500, 0 };
        garageSell[] = { 0, 0, 5000, 0 };
        insurance = 2500;
        chopShop = 12500;
        textures[] = {};
    };	
	
	class Mrshounka_a3_iveco_f {
        vItemSpace = 20;
        storageFee[] = { 0, 0, 1500, 0 };
        garageSell[] = { 0, 0, 5000, 0 };
        insurance = 2500;
        chopShop = 12500;
        textures[] = {};
    };	

	class Jonzie_Flat_Bed {
        vItemSpace = 20;
        storageFee[] = { 0, 0, 1500, 0 };
        garageSell[] = { 0, 0, 5000, 0 };
        insurance = 2500;
        chopShop = 12500;
        textures[] = {};
    };	
	
	class Jonzie_Superliner {
        vItemSpace = 20;
        storageFee[] = { 0, 0, 1500, 0 };
        garageSell[] = { 0, 0, 5000, 0 };
        insurance = 2500;
        chopShop = 12500;
        textures[] = {};
    };	
	
	class Jonzie_Box_Truck {
        vItemSpace = 20;
        storageFee[] = { 0, 0, 1500, 0 };
        garageSell[] = { 0, 0, 5000, 0 };
        insurance = 2500;
        chopShop = 12500;
        textures[] = {};
    };	
	
	class Jonzie_Log_Truck {
        vItemSpace = 20;
        storageFee[] = { 0, 0, 1500, 0 };
        garageSell[] = { 0, 0, 5000, 0 };
        insurance = 2500;
        chopShop = 12500;
        textures[] = {};
    };	
	
	class Jonzie_Tanker_Truck {
        vItemSpace = 20;
        storageFee[] = { 0, 0, 1500, 0 };
        garageSell[] = { 0, 0, 5000, 0 };
        insurance = 2500;
        chopShop = 12500;
        textures[] = {};
    };	
	
	class Jonzie_Tow_Truck {
        vItemSpace = 20;
        storageFee[] = { 0, 0, 1500, 0 };
        garageSell[] = { 0, 0, 5000, 0 };
        insurance = 2500;
        chopShop = 12500;
        textures[] = {};
    };	
	
	class O_Truck_03_fuel_F {
        vItemSpace = 20;
        storageFee[] = { 0, 0, 1500, 0 };
        garageSell[] = { 0, 0, 5000, 0 };
        insurance = 2500;
        chopShop = 12500;
        textures[] = {};
    };	
	
	class O_Truck_02_box_F {
        vItemSpace = 20;
        storageFee[] = { 0, 0, 1500, 0 };
        garageSell[] = { 0, 0, 5000, 0 };
        insurance = 2500;
        chopShop = 12500;
        textures[] = {};
    };	
	
	class O_Truck_03_medical_F {
        vItemSpace = 20;
        storageFee[] = { 0, 0, 1500, 0 };
        garageSell[] = { 0, 0, 5000, 0 };
        insurance = 2500;
        chopShop = 12500;
        textures[] = {};
    };	
	
	class O_Truck_03_ammo_F {
        vItemSpace = 20;
        storageFee[] = { 0, 0, 1500, 0 };
        garageSell[] = { 0, 0, 5000, 0 };
        insurance = 2500;
        chopShop = 12500;
        textures[] = {};
    };	
	
	class O_Truck_03_repair_F {
        vItemSpace = 20;
        storageFee[] = { 0, 0, 1500, 0 };
        garageSell[] = { 0, 0, 5000, 0 };
        insurance = 2500;
        chopShop = 12500;
        textures[] = {};
    };	
	
	class Jonzie_Corolla {
        vItemSpace = 20;
        storageFee[] = { 0, 0, 1500, 0 };
        garageSell[] = { 0, 0, 5000, 0 };
        insurance = 2500;
        chopShop = 12500;
        textures[] = {};
    };	
	
	class O_Truck_02_transport_F {
        vItemSpace = 20;
        storageFee[] = { 0, 0, 1500, 0 };
        garageSell[] = { 0, 0, 5000, 0 };
        insurance = 2500;
        chopShop = 12500;
        textures[] = {};
    };
	
	class O_Truck_02_covered_F {
        vItemSpace = 20;
        storageFee[] = { 0, 0, 1500, 0 };
        garageSell[] = { 0, 0, 5000, 0 };
        insurance = 2500;
        chopShop = 12500;
        textures[] = {};
    };
	
	class Jonzie_Western {
        vItemSpace = 20;
        storageFee[] = { 0, 0, 1500, 0 };
        garageSell[] = { 0, 0, 5000, 0 };
        insurance = 2500;
        chopShop = 12500;
        textures[] = {};
    };
	
	class Cl3MOD_C_Rubberboat_civilian {
        vItemSpace = 20;
        storageFee[] = { 0, 0, 1500, 0 };
        garageSell[] = { 0, 0, 5000, 0 };
        insurance = 2500;
        chopShop = 12500;
        textures[] = {};
    };
	
	class Burnes_MK10_1 {
        vItemSpace = 20;
        storageFee[] = { 0, 0, 1500, 0 };
        garageSell[] = { 0, 0, 5000, 0 };
        insurance = 2500;
        chopShop = 12500;
        textures[] = {};
    };

	class B_Lifeboat {
        vItemSpace = 150;
        storageFee[] = { 0, 0, 1500, 0 };
        garageSell[] = { 0, 0, 5000, 0 };
        insurance = 2500;
        chopShop = 12500;
        textures[] = {};
    };

    class I_Truck_02_medical_F {
        vItemSpace = 150;
        storageFee[] = { 0, 0, 1500, 0 };
        garageSell[] = { 0, 0, 5000, 0 };
        insurance = 2500;
        chopShop = 12500;
        textures[] = {};
    };

    class B_Truck_01_medical_F {
        vItemSpace = 250;
        storageFee[] = { 0, 0, 6500, 0 };
        garageSell[] = { 0, 0, 25000, 0 };
        insurance = 2500;
        chopShop = 30000;
        textures[] = {};
    };

    class C_Rubberboat {
        vItemSpace = 45;
        storageFee[] = { 400, 300, 0, 0 };
        garageSell[] = { 950, 350, 0, 0 };
        insurance = 2500;
        chopShop = 2500;
        textures[] = { };
    };

    class B_Heli_Transport_01_F {
        vItemSpace = 200;
        storageFee[] = { 0, 50000, 0, 0 };
        garageSell[] = { 0, 85000, 0, 0 };
        insurance = 16000;
        chopShop = 45000;
        textures[] = {};
    };

    class B_MRAP_01_hmg_F {
        vItemSpace = 100;
        storageFee[] = { 1000, 1000, 1000, 1000 };
        garageSell[] = { 0, 0, 0, 0 };
        insurance = 2500;
        chopShop = 100000;
        textures[] = {
            { "Black", "cop", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)",
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)",
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            } }
        };
    };

    class O_Boat_Armed_01_hmg_F {
        vItemSpace = 175;
        storageFee[] = { 1000, 0, 0, 0 };
        garageSell[] = { 21000, 21000, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

    class B_Boat_Armed_01_minigun_F {
        vItemSpace = 175;
        storageFee[] = { 0, 16500, 0, 0 };
        garageSell[] = { 0, 21000, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

    class I_Boat_Armed_01_minigun_F {
        vItemSpace = 175;
        storageFee[] = { 1000, 0, 0, 0 };
        garageSell[] = { 21000, 21000, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

    class B_G_Boat_Transport_01_F {
        vItemSpace = 45;
        storageFee[] = { 1000, 0, 0, 0 };
        garageSell[] = { 0, 850, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

    class B_Boat_Transport_01_F {
        vItemSpace = 45;
        storageFee[] = { 0, 450, 0, 0 };
        garageSell[] = { 0, 850, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

    class O_Truck_03_transport_F {
        vItemSpace = 285;
        storageFee[] = { 1000, 0, 0, 0 };
        garageSell[] = { 3500, 0, 0, 0 };
        insurance = 2500;
        chopShop = 100000;
        textures[] = { };
    };

    class O_Truck_03_device_F {
        vItemSpace = 350;
        storageFee[] = { 95000, 0, 0, 0 };
        garageSell[] = { 185000, 0, 0, 0 };
        insurance = 25000;
        chopShop = 225000;
        textures[] = { };
    };

    class Land_CargoBox_V1_F {
        vItemSpace = 5000;
        storageFee[] = { 1000, 1000, 1000, 1000 };
        garageSell[] = { 0, 0, 0, 0 };
        insurance = 2500;
        chopShop = 1200;
        textures[] = {};
    };

    class Box_IND_Grenades_F {
        vItemSpace = 350;
        storageFee[] = { 1000, 1000, 1000, 1000 };
        garageSell[] = { 0, 0, 0, 0 };
        insurance = 2500;
        chopShop = 1200;
        textures[] = {};
    };

    class B_supplyCrate_F {
        vItemSpace = 700;
        storageFee[] = { 1000, 1000, 1000, 1000 };
        garageSell[] = { 0, 0, 0, 0 };
        insurance = 2500;
        chopShop = 1200;
        textures[] = {};
    };

    class B_G_Offroad_01_F {
        vItemSpace = 65;
        storageFee[] = { 1000, 0, 0, 0 };
        garageSell[] = { 3500, 0, 0, 0 };
        insurance = 2500;
        chopShop = 6250;
        textures[] = { };
    };

    class B_G_Offroad_01_armed_F {
        vItemSpace = 65;
        storageFee[] = { 1500, 0, 0, 0 };
        garageSell[] = { 4000, 0, 0, 0 };
        insurance = 2500;
        chopShop = 100000;
        textures[] = { };
    };

    class I_G_Van_01_transport_F {
        vItemSpace = 100;
        storageFee[] = { 1000, 0, 0, 0 };
        garageSell[] = { 3500, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

    class C_Boat_Civil_01_F {
        vItemSpace = 85;
        storageFee[] = { 4500, 2500, 0, 0 };
        garageSell[] = { 6800, 3500, 0, 0 };
        insurance = 2500;
        chopShop = 11000;
        textures[] = { };
    };

    class C_Boat_Civil_01_police_F {
        vItemSpace = 85;
        storageFee[] = { 0, 3500, 0, 0 };
        garageSell[] = { 0, 4950, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

    class C_Boat_Civil_01_rescue_F {
        vItemSpace = 85;
        storageFee[] = { 1000, 0, 0, 0 };
        garageSell[] = { 3500, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

    class B_Truck_01_box_F {
        vItemSpace = 450;
        storageFee[] = { 35000, 0, 0, 0 };
        garageSell[] = { 150000, 0, 0, 0 };
        insurance = 2500;
        chopShop = 175000;
        textures[] = { };
    };

    class B_Truck_01_transport_F {
        vItemSpace = 325;
        storageFee[] = { 25650, 0, 0, 0 };
        garageSell[] = { 135000, 0, 0, 0 };
        insurance = 2500;
        chopShop = 127500;
        textures[] = { };
    };

    class O_MRAP_02_F {
        vItemSpace = 60;
        storageFee[] = { 45000, 0, 0, 0 };
        garageSell[] = { 65000, 0, 0, 0 };
        insurance = 2500;
        chopShop = 75000;
        textures[] = { };
    };

    class I_MRAP_03_F {
        vItemSpace = 58;
        storageFee[] = { 1000, 0, 0, 0 };
        garageSell[] = { 3500, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

    class C_Offroad_01_F {
        vItemSpace = 65;
        storageFee[] = { 1000, 500, 650, 1000 };
        garageSell[] = { 6500, 2500, 0, 0 };
        insurance = 2500;
        chopShop = 6250;
        textures[] = {
            { "Red", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa"
            } },
            { "Yellow", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa"
            } },
            { "White", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE02_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE02_CO.paa"
            } },
            { "Blue", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE03_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE03_CO.paa"
            } },
            { "Dark Red", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE04_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE04_CO.paa"
            } },
            { "Blue / White", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE05_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE05_CO.paa"
            } },
            { "Taxi", "civ", {
                "#(argb,8,8,3)color(0.6,0.3,0.01,1)"
            } },
            { "Police", "cop", {
                "#(ai,64,64,1)Fresnel(1.3,7)"
            } }
        };
    };

    class C_Kart_01_Blu_F {
        vItemSpace = 20;
        storageFee[] = { 1500, 0, 0, 0 };
        garageSell[] = { 3500, 0, 0, 0 };
        inusrance = 1650;
        chopShop = 7500;
        textures[] = {};
    };

    class C_Kart_01_Fuel_F {
        vItemSpace = 20;
        storageFee[] = { 1500, 0, 0, 0 };
        garageSell[] = { 3500, 0, 0, 0 };
        inusrance = 1650;
        chopShop = 7500;
        textures[] = {};
    };

    class C_Kart_01_Red_F {
        vItemSpace = 20;
        storageFee[] = { 1500, 0, 0, 0 };
        garageSell[] = { 3500, 0, 0, 0 };
        inusrance = 1650;
        chopShop = 7500;
        textures[] = {};
    };

    class C_Kart_01_Vrana_F {
        vItemSpace = 20;
        storageFee[] = { 1500, 0, 0, 0 };
        garageSell[] = { 3500, 0, 0, 0 };
        inusrance = 1650;
        chopShop = 7500;
        textures[] = {};
    };

    class C_Hatchback_01_sport_F {
        vItemSpace = 45;
        storageFee[] = { 2500, 1000, 0, 0 };
        garageSell[] = { 15000, 7500, 0, 0 };
        insurance = 5500;
        chopShop = 15000;
        textures[] = {
            { "Red", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport01_co.paa"
            } },
            { "Dark Blue", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport02_co.paa"
            } },
            { "Orange", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport03_co.paa"
            } },
            { "Black / White", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport04_co.paa"
            } },
            { "Beige", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport05_co.paa"
            } },
            { "Green", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport06_co.paa"
            } },
            { "Police", "cop", {
                "#(ai,64,64,1)Fresnel(1.3,7)"
            } }
        };
    };

    class B_Quadbike_01_F {
        vItemSpace = 25;
        storageFee[] = { 1000, 0, 0, 0 };
        garageSell[] = { 950, 0, 0, 0 };
        insurance = 2500;
        chopShop = 1250;
        textures[] = {
            { "Brown", "cop", {
                "\A3\Soft_F\Quadbike_01\Data\Quadbike_01_co.paa"
            } },
            { "Digi Desert", "reb", {
                "\A3\Soft_F\Quadbike_01\Data\quadbike_01_opfor_co.paa"
            } },
            { "Black", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_black_co.paa"
            } },
            { "Blue", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_blue_co.paa"
            } },
            { "Red", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_red_co.paa"
            } },
            { "White", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_white_co.paa"
            } },
            { "Digi Green", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_indp_co.paa"
            } },
            { "Hunter Camo", "civ", {
                "\a3\soft_f_gamma\Quadbike_01\data\quadbike_01_indp_hunter_co.paa"
            } },
            { "Rebel Camo", "reb", {
                "\a3\soft_f_gamma\Quadbike_01\data\quadbike_01_indp_hunter_co.paa"
            } }
        };
    };

    class I_Truck_02_covered_F {
        vItemSpace = 250;
        storageFee[] = { 14500, 0, 0, 0 };
        garageSell[] = { 62000, 0, 0, 0 };
        insurance = 6500;
        chopShop = 50000;
        textures[] = {
            { "Orange", "civ", {
                "\A3\Soft_F_Beta\Truck_02\data\truck_02_kab_co.paa",
                "\a3\soft_f_beta\Truck_02\data\truck_02_kuz_co.paa"
            } },
            { "Black", "cop", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            } }
        };
    };

    class I_Truck_02_transport_F {
        vItemSpace = 200;
        storageFee[] = { 12000, 0, 0, 0 };
        garageSell[] = { 49800, 3500, 0, 0 };
        insurance = 6500;
        chopShop = 37500;
        textures[] = {
            { "Orange", "civ", {
                "\A3\Soft_F_Beta\Truck_02\data\truck_02_kab_co.paa",
                "\a3\soft_f_beta\Truck_02\data\truck_02_kuz_co.paa"
            } },
            { "Black", "cop", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            } }
        };
    };

    class O_Truck_03_covered_F {
        vItemSpace = 300;
        storageFee[] = { 25000, 0, 0, 0 };
        garageSell[] = { 65000, 0, 0, 0 };
        insurance = 2500;
        chopShop = 125000;
        textures[] = {};
    };

    class C_Hatchback_01_F {
        vItemSpace = 40;
        storageFee[] = { 1000, 0, 0, 0 };
        garageSell[] = { 4500, 3500, 0, 0 };
        insurance = 2500;
        chopShop = 4750;
        textures[] = {
            { "Beige", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base01_co.paa"
            } },
            { "Green", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base02_co.paa"
            } },
            { "Blue", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base03_co.paa"
            } },
            { "Dark Blue", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base04_co.paa"
            } },
            { "Yellow", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base06_co.paa"
            } },
            { "White", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base07_co.paa"
            } },
            { "Grey", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base08_co.paa"
            } },
            { "Black", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base09_co.paa"
            } }
        };
    };

    class C_SUV_01_F {
        vItemSpace = 50;
        storageFee[] = { 1000, 0, 0, 0 };
        garageSell[] = { 15000, 7500, 0, 0 };
        insurance = 2500;
        chopShop = 15000;
        textures[] = {
            { "Dark Red", "civ", {
                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_co.paa"
            } },
            { "Silver", "civ", {
                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_03_co.paa"
            } },
            { "Orange", "civ", {
                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_04_co.paa"
            } },
            { "Police", "cop", {
                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_02_co.paa"
            } },
        };
    };

    class C_Van_01_transport_F {
        vItemSpace = 100;
        storageFee[] = { 1000, 0, 0, 0 };
        garageSell[] = { 25000, 0, 0, 0 };
        insurance = 2500;
        chopShop = 22500;
        textures[] = {
            { "White", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_co.paa"
            } },
            { "Red", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_red_co.paa"
            } }
        };
    };

    class C_Van_01_box_F {
        vItemSpace = 150;
        storageFee[] = { 1000, 0, 0, 0 };
        garageSell[] = { 35000, 0, 0, 0 };
        insurance = 2500;
        chopShop = 30000;
        textures[] = {
            { "White", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_co.paa"
            } },
            { "Red", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_red_co.paa"
            } }
        };
    };

    class B_MRAP_01_F {
        vItemSpace = 65;
        storageFee[] = { 0, 7500, 0, 0 };
        garageSell[] = { 0, 10000, 0, 0 };
        insurance = 2500;
        chopShop = 15000;
        textures[] = {
            { "Black", "cop", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)",
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            } }
        };
    };

    class B_Heli_Light_01_F {
        vItemSpace = 90;
        storageFee[] = { 45000, 19500, 0, 0 };
        garageSell[] = { 57000, 35000, 0, 0 };
        insurance = 2500;
        chopShop = 125000;
        textures[] = {
            { "Police", "cop", {
                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_ion_co.paa"
            } },
            { "Sheriff", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_sheriff_co.paa"
            } },
            { "Civ Blue", "civ", {
                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_blue_co.paa"
            } },
            { "Civ Red", "civ", {
                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_co.paa"
            } },
            { "Blueline", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_blueline_co.paa"
            } },
            { "Elliptical", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_elliptical_co.paa"
            } },
            { "Furious", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_furious_co.paa"
            } },
            { "Jeans Blue", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_jeans_co.paa"
            } },
            { "Speedy Redline", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_speedy_co.paa"
            } },
            { "Sunset", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_sunset_co.paa"
            } },
            { "Vrana", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_vrana_co.paa"
            } },
            { "Waves Blue", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_wave_co.paa"
            } },
            { "Rebel Digital", "reb", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_digital_co.paa"
            } },
            { "Digi Green", "reb", {
                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_indp_co.paa"
            } },
            { "EMS White", "med", {
                "#(argb,8,8,3)color(1,1,1,0.8)"
            } }
        };
    };

    class O_Heli_Light_02_unarmed_F {
        vItemSpace = 210;
        storageFee[] = { 55000, 0, 22000, 0 };
        garageSell[] = { 72500, 0, 35000, 0 };
        insurance = 2500;
        chopShop = 375000;
        textures[] = {
            { "Black", "cop", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_co.paa"
            } },
            { "White / Blue", "civ", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_civilian_co.paa"
            } },
            { "Digi Green", "civ", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_indp_co.paa"
            } },
            { "Desert Digi", "reb", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_opfor_co.paa"
            } },
            { "EMS White", "med", {
                "#(argb,8,8,3)color(1,1,1,0.8)"
            } }
        };
    };

    class I_Heli_Transport_02_F {
        vItemSpace = 375;
        storageFee[] = { 75000, 0, 0, 0 };
        garageSell[] = { 125000, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = {
            { "Ion", "civ", {
                "\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_1_ion_co.paa",
                "\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_2_ion_co.paa",
                "\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_3_ion_co.paa"
            } },
            { "Dahoman", "civ", {
                "\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_1_dahoman_co.paa",
                "\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_2_dahoman_co.paa",
                "\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_3_dahoman_co.paa"
            } }
        };
    };

    class B_SDV_01_F {
        vItemSpace = 50;
        storageFee[] = { 37500, 10000, 0, 0 };
        garageSell[] = { 75000, 50000, 0, 0 };
        insurance = 2500;
        chopShop = 75000;
        textures[] = {};
    };

////////////////////////////////////// POLICE VEHICULES //////////////////////////////////	
	class DAR_TahoePoliceDet {
		vItemSpace = 20;
		storageFee[] = { 0, 0, 0, 0 };
		garageSell[] = { 0, 0, 0, 0 };
		insurance = 5000;
		chopShop = 0;
		textures[] = { };
    };
	
	class cl3_DAR_TahoePoliceDet {
		vItemSpace = 20;
		storageFee[] = { 4200, 0, 0, 0 };
		garageSell[] = { 18000, 850, 0, 0 };
		insurance = 2500;
		chopShop = 230000;
		textures[] = { };
    };
	
	class DAR_TahoePolice {
		vItemSpace = 20;
		storageFee[] = { 0, 0, 0, 0 };
		garageSell[] = { 0, 0, 0, 0 };
		insurance = 5000;
		chopShop = 0;
		textures[] = { };
    };

	class DAR_ImpalaPolice {
		vItemSpace = 55;
		storageFee[] = { 0, 2500, 0, 0 };
		garageSell[] = { 2500, 850, 0, 0 };
		insurance = 2500;
		chopShop = 5000;
		textures[] = { };
    };	
	
	class Mrshounka_a3_308_gend {
		vItemSpace = 55;
		storageFee[] = { 0, 2500, 0, 0 };
		garageSell[] = { 2500, 850, 0, 0 };
		insurance = 2500;
		chopShop = 5000;
		textures[] = { };
    };	
	
	class cl3_dodge_charger_patrol {
		vItemSpace = 55;
		storageFee[] = { 0, 2500, 0, 0 };
		garageSell[] = { 2500, 850, 0, 0 };
		insurance = 2500;
		chopShop = 5000;
		textures[] = { };
    };	
	
	class DAR_ChargerPoliceState {
		vItemSpace = 55;
		storageFee[] = { 0, 2500, 0, 0 };
		garageSell[] = { 2500, 850, 0, 0 };
		insurance = 2500;
		chopShop = 5000;
		textures[] = { };
    };	
	
	class cl3_q7_clpd_patrol {
		vItemSpace = 55;
		storageFee[] = { 0, 2500, 0, 0 };
		garageSell[] = { 2500, 850, 0, 0 };
		insurance = 2500;
		chopShop = 5000;
		textures[] = { };
    };	
	
	class cl3_reventon_clpd {
		vItemSpace = 45;
		storageFee[] = { 0, 2500, 0, 0 };
		garageSell[] = { 2500, 850, 0, 0 };
		insurance = 2500;
		chopShop = 5000;
		textures[] = { };
	};	
	
	class DAR_SWATPolice {
		vItemSpace = 20;
		storageFee[] = { 0, 0, 0, 0 };
		garageSell[] = { 0, 0, 0, 0 };
		insurance = 5000;
		chopShop = 0;
		textures[] = { };
    };
};