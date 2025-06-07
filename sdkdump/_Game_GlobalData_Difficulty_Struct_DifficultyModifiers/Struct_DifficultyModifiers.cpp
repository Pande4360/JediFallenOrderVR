#include "..\FUObjectArray.hpp"
#include "Struct_DifficultyModifiers.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
float& _Game_GlobalData_Difficulty_Struct_DifficultyModifiers::Struct_DifficultyModifiers::get_ActiveForceRegainModifier_29_F282BB1049E1634445DE80BADD279789() {
    return *(float*)((uintptr_t)this + 0x1c);
}
float& _Game_GlobalData_Difficulty_Struct_DifficultyModifiers::Struct_DifficultyModifiers::get_EnvDeathDamageHP_13_4A5EC87B441D515A9345B79A5B5423BA() {
    return *(float*)((uintptr_t)this + 0x0);
}
float& _Game_GlobalData_Difficulty_Struct_DifficultyModifiers::Struct_DifficultyModifiers::get_EnvDeathDamageCappedHP_14_8DF3166741810F6E30575D808AEC8E9F() {
    return *(float*)((uintptr_t)this + 0x4);
}
float& _Game_GlobalData_Difficulty_Struct_DifficultyModifiers::Struct_DifficultyModifiers::get_HeroStaminaLevel_26_3CCC3E694C14B495E3D8979E6F5803E6() {
    return *(float*)((uintptr_t)this + 0x18);
}
float& _Game_GlobalData_Difficulty_Struct_DifficultyModifiers::Struct_DifficultyModifiers::get_HitReactionInvulnerability_15_6794E754425265251D3A928044F000A3() {
    return *(float*)((uintptr_t)this + 0x8);
}
float& _Game_GlobalData_Difficulty_Struct_DifficultyModifiers::Struct_DifficultyModifiers::get_HeroDamageModifier_22_F0C1161644948A21D0F897AC4223159B() {
    return *(float*)((uintptr_t)this + 0x14);
}
float& _Game_GlobalData_Difficulty_Struct_DifficultyModifiers::Struct_DifficultyModifiers::get_DamageModifierToHero_16_D51DC75A499061B8434859873017FDEB() {
    return *(float*)((uintptr_t)this + 0xc);
}
float& _Game_GlobalData_Difficulty_Struct_DifficultyModifiers::Struct_DifficultyModifiers::get_FocusMeterPassiveRegenerationRate_20_5429210849F2CFF088D941B90B3138F0() {
    return *(float*)((uintptr_t)this + 0x10);
}
_Script_CoreUObject::Class* _Game_GlobalData_Difficulty_Struct_DifficultyModifiers::Struct_DifficultyModifiers::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"UserDefinedStruct /Game/GlobalData/Difficulty/Struct_DifficultyModifiers.Struct_DifficultyModifiers");
    return result;
}
