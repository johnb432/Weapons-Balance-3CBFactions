class asdg_UnderSlot;
class asdg_OpticRail1913;
class UK3CB_OpticRail1913_G3;
class rhs_western_rifle_laser_slot_top;

class CfgWeapons {
    class LMG_RCWS;
    class SMG_02_F;
    class rhs_weap_m16a4_carryhandle_M203;
    class rhs_weap_XM2010_Base_F;
    class UK3CB_M16A1_Base;
    class Rifle;
    class Rifle_Base_F: Rifle {
        class WeaponSlotsInfo {};
    };
    class Rifle_Long_Base_F: Rifle_Base_F {};
    class LMG_Zafir_F: Rifle_Long_Base_F {};

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

    class UK3CB_Bren: LMG_Zafir_F {
        displayName = "Bren L4A2";
        magazineWell[] = {"CBA_762x51_FAL", "CBA_762x51_FAL_L"};
        class WeaponSlotsInfo {
            mass = 191.5;
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

    class UK3CB_G3_Base: Rifle_Base_F {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            class CowsSlot: UK3CB_OpticRail1913_G3 {};
            class PointerSlot {};
        };
    };
    class UK3CB_G3SG1: UK3CB_G3_Base {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 113;
            class PointerSlot {};
        };
    };
    class UK3CB_G3SG1_RIS: UK3CB_G3SG1 {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 115;
            class CowsSlot {};
            class PointerSlot {};
        };
    };
    class UK3CB_G3A3: UK3CB_G3SG1 {
        class WeaponSlotsInfo: WeaponSlotsInfo {};
    };
    class UK3CB_G3A3_RIS: UK3CB_G3A3 {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 98.9;
            class CowsSlot {};
            class PointerSlot {};
        };
    };
    class UK3CB_G3A3V: UK3CB_G3A3 {
        class WeaponSlotsInfo: WeaponSlotsInfo {};
    };
    class UK3CB_G3A3V_RIS: UK3CB_G3A3 {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 98.9;
            class CowsSlot {};
            class PointerSlot {};
        };
    };
    class UK3CB_G3KA4: UK3CB_G3A3 {
        displayName = "HK G3KA4 (RAS)";
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 96.9;
            class CowsSlot {};
        };
    };
    class UK3CB_G3KA4_GL: UK3CB_G3KA4 {
        displayName = "HK G3KA4 (RAS/GL)";
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 129.9;
        };
    };

    class UK3CB_PSG1A1: UK3CB_G3_Base {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 141;
        };
    };
    class UK3CB_PSG1A1_RIS: UK3CB_PSG1A1 {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 143;
            class CowsSlot: asdg_OpticRail1913 {};
        };
    };

    class UK3CB_HK33KA2: UK3CB_G3_Base {
        magazineWell[] = {"UK3CB_556x45_HK33"};
        class WeaponSlotsInfo: WeaponSlotsInfo {};
    };
    class UK3CB_HK33KA3: UK3CB_HK33KA2 {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 86;
        };
    };
    class UK3CB_HK33KA2_RIS: UK3CB_HK33KA2 {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 85.5;
            class CowsSlot {};
        };
    };
    class UK3CB_HK33KA2_RIS_GL: UK3CB_HK33KA2_RIS {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 118.5;
        };
    };

    class UK3CB_Enfield: rhs_weap_XM2010_Base_F {
        displayName = "Lee-Enfield No.1 Mk.III*";
        magazineWell[] = {"CBA_303B_LeeEn"};
        class WeaponSlotsInfo {
            mass = 87;
        };
    };
    class UK3CB_Enfield_Rail: UK3CB_Enfield {
        displayName = "Lee-Enfield No.1 Mk.III* (Rail)";
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 90;
            class GripodSlot: asdg_UnderSlot {};
        };
    };

    class UK3CB_M14_base: Rifle_Base_F {
        magazines[] = {"UK3CB_M14_20rnd_762x51"};
        class WeaponSlotsInfo: WeaponSlotsInfo {};
    };
    class UK3CB_M14: UK3CB_M14_base {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 90.2;
        };
    };
    class UK3CB_M14_Railed: UK3CB_M14 {
        displayName = "M14 (Rail)";
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 92.2;
        };
    };

    class UK3CB_M21: UK3CB_M14_base {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 116;
        };
    };
    class UK3CB_M21_Bipod_Railed: UK3CB_M21 {
        displayName = "M21 (Rail)";
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 118;
        };
    };
    class UK3CB_M14DMR: UK3CB_M21 {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 96.2;
        };
    };
    class UK3CB_M14DMR_Railed: UK3CB_M14DMR {
        displayName = "M14 DMR (Rail)";
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 99.2;
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
            class CowsSlot: asdg_OpticRail1913 {};
            class MuzzleSlot: asdg_MuzzleSlot_556 {};
        };
    };

    class UK3CB_M16A2_UGL: rhs_weap_m16a4_carryhandle_M203 {
        class WeaponSlotsInfo {
            mass = 110;
        };
    };

    class UK3CB_M60_base: Rifle_Base_F {
        class WeaponSlotsInfo: WeaponSlotsInfo {};
    };
    class UK3CB_M60: UK3CB_M60_base {
        magazineWell[] += {"CBA_762x51_LINKS"};
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 231;
        };
    };

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
        class WeaponSlotsInfo: WeaponSlotsInfo {};
    };
    class UK3CB_MG3: UK3CB_MG42_base {
        magazineWell[] += {"CBA_762x51_LINKS","CBA_762x51_MG3"};
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 253.5;
        };
    };
    class UK3CB_MG3_KWS_T: UK3CB_MG3 {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 257.5;
        };
    };
    class UK3CB_MG3_Railed: UK3CB_MG3 {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 255.5;
        };
    };

    class UK3CB_MP5: SMG_02_F {
        class WeaponSlotsInfo {
            mass = 68.3;
        };
    };
    class UK3CB_MP5_SD: UK3CB_MP5 {
        class WeaponSlotsInfo {
            mass = 75;
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
};
