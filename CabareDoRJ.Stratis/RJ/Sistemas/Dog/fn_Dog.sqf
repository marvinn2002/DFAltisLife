//https://community.bistudio.com/wiki/Arma_3_Animals:_Override_Default_Animal_Behaviour_Via_Script

dog = createAgent ["Fin_random_F", getPos player, [], 5, "CAN_COLLIDE"];
dog setVariable ["BIS_fnc_animalBehaviour_disable", true];
DogOcupado = false;
DogAtacando = false;
JogadorTemUmCachorro = true;
FomeDog = 100;

  /* Movimentação Do Dog */
[] spawn {
	while {alive dog} do {	
	    WaitUntil {!DogOcupado};
		WaitUntil {!DogAtacando};
		WaitUntil {dog distance player > 3.1};
		dog moveTo getPos player;
		sleep 1.5;
	};
 };
 
 /* Quando O Dog Morrer */
 [] spawn {
    WaitUntil {!Alive dog};
	DogOcupado = false;
	DogAtacando = false;
	JogadorTemUmCachorro = false;
	FomeDog = 100;
	[dog,"dogYelp",60,1] remoteExecCall ["RJ_fnc_say3D",0];
	SystemChat Format['%1, Seu Cachorro Morreu!',Name Player]; 
 };
 
  /* IA De Correr E Andar */
[] spawn {
    while {alive dog} do {
	    WaitUntil {!DogOcupado};
		WaitUntil {!DogAtacando};
		if (dog Distance player > 400) then { 
		    dog setPos [((getPos player) select 0) + 5, ((getPos player) select 1) + 5, 0];  
		};
		if (dog distance player < 3) then {
		    dog playMove "Dog_Sit";
			SystemChat 'Cao Muito Perto, Sentado';
		};
        if (dog distance player < 10) then {
		    WaitUntil {dog distance player > 3.1};
		    dog playMove "Dog_Walk";
			SystemChat 'Cao Perto, Andando';
		} else { 
		    dog playMove "Dog_Sprint"; 
		    SystemChat 'Cao Longe, Correndo'; 
		};
	    sleep 3.5;
	};	
 };
 
  /* Emitir Sons */
[] spawn {
    Private ['_K','_S'];
    while {alive dog} do {
		sleep 2.5;
        _K = [1,2,3,4,5,6] call bis_fnc_selectRandom;
        if (_K IsEqualTo 2) then { 
			_S = ['pantdois','pantum','dogLat'] call bis_fnc_selectRandom;
			[dog,_S,50,1] remoteExecCall ["RJ_fnc_say3D",0]; 
	    };
	};
 };

	/* Fome Do Dog */
 [] spawn {
    [] execVM 'RJ\Sistemas\Dog\DogAction.sqf';
    While {Alive Dog} do {
        Sleep 35;
	    FomeDog = FomeDog - 1;
		if (FomeDog < 36) then { SystemChat Format['%1, Seu Cão Está Ficando Com Fome!',Name Player]; };
	    if (FomeDog < 1) then { dog SetDamage 1; }
    };
 };