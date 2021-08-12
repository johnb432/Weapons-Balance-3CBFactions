class UK3CB_MP5_Base: SMG_02_F {
    magazineWell[] = {"CBA_9x19_MP5"};
    class WeaponSlotsInfo: WeaponSlotsInfo {};
};
class UK3CB_MP5A2: UK3CB_MP5_Base {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 63.8;
        class MuzzleSlot: asdg_MuzzleSlot_9MM_SMG {};
    };
};
class UK3CB_MP5A3: UK3CB_MP5A2 {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 68.3;
    };
};

class UK3CB_MP5A4: UK3CB_MP5_Base {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 64.8;
        class MuzzleSlot: asdg_MuzzleSlot_9MM_SMG {};
    };
};

class UK3CB_MP5K_PDW: UK3CB_MP5_Base {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 56;
        class MuzzleSlot: asdg_MuzzleSlot_9MM_SMG {};
    };
};
class UK3CB_MP5K: UK3CB_MP5K_PDW {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 44;
    };
};

class UK3CB_MP5N: UK3CB_MP5_Base {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 69.3;
        class MuzzleSlot: asdg_MuzzleSlot_9MM_SMG {};
    };
};
class UK3CB_MP5N_UGL: UK3CB_MP5N {
    displayName = "HK MP5N (GL)";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 99.3;
    };
};
class UK3CB_MP510: UK3CB_MP5N {
    displayName = "HK MP5/10A4";
    magazineWell[] = {"CBA_10mmAuto_MP5","CBA_10x25_MP5"};
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 64.4;
        class MuzzleSlot: asdg_MuzzleSlot_45ACP_SMG {};
    };
};

class UK3CB_MP5SD5: UK3CB_MP5_Base {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 70.5;
    };
};
class UK3CB_MP5SD6: UK3CB_MP5SD5 {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 75;
    };
};
