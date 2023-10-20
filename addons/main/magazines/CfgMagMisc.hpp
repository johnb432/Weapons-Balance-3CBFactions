class CA_Magazine;
class 30Rnd_9x21_Mag;
class 30Rnd_9x21_Mag_SMG_02;
class UK3CB_CZ550_5rnd_Mag;
class rhsusf_5Rnd_300winmag_xm2010;
class rhsusf_100Rnd_762x51_m80a1epr;
class UK3CB_M60_100rnd_762x51: rhsusf_100Rnd_762x51_m80a1epr {
    mass = 32.34;
};
class UK3CB_M60_100rnd_762x51_G: rhsusf_100Rnd_762x51_m80a1epr {
    mass = 32.34;
};
class UK3CB_M60_100rnd_762x51_R: rhsusf_100Rnd_762x51_m80a1epr {
    mass = 32.34;
};
class UK3CB_M60_100rnd_762x51_W: rhsusf_100Rnd_762x51_m80a1epr {
    mass = 32.34;
};
class UK3CB_M60_100rnd_762x51_Y: rhsusf_100Rnd_762x51_m80a1epr {
    mass = 32.34;
};

class UK3CB_MG3_100rnd_762x51: rhsusf_100Rnd_762x51_m80a1epr {
    mass = 32.34;
};
class UK3CB_MG3_100rnd_762x51_G: rhsusf_100Rnd_762x51_m80a1epr {
    mass = 32.34;
};
class UK3CB_MG3_100rnd_762x51_R: rhsusf_100Rnd_762x51_m80a1epr {
    mass = 32.34;
};
class UK3CB_MG3_100rnd_762x51_W: rhsusf_100Rnd_762x51_m80a1epr {
    mass = 32.34;
};
class UK3CB_MG3_100rnd_762x51_Y: rhsusf_100Rnd_762x51_m80a1epr {
    mass = 32.34;
};
class UK3CB_MG3_100rnd_762x51_GT: UK3CB_MG3_100rnd_762x51_G {
    displayName = "100rnd MG3 M62 Tracer Belt (Green)";
};
class UK3CB_MG3_100rnd_762x51_WT: UK3CB_MG3_100rnd_762x51_W {
    displayName = "100rnd MG3 M62 Tracer Belt (White)";
};

class UK3CB_MG3_250rnd_762x51: rhsusf_100Rnd_762x51_m80a1epr {
    mass = 72;
};
class UK3CB_MG3_250rnd_762x51_G: rhsusf_100Rnd_762x51_m80a1epr {
    mass = 72;
};
class UK3CB_MG3_250rnd_762x51_R: rhsusf_100Rnd_762x51_m80a1epr {
    mass = 72;
};
class UK3CB_MG3_250rnd_762x51_W: rhsusf_100Rnd_762x51_m80a1epr {
    mass = 72;
};
class UK3CB_MG3_250rnd_762x51_Y: rhsusf_100Rnd_762x51_m80a1epr {
    mass = 72;
};

class UK3CB_MG3_50rnd_762x51: rhsusf_100Rnd_762x51_m80a1epr {
    mass = 25.41;
};
class UK3CB_MG3_50rnd_762x51_G: rhsusf_100Rnd_762x51_m80a1epr {
    mass = 25.41;
};
class UK3CB_MG3_50rnd_762x51_R: rhsusf_100Rnd_762x51_m80a1epr {
    mass = 25.41;
};
class UK3CB_MG3_50rnd_762x51_W: rhsusf_100Rnd_762x51_m80a1epr {
    mass = 25.41;
};
class UK3CB_MG3_50rnd_762x51_Y: rhsusf_100Rnd_762x51_m80a1epr {
    mass = 25.41;
};
class UK3CB_MG3_50rnd_762x51_RM: UK3CB_MG3_50rnd_762x51_R {
    displayname = "50rnd MG3 M80/M62 Mixed Belt (Red)";
    mass = 25.41;
};
class UK3CB_MG3_50rnd_762x51_RT: UK3CB_MG3_50rnd_762x51_R {
    displayName = "50rnd MG3 M62 Tracer Belt (Red)";
};

class uk3cb_no4_enfield_303_10Rnd_magazine: 20Rnd_762x51_Mag {
    mass = 5.65;
};

class UK3CB_Sten_34Rnd_Magazine: 30Rnd_9x21_Mag_SMG_02 {
    mass = 11.5;
};
class UK3CB_Sten_34Rnd_Magazine_R: 30Rnd_9x21_Mag_SMG_02 {
    mass = 11.5;
};

#if __has_include("\hlc_wp_mp5\config.bin")
    class UK3CB_MP5_30Rnd_9x19_Magazine: 30Rnd_9x21_Mag {
        model = "hlc_wp_mp5\mesh\magazine\magazine.p3d";
        modelSpecial = "hlc_wp_mp5\mesh\magazine\proxy\30Rnd_9x19_MP5";
        modelSpecialIsProxy = 1;
    };
    class UK3CB_MP5_30Rnd_9x19_Magazine_R: 30Rnd_9x21_Mag {
        model = "hlc_wp_mp5\mesh\magazine\magazine.p3d";
        modelSpecial = "hlc_wp_mp5\mesh\magazine\proxy\30Rnd_9x19_MP5";
        modelSpecialIsProxy = 1;
    };
#endif

class uk3cb_10rnd_magazine_sks: CA_Magazine {
    mass = 3.8;
};

class uk3cb_PPSH_71rnd_magazine: CA_Magazine {
    mass = 20.7;
};
class uk3cb_PPSH_71rnd_magazine_R: CA_Magazine {
    mass = 20.7;
};
class uk3cb_PPSH_71rnd_magazine_RM: CA_Magazine {
    mass = 20.7;
};
class uk3cb_PPSH_71rnd_magazine_RT: CA_Magazine {
    mass = 20.7;
};

class UK3CB_CZ550_5rnd_Mag_W: UK3CB_CZ550_5rnd_Mag {
    ammo = "UK3CB_930x62_Ball_W";
};
class UK3CB_CZ550_5rnd_Mag_WT: UK3CB_CZ550_5rnd_Mag {
    ammo = "UK3CB_930x62_Ball_W";
};

class UK3CB_M1903A1_3006_5rnd_Magazine: 30Rnd_556x45_Stanag {
    mass = 2.8;
};

class UK3CB_UKM_100rnd_762x51_W;
class UK3CB_UKM_100rnd_762x51_WM: UK3CB_UKM_100rnd_762x51_W {
    displayname = "100rnd UKM-2000P M80/M62 Mixed Belt (White)";
};
