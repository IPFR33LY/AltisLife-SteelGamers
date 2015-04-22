//ESU road barrier script
//Written by Warnerm14 http://lathanalife.enjin.com/

	header = player addaction [("<t color=""#FF3300"">" + ("### Barriere ###") +"</t>"),""]; 
	placeCone = player addaction ["Placer cône de route","core\items\deployCone.sqf"]; 
	placeBarrier = player addaction ["Placer une Barriere","core\items\deployBarrier.sqf"]; 
	removeCone = player addaction ["Supprimer cône de route","core\items\removeCone.sqf"]; 
	removeBarrier = player addaction ["Supprimer Barriere","core\items\removeBarrier.sqf"]; 
	cancelBarrier = player addaction [("<t color=""#FF3300"">" + ("### Fermer ###") +"</t>"),"core\items\removeMenu.sqf"];
		
	player removeAction barrierMain;
