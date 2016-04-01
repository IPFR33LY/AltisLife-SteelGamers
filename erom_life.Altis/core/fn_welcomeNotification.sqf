/*
	File: fn_welcomeNotification.sqf
	
	Description:
	Called upon first spawn selection and welcomes our player.
*/
format["Bienvenue %1,",profileName] hintC
[
	"La communauté Steel-Gamers vous souhaite la bienvenue sur Erom-Life",
	"Les Touches à retenir :",
	"TAB = Menu d'intéraction,ramasser,Menu Maison...etc ",	
	"Shift + C = Miner",
	"Shift + V = Se Rendre",
	"Shift + Espace = Sauter",
	"Tir en Zone Safe = -500 € sur le compte",
	"Teamspeak : ts.steel-gamers.fr",
	"",
	"Merci de lire les règles sur le site (www.steel-gamers.fr) et bon jeux sur le serveur"
];
	