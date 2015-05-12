#define VITEMMACRO(NAME,DISPLAYNAME,VARNAME,WEIGHT,BUYPRICE,SELLPRICE,ILLEGAL,EDIBLE,ICON) class NAME { \
		variable = VARNAME; \
		weight = WEIGHT; \
		displayName = DISPLAYNAME; \
		buyPrice = BUYPRICE; \
		sellPrice = SELLPRICE; \
		illegal = ILLEGAL; \
		edible = EDIBLE; \
		icon = ICON; \
	};
	
#define LICENSEMACRO(NAME,DISPLAYNAME,VARNAME,PRICE,ILLEGAL,SIDE) class NAME { \
		variable = VARNAME; \
		displayName = DISPLAYNAME; \
		price = PRICE; \
		illegal = ILLEGAL; \
		side = SIDE; \
	};

#define true 1
#define false 0
#include "Config_Clothing.hpp"
#include "Config_Shops.hpp"

/*
	Master settings for various features and functionality	
*/
class Life_Settings {
	/* Persistent Settings */
	save_civ_weapons = true; //Allow civilians to save weapons on them?
	save_virtualItems = true; //Save Virtual items (all sides)?

	/* Revive system settings */
	revive_cops = true; //true to enable cops the ability to revive everyone or false for only medics/ems.
	revive_fee = 1500; //Revive fee that players have to pay and medics / EMS are rewarded
	
	/* House related settings */
	house_limit = 2; //Maximum amount of houses a player can own.

	/* Gang related settings */
	gang_price = 75000; //Price for creating a gang, remember they are persistent so keep it reasonable to avoid millions of gangs.
	gang_upgradeBase = 10000; //The base cost for upgrading slots in a gang
	gang_upgradeMultiplier = 2.5; //Not sure if in use?

	/* Player-related systems */
	enable_fatigue = false; //Set to false to disable the ARMA 3 false system.
	total_maxWeight = 54;  //Identifies the max carrying weight (gets adjusted throughout game when wearing different types of clothing).
	total_maxWeightT = 54;  //Static variable for the maximum weight allowed without having a backpack
	paycheck_period = 5; //Scaled in minutes
	
	/* Impound Variables */
	impound_car = 1350; //Price for impounding cars
	impound_boat = 2250; //Price for impounding boats
	impound_air = 1850; //Price for impounding helicopters / planes

	/* Car-shop Settings */
	vehicleShop_rentalOnly[] = { "B_MRAP_01_hmg_F", "B_G_Offroad_01_armed_F" };

	/* Job-related stuff */
	delivery_points[] = { "dp_1", "dp_2", "dp_3", "dp_4", "dp_5", "dp_6", "dp_7", "dp_8", "dp_9", "dp_10", "dp_11", "dp_12", "dp_13", "dp_14", "dp_15", "dp_15", "dp_16", "dp_17", "dp_18", "dp_19", "dp_20", "dp_21", "dp_22", "dp_23", "dp_24", "dp_25" };

	crimes[] = { 
		{"STR_Crime_1","350","1"}, 
		{"STR_Crime_2","1500","2"}, 
		{"STR_Crime_3","2500","3"}, 
		{"STR_Crime_4","3500","4"}, 
		{"STR_Crime_5","10000","5"}, 
		{"STR_Crime_6","5000","6"}, 
		{"STR_Crime_7","10000","7"} 
	};
	
