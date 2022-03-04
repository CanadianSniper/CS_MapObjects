class CfgPatches
{
	class CS_Tower
	{
		units[]={"CS_Tower"};
		requiredAddons[] = {"DZ_Data"};
	};
};

class CfgVehicles
{
	class HouseNoDestruct;
	class CS_Tower: HouseNoDestruct
	{
		scope = 1;
		model = "CS_MapObjects\Tower\Tower.p3d";
	};
};