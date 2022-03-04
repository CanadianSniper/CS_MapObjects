class CfgPatches
{
	class CS_Fence
	{
		units[]={"CS_Fence_1","CS_Fence_2"};
		requiredAddons[] = {"DZ_Data"};
	};
};

class CfgVehicles
{
	class HouseNoDestruct;
	class CS_Fence_1: HouseNoDestruct
	{
		scope = 2;
		model = "CS_MapObjects\Fence\Fence_1.p3d";
		class Doors
        {
            class Door1
            {
                displayName = "Door1";
                component = "Door1";
                soundPos = "Door1";
                animPeriod = 1.5;
                initPhase = 0.0;
                initOpened = 0.0;
                soundOpen = "doorMetalTwinBigOpen";
                soundClose = "doorMetalTwinBigClose";
                soundLocked = "doorMetalTwinBigRattle";
                soundOpenABit = "doorMetalTwinBigOpenABit";
            };
		};
	};
	class CS_Fence_2: HouseNoDestruct
	{
		scope = 2;
		model = "CS_MapObjects\Fence\Fence_2.p3d";
	};
};