	sellArray[] = {
		{"arifle_sdar_F", 7500},
		{"hgun_P07_snds_F", 650},
		{"hgun_P07_F", 1500},
		{"ItemGPS", 45},
		{"ToolKit", 75},
		{"FirstAidKit", 65},
		{"Medikit", 450},
		{"NVGoggles", 980},
		{"16Rnd_9x21_Mag", 15},
		{"20Rnd_556x45_UW_mag", 35},
		{"ItemMap", 35},
		{"ItemCompass", 25},
		{"Chemlight_blue", 50},
		{"Chemlight_yellow", 50},
		{"Chemlight_green", 50},
		{"Chemlight_red", 50},
		{"hgun_Rook40_F", 500},
		{"arifle_Katiba_F", 5000},
		{"30Rnd_556x45_Stanag", 65},
		{"20Rnd_762x51_Mag", 85},
		{"30Rnd_65x39_caseless_green", 50},
		{"DemoCharge_Remote_Mag", 7500},
		{"SLAMDirectionalMine_Wire_Mag", 2575},
		{"optic_ACO_grn", 250},
		{"acc_flashlight", 100},
		{"srifle_EBR_F", 15000},
		{"arifle_TRG21_F", 3500},
		{"optic_MRCO", 5000},
		{"optic_Aco", 850},
		{"arifle_MX_F", 7500},
		{"arifle_MXC_F", 5000},
		{"arifle_MXM_F", 8500},
		{"MineDetector", 500},
		{"optic_Holosight", 275},
		{"acc_pointer_IR", 175},
		{"arifle_TRG20_F", 2500},
		{"SMG_01_F", 1500},
		{"arifle_Mk20C_F", 4500},
		{"30Rnd_45ACP_Mag_SMG_01", 60},
		{"30Rnd_9x21_Mag", 30}
	};
	
	allowedSavedVirtualItems[] = { "pickaxe", "fuelEmpty", "fuelFull", "spikeStrip", "lockpick", "defuseKit", "storageSmall", "storageBig", "redgull", "coffee", "waterBottle", "apple", "peach", "tbacon", "donut", "rabbitGrilled", "salemaGrilled", "ornateGrilled", "mackerelGrilled", "tunaGrilled", "mulletGrilled", "catsharkGrilled", "turtleSoup", "henGrilled", "roosterGrilled", "sheepGrilled", "goatGrilled" };
};


//Virtual Items
class VirtualItems {
	//Misc
	VITEMMACRO(pickaxe, "STR_Item_Pickaxe", "pickaxe", 2, 750, 350, false, -1, "sg_pack01\sg-icons\items\pickaxe.paa")
	VITEMMACRO(fuelEmpty, "STR_Item_FuelE", "fuelEmpty", 2, -1, -1, false, -1, "sg_pack01\sg-icons\items\fuelempty.paa")
	VITEMMACRO(fuelFull, "STR_Item_FuelF", "fuelFull", 5, 850, 500, false, -1, "sg_pack01\sg-icons\items\fuel_can.paa")
	VITEMMACRO(spikeStrip, "STR_Item_SpikeStrip", "spikeStrip", 15, 2500, 1200, false, -1, "sg_pack01\sg-icons\items\spikestrip.paa")
	VITEMMACRO(lockpick, "STR_Item_Lockpick", "lockpick", 1, 150, 75, false, -1, "sg_pack01\sg-icons\items\lockpick.paa")
	VITEMMACRO(goldbar, "STR_Item_GoldBar", "goldbar", 12, -1, 95000, false, -1, "sg_pack01\sg-icons\items\goldbar.paa")
	VITEMMACRO(blastingcharge, "STR_Item_BCharge", "blastingCharge", 15, 35000, -1, true, -1, "sg_pack01\sg-icons\items\blastingcharge.paa")
	VITEMMACRO(boltcutter, "STR_Item_BCutter", "boltCutter", 5, 7500, -1, true, -1, "sg_pack01\sg-icons\items\boltcutter.paa")
	VITEMMACRO(defusekit, "STR_Item_DefuseKit", "defuseKit", 2, 2500, -1, false, -1, "sg_pack01\sg-icons\items\defusekit.paa")
	VITEMMACRO(storagesmall, "STR_Item_StorageBS", "storageSmall", 5, 75000, -1, false, -1, "sg_pack01\sg-icons\items\storageSmall.paa")
	VITEMMACRO(storagebig, "STR_Item_StorageBL", "storageBig", 10, 150000, -1, false, -1, "sg_pack01\sg-icons\items\storageBig.paa")

