#include "..\..\script_macros.hpp"
/*
    File: fn_adminGodMode.sqf
    Author: Tobias 'Xetoxyc' Sittenauer

    Description: Enables God mode for Admin
*/

if (FETCH_CONST(life_adminlevel) < 2) exitWith {closeDialog 0; Hint 'Você Não Possui Poder Para Essa Ação'; /*hint localize "STR_ANOTF_ErrorLevel";*/};

closeDialog 0;

if (life_god) then {
    life_god = false;
    titleText [localize "STR_ANOTF_godModeOff","PLAIN"]; titleFadeOut 2;
	if !((getPlayerUID player) in RJ_Administradores) then {
	  [3,Format["%1 Desativou O Modo Deus!",Name player]] RemoteExec ["RJM_fnc_Notificar",0];
	};
    player allowDamage true;
} else {
    life_god = true;
    titleText [localize "STR_ANOTF_godModeOn","PLAIN"]; titleFadeOut 2;
	if !((getPlayerUID player) in RJ_Administradores) then {
	  [3,Format["%1 Ativou O Modo Deus!",Name player]] RemoteExec ["RJM_fnc_Notificar",0];
	};
    player allowDamage false;
};