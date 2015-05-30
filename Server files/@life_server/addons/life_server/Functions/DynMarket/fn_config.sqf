/*
##################### DYNAMIC MARKET SCRIPT #####################
### AUTHOR: RYAN TT.                                          ###
### STEAM: www.steamcommunity.com/id/ryanthett                ###
###                                                           ###
### DISCLAIMER: THIS SCRIPT CAN BE USED ON EVERY SERVER ONLY  ###
###             WITH THIS HEADER / NOTIFICATION               ###
#################################################################
*/

// ███████████████████████████████████████████████████████████████████████
// █████████████████ DYNAMIC MARKET BASIC CONFIGURATION ██████████████████
// ███████████████████████████████████████████████████████████████████████

DYNMARKET_Serveruptime         = 05;   // Serveruptime after restart in hours
DYNMARKET_UseExternalDatabase  = true; // Should the script use the External Database?
DYNMARKET_PriceUpdateInterval  = 01;   // After how many minutes should the price be updated?
DYNMARKET_CreateBackups        = true; // Should the server save write the prices regulary into the Database? If false, it will save the prices before Server-restart?
DYNMARKET_CreateBackupInterval = 03;   // After how many updates (PriceUpdateIntervals) should the prices be saved into the Database?
DYNMARKET_UserNotification     = false; // Should the user be informed with a hint whenever the prices got updated?

// █████████████████ USER NOTIFICATION TEXTS  █████████████████

DYNMARKET_UserNotification_Text = 
[
	"Vos prix ont été mis à jour !",
	"Les nouveaux prix sont calculés par le serveur ..."
];

// █████████████████ ITEM GROUP CONFIGURATION █████████████████

DYNMARKET_Items_Groups =
[
	["default",
		[
			["apple",-1,20,80],
			["peach",-1,30,90],
			["coffee",-1,50,120]
		],
		0.5
	],
	["Mine",
		[
			["oil_processed",-1,1200,4800],
			["copper_refined",-1,1900,4900],
			["iron_refined",-1,1500,3900],
			["salt_refined",-1,900,2500],
			["glass",-1,1210,1550],
			["tresor",-1,4950,6750],
			["diamond_cut",-1,2500,5700],
			["cement",-1,2350,3800]
		],
		0.6
	],
	["hunt",
	[
			["rabbit_grilled",-1,10,50],
			["hen_fried",-1,30,80],
			["rooster_grilled",-1,30,80],
			["sheep_grilled",-1,30,80],
			["goat_grilled",-1,30,80]
		],
		0.7
	],
	["Fish",
		[
			["salema_grilled",-1,10,50],
			["ornate_grilled",-1,30,80],
			["mackerel_grilled",-1,30,80],
			["tuna_grilled",-1,30,80],
			["mullet_fried",-1,30,80],
			["catshark_fried",-1,30,80]
		],
		0.7
	],
	["Alcool",
		[
			["bottledshine",-1,4500,10000],
			["bottledwhiskey",-1,2500,5000],
			["bottledbeer",-1,3200,4000],
			["moonshine",-1,5500,7000],
			["whiskey",-1,2450,4500],
			["beerp",-1,2000,4500]
		],
		0.7
	],
	["Illegal", 
		[
			["heroin_processed",-1,2000,8400],
			["marijuana",-1,1500,8000],
			["cocaine_processed",-1,4500,8500],
			["methu",-1,4900,7000],
			["uraniumt",-1,3200,7700],
			["goldbar",-1,85000,100000],
			["turtle_raw",-1,1100,2000],
			["turtle_soup",-1,1230,4600]
		],
		0.8
	]
];

// █████████████████    ALL SELLABLE ITEMS    █████████████████

DYNMARKET_Items_ToTrack        = 
[
	["apple",25],
	["peach",50],
	["tbacon",125],
	["donut",130],
	["rabbit_raw",150],
	["rabbit_grilled",170],
	["ornate_raw",190],
	["ornate_grilled",190],
	["mackerel_raw",190],
	["mackerel_grilled",190],
	["tuna_raw",190],
	["tuna_grilled",190],
	["mullet_raw",190],
	["mullet_fried",200],
	["catshark_raw",200],
	["catshark_Fried",200],
	["turtle_soup",200],
	["hen_raw",200],
	["hen_fried",200],
	["rooster_raw",210],
	["sheep_raw",210],
	["sheep_grilled",155],
	["goat_raw",155],
	["goat_grilled",300],
	
	["redgull",1500],
	["coffee",10],
	["waterBottle",10],
	["bottledshine",9000],
	["bottledwhiskey",5000],
	["bottledbeer",4000],
	["moonshine",7000],
	["whiskey",4500],
	["beerp",4000],
	["mash",2500],
	["rye",2000],
	["hops",1800],
	["yeast",2000],
	["cornmeal",200],
	["bottles",75],
	
	["pickaxe",350],
	["fuelFull",500],
	["spikeStrip",1200],
	["lockpick",75],
	["goldbar",95000],
	["tresor",4950],
	["blastingcharge",35000],
	["boltcutter",7500],
	["defusekit",2500],
	["storagesmall",15000],
	["storagebig",75000],
	
	["oil_processed",1200],
	["copper_refined",1700],
	["iron_refined",1650],
	["salt_refined",1850],
	["glass",1450],
	["diamond_cut",2530],
	["cement",2350],
	["methu",4900],
	["uraniumt",6800],	
	["heroin_processed",5000],
	["marijuana",5250],
	["cocaine_processed",5300]
];

//███████████████████████████████████████████████████████████████████████
//██████████████████ DO NOT MODIFY THE FOLLOWING CODE! ██████████████████
//███████████████████████████████████████████████████████████████████████

DYNMARKET_Items_CurrentPriceArr = [];
DYNMARKET_sellarraycopy = DYNMARKET_Items_ToTrack;
DYNMARKET_Serveruptime = (DYNMARKET_Serveruptime * 3600) - 300;
{
	_currentArray = _x;
	DYNMARKET_Items_CurrentPriceArr pushBack [_currentArray select 0,_currentArray select 1,0];
} forEach DYNMARKET_Items_ToTrack;
publicVariable "DYNMARKET_UserNotification";
publicVariable "DYNMARKET_UserNotification_Text";
if (DYNMARKET_UseExternalDatabase) then {[1] call TON_fnc_HandleDB;};
DYNMARKET_UpdateCount = 0;
if (DYNMARKET_UseExternalDatabase) then {
	[] spawn {
		sleep DYNMARKET_Serveruptime;
		diag_log "### DYNMARKET >> CURRENT PRICES ARE BEING WRITTEN TO THE DATABASE    ###";
		diag_log "### DYNMARKET >> AS PLANNED, AWAITING RESULT...                      ###";
		[0] call TON_fnc_HandleDB;
	};
};
sleep 5;
[] call TON_fnc_sleeper;