class UK3CB_M14_base: Rifle_Base_F {
    magazines[] = {"UK3CB_M14_20rnd_762x51"};
    class WeaponSlotsInfo: WeaponSlotsInfo {
        delete Cowslot;
    };
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
        class CowsSlot {};
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
        class CowsSlot {};
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
        class CowsSlot {};
    };
};
