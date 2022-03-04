class CfgPatches
{
	class CS_WallFlag
	{
		units[]={"CS_WallFlag"};
		requiredAddons[] = {"DZ_Data"};
	};
};

class CfgVehicles
{
	class HouseNoDestruct;
	class CS_WallFlag: HouseNoDestruct
	{
		scope = 2;
		model = "CS_MapObjects\WallFlag\WallFlag.p3d";
	};
};