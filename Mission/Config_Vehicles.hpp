class CarShops {
	/*
		Format:
		{ Classname, rental price, license required, { varname, >= value } }

		{ varname, >= value} this is a "level" requirement mainly used by cops and rebels, do not fill this in if you are not utilizing it.
	*/
	class civ_car {
		side = "civ";
		vehicles[] = {
			{ "B_Quadbike_01_F", 2500, "" }, 
			{ "cl3_s1203_blue", 3900, "driver" }, 
			{ "cl3_lada_red", 4100, "driver" }, 
			{ "cl3_lada_white", 4050, "driver" },			
			{ "cl3_volha_grey", 4500, "driver" }, 		
			{ "C_Hatchback_01_F", 9500, "driver" }, 
			{ "C_Offroad_01_F", 12500, "driver" },
			{ "C_SUV_01_F", 20000, "driver" },
			{ "C_Hatchback_01_sport_F", 40000, "driver" },
			{ "C_Van_01_transport_F", 45000, "driver" },
			{ "cl3_e60_m5_black", 280000, "driver" },
			{ "cl3_taurus_black", 120000, "driver" },	
			{ "cl3_golf_mk2_black", 24000, "driver" },	
			{ "cl3_polo_gti_black", 44000, "driver" },
			{ "cl3_polo_gti_orange", 44000, "driver" },	
			{ "cl3_polo_gti_white", 44000, "driver" },			
			{ "cl3_transit_black", 75000, "driver" },	
			{ "cl3_e63_amg_black", 24000, "driver" },
			{ "cl3_range_rover_black", 45000, "driver" },			
			{ "cl3_insignia_black", 84000, "driver" },	
			{ "cl3_dodge_chargerum_o_black", 95000, "driver" },			
			{ "cl3_suv_black", 55000, "driver" },
			{ "cl3_civic_vti_black", 41000, "driver" }			
		};
	};

	class civ_car_gt {
		side = "civ";
		vehicles[] = {
			{ "cl3_r8_spyder_black", 850000, "luxe" },
			{ "cl3_458_black", 850000, "luxe" },
			{ "cl3_murcielago_black", 850000, "luxe" },	
			{ "cl3_aventador_lp7004_black", 1250000, "luxe" },			
			{ "cl3_reventon_black", 1350000, "luxe" },
			{ "cl3_z4_2008_black", 710000, "luxe" },			
			{ "cl3_dbs_volante_black", 1320000, "luxe" },
			{ "cl3_carrera_gt_yellow", 1250000, "luxe" }			
		};
	};
	
	class kart_shop {
		side = "civ";
		vehicles[] = {
			{ "C_Kart_01_Blu_F", 15000 , "driver" },
			{ "C_Kart_01_Fuel_F", 15000, "driver" },
			{ "C_Kart_01_Red_F", 15000, "driver" },
			{ "cl3_arielatom_race_black", 15000, "driver" },			
			{ "C_Kart_01_Vrana_F", 15000, "driver" }
		};
	};

	class med_shop {
		side = "med";
		vehicles[] = {
			{ "C_Offroad_01_F", 10000, "" },
			{ "I_Truck_02_medical_F", 25000, "" },
			{ "O_Truck_03_medical_F", 45000, "" },
			{ "B_Truck_01_medical_F", 60000, "" }
		};
	};

	class decathlon {
		side = "civ";
		vehicles[] = {
			{ "cl3_bike_mountain2tone1", 80, "" },
			{ "cl_skatec", 80, "" },
			{ "cl3_bike_Road2tone5", 80, "" },
			{ "cl3_bike_bmx_Road2tone2", 80, "" }
		};
	};
	
	class car_pompier {
		side = "med";
		vehicles[] = {
			{ "C_Offroad_01_F", 10000, "pompier" },
			{ "I_Truck_02_medical_F", 25000, "pompier" },
			{ "O_Truck_03_medical_F", 45000, "pompier" },
			{ "O_Truck_02_box_F", 45000, "pompier" },			
			{ "B_Truck_01_medical_F", 60000, "pompier" }
		};
	};
	
	class med_air_hs {
		side = "med";
		vehicles[] = {
			{ "B_Heli_Light_01_F", 50000, "mAir" },
			{ "O_Heli_Light_02_unarmed_F", 75000, "mAir" }
		};
	};

	class air_pompier {
		side = "med";
		vehicles[] = {
			{ "B_Heli_Light_01_F", 50000, "pompier" },
			{ "O_Heli_Light_02_unarmed_F", 75000, "pompier" }
		};
	};
	
	class civ_truck {
		side = "civ";
		vehicles[] = {
			{ "C_Van_01_box_F", 60000, "truck" },
			{ "I_Truck_02_transport_F", 75000, "truck" },
			{ "I_Truck_02_covered_F", 100000, "truck" },
			{ "B_Truck_01_transport_F", 275000, "truck" },
			{ "O_Truck_03_covered_F", 450000, "truck" },
			{ "B_Truck_01_box_F", 350000, "truck" },
			{ "O_Truck_03_device_F", 450000, "truck" }
		};
	};

	class reb_car {
		side = "civ";
		vehicles[] = {
			{ "B_Quadbike_01_F", 2500, "" },
			{ "B_G_Offroad_01_F", 15000, "" },
			{ "O_MRAP_02_F", 150000, "" },
			{ "B_Heli_Light_01_F", 325000, "" },
			{ "B_G_Offroad_01_armed_F", 750000, "rebel" }
		};
	};

	class criminel {
		side = "civ";
		vehicles[] = {
			{ "B_Quadbike_01_F", 2500, "" },
			{ "B_G_Offroad_01_F", 15000, "" },
			{ "O_MRAP_02_F", 150000, "" },
			{ "B_Heli_Light_01_F", 325000, "" },
		};
	};
	
	class cop_car {
		side = "cop";
		vehicles[] = {
			{ "C_Offroad_01_F", 0, ""},
			{ "C_SUV_01_F", 0, "" },
			{ "C_Hatchback_01_sport_F", 0, "" },
			{ "DAR_ChargerPoliceState", 0, "", { "life_coplevel", 2 } },
			{ "cl3_q7_clpd_patrol", 0, "", { "life_coplevel", 2 } },
			{ "DAR_ImpalaPolice", 0, "", { "life_coplevel", 2 } },
			{ "DAR_TahoePolice", 0, "", { "life_coplevel", 2 } },	
			{ "insignia_police", 0, "", { "life_coplevel", 3 } },			
			{ "cl3_reventon_clpd", 0, "", { "life_coplevel", 6 } },
			{ "CL3_bus_cl_jail", 0, "", { "life_coplevel", 6 } },
            { "dar_explorer_f", 0, "", { "life_coplevel", 8 } },
            { "dar_tahoe_f", 0, "", { "life_coplevel", 8 } },			
			{ "B_MRAP_01_F", 0, "", { "life_coplevel", 5 } }
		};
	};

	class civ_air {
		side = "civ";
		vehicles[] = {
			{ "B_Heli_Light_01_F", 253000, "pilot" },
			{ "O_Heli_Light_02_unarmed_F", 750000, "pilot" }
		};
	};

	class civ_avion {
		side = "civ";
		vehicles[] = {
			{ "Sab_ru_An2", 1253000, "pilot" },
			{ "Sab_An2_i", 1153000, "pilot" },			
			{ "Sab_ee_An2", 1353000, "pilot" },			
			{ "Sab_cz_An2", 1553000, "pilot" },			
			{ "sab_BI_An2", 1053000, "pilot" },
			{ "Sab_yel_An2", 1453000, "pilot" },
			{ "Sab_ana_An2", 1253000, "pilot" },	
			{ "sab_ca_An2", 1653000, "pilot" },	
			{ "Sab_tk_An2", 1242000, "pilot" }
		};
	};
	
	class cop_air {
		side = "cop";
		vehicles[] = {
			{ "B_Heli_Light_01_F", 0, "cAir" },
			{ "B_Heli_Transport_01_F", 0, "cAir", { "life_coplevel", 3 } }
		};
	};

	class cop_airhq {
		side = "civ";
		vehicles[] = {
			{ "B_Heli_Light_01_F", 75000, "cAir" },
			{ "B_Heli_Transport_01_F", 200000, "cAir", { "life_coplevel", 3 } },
			{ "B_MRAP_01_hmg_F", 750000, "", { "life_coplevel", 3 } }
		};
	};

	class cop_ship {
		side = "cop";
		vehicles[] = {
			{ "B_Boat_Transport_01_F", 3000, "coastguard" },
			{ "C_Boat_Civil_01_police_F", 20000, "coastguard" },
			{ "B_Boat_Armed_01_minigun_F", 75000, "coastguard" },
			{ "B_SDV_01_F", 100000, "coastguard" }
		};
	};

	class civ_ship {
		side = "civ";
		vehicles[] = {
			{ "C_Rubberboat", 5000, "boat" },
			{ "D41_Trawler", 1450000, "boat" },			
			{ "C_Boat_Civil_01_F", 22000, "boat" },
			{ "B_SDV_01_F", 150000, "boat" }
		};
	};
	
	class donateur {
		side = "civ";
		vehicles[] = {
			{ "cl3_dodge_charger_s_darkred", 85000, "donateur_lvl_1" },
			{ "cl3_veyron_black", 800000, "donateur_lvl_1" },			
			{ "cl3_lamborghini_gt1_flame", 1500000, "donateur_lvl_2" }		
		};	
	};
	
	class ship_donateur {
		side = "civ";
		vehicles[] = {
			{ "D41_Trawler", 1250000, "donateur_lvl_1" },			
			{ "Sab_Amphi_An2", 1210000, "donateur_lvl_2" },
			{ "Sab_sea_An2", 1100000, "donateur_lvl_2" }	
		};	
	};
};

