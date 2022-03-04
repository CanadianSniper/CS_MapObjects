class CfgPatches
{
	class CS_Airdrop
	{
		units[]={"CS_Airdrop"};
		requiredAddons[] = {"DZ_Data"};
	};
};

class CfgVehicles
{
	class HouseNoDestruct;
	class CS_Airdrop: HouseNoDestruct
	{
		scope = 2;
		model = "CS_MapObjects\Airdrop\Airdrop.p3d";
	};
};