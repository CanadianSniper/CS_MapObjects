class CfgPatches
{
	class Barrier_Block_2
	{
		units[]={"CS_Barrier_Block_2_Base","CS_Barrier_Block_2","CS_Barrier_Block_2_Stripes"};
		requiredAddons[] = {"DZ_Data"};
	};
};

class CfgVehicles
{
	class HouseNoDestruct;
	class CS_Barrier_Block_2_Base: HouseNoDestruct
	{
		scope = 0;
		model = "CS_MapObjects\Barrier_Block_2\Barrier_Block_2.p3d";
		hiddenSelections[]=
        {
            "Barrier_Block_2"
        };
		hiddenSelectionsTextures[]=
		{
			"CS_MapObjects\Barrier_Block_2\data\Barrier_Block_2_co.paa"
		};
	};
	class CS_Barrier_Block_2: CS_Barrier_Block_2_Base
	{
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"CS_MapObjects\Barrier_Block_2\data\Barrier_Block_2_co.paa"
		};
	};
	class CS_Barrier_Block_2_Stripes: CS_Barrier_Block_2_Base
	{
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"CS_MapObjects\Barrier_Block_2\data\Barrier_Block_2_Stripes_co.paa"
		};
	};
};