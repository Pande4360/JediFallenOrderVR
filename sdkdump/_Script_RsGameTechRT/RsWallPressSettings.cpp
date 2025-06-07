#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\DataAsset.hpp"
#include "RsHeroStateModifierDefinition.hpp"
#include "RsWallPressSettings.hpp"
float& _Script_RsGameTechRT::RsWallPressSettings::get_MaxAngleBetweenFittingSegments() {
    return *(float*)((uintptr_t)this + 0x48);
}
float& _Script_RsGameTechRT::RsWallPressSettings::get_ActiveSearchLookAheadTime() {
    return *(float*)((uintptr_t)this + 0x30);
}
float& _Script_RsGameTechRT::RsWallPressSettings::get_ActiveSearchLookAheadSpeedThreshold() {
    return *(float*)((uintptr_t)this + 0x34);
}
float& _Script_RsGameTechRT::RsWallPressSettings::get_EntryVisualDamping() {
    return *(float*)((uintptr_t)this + 0x38);
}
void* _Script_RsGameTechRT::RsWallPressSettings::get_GroundEntryValidationOffset() {
    return (void*)((uintptr_t)this + 0x4c);
}
float& _Script_RsGameTechRT::RsWallPressSettings::get_EntryAngleThresholdDegrees() {
    return *(float*)((uintptr_t)this + 0xa4);
}
float& _Script_RsGameTechRT::RsWallPressSettings::get_EntryVisualDampOffSpeed() {
    return *(float*)((uintptr_t)this + 0x3c);
}
float& _Script_RsGameTechRT::RsWallPressSettings::get_EntryTimeoutTime() {
    return *(float*)((uintptr_t)this + 0x40);
}
float& _Script_RsGameTechRT::RsWallPressSettings::get_MinimumDistanceFromLedgeEnd() {
    return *(float*)((uintptr_t)this + 0x44);
}
void* _Script_RsGameTechRT::RsWallPressSettings::get_GroundEntryProximityBox() {
    return (void*)((uintptr_t)this + 0x58);
}
void* _Script_RsGameTechRT::RsWallPressSettings::get_AirEntryValidationOffset() {
    return (void*)((uintptr_t)this + 0x78);
}
void* _Script_RsGameTechRT::RsWallPressSettings::get_AirEntryProximityBox() {
    return (void*)((uintptr_t)this + 0x84);
}
float& _Script_RsGameTechRT::RsWallPressSettings::get_EntryExtrapolationWindow() {
    return *(float*)((uintptr_t)this + 0xa8);
}
int32_t& _Script_RsGameTechRT::RsWallPressSettings::get_EntryExtrapolationSamples() {
    return *(int32_t*)((uintptr_t)this + 0xac);
}
void* _Script_RsGameTechRT::RsWallPressSettings::get_OverLedgeValidDepthRange() {
    return (void*)((uintptr_t)this + 0xb0);
}
void* _Script_RsGameTechRT::RsWallPressSettings::get_OverLedgeValidSlopeRange() {
    return (void*)((uintptr_t)this + 0xb8);
}
float& _Script_RsGameTechRT::RsWallPressSettings::get_LedgeDropMaxDistance() {
    return *(float*)((uintptr_t)this + 0xc0);
}
void* _Script_RsGameTechRT::RsWallPressSettings::get_MovementValidationCapsuleDimensions() {
    return (void*)((uintptr_t)this + 0xc4);
}
void* _Script_RsGameTechRT::RsWallPressSettings::get_MovementValidationSweepOffset() {
    return (void*)((uintptr_t)this + 0xcc);
}
void* _Script_RsGameTechRT::RsWallPressSettings::get_WalkOffSweepCapsuleDimensions() {
    return (void*)((uintptr_t)this + 0xd4);
}
void* _Script_RsGameTechRT::RsWallPressSettings::get_WalkOffSweepInitialOffset() {
    return (void*)((uintptr_t)this + 0xdc);
}
void* _Script_RsGameTechRT::RsWallPressSettings::get_WalkOffSweepEndpointOffset() {
    return (void*)((uintptr_t)this + 0xe8);
}
float& _Script_RsGameTechRT::RsWallPressSettings::get_WalkOffGroundSweepLength() {
    return *(float*)((uintptr_t)this + 0xf4);
}
float& _Script_RsGameTechRT::RsWallPressSettings::get_ExitTimeoutTime() {
    return *(float*)((uintptr_t)this + 0xf8);
}
_Script_RsGameTechRT::RsHeroStateModifierDefinition*& _Script_RsGameTechRT::RsWallPressSettings::get_InPlaceJumpHeroStateModifier() {
    return *(_Script_RsGameTechRT::RsHeroStateModifierDefinition**)((uintptr_t)this + 0x100);
}
float& _Script_RsGameTechRT::RsWallPressSettings::get_InPlaceJumpTimeoutTime() {
    return *(float*)((uintptr_t)this + 0x108);
}
void* _Script_RsGameTechRT::RsWallPressSettings::get_JumpOffAnimations() {
    return (void*)((uintptr_t)this + 0x110);
}
float& _Script_RsGameTechRT::RsWallPressSettings::get_JumpOffAnimationBlendInTime() {
    return *(float*)((uintptr_t)this + 0x160);
}
float& _Script_RsGameTechRT::RsWallPressSettings::get_JumpOffAnimationBlendOutTime() {
    return *(float*)((uintptr_t)this + 0x164);
}
float& _Script_RsGameTechRT::RsWallPressSettings::get_JumpOffTimeoutTime() {
    return *(float*)((uintptr_t)this + 0x168);
}
void* _Script_RsGameTechRT::RsWallPressSettings::get_AttachmentReferenceBone() {
    return (void*)((uintptr_t)this + 0x170);
}
float& _Script_RsGameTechRT::RsWallPressSettings::get_AttachmentBlendInTime() {
    return *(float*)((uintptr_t)this + 0x178);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsWallPressSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsWallPressSettings");
    return result;
}
