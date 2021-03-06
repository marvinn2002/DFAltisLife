#include "..\..\script_macros.hpp" 
/*
    File: fn_copLoadout.sqf
    Author: Bryan "Tonic" Boardwine
    Edited: Itsyuka

    Description:
    Loads the cops out with the default gear.
*/
private ["_handle","_uniforme"];
_handle = [] spawn life_fnc_stripDownPlayer;
waitUntil {scriptDone _handle};
_uniforme = "U_Marshal";
sleep 2;

//Edit RobérioJR
if (FETCH_CONST(life_coplevel) == 1) then {
    _uniforme = "U_Rangemaster";
};
if (FETCH_CONST(life_coplevel) >= 2) then {
    _uniforme = "U_I_CombatUniform_shortsleeve";
};

//Load player with default cop gear.
/*player addUniform "U_Rangemaster"; */
player addUniform _uniforme;
player addVest "V_Rangemaster_belt";

player addWeapon "hgun_P07_snds_F";
player addMagazine "16Rnd_9x21_Mag";
player addMagazine "16Rnd_9x21_Mag";
player addMagazine "16Rnd_9x21_Mag";
player addMagazine "16Rnd_9x21_Mag";
player addMagazine "16Rnd_9x21_Mag";

/* ITEMS */
player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "ItemWatch";
//player linkItem "ItemGPS";

[] call life_fnc_playerSkins;
[] call life_fnc_saveGear;
