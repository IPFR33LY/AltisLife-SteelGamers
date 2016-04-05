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
	class drink
    {
        name = "drink";
        sound[] = {"sg_pack\sounds\drink.ogg", 1, 1};
        titles[] = {};  
    };
	
	class key_jangling
	{
        name = "key_jangling";
        sound[] = {"sg_pack\sounds\key_jangling.ogg", 1, 1};
        titles[] = {};  
    };	
	
	class eat
    {
        name = "eat";
        sound[] = {"sg_pack\sounds\eat.ogg", 1, 1};
        titles[] = {};  
    };
	
	class news
    {
        name = "news";
        sound[] = {"sg_pack\sounds\news.ogg", 1, 1};
        titles[] = {};  
    };
	
	class mining
    {
        name = "mining";
        sound[] = {"sg_pack\sounds\mining.ogg", 1, 1};
        titles[] = {};  
    };
	
	class achat
    {
        name = "achat";
        sound[] = {"sg_pack\sounds\achat.ogg", 1, 1};
        titles[] = {};
        
    };
	
	class intro
	{
		name = "intro";
		sound[] = {"sg_pack\sounds\intro.ogg", 0.8, 1};
		titles[] = {};
	};
	
	class message
	{
		name = "message";
		sound[] = {"sg_pack\sounds\message.ogg", 1.0, 1};
		titles[] = {};
	};
};