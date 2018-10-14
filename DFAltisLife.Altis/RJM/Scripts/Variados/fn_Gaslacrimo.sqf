/*
    Author: RobérioJR
*/
If (PlayerSide IsEqualTo independent) ExitWith {};
JogadorNoGas=false;

[] spawn {
  _distanciaDeEfeito = 13;
    while {true} do
    {
        if((((nearestObject [getpos player, "SmokeShellYellow"]) distance player < _distanciaDeEfeito)) or (((nearestObject [getpos player, "G_40mm_SmokeYellow"]) distance player < _distanciaDeEfeito))) then {
		    JogadorNoGas=true;
        } else { JogadorNoGas=false; };
    uiSleep 2;
    };
};

[] spawn {
    _AntiGasCapacete = "H_CrewHelmetHeli_B";
	_AntiGasMascara = ['G_Respirator_white_F','G_Respirator_blue_F','G_Respirator_yellow_F'];
    while {true} do {

        "dynamicBlur" ppEffectEnable true; 
        "dynamicBlur" ppEffectAdjust [0]; 
        "dynamicBlur" ppEffectCommit 15; 
        resetCamShake; 
        20 fadeSound 1; 
		
        waituntil {JogadorNoGas}; 

        if (headgear player != _AntiGasCapacete || !(goggles player in _AntiGasMascara)) then {
            "dynamicBlur" ppEffectEnable true; 
            "dynamicBlur" ppEffectAdjust [20]; 
            "dynamicBlur" ppEffectCommit 3; 
            enableCamShake false; 
            addCamShake [10, 45, 10]; 
            player setFatigue 1; 
            5 fadeSound 0.1; 
        };
    uiSleep 1;
    };
};