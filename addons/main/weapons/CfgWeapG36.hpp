class UK3CB_G36_base: Rifle_Base_F {
    class WeaponSlotsInfo;
};
class UK3CB_G36A1: UK3CB_G36_base {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 80;
    };
};
class UK3CB_G36A1_K: UK3CB_G36A1 {
    displayName = "HK G36KA1";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 72.1;
    };
};
class UK3CB_G36E1_K: UK3CB_G36A1_K {
    displayName = "HK G36KE";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 71.4;
    };
};
class UK3CB_G36V_K: UK3CB_G36E1_K {
    displayName = "HK G36KV";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 72.1;
    };
};
class UK3CB_G36_TAC_K: UK3CB_G36V_K {
    displayName = "HK G36KV (TAC)";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 74.1;
    };
};

class UK3CB_AG36A1: UK3CB_G36A1 {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 113;
    };
};
class UK3CB_AG36E1: UK3CB_AG36A1 {
    displayName = "HK G36E (GL)";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 112;
    };
};

class UK3CB_G36A1_C: UK3CB_G36_base {
    displayName = "HK G36C";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 65.7;
    };
};
class UK3CB_G36E1_C: UK3CB_G36A1_C {
    displayName = "HK G36CE";
    model = "UK3CB_Factions\addons\UK3CB_Factions_Weapons\G36\UK3CB_G36E1_C.p3d";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 65;
    };
};
class UK3CB_G36V_C: UK3CB_G36A1_C {
    displayName = "HK G36CV";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 65.7;
    };
};
class UK3CB_G36_TAC_C: UK3CB_G36V_C {
    displayName = "HK G36CV (TAC)";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 67.7;
    };
};

class UK3CB_G36E1: UK3CB_G36A1 {
    displayName = "HK G36E";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 79;
    };
};
class UK3CB_G36V: UK3CB_G36E1 {
    displayName = "HK G36V";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 80;
    };
};
class UK3CB_AG36V: UK3CB_G36V {
    displayName = "HK G36V (GL)";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 113;
    };
};
class UK3CB_G36_TAC: UK3CB_G36V {
    displayName = "HK G36V (TAC)";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 82;
    };
};

class UK3CB_G36A1_KSK_K: UK3CB_G36V_K {
    displayName = "HK G36K-KSK";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 74.6;
    };
};
class UK3CB_AG36_KSK: UK3CB_G36A1_KSK_K {
    displayName = "HK G36K-KSK (GL)";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 107.6;
    };
};

class UK3CB_G36_MLIC: UK3CB_G36_base {
    displayName = "HK G36-MLI(C)";
    magazineWell[] += {"CBA_65x39_MX","CBA_65x39_MX_XL"};
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 84.2;
    };
};
class UK3CB_G36_MLIC_C: UK3CB_G36_MLIC {
    displayName = "HK G36C-MLI(C)";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 58.86;
    };
};
class UK3CB_G36_MLIC_K: UK3CB_G36_MLIC {
    displayName = "HK G36K-MLI(C)";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 78.5;
    };
};
class UK3CB_AG36_MLIC: UK3CB_G36_MLIC {
    displayName = "HK G36-MLI(C) (GL)";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 117.2;
    };
};

class UK3CB_G36_LSW: UK3CB_G36_base {
    displayName = "HK MG36";
    UiPicture = "\a3\weapons_f\data\ui\icon_mg_ca.paa";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 84;
    };
};