	//Mined Items
	VITEMMACRO(oil_unprocessed, "STR_Item_OilU", "oilUnprocessed", 7, -1, -1, false, -1, "sg_pack01\sg-icons\items\oil_unprocessed.paa")
	VITEMMACRO(oil_processed, "STR_Item_OilP", "oilProcessed", 6, -1, 3200, false, -1, "sg_pack01\sg-icons\items\oil_processed.paa")
	VITEMMACRO(copper_unrefined, "STR_Item_CopperOre", "copperUnrefined", 4, -1, -1, false, -1, "sg_pack01\sg-icons\items\copper_ore.paa")
	VITEMMACRO(copper_refined, "STR_Item_CopperIngot", "copperRefined", 3, -1, 1500, false, -1, "sg_pack01\sg-icons\items\copper.paa")
	VITEMMACRO(iron_unrefined, "STR_Item_IronOre", "ironUnrefined", 5, -1, -1, false, -1, "sg_pack01\sg-icons\items\iron_ore.paa")
	VITEMMACRO(iron_refined, "STR_Item_IronIngot", "ironRefined", 3, -1, 3200, false, -1, "sg_pack01\sg-icons\items\iron.paa")
	VITEMMACRO(salt_unrefined, "STR_Item_Salt", "saltUnrefined", 3, -1, -1, false, -1, "sg_pack01\sg-icons\items\salt_unprocessed.paa")
	VITEMMACRO(salt_refined, "STR_Item_SaltR", "saltRefined", 1, -1, 1450, false, -1, "sg_pack01\sg-icons\items\salt.paa")
	VITEMMACRO(sand, "STR_Item_Sand", "sand", 3, -1, -1, false, -1, "sg_pack01\sg-icons\items\sand.paa")
	VITEMMACRO(glass, "STR_Item_Glass", "glass", 1, -1, 1450, false, -1, "sg_pack01\sg-icons\items\glass.paa")
	VITEMMACRO(diamond_uncut, "STR_Item_DiamondU", "diamondUncut", 4, -1, 750, false, -1, "sg_pack01\sg-icons\items\diamond_unprocessed.paa")
	VITEMMACRO(diamond_cut, "STR_Item_DiamondC", "diamondCut", 2, -1, 2000, false, -1, "sg_pack01\sg-icons\items\diamond.paa")
	VITEMMACRO(rock, "STR_Item_Rock", "rock", 6, -1, -1, false, -1, "sg_pack01\sg-icons\items\rock.paa")
	VITEMMACRO(cement, "STR_Item_CementBag", "cement", 5, -1, 1950, false, -1, "sg_pack01\sg-icons\items\cement.paa")
	VITEMMACRO(uranium, "STR_Item_Uranium", "uranium", 6, -1, 1950, false, -1, "sg_pack01\sg-icons\items\uranium.paa")
	VITEMMACRO(uraniumu, "STR_Item_Uraniumu", "uraniumu", 5, -1, 1950, false, -1, "sg_pack01\sg-icons\items\uranium.paa")
	VITEMMACRO(uraniumt, "STR_Item_Uraniumt", "uraniumt", 3, -1, 5000, false, -1, "sg_pack01\sg-icons\items\uranium.paa")
	VITEMMACRO(tresor, "STR_Item_Tresor", "tresor", 5, -1, 4450, false, -1, "sg_pack01\sg-icons\items\goldbar.paa")
	
