/*
	File: fn_welcomeNotification.sqf
	
	Description:
	Called upon first spawn selection and welcomes our player.
*/
format["Bienvenue %1,",profileName] hintC
[
	"La communauté Steel Gamers vous souhaite la bienvenue",
	"Les Touches à retenir :",
	"TAB = Menu d'intéraction,rammaser,Menu Maison...etc ",	
	"Shift + C = Miner",
	"Shift + V = Se Rendre",
	"Shift + Espace = Sauter",
	"Tir en Zone Safe = -500 € sur le compte",
	"",
	"Merci de lire les règles sur le site (steel-gamers.com) et bon jeux sur le serveur"
];
	