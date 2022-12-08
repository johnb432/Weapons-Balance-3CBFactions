class LMG_Zafir_F;
class UK3CB_Bren: LMG_Zafir_F {
    displayName = "Bren L4A2";
    magazineWell[] = {"CBA_762x51_FAL", "CBA_762x51_FAL_L"};
    class WeaponSlotsInfo {
        mass = 191.5;
    };
};

class UK3CB_M60_base: Rifle_Base_F {
    class WeaponSlotsInfo;
};
class UK3CB_M60: UK3CB_M60_base {
    magazineWell[] += {"CBA_762x51_LINKS"};
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 231;
    };
};

class LMG_RCWS;
class UK3CB_M60_mounted: LMG_RCWS {
    magazineWell[] += {"M240_762x51","CBA_762x51_LINKS"};
    magazines[] += {
        "rhsusf_50Rnd_762x51",
        "rhsusf_50Rnd_762x51_m61_ap",
        "rhsusf_50Rnd_762x51_m62_tracer",
        "rhsusf_50Rnd_762x51_m80a1epr",
        "rhsusf_50Rnd_762x51_m82_blank",
        "rhsusf_50Rnd_762x51_m993",
        "rhsusf_100Rnd_762x51",
        "rhsusf_100Rnd_762x51_m61_ap",
        "rhsusf_100Rnd_762x51_m62_tracer",
        "rhsusf_100Rnd_762x51_m80a1epr",
        "rhsusf_100Rnd_762x51_m82_blank",
        "rhsusf_100Rnd_762x51_m993",
        "150Rnd_762x51_Box",
        "150Rnd_762x51_Box_Tracer",
        "UK3CB_M60_100rnd_762x51_GT",
        "UK3CB_M60_100rnd_762x51_RT",
        "UK3CB_M60_100rnd_762x51_WT",
        "UK3CB_M60_100rnd_762x51_YT",
        "UK3CB_M60_100rnd_762x51_G",
        "UK3CB_M60_100rnd_762x51_R",
        "UK3CB_M60_100rnd_762x51_W",
        "UK3CB_M60_100rnd_762x51_Y",
        "UK3CB_M60_100rnd_762x51",
        "UK3CB_M60_100rnd_762x51_GM",
        "UK3CB_M60_100rnd_762x51_RM",
        "UK3CB_M60_100rnd_762x51_WM",
        "UK3CB_M60_100rnd_762x51_YM"
    };
};

class UK3CB_MG42_base: Rifle_Base_F {
    class WeaponSlotsInfo;
};
class UK3CB_MG3: UK3CB_MG42_base {
    displayName = "MG3";
    magazineWell[] += {"CBA_762x51_LINKS","CBA_762x51_MG3"};
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 253.5;
    };
};
class UK3CB_MG3_KWS_T: UK3CB_MG3 {
    displayName = "MG3-KWS (Tan)";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 257.5;
    };
};
class UK3CB_MG3_KWS_B: UK3CB_MG3_KWS_T {
    displayName = "MG3-KWS";
};
class UK3CB_MG3_KWS_G: UK3CB_MG3_KWS_T {
    displayName = "MG3-KWS (Green)";
};
class UK3CB_MG3_Railed: UK3CB_MG3 {
    displayName = "LMG M/62";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 255.5;
    };
};

class UK3CB_RPK: LMG_Zafir_F {
    class WeaponSlotsInfo {
        mass = 106;
    };
};
class UK3CB_RPK_74: UK3CB_RPK {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 100;
        class MuzzleSlot: asdg_MuzzleSlot_545R {};
    };
};
class UK3CB_RPK_74N: UK3CB_RPK_74 {
    rhs_1p29_type = "rhs_acc_1p29";
    rhs_pgo7v_type = "rhs_acc_pgo7v_ak";
    rhs_pgo7v2_type = "rhs_acc_pgo7v2_ak";
    rhs_pgo7v3_type = "rhs_acc_pgo7v3_ak";
    rhs_pkas_type = "rhs_acc_pkas";
    rhs_pso1m2_type = "rhs_acc_pso1m2";
    rhs_pso1m21_type = "rhs_acc_pso1m21_svd";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 101;
    };
};
