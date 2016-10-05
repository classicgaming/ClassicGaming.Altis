/*
	Custom uniforms for
	Civilians, Medics and Cops

	Created by: OfficialAndersonn
*/

#include "..\..\script_macros.hpp"

#define FETCH_CONST(var) (call var)
if(side player == independent) then {
	if ((uniform player) == "U_IG_Guerilla2_3") then {
		player setObjectTextureGlobal [0, "textures\medic\clothing\MedicGuerilla.jpg"];
	};
	if (backpack player == "B_Bergen_sgg") then {
		backpackContainer player setObjectTextureGlobal [0, "textures\medic\clothing\MedicBergen.jpg"];
	};
	if (backpack player == "B_Carryall_oli") then {
		backpackContainer player setObjectTextureGlobal [0, "textures\medic\clothing\MedicCarryall.jpg"];
	};
	if (backpack player == "B_Kitbag_mcamo") then {
		backpackContainer player setObjectTextureGlobal [0, "textures\medic\clothing\MedicKitbag.jpg"];
	};
};

if(side player == WEST) then {
	if (uniform player == "U_BG_Guerilla2_1" && (FETCH_CONST(life_coplevel) >= 1)) then {
		player setObjectTextureGlobal [0, "textures\police\clothing\r1.jpg"]; 
	};
	if (uniform player in ["U_B_CTRG_3","U_B_CTRG_1"] && (FETCH_CONST(life_coplevel) == 2)) then {
		player setObjectTextureGlobal [0, "textures\police\clothing\r2.jpg"]; 
	};
	if (uniform player in ["U_B_CTRG_3","U_B_CTRG_1"] && (FETCH_CONST(life_coplevel) >= 3)) then {
		player setObjectTextureGlobal [0, "textures\police\clothing\r3.jpg"]; 
	};
	if (uniform player in ["U_B_CTRG_3","U_B_CTRG_1"] && (FETCH_CONST(life_coplevel) >= 4)) then {
		player setObjectTextureGlobal [0, "textures\police\clothing\r4.jpg"]; 
	};
	if (uniform player in ["U_B_CTRG_3","U_B_CTRG_1"] && (FETCH_CONST(life_coplevel) >= 5)) then {
		player setObjectTextureGlobal [0, "textures\police\clothing\r5.jpg"]; 
	};
	if (uniform player in ["U_B_CTRG_3","U_B_CTRG_1"] && (FETCH_CONST(life_coplevel) >= 6)) then {
		player setObjectTextureGlobal [0, "textures\police\clothing\r6.jpg"]; 
	};
	if (uniform player in ["U_B_CTRG_3","U_B_CTRG_1"] && (FETCH_CONST(life_coplevel) >= 7)) then {
		player setObjectTextureGlobal [0, "textures\police\clothing\r7.jpg"]; 
	};
	if (backpack player == "B_Carryall_cbr" && (FETCH_CONST(life_coplevel) >= 1)) then {
		backpackContainer player setObjectTextureGlobal [0, "textures\police\clothing\carryall.jpg"]; 
	};
	if (backpack player == "B_Kitbag_cbr" && (FETCH_CONST(life_coplevel) >= 1)) then {
		backpackContainer player setObjectTextureGlobal [0, "textures\police\clothing\kitbag.jpg"]; 
	};
};

if(side player == civilian) then {
		if ((uniform player) == "U_B_Wetsuit") then { 
		player setObjectTextureGlobal [0, "textures\civilian\clothing\BATMAN.paa"]; };
		};
		if(side player == civilian && uniform player == "U_C_Poloshirt_tricolour") then {
		player setObjectTextureGlobal [0, "textures\civilian\clothing\prisoner.jpg"];
		};
};