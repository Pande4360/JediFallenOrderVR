#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\DataAsset.hpp"
namespace _Script_RsGameTechRT {
struct RsHeroStateModifierDefinition;
}
namespace _Script_RsGameTechRT {
struct RsPhysicalAnimationProfile;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsJumpSettings : public _Script_Engine::DataAsset {
    private: char pad_30[0x278]; public:
    void* get_JumpInputActionName();
    void* get_JumpData();
    _Script_RsGameTechRT::RsHeroStateModifierDefinition*& get_DisableClimbAutoGrabModifier();
    float& get_JumpOverMaxSpeedSlowDownMultiplier();
    float& get_JumpDuringGraceWindowImpulseDelay();
    float& get_PostJumpDisableClimbAutoGrabDuration();
    void* get_SlideJumpData();
    _Script_RsGameTechRT::RsHeroStateModifierDefinition*& get_SlideJumpModifier();
    void* get_WallJumpData();
    float& get_WallJumpAngleDegrees();
    _Script_RsGameTechRT::RsHeroStateModifierDefinition*& get_WallJumpAirModifier();
    _Script_RsGameTechRT::RsHeroStateModifierDefinition*& get_WallJumpRotationModifier();
    _Script_RsGameTechRT::RsHeroStateModifierDefinition*& get_WallJumpFallModifier();
    void* get_DoubleJumpData();
    void* get_DoubleJumpZTargetData();
    float& get_VerticalSpeedAdditiveThreshold();
    void* get_DoubleJumpAdditiveData();
    _Script_RsGameTechRT::RsHeroStateModifierDefinition*& get_DoubleJumpModifier();
    _Script_RsGameTechRT::RsHeroStateModifierDefinition*& get_DoubleJumpZTargetModifier();
    void* get_ConstrainedJumpPadMappings();
    void* get_ConstrainedJumpDataMapping();
    _Script_RsGameTechRT::RsHeroStateModifierDefinition*& get_ConstrainedJumpTagModifier();
    _Script_RsGameTechRT::RsHeroStateModifierDefinition*& get_ConstrainedJumpMovementModifier();
    float& get_ConstrainedJumpMovementModifierBlendOutTime();
    float& get_ConstrainedJumpMovementModifierDuration();
    _Script_RsGameTechRT::RsHeroStateModifierDefinition*& get_ConstrainedJumpNoGripDisableGrabModifier();
    _Script_RsGameTechRT::RsPhysicalAnimationProfile*& get_PhysicalAnimationProfileConstrainedJump();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x2a8
#pragma pack(pop)
}
