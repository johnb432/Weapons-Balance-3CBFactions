class uk3cb_ak47_base: Rifle_Base_F {
    class WeaponSlotsInfo;
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

class UK3CB_AEK971_Base: Rifle_Base_F {
    class WeaponSlotsInfo;
};
class UK3CB_AEK971: UK3CB_AEK971_Base {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 73;
        class CowsSlot: asdg_OpticSideRail_AK {};
    };
};
class UK3CB_AEK971_Railed: UK3CB_AEK971 {
    displayName = "AEK-971S (MTK)";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 77;
    };
};

class UK3CB_AK12_Base: Rifle_Base_F {
    class WeaponSlotsInfo;
};
class UK3CB_AK12: UK3CB_AK12_Base {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 77;
        class PointerSlot: asdg_FrontSideRail {};
    };
};
class UK3CB_AK12_GL: UK3CB_AK12 {
    displayName = "AK-12 (GP-30)";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 110;
        class PointerSlot: asdg_FrontSideRail {};
        class UnderbarrelSlot {};
    };
};

class UK3CB_RK62_base: Rifle_Base_F {
    class WeaponSlotsInfo;
};
class UK3CB_RK62: UK3CB_RK62_base {
    displayName = "RK 62";
	class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 77;
        class CowsSlot: asdg_OpticSideRail_AK {};
    };
};

class uk3cb_saiga12k: Rifle_Base_F {
    magazineWell[] += {"CBA_12g_SAIGA"};
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 79.6;
        class CowsSlot: asdg_OpticSideRail_AK {};
    };
};
