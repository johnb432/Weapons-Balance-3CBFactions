class asdg_SlotInfo;
class asdg_OpticRail: asdg_SlotInfo {
    class compatibleItems;
};

class niarms_m14_OpticRail: asdg_OpticRail {
    class compatibleItems {
        uk3cb_optic_pvs4_m14 = 1;
        uk3cb_optic_artel_m14 = 1;
    };
};

class asdg_OpticRailL1A1: asdg_OpticRail {
    class compatibleItems {
        uk3cb_optic_suit_fnfal = 1;
    };
};

class asdg_MuzzleSlot;
class asdg_MuzzleSlot_762: asdg_MuzzleSlot {
    class compatibleItems {
        uk3cb_muzzle_snds_M14 = 1;
        uk3cb_muzzle_snds_g3 = 1;
    };
};
class UK3CB_MuzzleSlot_762_G3: asdg_MuzzleSlot_762 {
    class compatibleItems {
        uk3cb_muzzle_snds_m14 = 1;
    };
};
class UK3CB_MuzzleSlot_762_M14: asdg_MuzzleSlot_762 {
    class compatibleItems {
        uk3cb_muzzle_snds_g3 = 1;
    };
};

class asdg_MuzzleSlot_556: asdg_MuzzleSlot {
    class compatibleItems {
        uk3cb_muzzle_snds_hk33 = 1;
    };
};

class asdg_MuzzleSlot_9MM_SMG: asdg_MuzzleSlot {
    class compatibleItems {
        uk3cb_muzzle_snds_mp5 = 1;
    };
};

class asdg_MuzzleSlot_900_3CB: asdg_MuzzleSlot {
    class compatibleItems {
        uk3cb_muzzle_snds_mp5 = 1;
    };
};

class asdg_MuzzleSlot_45ACP_SMG: asdg_MuzzleSlot {
    class compatibleItems {
        uk3cb_muzzle_snds_mp510 = 1;
    };
};

class rhs_western_rifle_muzzle_slot: asdg_MuzzleSlot_556 {
    class compatibleItems: compatibleItems {
        uk3cb_muzzle_snds_hk33 = 1;
    };
};

class MuzzleSlot;
class MuzzleSlot_556: MuzzleSlot {
    class compatibleItems {
        uk3cb_muzzle_snds_hk33 = 1;
    };
};

class MuzzleSlot_762: MuzzleSlot {
    class compatibleItems {
        uk3cb_muzzle_snds_M14 = 1;
        uk3cb_muzzle_snds_g3 = 1;
    };
};
