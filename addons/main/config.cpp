#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "wb_3cbfactions_prep"
        };
        author = "johnb43";
        authors[] = {
            "johnb43"
        };
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
    #include "weapons\CfgWeapG36.hpp"
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
    #include "vehicles\CfgBackpackAssault.hpp"
    #include "vehicles\CfgBackpackCarryall.hpp"
    #include "vehicles\CfgBackpackKitbag.hpp"
    #include "vehicles\CfgBackpackMisc.hpp"
    #include "vehicles\CfgBackpackRadio.hpp"
    #include "vehicles\CfgBackpackTactical.hpp"
    #include "vehicles\CfgVehicles.hpp"
};

class BettIR_Config {
    class CompatibleNightvisionGoggles {
        class __base_Monocular;
        class NVGoggles;

        class UK3CB_ANPVS7: __base_Monocular {};
        class UK3CB_PVS5A: NVGoggles {};
    };
};
