#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "UK3CB_Factions_AAF",
            "UK3CB_Factions_ADA",
            "UK3CB_Factions_ADC",
            "UK3CB_Factions_ADE",
            "UK3CB_Factions_ADG",
            "UK3CB_Factions_ADM",
            "UK3CB_Factions_ADP",
            "UK3CB_Factions_ADR",
            "UK3CB_Factions_ANA",
            "UK3CB_Factions_ANP",
            "UK3CB_Factions_CCM",
            "UK3CB_Factions_CHC",
            "UK3CB_Factions_Common",
            "UK3CB_Factions_CPD",
            "UK3CB_Factions_CW_SOV",
            "UK3CB_Factions_CW_US",
            "UK3CB_Factions_Equipment",
            "UK3CB_Factions_Static_Bunkers",
            "UK3CB_Factions_M79",
            "UK3CB_Factions_TKA",
            "UK3CB_Factions_TKC",
            "UK3CB_Factions_TKM",
            "UK3CB_Factions_TKP",
            "UK3CB_Factions_UN",
            "UK3CB_Factions_Weapons",
            "UK3CB_Factions_Weapons_A2Ports",
            "UK3CB_Factions_Weapons_ACR",
            "UK3CB_Factions_Weapons_AK47",
            "UK3CB_Factions_Weapons_AUG",
            "UK3CB_Factions_Weapons_Bren",
            "UK3CB_Factions_Weapons_FAMAS",
            "UK3CB_Factions_Weapons_FNFAL",
            "UK3CB_Factions_Weapons_G3",
            "UK3CB_Factions_Weapons_M14",
            "UK3CB_Factions_Weapons_M16",
            "UK3CB_Factions_Weapons_M1903Al",
            "UK3CB_Factions_Weapons_M60",
            "UK3CB_Factions_Weapons_MG3",
            "UK3CB_Factions_Weapons_MP5",
            "UK3CB_Factions_Weapons_PPSH",
            "UK3CB_Factions_Weapons_RPK",
            "UK3CB_Factions_Weapons_SKS",
            "UK3CB_Factions_Weapons_Sten",
            "UK3CB_Factions_Weapons_STGW",
            "UK3CB_Factions_Weapons_SVD_OLD",
            "UK3CB_Factions_Weapons_UKM",
            "UK3CB_Factions_Weapons_USP"
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
class UK3CB_OpticRail1913_STGW57;
class asdg_MuzzleSlot_545R;

class CfgWeapons {
    class Rifle;
    class Rifle_Base_F: Rifle {
        class WeaponSlotsInfo;
    };

    class SMG_02_F;

    #include "weapons\CfgWeapMisc.hpp"
    #include "weapons\CfgWeapAUG.hpp"
    #include "weapons\CfgWeapFAL.hpp"
    #include "weapons\CfgWeapG3.hpp"
    #include "weapons\CfgWeapM14.hpp"
    #include "weapons\CfgWeapMG.hpp"
    #include "weapons\CfgWeapMP5.hpp"
    #include "weapons\CfgWeapSTGW.hpp"
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
    #include "magazines\CfgMagSTGW.hpp"
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
