#include "..\..\..\script_macros.hpp"
/*

    Author: RobérioJR

*/
Private ['_Loadout','_Pos','_Dir','_handle','_Grana','_Banco','_Capacidade','_NivelPoder','_Modo'];

_NivelPoder = FETCH_CONST(life_adminlevel);
Switch (_NivelPoder) Do {
    Case 1: { _Modo = "Suporte"; };
	Case 2: { _Modo = "Moderador"; };
	Case 3: { _Modo = "Administrador"; };
	Case 4: { _Modo = "Administrador"; };
	Case 5: { _Modo = "Administrador"; };
	Default { _Modo = "Moderador"; };
};

 If (!JogadorNoModoAdmin) Then {
	JogadorNoModoAdmin = True;
	_Loadout = GetUnitLoadout Player;
	_Pos = visiblePositionASL player;
	_Dir = getDir player;
	_Grana = RJM_GRANA;
	_Banco = RJM_BANCO;
	RJ_DadosModoAdmin = [_Loadout,_Pos,_Dir,_Grana,_Banco];
	RemoveBackpack player;
	RemoveUniform Player;
	RemoveGoggles player;
	RemoveVest Player;
	RemoveHeadGear player;
	RemoveAllWeapons player; 
	[] Spawn {
	    Private ['_RoupasVR'];
        _RoupasVR = ['U_I_Protagonist_VR','U_O_Protagonist_VR','U_B_Protagonist_VR','U_C_Protagonist_VR'];
		player ForceAddUniform (SelectRandom _RoupasVR);
	    While {JogadorNoModoAdmin} Do {
		    sleep 3;
			if (!JogadorNoModoAdmin) ExitWith {};
			player ForceAddUniform (SelectRandom _RoupasVR);
		};
	};
	if !((getPlayerUID player) in RJ_Administradores) then {
	  [3,Format["%1 Entrou No Modo %2!",Name player,_Modo]] RemoteExec ["RJM_fnc_Notificar",-2];
	};
 } Else {
    JogadorNoModoAdmin = False;
	_handle = [] spawn life_fnc_stripDownPlayer;
    waitUntil {scriptDone _handle};
	player setUnitLoadout (RJ_DadosModoAdmin select 0);
	player setPosASL (RJ_DadosModoAdmin select 1);
    player setDir (RJ_DadosModoAdmin select 2);
	RJM_GRANA = (RJ_DadosModoAdmin select 3);
	RJM_BANCO = (RJ_DadosModoAdmin select 4);
	life_god = false;
	life_markers = !life_markers;
	if !((getPlayerUID player) in RJ_Administradores) then {
	  [3,Format["%1 Encerrou Seu Turno Como %2!",Name player,_Modo]] RemoteExec ["RJM_fnc_Notificar",-2];
	};
 };
 
 
 