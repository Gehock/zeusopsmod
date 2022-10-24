class CfgVehicles
{
    class Logic;
    class Module_F: Logic {};
    class GVAR(moduleBase): Module_F {
        author = "Zeusops";
        category = "zeusops_modules";
        function = QEFUNC(main,dummy);
        functionPriority = 1;
        isGlobal = 2;  // ran globally
        isTriggerActivated = 0;
        scope = 1;  // not visible in editor
        scopeCurator = 2;  // visible in zeus
        isDisposable = 1;
        is3DEN = 0;
        icon = QPATHTOF(icons\icon_logo_zeusops.paa);

    };
    class GVAR(moduleBodybagAndRespawnPlayer): GVAR(moduleBase)
    {
        displayName="Bodybag & respawn player";
        function=QFUNC(moduleBodybagAndRespawnPlayer);
        icon=QPATHTOF(icons\icon_reaper.paa);
        curatorCanAttach = 1;
    };
    class GVAR(moduleBodybagPlayer): GVAR(moduleBase)
    {
        displayName="Bodybag player";
        function=QFUNC(moduleBodybagPlayer);
        icon=QPATHTOF(icons\icon_reaper.paa);
        curatorCanAttach = 1;
    };
    class GVAR(moduleForceRespawnWave): GVAR(moduleBase)
    {
        displayName="Force respawn wave";
        function=QFUNC(moduleForceRespawnWave);
        icon=QPATHTOF(icons\icon_respawn.paa);
    };
    class GVAR(moduleMoveRespawnPosition): GVAR(moduleBase)
    {
        displayName="Move respawn position";
        function=QFUNC(moduleMoveRespawnPosition);
        icon=QPATHTOF(icons\icon_respawn.paa);
        curatorCanAttach = 1;
    };
    class GVAR(moduleSpawnArsenalBox): GVAR(moduleBase)
    {
        displayName="Spawn Arsenal Box";
        function=QFUNC(moduleSpawnArsenalBox);
        icon=QPATHTOF(icons\icon_ammobox.paa);
        scope=2; // visible in editor
        curatorCanAttach = 1;
    };
    class GVAR(moduleSpawnFortificationBoxLarge): GVAR(moduleBase)
    {
        displayName="Spawn Fortification Box Large";
        function=QFUNC(ModuleSpawnFortificationBoxLarge);
        icon=QPATHTOF(icons\icon_ammobox.paa);
        scope=2; // visible in editor
        curatorCanAttach = 1;
    };
    class GVAR(moduleSpawnFortificationBoxSmall): GVAR(moduleBase)
    {
        displayName="Spawn Fortification Box Small";
        function=QFUNC(ModuleSpawnFortificationBoxSmall);
        icon=QPATHTOF(icons\icon_ammobox.paa);
        scope=2; // visible in editor
        curatorCanAttach = 1;
    };
    class GVAR(moduleSpawnRearmBox): GVAR(moduleBase)
    {
        displayName="Spawn Rearm Box";
        function=QFUNC(moduleSpawnRearmBox);
        icon=QPATHTOF(icons\icon_ammobox.paa);
        scope=2; // visible in editor
        curatorCanAttach = 1;
    };
    class GVAR(moduleToggleRespawn): GVAR(moduleBase)
    {
        displayName="Toggle respawn";
        function=QFUNC(moduleToggleRespawn);
        icon=QPATHTOF(icons\icon_respawn.paa);
    };
};
