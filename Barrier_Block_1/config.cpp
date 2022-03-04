class CfgPatches
{
	class CS_Barrier_Block_1
	{
		units[]={"CS_Barrier_Block_1_Base","CS_Barrier_Block_1","CS_Barrier_Block_1_Stripes"};
		requiredAddons[] = {"DZ_Data"};
	};
};

class CfgVehicles
{
	class HouseNoDestruct;
	class CS_Barrier_Block_1_Base: HouseNoDestruct
	{
		scope = 0;
		model = "CS_MapObjects\Barrier_Block_1\Barrier_Block_1.p3d";
		hiddenSelections[]=
        {
            "Barrier_Block_1"
        };
		hiddenSelectionsTextures[]=
		{
			"CS_MapObjects\Barrier_Block_1\data\Barrier_Block_1_co.paa"
		};
	};
	class CS_Barrier_Block_1: CS_Barrier_Block_1_Base
	{
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"CS_MapObjects\Barrier_Block_1\data\Barrier_Block_1_co.paa"
		};
	};
	class CS_Barrier_Block_1_Stripes: CS_Barrier_Block_1_Base
	{
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"CS_MapObjects\Barrier_Block_1\data\Barrier_Block_1_Stripes_co.paa"
		};
	};
};