// TODO: UK3CB_AR10

class uk3cb_ar18_base: Rifle_Base_F {
    ACE_barrelLength = 464;
    ACE_barrelTwist = 304.8;
};
class uk3cb_ar18: uk3cb_ar18_base {
    class WeaponSlotsInfo {
        mass = 67;
    };
};
class uk3cb_ar18_carbine: uk3cb_ar18_base {
    ACE_barrelLength = 257;
};
class uk3cb_ar18_shorty: uk3cb_ar18_base {
    ACE_barrelLength = 257;
    displayName = "AR-18S";
};
