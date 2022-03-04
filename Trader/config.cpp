class CfgPatches
{
	class CS_Trader
	{
		units[]={"CS_Trader"};
		requiredAddons[] = {"DZ_Data"};
	};
};

class CfgVehicles
{
	class HouseNoDestruct;
	class CS_Trader: HouseNoDestruct
	{
		scope = 2;
		model = "CS_MapObjects\Trader\Trader.p3d";
	};
};