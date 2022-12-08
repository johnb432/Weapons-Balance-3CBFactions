class rhs_weap_l1a1;
class UK3CB_FNFAL_Base: rhs_weap_l1a1 {
    modes[] = {"Single","FullAuto","Single_AI","single_medium_optics1","single_far_optics2"};
    class WeaponSlotsInfo;
};
class UK3CB_FNFAL_PARA: UK3CB_FNFAL_Base {
    displayName = "FN FAL 50.62";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 95;
    };
};
class UK3CB_FNFAL_PARA_RAILS: UK3CB_FNFAL_PARA {
    displayName = "FN FAL 50.62 (RIS)";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 97;
    };
};

class UK3CB_FNFAL_FULL: UK3CB_FNFAL_PARA {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 94;
    };
};
class UK3CB_FNFAL_FULL_RAILS: UK3CB_FNFAL_FULL {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 96;
    };
};

class UK3CB_C1A1: UK3CB_FNFAL_FULL {
    displayName = "C1A1";
    modes[] = {"Single","Single_AI","single_medium_optics1","single_far_optics2"};
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 94.5;
    };
};

class UK3CB_FNFAL_FOREGRIP: UK3CB_FNFAL_FULL {
    displayName = "Lithgow SLR ""Chopmod""";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 92;
    };
};

class UK3CB_FNLAR: UK3CB_FNFAL_FULL {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 110;
    };
};

class UK3CB_FNFAL_OSW: UK3CB_FNFAL_Base {
    class WeaponSlotsInfo;
};

class UK3CB_FNFAL_OSW_GL: UK3CB_FNFAL_OSW {
    displayName = "DSArms FAL OSW (M203)";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 122;
    };
};
