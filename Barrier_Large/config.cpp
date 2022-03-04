class CfgPatches
{
	class CS_Barrier_Large
	{
		units[]={"CS_Barrier_Block_Large_Base","CS_Barrier_Large","CS_Barrier_Large_Stripes"};
		requiredAddons[] = {"DZ_Data"};
	};
};

class CfgVehicles
{
	class HouseNoDestruct;
	class CS_Barrier_Block_Large_Base: HouseNoDestruct
	{
		scope = 0;
		model = "CS_MapObjects\Barrier_Large\Barrier_Large.p3d";
		hiddenSelections[]=
        {
            "Barrier_Large"
        };
		hiddenSelectionsTextures[]=
		{
			"CS_MapObjects\Barrier_Large\data\Barrier_Large_co.paa"
		};
	};
	class CS_Barrier_Large: CS_Barrier_Block_Large_Base
	{
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"CS_MapObjects\Barrier_Large\data\Barrier_Large_co.paa"
		};
	};
	class CS_Barrier_Large_Stripes: CS_Barrier_Block_Large_Base
	{
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"CS_MapObjects\Barrier_Large\data\Barrier_Large_Stripes_co.paa"
		};
	};
};