class UK3CB_STGW57_base: Rifle_Base_F {
    magazineWell[] = {"CBA_75x55_STGW57"};
    class WeaponSlotsInfo;
};
class UK3CB_STGW57: UK3CB_STGW57_base {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 125.6;
        delete CowsSlot;
        class CowsSlot: UK3CB_OpticRail1913_STGW57 {};
    };
};
class uk3cb_stgw57_RIS: UK3CB_STGW57_base {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 127.6;
    };
};
class uk3cb_stgw57_RIS_commando: uk3cb_stgw57_RIS {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 110;
    };
};
class uk3cb_stgw57_5104: UK3CB_STGW57_base {
    magazineWell[] = {"CBA_762x51_SIGAMT"};
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 96.3;
        class MuzzleSlot: asdg_MuzzleSlot_762 {};
    };
};
class uk3cb_stgw57_amt: uk3cb_stgw57_5104 {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 90;
    };
};
