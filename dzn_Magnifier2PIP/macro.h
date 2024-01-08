

#define RETICLE_HWS "\dzn_Magnifier2PIP\data\hws_reticle_low_ca.paa"
#define RETICLE_HWS_BRIGHT "\dzn_Magnifier2PIP\data\hws_reticle_high_ca.paa"

#define RETICLE_REDDOT "\dzn_Magnifier2PIP\data\reddot_low_ca.paa"
#define RETICLE_REDDOT_BRIGHT "\dzn_Magnifier2PIP\data\reddot_high_ca.paa"

#define RETICLE_1P87 "\dzn_Magnifier2PIP\data\1p87_low_ca.paa"
#define RETICLE_1P87_BRIGHT "\dzn_Magnifier2PIP\data\1p87_high_ca.paa"



#define SCOPE_BODY \
	bodyTexture = "\dzn_Magnifier2PIP\data\scope_body_ca.paa"; \
	bodyTextureNight = "\dzn_Magnifier2PIP\data\scope_bodyNight_ca.paa"; \
    bodyTextureSize = 1.4

#define CBA_PIP_BIG	"\x\cba\addons\optics\cba_optic_big_pip.p3d"

#define __KG_TO_MASS(kg) __EVAL((kg) * 22.046)

#define MA(X) X call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')
