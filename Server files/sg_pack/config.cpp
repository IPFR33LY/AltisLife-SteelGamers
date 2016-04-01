class CfgPatches {

	class sg_pack {
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.0;
		requiredAddons[] = {};
		authorUrl="http://www.steel-gamers.fr/";
		fileName="sg_pack.pbo";
	};
};

class CfgSounds
{
	sounds[] = {};
	class SirenLong
	{
		name = "SirenLong";
		sound[] = {"\sounds\Siren_Long.ogg", 1.0, 1};
		titles[] = {};
	};

	class medicSiren
	{
		name = "medicSiren";
		sound[] = {"\sounds\medic_siren.ogg", 1.0, 1};
		titles[] = {};
	};

	class tazersound
	{
		name = "Tazersound";
		sound[] = {"\sounds\tazer.ogg", 0.25, 1};
		titles[] = {};
	};

	class flashbang
	{
		name = "flashbang";
		sound[] = {"\sounds\flashbang.ogg", 1.0, 1};
		titles[] = {};
	};
	
    class car_lock
    {
        name = "car_lock";
        sound[] = {"\sounds\car_lock.ogg", 1, 1};
        titles[] = {};  
    };
	
	class unlock
    {
        name = "unlock";
        sound[] = {"\sounds\unlock.ogg", 1, 1};
        titles[] = {};  
    };
	
	class drink
    {
        name = "drink";
        sound[] = {"\sounds\drink.ogg", 1, 1};
        titles[] = {};  
    };
	
	class key_jangling
	{
        name = "key_jangling";
        sound[] = {"\sounds\key_jangling.ogg", 1, 1};
        titles[] = {};  
    };	
	
	class eat
    {
        name = "eat";
        sound[] = {"\sounds\eat.ogg", 1, 1};
        titles[] = {};  
    };
	
	class cuff
    {
        name = "cuff";
        sound[] = {"\sounds\cuff.ogg", 1, 1};
        titles[] = {};  
    };
	
	class cuffout
    {
        name = "cuffout";
        sound[] = {"\sounds\cuffout.ogg", 1, 1};
        titles[] = {};  
    };
	
	class news
    {
        name = "news";
        sound[] = {"\sounds\news.ogg", 1, 1};
        titles[] = {};  
    };
	
	class mining
    {
        name = "mining";
        sound[] = {"\sounds\mining.ogg", 1, 1};
        titles[] = {};  
    };
	
	class achat
    {
        name = "achat";
        sound[] = {"\sounds\achat.ogg", 1, 1};
        titles[] = {};
        
    };
	
	class bank_alarm
	{
	    name = "bank_alarm";
	    sound[] = {"\sounds\bank.ogg", 1.0, 1};
	    titles[] = {};
	};
	
	class intro
	{
		name = "intro";
		sound[] = {"\sg_pack\sounds\intro.ogg", 0.8, 1};
		titles[] = {};
	};
	
	class message
	{
		name = "message";
		sound[] = {"\sounds\message.ogg", 1.0, 1};
		titles[] = {};
	};
};