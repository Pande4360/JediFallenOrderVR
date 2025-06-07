#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_RsGameTechRT {
struct RsHeroStateModifierDefinition;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsConstrainedJumpDataMapping {
    private: char pad_0[0x1b0]; public:
    void* get_JumpVelocities();
    _Script_RsGameTechRT::RsHeroStateModifierDefinition*& get_ClimbDisableHeroStateModifier();
    _Script_RsGameTechRT::RsHeroStateModifierDefinition*& get_LedgeDisableHeroStateModifier();
    void* get_ClimbDisableTimes();
    void* get_LedgeDisableTimes();
    _Script_RsGameTechRT::RsHeroStateModifierDefinition*& get_AutoGrabDisableHeroStateModifier();
    void* get_AutoGrabDisableTimes();
    _Script_RsGameTechRT::RsHeroStateModifierDefinition*& get_JumpDisableHeroStateModifier();
    void* get_JumpDisableTimes();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x1b0
#pragma pack(pop)
}
