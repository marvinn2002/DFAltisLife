#include "..\..\script_macros.hpp"
/*
    File: fn_handleDamage.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Handles damage, specifically for handling the 'tazer' pistol and nothing else.
*/
params [
    ["_unit",objNull,[objNull]],
    ["_part","",[""]],
    ["_damage",0,[0]],
    ["_source",objNull,[objNull]],
    ["_projectile","",[""]],
    ["_index",0,[0]]
];

//Handle the tazer first (Top-Priority).
if (!isNull _source) then {
    if (_source != _unit) then {
        if (currentWeapon _source in ["hgun_P07_snds_F","arifle_SDAR_F"] && _projectile in ["B_9x21_Ball","B_556x45_dual"]) then {
            if (side _source isEqualTo west && playerSide isEqualTo civilian) then {
                _damage = 0;
                if (alive player && !life_istazed && !life_isknocked && !(_unit getVariable ["restrained",false])) then {
                    private ["_distance"];
                    _distance = 25;
                    if (_projectile == "B_556x45_dual") then {_distance = 70;};
                    if (_unit distance _source < _distance) then {
                        if !(isNull objectParent player) then {
                            if (typeOf (vehicle player) == "B_Quadbike_01_F") then {
                                player action ["Eject",vehicle player];
                                [_unit,_source] spawn life_fnc_tazed;
                            };
                        } else {
                            [_unit,_source] spawn life_fnc_tazed;
                        };
                    };
                };
            };

            //Temp fix for super tasers on cops.
            if (side _source isEqualTo west && (playerSide isEqualTo west || playerSide isEqualTo independent)) then {
                _damage = 0;
            };
        };
    };
};

 /* Cinto De Segurança */
if ((vehicle _unit) isKindOf "Car" && (isNull _source || _source isEqualTo _unit)) then {
	_damage = if (life_seatbelt) then { _damage / 2 } else { _damage};
};

//Anti VDM 
if ((isPlayer _source) && (vehicle _source != _source)) then {
    if(_part == "body" && (side _source == civilian)) then {
        player setVariable ["limit",false];
        [_source] spawn {
            _driver = _this select 0;
			if(RJ_DelayTerminado) then {
	            [0.8] Spawn RJM_fnc_DelayRJ;
                [0,format["O Jogador %1 Atropelou %2, Denuncie Na Administração!", name _driver, name player]] remoteExec ["life_fnc_broadcast",0];
			};
	    };
    };		
};

[] spawn life_fnc_hudUpdate;
_damage;