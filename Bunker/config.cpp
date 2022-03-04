class CfgPatches
{
	class CS_Bunker
	{
		units[]={"CS_Bunker"};
		requiredAddons[] = {"DZ_Data"};
	};
};

class CfgVehicles
{
	class HouseNoDestruct;
	class CS_Bunker: HouseNoDestruct
	{
		scope = 2;
		model = "CS_MapObjects\Bunker\Bunker.p3d";
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
};