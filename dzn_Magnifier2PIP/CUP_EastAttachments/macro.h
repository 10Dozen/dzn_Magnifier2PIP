#include "..\macro.h"

#define SCOPE_RETICLE
#define SCOPE_ZEROING
#define SCOPE_MAGNIFICATION 3


#define PIP_SCOPE(KLS) \
	class KLS: ItemCore \
	{ \
		weaponInfoType = "CBA_ScriptedOptic"; \
		class CBA_ScriptedOptic \
		{ \
			SCOPE_RETICLE; \
			SCOPE_BODY; \
		}; \
		class ItemInfo: InventoryOpticsItem_Base_F \
		{ \
			optics = 1; \
			opticType = 1; \
			modelOptics = CBA_PIP_BIG; \
			class OpticsModes \
			{ \
				class G33 \
				{ \
					opticsID = 1; \
					useModelOptics = 1; \
					opticsZoomMin = MA(SCOPE_MAGNIFICATION); \
					opticsZoomMax = MA(SCOPE_MAGNIFICATION); \
					opticsZoomInit = MA(SCOPE_MAGNIFICATION); \
					opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"}; \
					distanceZoomMin = SCOPE_ZEROING; \
					distanceZoomMax = SCOPE_ZEROING; \
					memoryPointCamera = "eye"; \
					visionMode[] = {}; \
					opticsFlare = 0; \
					opticsDisablePeripherialVision = 0; \
					hidePeripheralVision = 0; \
				}; \
			}; \
		}; \
		MRT_SwitchItemNextClass = KLS##_DWN; \
		MRT_SwitchItemPrevClass = KLS##_DWN; \
		MRT_switchItemHintText = ""; \
	}