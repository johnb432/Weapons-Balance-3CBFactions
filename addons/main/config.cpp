#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "uk3cb_factions_AAF",
            "uk3cb_factions_ADA",
            "uk3cb_factions_ADC",
            "uk3cb_factions_ADE",
            "uk3cb_factions_ADG",
            "uk3cb_factions_ADM",
            "uk3cb_factions_ADP",
            "uk3cb_factions_ADR",
            "uk3cb_factions_ANA",
            "uk3cb_factions_ANP",
            "uk3cb_factions_CCM",
            "uk3cb_factions_CHC",
            "uk3cb_factions_Common",
            "uk3cb_factions_CPD",
            "uk3cb_factions_CW_SOV",
            "uk3cb_factions_CW_US",
            "uk3cb_factions_Equipment",
            "uk3cb_factions_Static_Bunkers",
            "uk3cb_factions_M79",
            "uk3cb_factions_TKA",
            "uk3cb_factions_TKC",
            "uk3cb_factions_TKM",
            "uk3cb_factions_TKP",
            "uk3cb_factions_UN",
            "uk3cb_factions_Weapons",
            "uk3cb_factions_Weapons_MP5"
        };
        author = "johnb43";
        authors[] = {"johnb43"};
        url = "https://github.com/johnb432/Weapons-Balance-3CBFactions";
        VERSION_CONFIG;
    };
};

#include "CfgAcc.hpp"
#include "CfgAmmo.hpp"
#include "CfgMagazineWells.hpp"

class asdg_UnderSlot;
class asdg_OpticRail1913;
class UK3CB_OpticRail1913_G3;
class asdg_MuzzleSlot_545R;

class CfgWeapons {
    class Rifle;
    class Rifle_Base_F: Rifle {
        class WeaponSlotsInfo {};
    };

    class SMG_02_F;

    #include "weapons\CfgWeapMisc.hpp"
    #include "weapons\CfgWeapG3.hpp"
    #include "weapons\CfgWeapM14.hpp"
    #include "weapons\CfgWeapMG.hpp"
    #include "weapons\CfgWeapMP5.hpp"
};

class CfgMagazines {
    class 30Rnd_556x45_Stanag;
    class rhs_30Rnd_762x39mm;
    class rhs_30Rnd_762x39mm_tracer;

    #include "magazines\CfgMagAK.hpp"
    #include "magazines\CfgMagFAL.hpp"
    #include "magazines\CfgMagG3.hpp"
    #include "magazines\CfgMagMisc.hpp"
    #include "magazines\CfgMagSTANAG.hpp"
    #include "magazines\CfgMagMisc556.hpp"
    #include "magazines\CfgMagM14.hpp"
    #include "magazines\CfgMagRPK.hpp"
    #include "magazines\CfgMagNew556.hpp"
};

class CfgVehicles {
    #include "vehicles\CfgBackpacks.hpp"
    #include "vehicles\CfgRadioBackpacks.hpp"
    #include "vehicles\CfgVehicles.hpp"
};

class BettIR_Config {
    class CompatibleNightvisionGoggles {
        class UK3CB_ANPVS7 {
            offset[] = {0.1, 0.15, 0.3};
        };

        class UK3CB_PVS5A {
            offset[] = {0.1, 0.15, 0.3};
        };
    };
};
