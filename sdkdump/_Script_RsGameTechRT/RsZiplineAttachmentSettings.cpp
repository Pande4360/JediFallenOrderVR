#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimSequenceBase.hpp"
#include "..\_Script_Engine\DataAsset.hpp"
#include "RsCharacterReactionDefinition.hpp"
#include "RsHeroStateModifierDefinition.hpp"
#include "RsPhysicalAnimationProfile.hpp"
#include "RsZiplineAttachmentSettings.hpp"
float& _Script_RsGameTechRT::RsZiplineAttachmentSettings::get_GroundEntrySearchRange() {
    return *(float*)((uintptr_t)this + 0x30);
}
float& _Script_RsGameTechRT::RsZiplineAttachmentSettings::get_SearchLookaheadTime() {
    return *(float*)((uintptr_t)this + 0x38);
}
float& _Script_RsGameTechRT::RsZiplineAttachmentSettings::get_JumpHeroStateModifierDuration() {
    return *(float*)((uintptr_t)this + 0x128);
}
float& _Script_RsGameTechRT::RsZiplineAttachmentSettings::get_SeekSearchRange() {
    return *(float*)((uintptr_t)this + 0x34);
}
void* _Script_RsGameTechRT::RsZiplineAttachmentSettings::get_SearchRefBone() {
    return (void*)((uintptr_t)this + 0x40);
}
_Script_RsGameTechRT::RsHeroStateModifierDefinition*& _Script_RsGameTechRT::RsZiplineAttachmentSettings::get_DropOffHeroStateModifier() {
    return *(_Script_RsGameTechRT::RsHeroStateModifierDefinition**)((uintptr_t)this + 0xd0);
}
float& _Script_RsGameTechRT::RsZiplineAttachmentSettings::get_EntryVisualDamping() {
    return *(float*)((uintptr_t)this + 0x58);
}
void* _Script_RsGameTechRT::RsZiplineAttachmentSettings::get_SearchChestBone() {
    return (void*)((uintptr_t)this + 0x48);
}
float& _Script_RsGameTechRT::RsZiplineAttachmentSettings::get_ZiplineTopAndBottomSegmentLengths() {
    return *(float*)((uintptr_t)this + 0x50);
}
void* _Script_RsGameTechRT::RsZiplineAttachmentSettings::get_JumpImpulse() {
    return (void*)((uintptr_t)this + 0xe0);
}
float& _Script_RsGameTechRT::RsZiplineAttachmentSettings::get_MaxAngleDifferenceFromZiplineForAttach() {
    return *(float*)((uintptr_t)this + 0x54);
}
float& _Script_RsGameTechRT::RsZiplineAttachmentSettings::get_EntryVisualDampOffSpeed() {
    return *(float*)((uintptr_t)this + 0x5c);
}
float& _Script_RsGameTechRT::RsZiplineAttachmentSettings::get_PhysicalAnimationActivationDelayTime() {
    return *(float*)((uintptr_t)this + 0x140);
}
float& _Script_RsGameTechRT::RsZiplineAttachmentSettings::get_EntryTime() {
    return *(float*)((uintptr_t)this + 0x60);
}
void* _Script_RsGameTechRT::RsZiplineAttachmentSettings::get_AirEntryConstraintBlendInTimes() {
    return (void*)((uintptr_t)this + 0x64);
}
void* _Script_RsGameTechRT::RsZiplineAttachmentSettings::get_GroundEntryConstraintBlendInTimes() {
    return (void*)((uintptr_t)this + 0x6c);
}
float& _Script_RsGameTechRT::RsZiplineAttachmentSettings::get_MaxIdleSwingAmount() {
    return *(float*)((uintptr_t)this + 0x74);
}
float& _Script_RsGameTechRT::RsZiplineAttachmentSettings::get_SwingPeriodicityMultiplier() {
    return *(float*)((uintptr_t)this + 0x78);
}
float& _Script_RsGameTechRT::RsZiplineAttachmentSettings::get_JumpHeroStateModifierBlendOutTime() {
    return *(float*)((uintptr_t)this + 0x12c);
}
float& _Script_RsGameTechRT::RsZiplineAttachmentSettings::get_SwingFalloffMultiplier() {
    return *(float*)((uintptr_t)this + 0x7c);
}
float& _Script_RsGameTechRT::RsZiplineAttachmentSettings::get_SpeedToSwingAmountMultipler() {
    return *(float*)((uintptr_t)this + 0x80);
}
float& _Script_RsGameTechRT::RsZiplineAttachmentSettings::get_MinimumAngleChangeToAffectSwing() {
    return *(float*)((uintptr_t)this + 0x84);
}
float& _Script_RsGameTechRT::RsZiplineAttachmentSettings::get_AngleChangeToSwingAmountMultiplier() {
    return *(float*)((uintptr_t)this + 0x88);
}
float& _Script_RsGameTechRT::RsZiplineAttachmentSettings::get_MaxMovementSpeed() {
    return *(float*)((uintptr_t)this + 0x8c);
}
float& _Script_RsGameTechRT::RsZiplineAttachmentSettings::get_MovementBrakingDeceleration() {
    return *(float*)((uintptr_t)this + 0x90);
}
float& _Script_RsGameTechRT::RsZiplineAttachmentSettings::get_TimeAfterDetachToAllowJump() {
    return *(float*)((uintptr_t)this + 0xf8);
}
float& _Script_RsGameTechRT::RsZiplineAttachmentSettings::get_MovementDescendingAcceleration() {
    return *(float*)((uintptr_t)this + 0x94);
}
float& _Script_RsGameTechRT::RsZiplineAttachmentSettings::get_MovementAscendingAcceleration() {
    return *(float*)((uintptr_t)this + 0x98);
}
float& _Script_RsGameTechRT::RsZiplineAttachmentSettings::get_MovementOrientationBlendTime() {
    return *(float*)((uintptr_t)this + 0x9c);
}
float& _Script_RsGameTechRT::RsZiplineAttachmentSettings::get_PhysicalAnimationFadeInTime() {
    return *(float*)((uintptr_t)this + 0x144);
}
float& _Script_RsGameTechRT::RsZiplineAttachmentSettings::get_EndOfZiplineJumpWindow() {
    return *(float*)((uintptr_t)this + 0x118);
}
_Script_RsGameTechRT::RsHeroStateModifierDefinition*& _Script_RsGameTechRT::RsZiplineAttachmentSettings::get_AscendingHeroStateModifier() {
    return *(_Script_RsGameTechRT::RsHeroStateModifierDefinition**)((uintptr_t)this + 0xa0);
}
_Script_RsGameTechRT::RsCharacterReactionDefinition*& _Script_RsGameTechRT::RsZiplineAttachmentSettings::get_AscendingHeroReactionDefinition() {
    return *(_Script_RsGameTechRT::RsCharacterReactionDefinition**)((uintptr_t)this + 0xa8);
}
_Script_RsGameTechRT::RsHeroStateModifierDefinition*& _Script_RsGameTechRT::RsZiplineAttachmentSettings::get_DescendingHeroStateModifier() {
    return *(_Script_RsGameTechRT::RsHeroStateModifierDefinition**)((uintptr_t)this + 0xb0);
}
_Script_RsGameTechRT::RsHeroStateModifierDefinition*& _Script_RsGameTechRT::RsZiplineAttachmentSettings::get_DisableJumpHeroStateModifier() {
    return *(_Script_RsGameTechRT::RsHeroStateModifierDefinition**)((uintptr_t)this + 0x108);
}
_Script_RsGameTechRT::RsCharacterReactionDefinition*& _Script_RsGameTechRT::RsZiplineAttachmentSettings::get_DescendingHeroReactionDefinition() {
    return *(_Script_RsGameTechRT::RsCharacterReactionDefinition**)((uintptr_t)this + 0xb8);
}
_Script_RsGameTechRT::RsHeroStateModifierDefinition*& _Script_RsGameTechRT::RsZiplineAttachmentSettings::get_DisableZiplineHeroStateModifier() {
    return *(_Script_RsGameTechRT::RsHeroStateModifierDefinition**)((uintptr_t)this + 0xc0);
}
void* _Script_RsGameTechRT::RsZiplineAttachmentSettings::get_AttachmentReferenceBone() {
    return (void*)((uintptr_t)this + 0x130);
}
float& _Script_RsGameTechRT::RsZiplineAttachmentSettings::get_DisableZiplineHeroStateModifierDuration() {
    return *(float*)((uintptr_t)this + 0xc8);
}
float& _Script_RsGameTechRT::RsZiplineAttachmentSettings::get_DropOffModifierDuration() {
    return *(float*)((uintptr_t)this + 0xd8);
}
float& _Script_RsGameTechRT::RsZiplineAttachmentSettings::get_DropOffModifierBlendOutTime() {
    return *(float*)((uintptr_t)this + 0xdc);
}
_Script_RsGameTechRT::RsHeroStateModifierDefinition*& _Script_RsGameTechRT::RsZiplineAttachmentSettings::get_EnableJumpHeroStateModifier() {
    return *(_Script_RsGameTechRT::RsHeroStateModifierDefinition**)((uintptr_t)this + 0xf0);
}
_Script_RsGameTechRT::RsHeroStateModifierDefinition*& _Script_RsGameTechRT::RsZiplineAttachmentSettings::get_EnableUnattachedJumpHeroStateModifier() {
    return *(_Script_RsGameTechRT::RsHeroStateModifierDefinition**)((uintptr_t)this + 0x100);
}
_Script_Engine::AnimSequenceBase*& _Script_RsGameTechRT::RsZiplineAttachmentSettings::get_JumpAnimation() {
    return *(_Script_Engine::AnimSequenceBase**)((uintptr_t)this + 0x110);
}
_Script_RsGameTechRT::RsHeroStateModifierDefinition*& _Script_RsGameTechRT::RsZiplineAttachmentSettings::get_JumpHeroStateModifier() {
    return *(_Script_RsGameTechRT::RsHeroStateModifierDefinition**)((uintptr_t)this + 0x120);
}
_Script_RsGameTechRT::RsPhysicalAnimationProfile*& _Script_RsGameTechRT::RsZiplineAttachmentSettings::get_ZiplinePhysicalAnimationProfile() {
    return *(_Script_RsGameTechRT::RsPhysicalAnimationProfile**)((uintptr_t)this + 0x138);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsZiplineAttachmentSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsZiplineAttachmentSettings");
    return result;
}