	//Drugs
	VITEMMACRO(heroin_unprocessed, "STR_Item_HeroinU", "heroinUnprocessed", 6, -1, -1, true, -1, "sg_pack01\sg-icons\items\heroin_unprocessed.paa")
	VITEMMACRO(heroin_processed, "STR_Item_HeroinP", "heroinProcessed", 4, -1, 2560, true, -1, "sg_pack01\sg-icons\items\heroin_processed.paa")
	VITEMMACRO(cannabis, "STR_Item_Cannabis", "cannabis", 4, -1, -1, true, -1, "sg_pack01\sg-icons\items\cannabis.paa")
	VITEMMACRO(marijuana, "STR_Item_Marijuana", "marijuana", 3, 7500, 2350, true, -1, "sg_pack01\sg-icons\items\marijuana.paa")
	VITEMMACRO(cocaine_unprocessed, "STR_Item_CocaineU", "cocaineUnprocessed", 6, -1, 3000, true, -1, "sg_pack01\sg-icons\items\cocain_unprocessed.paa")
	VITEMMACRO(cocaine_processed, "STR_Item_CocaineP", "cocaineProcessed", 4, -1, 5000, true, -1, "sg_pack01\sg-icons\items\cocain_processed.paa")
	VITEMMACRO(meth, "STR_Item_Meth", "meth", 4, -1, 5000, true, -1, "sg_pack01\sg-icons\items\meth.paa")
	VITEMMACRO(methu, "STR_Item_Methu", "methu", 4, -1, 5000, true, -1, "sg_pack01\sg-icons\items\meth.paa")	
	VITEMMACRO(plutonium, "STR_Item_Plutonium", "plutonium", 45, -1, 1500000, true, -1, "sg_pack01\sg-icons\items\uranium.paa")

	//Drink
	VITEMMACRO(redgull, "STR_Item_RedGull", "redgull", 1, 1500, 200, false, 100, "sg_pack01\sg-icons\items\redgull.paa")
	VITEMMACRO(coffee, "STR_Item_Coffee", "coffee", 1, 120, 40, false, 100, "sg_pack01\sg-icons\items\coffee.paa")
	VITEMMACRO(waterBottle, "STR_Item_WaterBottle", "waterBottle", 1, 10, 5, false, 100, "sg_pack01\sg-icons\items\water.paa")
	VITEMMACRO(bottledshine, "STR_Item_BottledShine","bottledshine",2,12500,10000,true,-1,"")
	VITEMMACRO(bottledwhiskey, "STR_Item_BottledWhiskey","bottledwhiskey",2,8000,5000,false,-1,"")
	VITEMMACRO(bottledbeer, "STR_Item_BottledBeer","bottledbeer",2,6000,4000,false,-1,"")
	VITEMMACRO(moonshine, "STR_Item_Moonshine","moonshine",2,-1,7000,true,-1,"")
	VITEMMACRO(whiskey, "STR_Item_Whiskey","whiskey",2,5000,4500,false,-1,"")
	VITEMMACRO(beerp, "STR_Item_Beerp","beerp",2,5000,4500,false,-1,"")
	VITEMMACRO(mash, "STR_Item_Mash","mash",2,3000,2500,true,-1,"")
	VITEMMACRO(rye, "STR_Item_Rye","rye",2,2500,2000,false,-1,"")
	VITEMMACRO(hops, "STR_Item_Hops","hops",2,2000,1800,false,-1,"")
	VITEMMACRO(yeast, "STR_Item_Yeast","yeast",2,2100,2000,false,-1,"")
	VITEMMACRO(cornmeal, "STR_Item_Cornmeal","cornmeal",2,500,200,false,-1,"")
	VITEMMACRO(bottles, "STR_Item_Bottles","bottles",2,100,75,false,-1,"")

