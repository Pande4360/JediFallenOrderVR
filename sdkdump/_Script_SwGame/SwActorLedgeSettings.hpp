#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_RsGameTechRT\RsActorLedgeSettings.hpp"
namespace _Script_RsGameTechRT {
struct RsHeroStateModifierDefinition;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct SwActorLedgeSettings : public _Script_RsGameTechRT::RsActorLedgeSettings {
    private: char pad_490[0x20]; public:
    _Script_RsGameTechRT::RsHeroStateModifierDefinition*& get_PauseStaminaRegenHeroStateModifier();
    float& get_ShimmyMovementStaminaUsagePerMeter();
    float& get_ShimmyMovementShadowTime();
    void* get_LedgeJumpStaminaMeterRow();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x4b0
#pragma pack(pop)
}
