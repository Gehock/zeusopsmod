#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[]=
        {
            QGVAR(ModuleBodybagAndRespawnPlayer),
            QGVAR(ModuleBodybagPlayer),
            QGVAR(ModuleForceRespawnWave),
            QGVAR(ModuleMoveRespawnPosition),
            QGVAR(ModuleSpawnArsenalBox),
            QGVAR(ModuleSpawnFortificationBoxSmall),
            QGVAR(ModuleSpawnFortificationBoxLarge),
            QGVAR(ModuleSpawnRearmBox),
            QGVAR(ModuleToggleRespawn)
        };
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[]=
        {
            "A3_Modules_F",
            "A3_Modules_F_Curator",
            "cba_common"
        };
        author = "Zeusops";
        authors[] = {"Dyzalonius", "Gehock"};
        authorUrl = "https://www.zeusops.com/";
        VERSION_CONFIG;
    };
};

#include "CfgEventHandlers.hpp"
#include "CfgModuleCategories.hpp"
#include "CfgVehicles.hpp"
