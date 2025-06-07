#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_RsGameTechRT {
struct RsHeroStateModifierDefinition;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct RsAbility : public _Script_CoreUObject::Object {
    private: char pad_28[0x90]; public:
    void* get_DefaultAbilityState();
    _Script_RsGameTechRT::RsHeroStateModifierDefinition*& get_HeroStateModifier();
    float& get_TimeToAllowReactivation();
    void* get_AbilityType();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xb8
#pragma pack(pop)
}
