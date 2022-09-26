#include "../include/types.h"
#include "../include/pokemon.h"
#include "../include/save.h"

u32 Sav2_Misc_sizeof(void)
{
    return sizeof(struct SAVE_MISC_DATA);
}

void InitStoredMons(struct SAVE_MISC_DATA *saveMiscData)
{
    memset(&saveMiscData->storedMons[0], 0, 4*sizeof(struct PartyPokemon) + 4); // catch isMonStored in this process    
}

void Sav2_Misc_init_new_fields(struct SAVE_MISC_DATA *saveMiscData)
{
    InitStoredMons(saveMiscData);
}