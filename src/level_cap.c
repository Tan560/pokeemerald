#include "global.h"
#include "event_data.h"
#include "constants/flags.h"
#include "constants/pokemon.h"

u8 GetCurrentLevelCap(void)
{
    if (FlagGet(FLAG_SYS_GAME_CLEAR))
        return MAX_LEVEL;

    if (FlagGet(FLAG_BADGE08_GET))
        return 58; // Wallace
    if (FlagGet(FLAG_BADGE07_GET))
        return 46; // Juan
    if (FlagGet(FLAG_BADGE06_GET))
        return 42; // Tate & Liza
    if (FlagGet(FLAG_BADGE05_GET))
        return 33; // Winona
    if (FlagGet(FLAG_BADGE04_GET))
        return 31; // Norman
    if (FlagGet(FLAG_BADGE03_GET))
        return 29; // Flannery
    if (FlagGet(FLAG_BADGE02_GET))
        return 24; // Wattson
    if (FlagGet(FLAG_BADGE01_GET))
        return 19; // Brawly

    return 15; // Roxanne
}
