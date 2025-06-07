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
struct RsCharacterReactionDefinition;
}
namespace _Script_Engine {
struct AnimSequenceBase;
}
namespace _Script_RsGameTechRT {
struct RsPhysicalAnimationProfile;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsZiplineAttachmentSettings : public _Script_Engine::DataAsset {
    private: char pad_30[0x118]; public:
    float& get_GroundEntrySearchRange();
    float& get_SeekSearchRange();
    float& get_SearchLookaheadTime();
    void* get_SearchRefBone();
    void* get_SearchChestBone();
    float& get_ZiplineTopAndBottomSegmentLengths();
    float& get_MaxAngleDifferenceFromZiplineForAttach();
    float& get_EntryVisualDamping();
    float& get_EntryVisualDampOffSpeed();
    float& get_EntryTime();
    void* get_AirEntryConstraintBlendInTimes();
    void* get_GroundEntryConstraintBlendInTimes();
    float& get_MaxIdleSwingAmount();
    float& get_SwingPeriodicityMultiplier();
    float& get_SwingFalloffMultiplier();
    float& get_SpeedToSwingAmountMultipler();
    float& get_MinimumAngleChangeToAffectSwing();
    float& get_AngleChangeToSwingAmountMultiplier();
    float& get_MaxMovementSpeed();
    float& get_MovementBrakingDeceleration();
    float& get_MovementDescendingAcceleration();
    float& get_MovementAscendingAcceleration();
    float& get_MovementOrientationBlendTime();
    _Script_RsGameTechRT::RsHeroStateModifierDefinition*& get_AscendingHeroStateModifier();
    _Script_RsGameTechRT::RsCharacterReactionDefinition*& get_AscendingHeroReactionDefinition();
    _Script_RsGameTechRT::RsHeroStateModifierDefinition*& get_DescendingHeroStateModifier();
    _Script_RsGameTechRT::RsCharacterReactionDefinition*& get_DescendingHeroReactionDefinition();
    _Script_RsGameTechRT::RsHeroStateModifierDefinition*& get_DisableZiplineHeroStateModifier();
    float& get_DisableZiplineHeroStateModifierDuration();
    _Script_RsGameTechRT::RsHeroStateModifierDefinition*& get_DropOffHeroStateModifier();
    float& get_DropOffModifierDuration();
    float& get_DropOffModifierBlendOutTime();
    void* get_JumpImpulse();
    _Script_RsGameTechRT::RsHeroStateModifierDefinition*& get_EnableJumpHeroStateModifier();
    float& get_TimeAfterDetachToAllowJump();
    _Script_RsGameTechRT::RsHeroStateModifierDefinition*& get_EnableUnattachedJumpHeroStateModifier();
    _Script_RsGameTechRT::RsHeroStateModifierDefinition*& get_DisableJumpHeroStateModifier();
    _Script_Engine::AnimSequenceBase*& get_JumpAnimation();
    float& get_EndOfZiplineJumpWindow();
    _Script_RsGameTechRT::RsHeroStateModifierDefinition*& get_JumpHeroStateModifier();
    float& get_JumpHeroStateModifierDuration();
    float& get_JumpHeroStateModifierBlendOutTime();
    void* get_AttachmentReferenceBone();
    _Script_RsGameTechRT::RsPhysicalAnimationProfile*& get_ZiplinePhysicalAnimationProfile();
    float& get_PhysicalAnimationActivationDelayTime();
    float& get_PhysicalAnimationFadeInTime();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x148
#pragma pack(pop)
}
