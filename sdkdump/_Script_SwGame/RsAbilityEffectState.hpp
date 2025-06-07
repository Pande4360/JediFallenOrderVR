#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_RsGameTechRT\RsCombatState.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct RsAbilityEffectState : public _Script_RsGameTechRT::RsCombatState {
    private: char pad_118[0x38]; public:
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x150
#pragma pack(pop)
}