	//Food
	VITEMMACRO(apple, "STR_Item_Apple", "apple", 1, 90, 50, false, 10, "sg_pack01\sg-icons\items\apple.paa")
	VITEMMACRO(peach, "STR_Item_Peach", "peach", 1, 95, 55, false, 10, "sg_pack01\sg-icons\items\peach.paa")
	VITEMMACRO(tbacon, "STR_Item_TBacon", "tbacon", 1, 75, 25, false, 40, "sg_pack01\sg-icons\items\tbacon.paa")
	VITEMMACRO(donut, "STR_Item_Donuts", "donut", 1, 120, 60, false, 30, "sg_pack01\sg-icons\items\donut.paa")
	VITEMMACRO(rabbit_raw, "STR_Item_Rabbit", "rabbitRaw", 2, -1, 65, false, -1, "sg_pack01\sg-icons\food.paa")
	VITEMMACRO(rabbit_grilled, "STR_Item_RabbitGrilled", "rabbitGrilled", 1, 150, 115, false, 20, "sg_pack01\sg-icons\items\cookedMeat.paa")
	VITEMMACRO(salema_raw, "STR_Item_Salema", "salemaRaw", 2, -1, 45, false, -1, "sg_pack01\sg-icons\food.paa")
	VITEMMACRO(salema_grilled, "STR_Item_SalemaGrilled", "salemaGrilled", 1, 75, 55, false, 30, "sg_pack01\sg-icons\items\cookedMeat.paa")
	VITEMMACRO(ornate_raw, "STR_Item_OrnateMeat", "ornateRaw", 2, -1, 40, false, -1, "sg_pack01\sg-icons\food.paa")
	VITEMMACRO(ornate_grilled, "STR_Item_OrnateGrilled", "ornateGrilled", 1, 175, 150, false, 25, "sg_pack01\sg-icons\items\cookedMeat.paa")
	VITEMMACRO(mackerel_raw, "STR_Item_MackerelMeat", "mackerelRaw", 4, -1, 175, false, -1, "sg_pack01\sg-icons\food.paa")
	VITEMMACRO(mackerel_grilled, "STR_Item_MackerelGrilled", "mackerelGrilled", 2, 250, 200, false, 30, "sg_pack01\sg-icons\items\cookedMeat.paa")
	VITEMMACRO(tuna_raw, "STR_Item_TunaMeat", "tunaRaw", 6, -1, 700, false, -1, "sg_pack01\sg-icons\food.paa")
	VITEMMACRO(tuna_grilled, "STR_Item_TunaGrilled", "tunaGrilled", 3, 1250, 1000, false, 100, "sg_pack01\sg-icons\items\cookedMeat.paa")
	VITEMMACRO(mullet_raw, "STR_Item_MulletMeat", "mulletRaw", 4, -1, 250, false, -1, "sg_pack01\sg-icons\food.paa")
	VITEMMACRO(mullet_fried, "STR_Item_MulletFried", "mulletFried", 2, 600, 400, false, 80, "sg_pack01\sg-icons\items\cookedMeat.paa")
	VITEMMACRO(catshark_raw, "STR_Item_CatSharkMeat", "catsharkRaw", 6, -1, 300, false, -1, "sg_pack01\sg-icons\food.paa")
	VITEMMACRO(catshark_fried, "STR_Item_CatSharkFried", "catsharkFried", 3, 750, 500, false, 100, "sg_pack01\sg-icons\items\cookedMeat.paa")
	VITEMMACRO(turtle_raw, "STR_Item_TurtleMeat", "turtleRaw", 6, 4000, 3000, true, -1, "sg_pack01\sg-icons\items\turtle.paa")
	VITEMMACRO(turtle_soup, "STR_Item_TurtleSoup", "turtleSoup", 2, 2500, 1000, false, 100, "sg_pack01\sg-icons\items\turtle_soup.paa")
	VITEMMACRO(hen_raw, "STR_Item_HenRaw", "henRaw", 1, -1, 35, false, -1, "sg_pack01\sg-icons\food.paa")
	VITEMMACRO(hen_fried, "STR_Item_HenFried", "henFried", 1, 115, 85, false, 65, "sg_pack01\sg-icons\items\cookedMeat.paa")
	VITEMMACRO(rooster_raw, "STR_Item_RoosterRaw", "roosterRaw", 1, -1, 35, false, -1, "sg_pack01\sg-icons\food.paa")
	VITEMMACRO(rooster_grilled, "STR_Item_RoosterGrilled", "roosterGrilled", 115, 85, false, 45, "sg_pack01\sg-icons\items\cookedMeat.paa")
	VITEMMACRO(sheep_raw, "STR_Item_SheepRaw", "sheepRaw", 2, -1, 50, false, -1, "sg_pack01\sg-icons\food.paa")
	VITEMMACRO(sheep_grilled, "STR_Item_SheepGrilled", "sheepGrilled", 2, 155, 115, false, 100, "sg_pack01\sg-icons\items\cookedMeat.paa")
	VITEMMACRO(goat_raw, "STR_Item_GoatRaw", "goatRaw", 2, -1, 75, false, -1, "sg_pack01\sg-icons\food.paa")
	VITEMMACRO(goat_grilled, "STR_Item_GoatGrilled", "goatGrilled", 2, 175, 135, false, 100, "sg_pack01\sg-icons\items\cookedMeat.paa")
	VITEMMACRO(gpstracker, "STR_Item_gpstracker", "gpstracker", 2, 2000, 1350, false, 100, "sg_pack01\sg-icons\items\gpstracker.paa")	
};


