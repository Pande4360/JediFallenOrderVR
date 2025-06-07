#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsDamageInfo {
    private: char pad_0[0x160]; public:
    float& get_Damage();
    float& get_LastTimeHit();
    bool get_PlayDirectionalDamageReaction();
    void set_PlayDirectionalDamageReaction(bool value);
    void* get_DamageTypeClass();
    void* get_DamageCauser();
    void* get_DamageInstigator();
    void* get_DamageParams();
    void* get_DamageEffectType();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x160
#pragma pack(pop)
}
