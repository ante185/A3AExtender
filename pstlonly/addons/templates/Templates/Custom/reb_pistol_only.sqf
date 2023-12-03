///////////////////////////
//   Rebel Information   //
///////////////////////////

["name", "FIA"] call _fnc_saveToTemplate;

["flag", "Flag_FIA_F"] call _fnc_saveToTemplate;
["flagTexture", "a3\data_f\flags\flag_fia_co.paa"] call _fnc_saveToTemplate;
["flagMarkerType", "flag_FIA"] call _fnc_saveToTemplate;

private _flareCategory = ["Unknown","Weapons"];
private _flareGuns = [
["hgun_Pistol_Signal_F", _flareCategory],
["CUP_hgun_FlareGun", _flareCategory],
["rhs_weap_rsp30_white", _flareCategory],
["rhs_weap_rsp30_green", _flareCategory],
["rhs_weap_rsp30_red", _flareCategory]
];

{
	A3A_categoryOverrides setVariable [_x select 0, _x select 1];
} forEach _flareGuns;

private _cup = (isClass (configFile >> "CfgPatches" >> "CUP_AirVehicles_Core"));
private _3cb = (isClass (configFile >> "CfgPatches" >> "UK3CB_Factions_Weapons"));
private _rhs = (isClass (configFile >> "CfgPatches" >> "rhsgref_c_weapons")) && !_3cb;
private _vanilla = !(_cup || _rhs || _3cb);

if(_cup) then {
#include "CUP.sqf"
};
if(_3cb) then {
#include "UK3CB.sqf"
};
if(_rhs) then {
#include "RHS.sqf"
};
if(_vanilla) then {
#include "vanilla.sqf"
};