//ESU road barrier script
//Written by Warnerm14 http://lathanalife.enjin.com/

	header = player addaction [("<t color=""#FF3300"">" + ("### Barriere ###") +"</t>"),""]; 
	placeCone = player addaction ["Placer cône de route","core\warner\deployCone.sqf"]; 
	placeBarrier = player addaction ["Placer une Barriere","core\warner\deployBarrier.sqf"]; 
	removeCone = player addaction ["Supprimer cône de route","core\warner\removeCone.sqf"]; 
	removeBarrier = player addaction ["Supprimer Barriere","core\warner\removeBarrier.sqf"]; 
	cancelBarrier = player addaction [("<t color=""#FF3300"">" + ("### Fermer ###") +"</t>"),"core\warner\removeMenu.sqf"];
		
	player removeAction barrierMain;
