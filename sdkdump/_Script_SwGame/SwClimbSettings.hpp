#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_RsGameTechRT\RsClimbSettings.hpp"
namespace _Script_RsGameTechRT {
struct RsHeroStateModifierDefinition;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct SwClimbSettings : public _Script_RsGameTechRT::RsClimbSettings {
    private: char pad_370[0x38]; public:
    _Script_RsGameTechRT::RsHeroStateModifierDefinition*& get_PauseStaminaRegenHeroStateModifier();
    float& get_MovementStaminaUsagePerMeter();
    float& get_ClimbingClawsMovementStaminaUsagePerMeter();
    float& get_MovementShadowTime();
    void* get_JumpStaminaMeterRow();
    void* get_ClimbingClawsJumpStaminaMeterRow();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x3a8
#pragma pack(pop)
}
