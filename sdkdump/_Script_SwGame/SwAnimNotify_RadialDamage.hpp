#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\AnimNotify.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct SwAnimNotify_RadialDamage : public _Script_Engine::AnimNotify {
    private: char pad_38[0x60]; public:
    void* get_HitEvent();
    float& get_BaseDamage();
    float& get_MinimumDamage();
    void* get_Offset();
    float& get_DamageInnerRadius();
    float& get_DamageOuterRadius();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x98
#pragma pack(pop)
}
