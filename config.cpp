class CfgPatches
{
    class CS_MapObjects
    {
		units[]={};
		weapons[]={};
        requiredAddons[] = {"DZ_Data"};
    };
};
class CfgMods
{
	class CS_MapObjects
	{	
		dir = "CS_MapObjects";
		picture = "";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = "CS_MapObjects";
		author = "CanadianSniper";
		authorID = "2039448058";
		version = "1.0";
		extra = 0;
		
		type = "mod";
		dependencies[]=
		{
			"Game",
			"World"
		};
		
		class defs
		{
			class gameScriptModule
            {
                value = "";
                files[] = {"CS_MapObjects/Scripts/3_Game"};
			};

            class worldScriptModule
            {
                value = "";
                files[] = {"CS_MapObjects/Scripts/4_World"};
			};
		};
	};
};
