// COMPONENT should be defined in the script_component.hpp and included BEFORE this hpp

#define MAINPREFIX z
#define PREFIX zeusops_overhaul

#include "script_version.hpp"

#define VERSION MAJOR.MINOR.PATCHLVL.BUILD
#define VERSION_AR MAJOR,MINOR,PATCHLVL,BUILD

#define ZEUSOPS_OVERHAUL_TAG ZEUSOPS_OVERHAUL

// MINIMAL required version for the Mod. Components can specify others..
#define REQUIRED_VERSION 2.0

#ifdef COMPONENT_BEAUTIFIED
    #define COMPONENT_NAME QUOTE(zeusops_overhaul - COMPONENT_BEAUTIFIED)
#else
    #define COMPONENT_NAME QUOTE(zeusops_overhaul - COMPONENT)
#endif
