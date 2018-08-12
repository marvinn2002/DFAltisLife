#include "..\..\..\script_macros.hpp"
/*
    File:   fn_robAgencia.sqf
    Author: MrKraken

    Description:

    Modified by: Pril


*/
private ["_robber","_shop","_kassa","_ui","_pgText","_progress","_cP","_rip","_action"];

_shop = [_this,0,ObjNull,[ObjNull]] call BIS_fnc_param;
_robber = [_this,1,ObjNull,[ObjNull]] call BIS_fnc_param;
_action = [_this,2] call BIS_fnc_param;

if(side _robber !=civilian) exitWith {hint "Você precisa ser um civil para roubar essa loja.";};
if(_robber distance _shop > 10) exitWith {hint "Você precisa ficar a 10m para roubar essa loja";};
if(vehicle player !=_robber) exitWith {hint "Você precisa estar fora do seu veículo primeiro!";};
if(west countSide playableUnits < 6) exitWith {hint "Policiais insuficientes!";};
 
if!(alive _robber) exitWith {};
if (currentWeapon _robber isEqualTo "") exitWith {hint "Você precisa de armas para roubar essa loja!";};

_rip = true;
_kassa = 300000 + round(random 100000);
_shop removeAction _action;

 [1,format["000 ALERTA:\n\nAgência: %1 Está Sendo Roubado Por %2",_shop,_robber, name _robber]] remoteExec ["life_fnc_broadcast",west]


disableSerialization;
8 cutRsc ["life_progress", "PLAIN"];
_ui = uiNamespace getVariable "life_progress";
_progress = _ui displayCtrl 38201;
_pgText = _ui displayCtrl 38202;
_pgText ctrlSetText format["Roubando Agência, Fique Perto (10m) (1%1)...","%"];
_progress progressSetPosition 0.01;
_cP = 0.01;

if(_rip) then
{
    while{true} do
        {
            sleep 5;
            _cP = _cP + 0.01;
            _progress progressSetPosition _cP;
            _pgText ctrlSetText format ["Roubando a Agência Bancária, fique por perto (10m)  (%1%2)...",round(_cP * 100), "%"];

             if (LIFE_SETTINGS(getNumber,"robberyMarkers") isEqualTo 1) then {
                _marker = createMarker ["MarkerAgenciaRJ", _shop];
                "MarkerAgenciaRJ" setMarkerColor "ColorRed";
                "MarkerAgenciaRJ" setMarkerText "ATENÇÃO: ROUBO EM PROGRESSO!!!";
                "MarkerAgenciaRJ" setMarkerType "mil_warning";
                };

            if(_cP >=1) exitWith {};
            if(_robber distance _shop > 10.5) exitWith{};
            if!(alive _robber) exitWith {};
        };

        if(_robber getVariable "restrained") exitWith {_rip = false; hint "Você foi contido!!";};      
        if(life_istazed) exitWith {_rip = false; hint "Você foi Imobilizado!";};                                    
        if!(alive _robber) exitWith {_rip = false;};

        if(_robber distance _shop > 10.5) exitWith {
        hint "Você precisa ficar a 10m para roubar essa loja! Caixa registradora agora está bloqueada e a polícia foi notificada!";
        8 cutText ["","PLAIN"];
        [1,format["%1 Tentou Roubar A Agência: %2!",_robber,name _robber, _shop]] remoteExec ["life_fnc_broadcast",west];
        [getPlayerUID _robber, _robber getVariable ["realname",name _robber], "211"] remoteExecCall ["life_fnc_wantedAdd", RSERV];
        };
        8 cutText ["","PLAIN"];

        titleText[format["Você Conseguiu Roubar% 1, Agora Saia Antes Que os Policiais Cheguem!",[_kassa] call life_fnc_numberText], "PLAIN"];
        life_cash = life_cash + _kassa;
        deleteMarker "MarkerAgenciaRJ";
        _rip = false;
        life_use_atm = false;
        playSound3D ["A3\Sounds_F\sfx\alarm_independent.wss", _robber];
        sleep 25;
        if (_kassa >= 350000) then {
            [1, format["DF TV: A Agência %1 Acabou De Ser Assaltada, Total Roubado: R$%2",_shop, [_kassa] call life_fnc_numberText]] remoteExec ["life_fnc_broadcast", civilian];
        };
        sleep 320;
        life_use_atm = true;
        if!(alive _robber) exitWith {};
        [getPlayerUID _robber, _robber getVariable ["realname",name _robber], "211"] remoteExecCall ["life_fnc_wantedAdd", RSERV];
        call SOCK_fnc_updatePartial;
        };
sleep 300; //5 Minutes
_action = _shop addAction["Roubar Agência",RJM_fnc_roubarAgencia,civilian];