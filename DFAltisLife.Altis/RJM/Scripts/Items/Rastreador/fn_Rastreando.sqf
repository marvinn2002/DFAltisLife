/*

    Author: Marvinn
	Edits: RobérioJR

*/

    params [
        ["_velRastreado",objNull,[objNull]],
        ["_tipoVeiculo",'',['']],
		["_nomeJogador",'',['']]
    ];
[_velRastreado,_tipoVeiculo, _nomeJogador] Spawn {
	_velRastreado = _this Select 0;
	_tipoVeiculo = _this Select 1;
	_nomeJogador = _this select 2;
    _carroRastreado = true;
    _limit = 600;
	_idCarro = Random (9999);
    _marcadorRastreado = createMarkerLocal [Format["RST_%1_%2", _tipoVeiculo, _idCarro], visiblePosition _velRastreado];
	_marcadorRastreado setMarkerTextLocal Format["RASTREADOR: %1, Por: %2", _tipoVeiculo, _nomeJogador];
    _marcadorRastreado setMarkerBrushLocal "SolidFull";
	_marcadorRastreado setMarkerColorLocal "ColorBlue";
    _marcadorRastreado setMarkerTypeLocal "c_car";
    _marcadorRastreado setMarkerShapeLocal "ICON";
	if (playerSide IsEqualTo west) Then {
        hintSilent parseText format ["<t size='3.4' color='#0c00fe' shadow='0'>Novo Veículo</t> <br /> <t size='1.2'>Um novo veículo foi rastreado por um Policial!</t>"];
	};
	_velRastreado setVariable ["carroRastreado", true, true];
    While {_carroRastreado} do {
	    _marcadorRastreado setMarkerPosLocal (visiblePosition _velRastreado);
        sleep 1;
        _limit = _limit - 1;
        if (_limit < 1) then { _carroRastreado = false; deleteMarkerLocal _marcadorRastreado; _velRastreado setVariable ["carroRastreado", false, true]; };
    };
};