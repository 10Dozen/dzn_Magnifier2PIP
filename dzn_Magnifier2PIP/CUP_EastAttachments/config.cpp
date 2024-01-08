
#if __has_include("\CUP\Weapons\CUP_Weapons_East_Attachments\config.bin")

class CfgPatches
{
	class dzn_Magnifier2PIP_CUP_EastAttachments
	{
		units[] = {};
		weapons[] = {};
		version = 0.1;
		author = "10Dozen";
		requiredVersion = 0.1;
		requiredAddons[] = {
			"CUP_Weapons_East_Attachments"
		};
	};
};

class CfgWeapons
{
	class ItemCore;
	class InventoryItem_Base_F;
	class InventoryOpticsItem_Base_F;
	
	#include "1P87_1P90.h"
};

class CBA_PIPItems
{
	#include "PIPItems.h"
};

#endif