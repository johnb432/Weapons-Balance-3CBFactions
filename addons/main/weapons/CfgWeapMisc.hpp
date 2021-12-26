class rhs_weap_m16a4_carryhandle_M203;
class rhs_weap_XM2010_Base_F;
class UK3CB_M16A1_Base;
class uk3cb_ak47_base: Rifle_Base_F {
    class WeaponSlotsInfo: WeaponSlotsInfo {};
};
class uk3cb_ak47: uk3cb_ak47_base {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 75.5;
    };
};
class uk3cb_ak47n: uk3cb_ak47 {
    rhs_1p29_type = "rhs_acc_1p29";
    rhs_pgo7v_type = "rhs_acc_pgo7v_ak";
    rhs_pgo7v2_type = "rhs_acc_pgo7v2_ak";
    rhs_pgo7v3_type = "rhs_acc_pgo7v3_ak";
    rhs_pkas_type = "rhs_acc_pkas";
    rhs_pso1m2_type = "rhs_acc_pso1m2_ak";
    rhs_pso1m21_type = "rhs_acc_pso1m21_ak";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 76.5;
    };
};

class rhs_weap_fnfal_base: Rifle_Base_F {
    class WeaponSlotsInfo: WeaponSlotsInfo {};
};
class rhs_weap_l1a1_base: rhs_weap_fnfal_base {
    class WeaponSlotsInfo: WeaponSlotsInfo {};
};
class rhs_weap_l1a1: rhs_weap_l1a1_base {
    class WeaponSlotsInfo: WeaponSlotsInfo {};
};
class UK3CB_FNFAL_Base: rhs_weap_l1a1 {
    class WeaponSlotsInfo: WeaponSlotsInfo {};
};
class UK3CB_FNFAL_PARA: UK3CB_FNFAL_Base {
    displayName = "FN FAL 50.62";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 95;
    };
};
class UK3CB_FNFAL_FULL: UK3CB_FNFAL_PARA {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 94;
    };
};

class UK3CB_FAMAS_F1_base: Rifle_Base_F {
    ACE_barrelLength = 488;
    ACE_barrelTwist = 304.8;
    magazineWell[] += {"CBA_556x45_FAMAS"};
    class WeaponSlotsInfo: WeaponSlotsInfo {};
};
class UK3CB_FAMAS_F1: UK3CB_FAMAS_F1_base {
    displayName = "FAMAS F1 (Rail)";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 81.6;
    };
};
class UK3CB_FAMAS_F1_GLM203_base: UK3CB_FAMAS_F1_base {
    class WeaponSlotsInfo: WeaponSlotsInfo {};
};
class UK3CB_FAMAS_F1_GLM203: UK3CB_FAMAS_F1_GLM203_base {
    displayName = "FAMAS F1 (Rail/M203)";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 114.6;
    };
};

class UK3CB_Enfield: rhs_weap_XM2010_Base_F {
    displayName = "Lee-Enfield No.4 Mk.I";
    magazineWell[] = {"CBA_303B_LeeEn"};
    class WeaponSlotsInfo {
        mass = 92.4;
    };
};
class UK3CB_Enfield_Rail: UK3CB_Enfield {
    displayName = "Lee-Enfield No.4 Mk.I (Rail)";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 96.4;
        class GripodSlot: asdg_UnderSlot {};
    };
};

class UK3CB_M16A1: UK3CB_M16A1_Base {
    class WeaponSlotsInfo {
        mass = 68.5;
    };
};
class UK3CB_M16A1_LSW: UK3CB_M16A1_Base {
    class WeaponSlotsInfo {
        mass = 74.5;
    };
};

class UK3CB_M16a2_Base;
class UK3CB_M16_Carbine: UK3CB_M16a2_Base {
    displayname = "Colt M4 Carbine";
    class WeaponSlotsInfo {
        mass = 73;
    };
};
class UK3CB_M16A2: UK3CB_M16a2_Base {
    class WeaponSlotsInfo {
        mass = 77;
    };
};

class UK3CB_M16A2_UGL: rhs_weap_m16a4_carryhandle_M203 {
    displayName = "M16A2 (M203)";
    class WeaponSlotsInfo {
        mass = 110;
    };
};

class UK3CB_Sten: SMG_02_F {
    displayName = "Sterling L2A3 (Mk.4)";
    magazineWell[] += {"CBA_9x19_STEN"};
    class WeaponSlotsInfo {
        mass = 60;
    };
};

class rhs_weap_svdp_npz;
class UK3CB_SVD_OLD_NPZ: rhs_weap_svdp_npz {
    displayName = "SVD (NPZ)";
};

class hgun_P07_F;
class UK3CB_BHP: hgun_P07_F {
    magazineWell[] += {"CBA_9x19_HiPower"};
};

class hgun_Rook40_F;
class UK3CB_CZ75: hgun_Rook40_F {
    magazineWell[] += {"CBA_9x19_CZ75_Full"};
};
