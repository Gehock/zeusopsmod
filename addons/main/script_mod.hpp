// COMPONENT should be defined in the script_component.hpp and included BEFORE this hpp

#define MAINPREFIX z
#define PREFIX zeusops_mod

#include "script_version.hpp"

#define VERSION MAJOR.MINOR.PATCHLVL.BUILD
#define VERSION_AR MAJOR,MINOR,PATCHLVL,BUILD

#define ZEUSOPS_MOD_TAG ZEUSOPS_MOD

// MINIMAL required version for the Mod. Components can specify others..
#define REQUIRED_VERSION 1.56

#ifdef COMPONENT_BEAUTIFIED
    #define COMPONENT_NAME QUOTE(zeusops_mod - COMPONENT_BEAUTIFIED)
#else
    #define COMPONENT_NAME QUOTE(zeusops_mod - COMPONENT)
#endif
