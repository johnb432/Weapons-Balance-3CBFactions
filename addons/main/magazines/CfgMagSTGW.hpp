#pragma hemtt flag pe23_ignore_has_include

class UK3CB_STGW57_24rnd_75x55: 30Rnd_556x45_Stanag {
    mass = 20;

    #if __has_include("\hlc_wp_sigamt\config.bin")
        modelSpecial = "\hlc_wp_sigamt\mesh\magazine\Proxy\24rnd_GP11_STGW57";
        modelSpecialIsProxy = 1;
    #endif
};

class UK3CB_STGW57_AMT_20Rnd_762x51: UK3CB_STGW57_24rnd_75x55 {
    mass = 16.24;
};
class UK3CB_STGW57_AMT_20Rnd_762x51_GT: UK3CB_STGW57_AMT_20Rnd_762x51 {
    mass = 16.24;
};
class UK3CB_STGW57_AMT_20Rnd_762x51_RT: UK3CB_STGW57_AMT_20Rnd_762x51 {
    mass = 16.24;
};
class UK3CB_STGW57_AMT_20Rnd_762x51_WT: UK3CB_STGW57_AMT_20Rnd_762x51 {
    mass = 16.24;
};
class UK3CB_STGW57_AMT_20Rnd_762x51_YT: UK3CB_STGW57_AMT_20Rnd_762x51 {
    mass = 16.24;
};
