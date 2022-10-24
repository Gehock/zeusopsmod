#include "script_component.hpp"

ADDON = false;

#include "XEH_PREP.hpp"

ADDON = true;
// Define functions here early before Athena has a chance to define them
fnc_gatherGroups     = compileFinal preprocessFileLineNumbers "\zeusops_addon\athena\gatherGroups.sqf";
fnc_gatherUnits      = compileFinal preprocessFileLineNumbers "\zeusops_addon\athena\gatherUnits.sqf";
fnc_gatherVehicles   = compileFinal preprocessFileLineNumbers "\zeusops_addon\athena\gatherVehicles.sqf";
