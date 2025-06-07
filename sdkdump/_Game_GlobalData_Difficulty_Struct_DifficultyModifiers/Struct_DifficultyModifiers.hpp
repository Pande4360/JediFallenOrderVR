#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_GlobalData_Difficulty_Struct_DifficultyModifiers {
#pragma pack(push, 1)
struct Struct_DifficultyModifiers {
    private: char pad_0[0x20]; public:
    float& get_EnvDeathDamageHP_13_4A5EC87B441D515A9345B79A5B5423BA();
    float& get_EnvDeathDamageCappedHP_14_8DF3166741810F6E30575D808AEC8E9F();
    float& get_HitReactionInvulnerability_15_6794E754425265251D3A928044F000A3();
    float& get_DamageModifierToHero_16_D51DC75A499061B8434859873017FDEB();
    float& get_FocusMeterPassiveRegenerationRate_20_5429210849F2CFF088D941B90B3138F0();
    float& get_HeroDamageModifier_22_F0C1161644948A21D0F897AC4223159B();
    float& get_HeroStaminaLevel_26_3CCC3E694C14B495E3D8979E6F5803E6();
    float& get_ActiveForceRegainModifier_29_F282BB1049E1634445DE80BADD279789();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x20
#pragma pack(pop)
}