/*
	Licenses
	
	Params:
	CLASS ENTRY,DisplayName,VariableName,price,illegal,side indicator
*/
class Licenses {
	LICENSEMACRO(driver,"STR_License_Driver","driver",500,false,"civ")
	LICENSEMACRO(luxe,"STR_License_Luxe","luxe",15350,false,"civ")	
	LICENSEMACRO(boat,"STR_License_Boat","boat",1000,false,"civ")
	LICENSEMACRO(pilot,"STR_License_Pilot","pilot",25000,false,"civ")
	LICENSEMACRO(gun,"STR_License_Firearm","gun",10000,false,"civ")
	LICENSEMACRO(dive,"STR_License_Diving","dive",2000,false,"civ")
	LICENSEMACRO(oil,"STR_License_Oil","oil",10000,false,"civ")
	LICENSEMACRO(cAir,"STR_License_Pilot","cAir",15000,false,"cop")
	LICENSEMACRO(coastguard,"STR_License_CG","coastguard",8000,false,"cop")
	LICENSEMACRO(heroin,"STR_License_Heroin","heroin",25000,true,"civ")
	LICENSEMACRO(marijuana,"STR_License_Marijuana","marijuana",19500,true,"civ")
	LICENSEMACRO(medmarijuana,"STR_License_Medmarijuana","medmarijuana",15000,false,"civ")
	LICENSEMACRO(rebel,"STR_License_Rebel","rebel",75000,true,"civ")
	LICENSEMACRO(rebel_lvl_2,"STR_License_Rebel2","rebel_lvl_2",75000,true,"civ")	
	LICENSEMACRO(rebel_lvl_3,"STR_License_Rebel3","rebel_lvl_3",75000,true,"civ")	
	LICENSEMACRO(rebel_lvl_4,"STR_License_Rebel4","rebel_lvl_4",75000,true,"civ")	
	LICENSEMACRO(rebel_lvl_5,"STR_License_Rebel5","rebel_lvl_5",75000,true,"civ")		
	LICENSEMACRO(truck,"STR_License_Truck","truck",20000,false,"civ")
	LICENSEMACRO(diamond,"STR_License_Diamond","diamond",35000,false,"civ")
	LICENSEMACRO(salt,"STR_License_Salt","salt",12000,false,"civ")
	LICENSEMACRO(cocaine,"STR_License_Cocaine","cocaine",30000,true,"civ")
	LICENSEMACRO(meth,"STR_License_Meth","meth",30000,true,"civ")	
	LICENSEMACRO(sand,"STR_License_Sand","sand",14500,false,"civ")
	LICENSEMACRO(iron,"STR_License_Iron","iron",9500,false,"civ")
	LICENSEMACRO(copper,"STR_License_Copper","copper",8000,false,"civ")
	LICENSEMACRO(cement,"STR_License_Cement","cement",6500,false,"civ")
	LICENSEMACRO(mAir,"STR_License_Pilot","mAir",15000,false,"med")
	LICENSEMACRO(pompier,"STR_License_Pompier","pompier",1500000,false,"med")	
	LICENSEMACRO(home,"STR_License_Home","home",75000,false,"civ")
	LICENSEMACRO(criminel,"STR_License_Criminel","criminel",250000,true,"civ")	
	LICENSEMACRO(donateur_lvl_1,"STR_License_Donateur","donateur_lvl_1",15450000,false,"civ")
	LICENSEMACRO(donateur_lvl_2,"STR_License_Donateur2","donateur_lvl_2",15450000,false,"civ")
	LICENSEMACRO(donateur_lvl_3,"STR_License_Donateur3","donateur_lvl_3",15450000,false,"civ")	
	LICENSEMACRO(uranium,"STR_License_Uranium","uranium",40000,false,"civ")	
	LICENSEMACRO(stiller,"STR_License_Stiller","stiller",40000,false,"civ")
	LICENSEMACRO(liquor,"STR_License_Liquor","liquor",40000,false,"civ")
	LICENSEMACRO(bottler,"STR_License_Bottler","bottler",40000,false,"civ")
	LICENSEMACRO(mash,"STR_License_Mash","mash",100000,false,"civ")
};

