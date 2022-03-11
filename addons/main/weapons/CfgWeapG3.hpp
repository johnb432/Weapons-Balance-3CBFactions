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
    class WeaponSlotsInfo;
};
class UK3CB_G3A3_RIS: UK3CB_G3A3 {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 98.9;
        class CowsSlot {};
        class PointerSlot {};
    };
};
class UK3CB_G3A3V: UK3CB_G3A3 {
    class WeaponSlotsInfo;
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
    displayName = "HK G3KA4 (RAS/M203)";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 129.9;
    };
};

class UK3CB_PSG1A1: UK3CB_G3_Base {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 141;
        delete Cowslot;
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
    class WeaponSlotsInfo {
        delete Cowslot;
        class CowsSlot: UK3CB_OpticRail1913_G3 {};
    };
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
    displayName = "HK33A2 (RIS/M203)";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 118.5;
    };
};