/*
	Vehicle Configs (Contains textures and other stuff)

	storageFee (Getting vehicles out of garage) format:
		INDEX 0: Civilian Price
		INDEX 1: Cop Price
		INDEX 3: EMS Price
		INDEX 4: OPFOR Price (Not implemented in vanilla but still leaving support

	Textures config follows { Texture Name, side, {texture(s)path}}
	Texture(s)path follows this format:
		INDEX 0: Texture Layer 0
		INDEX 1: Texture Layer 1
		INDEX 2: Texture Layer 2
		etc etc etc
*/
class CfgVehicles {
	class Default {
		vItemSpace = -1;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 0, 0, 0, 0 };
		insurance = 2500;
		chopShop = 1200;
		textures[] = {};
	};
	
	class cl3_bike_bmx_Road2tone2 {
	vItemSpace = -1;
    storageFee[] = { 50, 0, 0, 0 };
	garageSell[] = { 120, 0, 0, 0 };
    insurance = 2500;
    chopShop = 100;
    textures[] = { };
    };
	
	class cl_skatec {
	vItemSpace = -1;
    storageFee[] = { 50, 0, 0, 0 };
	garageSell[] = { 120, 0, 0, 0 };
    insurance = 2500;
    chopShop = 100;
    textures[] = { };
    };
	
	class cl3_bike_Road2tone5 {
	vItemSpace = -1;
    storageFee[] = { 50, 0, 0, 0 };
	garageSell[] = { 120, 0, 0, 0 };
    insurance = 2500;
    chopShop = 100;
    textures[] = { };
    };
	
	class cl3_bike_mountain2tone1 {
	vItemSpace = 100;
    storageFee[] = { 50, 0, 0, 0 };
	garageSell[] = { 120, 0, 0, 0 };
    insurance = 2500;
    chopShop = 100;
    textures[] = { };
    };
	
	class cl3_dodge_charger_s_darkred {
	vItemSpace = 55;
    storageFee[] = { 1000, 0, 0, 0 };
	garageSell[] = { 2500, 0, 0, 0 };
    insurance = 2500;
    chopShop = 3000;
    textures[] = { };
    };
	
	class cl3_lamborghini_gt1_flame {
	vItemSpace = 45;
    storageFee[] = { 5500, 0, 0, 0 };
	garageSell[] = { 19500, 0, 0, 0 };
    insurance = 2500;
    chopShop = 500000;
    textures[] = { };
    };
	
	class cl3_veyron_black {
	vItemSpace = 45;
    storageFee[] = { 8500, 0, 0, 0 };
	garageSell[] = { 55000, 0, 0, 0 };
    insurance = 2500;
    chopShop = 850000;
    textures[] = { };
    };
	
	class cl3_carrera_gt_yellow {
	vItemSpace = 45;
    storageFee[] = { 4200, 0, 0, 0 };
	garageSell[] = { 18000, 850, 0, 0 };
    insurance = 2500;
    chopShop = 230000;
    textures[] = { };
    };
	
	class cl3_dbs_volante_black {
	vItemSpace = 45;
    storageFee[] = { 4250, 0, 0, 0 };
	garageSell[] = { 25000, 0, 0, 0 };
    insurance = 2500;
    chopShop = 235000;
    textures[] = { };
    };
	
	class cl3_z4_2008_black {
	vItemSpace = 45;
    storageFee[] = { 2250, 0, 0, 0 };
	garageSell[] = { 2500, 0, 0, 0 };
    insurance = 2500;
    chopShop = 10000;
    textures[] = { };
    };
	
	class cl3_aventador_lp7004_black {
	vItemSpace = 45;
    storageFee[] = { 4350, 0, 0, 0 };
	garageSell[] = { 25000, 0, 0, 0 };
    insurance = 2500;
    chopShop = 215000;
    textures[] = { };
    };
	
	class cl3_reventon_black {
	vItemSpace = 45;
    storageFee[] = { 4350, 0, 0, 0 };
	garageSell[] = { 25000, 0, 0, 0 };
    insurance = 2500;
    chopShop = 225000;
    textures[] = { };
    };
	
	class cl3_murcielago_black {
	vItemSpace = 45;
    storageFee[] = { 2150, 0, 0, 0 };
	garageSell[] = { 2500, 0, 0, 0 };
    insurance = 2500;
    chopShop = 3000;
    textures[] = { };
    };
	
	class cl3_458_black {
	vItemSpace = 45;
    storageFee[] = { 3540, 0, 0, 0 };
	garageSell[] = { 200000, 0, 0, 0 };
    insurance = 2500;
    chopShop = 215000;
    textures[] = { };
    };
	
	class cl3_r8_spyder_black {
	vItemSpace = 45;
    storageFee[] = { 4150, 0, 0, 0 };
	garageSell[] = { 215000, 850, 0, 0 };
    insurance = 2500;
    chopShop = 215000;
    textures[] = { };
    };
	
	class cl3_e63_amg_black {
	vItemSpace = 55;
    storageFee[] = { 1000, 0, 0, 0 };
	garageSell[] = { 2500, 0, 0, 0 };
    insurance = 2500;
    chopShop = 10000;
    textures[] = { };
    };
	
	class cl3_polo_gti_white {
	vItemSpace = 55;
    storageFee[] = { 1000, 0, 0, 0 };
	garageSell[] = { 2500, 0, 0, 0 };
    insurance = 2500;
    chopShop = 4000;
    textures[] = { };
    };
	
	class cl3_polo_gti_orange {
	vItemSpace = 55;
    storageFee[] = { 1000, 0, 0, 0 };
	garageSell[] = { 4000, 0, 0, 0 };
    insurance = 2500;
    chopShop = 4000;
    textures[] = { };
    };
	
	class cl3_polo_gti_black {
	vItemSpace = 55;
    storageFee[] = { 1000, 0, 0, 0 };
	garageSell[] = { 4000, 0, 0, 0 };
    insurance = 2500;
    chopShop = 4000;
    textures[] = { };
    };	
	
	class cl3_golf_mk2_black {
	vItemSpace = 40;
    storageFee[] = { 800, 0, 0, 0 };
	garageSell[] = { 2500, 0, 0, 0 };
    insurance = 2500;
    chopShop = 2500;
    textures[] = { };
    };	
	
	class dar_tahoe_f {
	vItemSpace = 55;
    storageFee[] = { 0, 2500, 0, 0 };
	garageSell[] = { 2500, 850, 0, 0 };
    insurance = 2500;
    chopShop = 50000;
    textures[] = { };
    };	
	
	class dar_explorer_f {
	vItemSpace = 55;
    storageFee[] = { 0, 2500, 0, 0 };
	garageSell[] = { 2500, 850, 0, 0 };
    insurance = 2500;
    chopShop = 50000;
    textures[] = { };
    };	
	
	class CL3_bus_cl_jail {
	vItemSpace = 350;
    storageFee[] = { 0, 8500, 0, 0 };
	garageSell[] = { 2500, 850, 0, 0 };
    insurance = 2500;
    chopShop = 650000;
    textures[] = { };
    };	
	
	class insignia_police {
	vItemSpace = 55;
    storageFee[] = { 0, 2500, 0, 0 };
	garageSell[] = { 2500, 850, 0, 0 };
    insurance = 2500;
    chopShop = 50000;
    textures[] = { };
    };	
	
	class DAR_TahoePolice {
	vItemSpace = 55;
    storageFee[] = { 0, 2500, 0, 0 };
	garageSell[] = { 2500, 850, 0, 0 };
    insurance = 2500;
    chopShop = 50000;
    textures[] = { };
    };	

	class DAR_ImpalaPolice {
	vItemSpace = 55;
    storageFee[] = { 0, 2500, 0, 0 };
	garageSell[] = { 2500, 850, 0, 0 };
    insurance = 2500;
    chopShop = 50000;
    textures[] = { };
    };	
	
	class DAR_ChargerPoliceState {
	vItemSpace = 55;
    storageFee[] = { 0, 2500, 0, 0 };
	garageSell[] = { 2500, 850, 0, 0 };
    insurance = 2500;
    chopShop = 50000;
    textures[] = { };
    };	
	
	class cl3_q7_clpd_patrol {
	vItemSpace = 55;
    storageFee[] = { 0, 2500, 0, 0 };
	garageSell[] = { 2500, 850, 0, 0 };
    insurance = 2500;
    chopShop = 50000;
    textures[] = { };
    };	
	
	class cl3_reventon_clpd {
	vItemSpace = 45;
    storageFee[] = { 0, 2500, 0, 0 };
	garageSell[] = { 2500, 850, 0, 0 };
    insurance = 2500;
    chopShop = 50000;
    textures[] = { };
    };	
	
	class cl3_s1203_blue {
        vItemSpace = 40;
        storageFee[] = { 0, 450, 0, 0 };
		garageSell[] = { 2500, 850, 0, 0 };
        insurance = 2500;
        chopShop = 800;
        textures[] = { };
    };	
	
	class cl3_taurus_black {
        vItemSpace = 55;
        storageFee[] = { 0, 1000, 0, 0 };
		garageSell[] = { 2500, 850, 0, 0 };
        insurance = 2500;
        chopShop = 3000;
        textures[] = { };
    };

	class cl3_lada_red {
        vItemSpace = 45;
        storageFee[] = { 0, 450, 0, 0 };
		garageSell[] = { 2500, 850, 0, 0 };
        insurance = 2500;
        chopShop = 650;
        textures[] = { };
    };
	
	class cl3_lada_white {
        vItemSpace = 45;
        storageFee[] = { 0, 450, 0, 0 };
		garageSell[] = { 2500, 850, 0, 0 };
        insurance = 2500;
        chopShop = 650;
        textures[] = { };
    };
	
	class cl3_volha_grey {
        vItemSpace = 45;
        storageFee[] = { 0, 450, 0, 0 };
		garageSell[] = { 2500, 850, 0, 0 };
        insurance = 2500;
        chopShop = 650;
        textures[] = { };
    };
	
	class cl3_transit_black {
        vItemSpace = 250;
        storageFee[] = { 0, 1000, 0, 0 };
		garageSell[] = { 2500, 850, 0, 0 };
        insurance = 2500;
        chopShop = 3000;
        textures[] = { };
    };
	
	class cl3_range_rover_black {
        vItemSpace = 80;
        storageFee[] = { 0, 1000, 0, 0 };
		garageSell[] = { 2500, 850, 0, 0 };
        insurance = 2500;
        chopShop = 4000;
        textures[] = { };
    };
	
	class cl3_insignia_black {
        vItemSpace = 55;
        storageFee[] = { 0, 1000, 0, 0 };
		garageSell[] = { 2500, 850, 0, 0 };
        insurance = 2500;
        chopShop = 3500;
        textures[] = { };
    };
	
	class cl3_dodge_chargerum_o_black {
        vItemSpace = 55;
        storageFee[] = { 0, 1000, 0, 0 };
		garageSell[] = { 2500, 850, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };
	
	class cl3_suv_black {
        vItemSpace = 60;
        storageFee[] = { 0, 1000, 0, 0 };
		garageSell[] = { 2500, 850, 0, 0 };
        insurance = 2500;
        chopShop = 4000;
        textures[] = { };
    };
	
	class cl3_civic_vti_black {
        vItemSpace = 50;
        storageFee[] = { 0, 1000, 0, 0 };
		garageSell[] = { 2500, 850, 0, 0 };
        insurance = 2500;
        chopShop = 2000;
        textures[] = { };
    };
	
	class cl3_e60_m5_black {
        vItemSpace = 50;
        storageFee[] = { 0, 1000, 0, 0 };
		garageSell[] = { 2500, 850, 0, 0 };
        insurance = 2500;
        chopShop = 3000;
        textures[] = { };
    };

	class Sab_sea_An2 {
        vItemSpace = 450;
        storageFee[] = { 0, 2500, 0, 0 };
		garageSell[] = { 800000, 850, 0, 0 };
        insurance = 2500;
        chopShop = 155000;
        textures[] = { };
    };
	
	class Sab_Amphi_An2 {
        vItemSpace = 450;
        storageFee[] = { 0, 2500, 0, 0 };
		garageSell[] = { 800000, 850, 0, 0 };
        insurance = 2500;
        chopShop = 155000;
        textures[] = { };
    };
	
	class D41_Trawler {
        vItemSpace = 800;
        storageFee[] = { 0, 1200, 0, 0 };
		garageSell[] = { 0, 850, 0, 0 };
        insurance = 2500;
        chopShop = 750000;
        textures[] = { };
    };
	
	class I_Truck_02_medical_F : Default {
		vItemSpace = 150;
		storageFee[] = { 0, 0, 1500, 0 };
		garageSell[] = { 0, 0, 5000, 0 };
		chopShop = 3000;
	};

	class O_Truck_03_medical_F : Default {
		vItemSpace = 200;
		storageFee[] = { 0, 0, 3000, 0 };
		garageSell[] = { 0, 0, 10000, 0 };
		chopShop = 7500;
	};

	class B_Truck_01_medical_F : Default {
		vItemSpace = 250;
		storageFee[] = { 0, 0, 6500, 0 };
		garageSell[] = { 0, 0, 25000, 0 };
		chopShop = 12500;
	};

	class C_Rubberboat {
        vItemSpace = 45;
        storageFee[] = { 400, 300, 0, 0 };
		garageSell[] = { 950, 350, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
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

	class B_MRAP_01_hmg_F : Default {
		vItemSpace = 100;
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
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

	class B_G_Boat_Transport_01_F {
        vItemSpace = 45;
        storageFee[] = { 1000, 0, 0, 0 };
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
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

	class O_Truck_03_device_F {
        vItemSpace = 350;
        storageFee[] = { 95000, 0, 0, 0 };
		garageSell[] = { 185000, 0, 0, 0 };
        insurance = 25000;
        chopShop = 125000;
        textures[] = { };
    };

	class Land_CargoBox_V1_F : Default {
        vItemSpace = 5000;
    };

	class Box_IND_Grenades_F : Default {
        vItemSpace = 350;
    };

	class B_supplyCrate_F {
        vItemSpace = 700;
    };

	class B_G_Offroad_01_F {
        vItemSpace = 65;
        storageFee[] = { 1000, 0, 0, 0 };
		garageSell[] = { 3500, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

	class B_G_Offroad_01_armed_F : B_G_Offroad_01_F {};

	class I_G_Van_01_transport_F {
        vItemSpace = 100;
        storageFee[] = { 1000, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

	class C_Boat_Civil_01_F {
        vItemSpace = 85;
        storageFee[] = { 4500, 2500, 0, 0 };
		garageSell[] = { 6800, 3500, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
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
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

	class B_Truck_01_box_F {
        vItemSpace = 450;
        storageFee[] = { 35000, 0, 0, 0 };
		garageSell[] = { 150000, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

	class B_Truck_01_transport_F {
        vItemSpace = 325;
        storageFee[] = { 25650, 0, 0, 0 };
		garageSell[] = { 135000, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

	class O_MRAP_02_F {
        vItemSpace = 60;
        storageFee[] = { 45000, 0, 0, 0 };
		garageSell[] = { 65000, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

	class I_MRAP_03_F {
        vItemSpace = 58;
        storageFee[] = { 1000, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

	class C_Offroad_01_F {
        vItemSpace = 65;
        storageFee[] = { 1000, 500, 650, 1000 };
		garageSell[] = { 6500, 2500, 0, 0 };
        insurance = 2500;
        chopShop = 2500;
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
            { "Fed", "fed", {
	                "#(ai,64,64,1)Fresnel(0.3,3)"
            } },
            { "Taxi", "civ", {
	            "#(argb,8,8,3)color(0.6,0.3,0.01,1)"
            } },
            { "Gendarmerie", "cop", {
                "sg_pack01\textures\cop\cop_pickup_gend.jpg"
            } },
            { "Police Municipal", "cop", {
                "sg_pack01\textures\cop\OffRoad PoliceM.paa"
            } }				
	    };
    };

	class C_Kart_01_Blu_F {
		vItemSpace = 20;
		storageFee[] = { 1500, 0, 0, 0 };
		garageSell[] = { 3500, 0, 0, 0 };
		inusrance = 1650;
		chopShop = 3500;
		textures[] = {};
	};

	class C_Kart_01_Fuel_F : C_Kart_01_Blu_F {}; //Inherits everything from the above class
	class C_Kart_01_Red_F : C_Kart_01_Blu_F {}; //Inherits everything from the above class
	class C_Kart_01_Vrana_F : C_Kart_01_Blu_F {}; //Inherits everything from the above class

	class C_Hatchback_01_sport_F {
        vItemSpace = 45;
        storageFee[] = { 2500, 1000, 0, 0 };
		garageSell[] = { 15000, 7500, 0, 0 };
        insurance = 5500;
        chopShop = 4500;
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
            { "Gendarmerie", "cop", {
                "sg_pack01\textures\cop\cop_hayon_gend.jpg"
            } },
            { "G.I.G.N", "cop", {
                "sg_pack01\textures\gign\cop_hayon_gign.jpg"
            } }
        };
    };

	class B_Quadbike_01_F {
        vItemSpace = 25;
        storageFee[] = { 1000, 0, 0, 0 };
		garageSell[] = { 950, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
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
        chopShop = 20000;
        textures[] = {
        	{ "Orange", "civ", {
                "\A3\Soft_F_Beta\Truck_02\data\truck_02_kab_co.paa",
                "\a3\soft_f_beta\Truck_02\data\truck_02_kuz_co.paa"
            } },
            { "Black", "fed", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            } }
        };
    };

	class O_Truck_02_box_F {
        vItemSpace = 250;
        storageFee[] = { 14500, 0, 0, 0 };
		garageSell[] = { 20000, 0, 0, 0 };
        insurance = 6500;
        chopShop = 20000;
        textures[] = {
            { "Black", "fed", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            } },
			{ "Pompier", "med", {
				"sg_pack01\textures\pompiers\Zamak Pompiers.paa",
				"sg_pack01\textures\pompiers\Zamak Back Pompiers.paa"
			} }
		};
	};
	
	class I_Truck_02_transport_F : I_Truck_02_covered_F {
        vItemSpace = 200;
        storageFee[] = { 12000, 0, 0, 0 };
		garageSell[] = { 49800, 3500, 0, 0 };
    };

	class O_Truck_03_covered_F {
		vItemSpace = 500;
		storageFee[] = { 25000, 0, 0, 0 };
		garageSell[] = { 65000, 0, 0, 0 };
		insurance = 2500;
		chopShop = 110000;
		textures[] = {};
	};

	class C_Hatchback_01_F {
        vItemSpace = 40;
        storageFee[] = { 1000, 0, 0, 0 };
		garageSell[] = { 4500, 3500, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
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
            } },
            { "Gendarmerie", "cop", {
                "sg_pack01\textures\cop\cop_hayon_gend.jpg"
            } },
            { "G.I.G.N", "cop", {
                "sg_pack01\textures\gign\cop_hayon_gign.jpg"
            } }				
        };
    };

	class C_SUV_01_F {
        vItemSpace = 50;
        storageFee[] = { 1000, 0, 0, 0 };
		garageSell[] = { 15000, 7500, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = {
        	{ "Dark Red", "civ", {
                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_co.paa"
            } },
			{ "Black", "cop", {
	                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_02_co.paa"
            } },
			{ "Silver", "civ", {
	                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_03_co.paa"
            } },
			{ "Orange", "civ", {
	                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_04_co.paa"
            } },
            { "Cop", "cop", {
                "#(ai,64,64,1)Fresnel(1.3,7)"
            } },
            { "Gendarmerie", "cop", {
                "sg_pack01\textures\cop\cop_suv_gend.jpg"
            } },
            { "Police Municipal", "cop", {
                "sg_pack01\textures\cop\SUV PoliceM.paa"
            } },	
            { "G.I.G.N", "cop", {
                "sg_pack01\textures\gign\cop_suv_gign.jpg"
            } }	
		};
    };
	
	class C_Van_01_transport_F {
        vItemSpace = 100;
        storageFee[] = { 1000, 0, 0, 0 };
		garageSell[] = { 25000, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
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
        chopShop = 5000;
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
        chopShop = 5000;
        textures[] = {
        	{ "Regular", "cop", {
                "\A3\Soft_F\MRAP_01\Data\mrap_01_base_co.paa"
            } },
            { "Black", "fed", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            } }
        };
    };

	class B_Heli_Light_01_F {
        vItemSpace = 90;
        storageFee[] = { 45000, 19500, 0, 0 };
		garageSell[] = { 57000, 35000, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = {
        	{ "Sheriff", "cop", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_sheriff_co.paa"
            } },
			{ "Black", "fed", {
	                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_ion_co.paa"
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
            { "EMS White", "med", {
                "#(argb,8,8,3)color(1,1,1,0.8)"
            } },
            { "Gendarmerie", "cop", {
                "sg_pack01\textures\cop\cop_little_gend.jpg"
            } }			
        };
    };

	class O_Heli_Light_02_unarmed_F {
        vItemSpace = 210;
        storageFee[] = { 55000, 0, 22000, 0 };
		garageSell[] = { 72500, 0, 35000, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = {
        	{ "Black", "fed", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_co.paa"
            } },
			{ "White / Blue", "civ", {
	                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_civilian_co.paa"   
            } },
			{ "Digi Green", "donate", {
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
};