class VirtualShops {
	class market {
		name = "STR_Shops_Market";
		items[] = { "waterBottle", "rabbit_grilled", "apple", "redgull", "coffee", "tbacon", "lockpick", "pickaxe", "fuelFull", "peach", "boltcutter", "storagesmall", "storagebig" };
	};
	
	class artefact {
		name = "STR_Shops_Artefact";
		items[] = { "tresor" };
	};		

	class rebel {
		name = "STR_Shops_Rebel";
		items[] = { "waterBottle", "rabbit_grilled", "apple", "redgull", "tbacon", "lockpick", "pickaxe", "fuelFull", "peach", "boltcutter", "blastingcharge" };
	};

	class gang {
		name = "STR_Shops_Gang";
		items[] = { "waterBottle", "rabbit_grilled", "apple", "redgull", "tbacon", "lockpick", "pickaxe", "fuelFull", "peach", "boltcutter", "blastingcharge" };
	};

	class wongs {
		name = "STR_Shops_Wongs";
		items[] = { "turtle_soup", "turtle_raw" };
	};

	class coffee {
		name = "STR_Shops_Coffee";
		items[] = { "coffee", "donuts" };
	};
	
	class drugdealer {
		name = "STR_Shops_DrugDealer";
		items[] = { "cocaine_processed", "heroin_processed", "marijuana" };
	};

	class uranium {
		name = "STR_Shops_Uranium";
		items[] = { "uraniumt" };
	};
	
	class oil {
		name = "STR_Shops_Oil";
		items[] = { "oil_processed", "pickaxe", "fuelFull" };
	};

	class fishmarket {
		name = "STR_Shops_FishMarket";
		items[] = { "salema_raw", "salema_grilled", "ornate_raw", "ornate_grilled", "mackerel_raw", "mackerel_grilled", "tuna_raw", "tuna_grilled", "mullet_raw", "mullet_fried", "catshark_raw", "catshark_fried" };
	};

	class glass {
		name = "STR_Shops_Glass";
		items[] = { "glass" };
	};

	class iron  {
		name = "STR_Shops_Minerals";
		items[] = { "iron_refined", "copper_refined" };
	};

	class diamond {
		name = "STR_Shops_Diamond";
		items[] = { "diamond_uncut", "diamond_cut" };
	};

	class salt {
		name = "STR_Shops_Salt";
		items[] = { "salt_refined" };
	};

	class cop {
		name = "STR_Shops_Cop";
		items[] = { "donuts", "coffee", "tbacon", "spikeStrip", "waterBottle", "rabbit_grilled", "apple", "redgull", "fuelFull", "defusekit" , "gpstracker"};
	};

	class cement {
		name = "STR_Shops_Cement";
		items[] = { "cement" };
	};

	class bar {
		name = "STR_Shops_Cement";
		items[] = { "bottledshine", "bottledwhiskey", "bottledbeer", "moonshine", "whiskey", "beerp", "mash", "cornmeal", "bottles"};
	};

	class gold {
		name = "STR_Shops_Gold";
		items[] = { "goldbar" };
	};
};

#include "Config_Vehicles.hpp"
#include "Config_Houses.hpp"