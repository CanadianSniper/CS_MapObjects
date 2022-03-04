class CfgPatches
{
	class CS_Bridge
	{
		units[]={"CS_Bridge"};
		requiredAddons[] = {"DZ_Data"};
	};
};

class CfgVehicles
{
	class HouseNoDestruct;
	class CS_Bridge: HouseNoDestruct
	{
		scope = 2;
		model = "CS_MapObjects\Bridge\Bridge.p3d";
	};
};