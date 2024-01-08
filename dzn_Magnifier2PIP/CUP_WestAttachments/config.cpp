
#if __has_include("\CUP\Weapons\CUP_Weapons_West_Attachments\config.bin")

class CfgPatches
{
	class dzn_Magnifier2PIP_CUP_WestAttachments
	{
		units[] = {};
		weapons[] = {};
		version = 0.1;
		author = "10Dozen";
		requiredVersion = 0.1;
		requiredAddons[] = {
			"CUP_Weapons_West_Attachments"
		};
	};
};

class CfgWeapons
{
	class ItemCore;
	class InventoryItem_Base_F;
	class InventoryOpticsItem_Base_F;
	
	#include "Aimpoint.h"
	#include "EOTech_HWS_G33.h"
	#include "ITL_MARS.h"
	#include "Meopta_ZD-Dot.h"
};

class CBA_PIPItems
{
	#include "PIPItems.h"
};

#endif