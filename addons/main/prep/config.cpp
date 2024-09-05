#include "script_component.hpp"

class CfgPatches {
    class SUBADDON {
        addonRootClass = QUOTE(ADDON);
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "cba_main",
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
            "UK3CB_Factions_APD_B",
            "UK3CB_Factions_Backpack2",
            "UK3CB_Factions_CCM",
            "UK3CB_Factions_CHC",
            "UK3CB_Factions_Common",
            "UK3CB_Factions_CPD",
            "UK3CB_Factions_CSAT_A_O",
            "UK3CB_Factions_CSAT_B_O",
            "UK3CB_Factions_CSAT_F_O",
            "UK3CB_Factions_CSAT_G_O",
            "UK3CB_Factions_CSAT_M_O",
            "UK3CB_Factions_CSAT_N_O",
            "UK3CB_Factions_CSAT_S_O",
            "UK3CB_Factions_CSAT_U_O",
            "UK3CB_Factions_CSAT_W_O",
            "UK3CB_Factions_CW_SOV",
            "UK3CB_Factions_CW_US",
            "UK3CB_Factions_Equipment",
            "UK3CB_Factions_Equipment_Backpack",
            "UK3CB_Factions_GAF_B",
            "UK3CB_Factions_ION_B_Desert",
            "UK3CB_Factions_ION_B_Urban",
            "UK3CB_Factions_ION_B_Winter",
            "UK3CB_Factions_ION_B_Woodland",
            "UK3CB_Factions_ION_I_Desert",
            "UK3CB_Factions_ION_I_Urban",
            "UK3CB_Factions_ION_I_Winter",
            "UK3CB_Factions_ION_I_Woodland",
            "UK3CB_Factions_ION_O_Desert",
            "UK3CB_Factions_ION_O_Urban",
            "UK3CB_Factions_ION_O_Winter",
            "UK3CB_Factions_ION_O_Woodland",
            "UK3CB_Factions_LDF_I",
            "UK3CB_Factions_LDF_O",
            "UK3CB_Factions_LNM_B",
            "UK3CB_Factions_LNM_I",
            "UK3CB_Factions_LNM_O",
            "UK3CB_Factions_LSM_B",
            "UK3CB_Factions_LSM_I",
            "UK3CB_Factions_LSM_O",
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
            "UK3CB_Factions_Weapons_G36",
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
        authors[] = {
            "johnb43"
        };
        url = "https://github.com/johnb432/Weapons-Balance-3CBFactions";
        skipWhenMissingDependencies = 1;
        VERSION_CONFIG;
    };
};

class CfgWeapons {
    class Rifle_Base_F;
    class UK3CB_STGW57_base: Rifle_Base_F {
        class WeaponSlotsInfo;
    };
    class UK3CB_STGW57: UK3CB_STGW57_base {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            delete CowsSlot;
        };
    };
};
