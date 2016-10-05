#include <macro.h>
/*
	File: fn_adminDebugCon.sqf
	Author: ColinM9991
	
	Description:
	Opens the Debug Console.
*/
if (FETCH_CONST(life_adminlevel) < 5) exitWith {closeDialog 0; hint localize "STR_NOTF_adminDebugCon";};
life_admin_debug = true;

createDialog "RscDisplayDebugPublic";
[[0,format["Admin %1 doing admin stuff.",profileName]],"life_fnc_broadcast",nil,false] spawn life_fnc_MP;