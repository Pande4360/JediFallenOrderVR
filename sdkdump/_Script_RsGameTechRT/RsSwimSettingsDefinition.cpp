#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimationAsset.hpp"
#include "..\_Script_Engine\DataAsset.hpp"
#include "RsHeroStateModifierDefinition.hpp"
#include "RsSwimSettingsDefinition.hpp"
float& _Script_RsGameTechRT::RsSwimSettingsDefinition::get_DiveInitialVelocityDownward() {
    return *(float*)((uintptr_t)this + 0x44);
}
float& _Script_RsGameTechRT::RsSwimSettingsDefinition::get_AnimationTurn180BlendOutTime() {
    return *(float*)((uintptr_t)this + 0x12c);
}
_Script_RsGameTechRT::RsHeroStateModifierDefinition*& _Script_RsGameTechRT::RsSwimSettingsDefinition::get_SwimVolumeOnSurfaceHeroStateModifier() {
    return *(_Script_RsGameTechRT::RsHeroStateModifierDefinition**)((uintptr_t)this + 0x30);
}
float& _Script_RsGameTechRT::RsSwimSettingsDefinition::get_DiveDownwardSpeed() {
    return *(float*)((uintptr_t)this + 0x48);
}
_Script_RsGameTechRT::RsHeroStateModifierDefinition*& _Script_RsGameTechRT::RsSwimSettingsDefinition::get_SwimVolumeDivingHeroStateModifier() {
    return *(_Script_RsGameTechRT::RsHeroStateModifierDefinition**)((uintptr_t)this + 0x38);
}
float& _Script_RsGameTechRT::RsSwimSettingsDefinition::get_MinimumVolumeHeightToAllowDiving() {
    return *(float*)((uintptr_t)this + 0x40);
}
float& _Script_RsGameTechRT::RsSwimSettingsDefinition::get_DiveUpwardSpeed() {
    return *(float*)((uintptr_t)this + 0x4c);
}
float& _Script_RsGameTechRT::RsSwimSettingsDefinition::get_OffsetToEnterSwim() {
    return *(float*)((uintptr_t)this + 0x50);
}
_Script_Engine::AnimationAsset*& _Script_RsGameTechRT::RsSwimSettingsDefinition::get_AnimationStartDivingUp() {
    return *(_Script_Engine::AnimationAsset**)((uintptr_t)this + 0x138);
}
float& _Script_RsGameTechRT::RsSwimSettingsDefinition::get_OffsetToExitSwim() {
    return *(float*)((uintptr_t)this + 0x54);
}
float& _Script_RsGameTechRT::RsSwimSettingsDefinition::get_OffsetToEnterSwimFromClimb() {
    return *(float*)((uintptr_t)this + 0x58);
}
void* _Script_RsGameTechRT::RsSwimSettingsDefinition::get_BoneNameToDetectSubmersionInWaterWhileInClimb() {
    return (void*)((uintptr_t)this + 0x60);
}
float& _Script_RsGameTechRT::RsSwimSettingsDefinition::get_MaximumSpeedOfSurfaceAlignment() {
    return *(float*)((uintptr_t)this + 0x68);
}
_Script_Engine::AnimationAsset*& _Script_RsGameTechRT::RsSwimSettingsDefinition::get_AnimationTurn180Left() {
    return *(_Script_Engine::AnimationAsset**)((uintptr_t)this + 0x108);
}
float& _Script_RsGameTechRT::RsSwimSettingsDefinition::get_DistanceForAutomaticSwitchFromDivingToSurfaceSwimming() {
    return *(float*)((uintptr_t)this + 0x6c);
}
float& _Script_RsGameTechRT::RsSwimSettingsDefinition::get_MinimumTimeInDivingToAllowAutomaticSwitchToSurface() {
    return *(float*)((uintptr_t)this + 0x70);
}
float& _Script_RsGameTechRT::RsSwimSettingsDefinition::get_MinimumTimeInDivingToAllowDiveUpward() {
    return *(float*)((uintptr_t)this + 0x74);
}
bool _Script_RsGameTechRT::RsSwimSettingsDefinition::get_EnableDebugDrawForMovementDirections() {
    return (*(uint8_t*)((uintptr_t)this + 0xf8 + 0)) & 1 != 0;
}
float& _Script_RsGameTechRT::RsSwimSettingsDefinition::get_DivingPosePitchAlignmentSpeed() {
    return *(float*)((uintptr_t)this + 0x78);
}
float& _Script_RsGameTechRT::RsSwimSettingsDefinition::get_SubmergenceHeightWhenEnteringFromGround() {
    return *(float*)((uintptr_t)this + 0x7c);
}
float& _Script_RsGameTechRT::RsSwimSettingsDefinition::get_SubmergenceHeightWhenEnteringFromFall() {
    return *(float*)((uintptr_t)this + 0x80);
}
float& _Script_RsGameTechRT::RsSwimSettingsDefinition::get_SubmergenceMaximumTime() {
    return *(float*)((uintptr_t)this + 0x84);
}
float& _Script_RsGameTechRT::RsSwimSettingsDefinition::get_ReenterSwimPenaltyTime() {
    return *(float*)((uintptr_t)this + 0x88);
}
_Script_Engine::AnimationAsset*& _Script_RsGameTechRT::RsSwimSettingsDefinition::get_AnimationTurn180LeftUnderwater() {
    return *(_Script_Engine::AnimationAsset**)((uintptr_t)this + 0x118);
}
_Script_Engine::AnimationAsset*& _Script_RsGameTechRT::RsSwimSettingsDefinition::get_AnimationEnterSwimFromGround() {
    return *(_Script_Engine::AnimationAsset**)((uintptr_t)this + 0x90);
}
float& _Script_RsGameTechRT::RsSwimSettingsDefinition::get_MaxPlayingTimeForBoostUnderwaterAnimation() {
    return *(float*)((uintptr_t)this + 0x158);
}
float& _Script_RsGameTechRT::RsSwimSettingsDefinition::get_AnimationEnterSwimFromGroundBlendInTime() {
    return *(float*)((uintptr_t)this + 0x98);
}
_Script_RsGameTechRT::RsHeroStateModifierDefinition*& _Script_RsGameTechRT::RsSwimSettingsDefinition::get_TurningHeroStateModifier() {
    return *(_Script_RsGameTechRT::RsHeroStateModifierDefinition**)((uintptr_t)this + 0x100);
}
float& _Script_RsGameTechRT::RsSwimSettingsDefinition::get_AnimationEnterSwimFromGroundBlendOutTime() {
    return *(float*)((uintptr_t)this + 0x9c);
}
bool _Script_RsGameTechRT::RsSwimSettingsDefinition::get_DoNotPlayIdleToSwimAnimation() {
    return (*(uint8_t*)((uintptr_t)this + 0xa0 + 0)) & 1 != 0;
}
void _Script_RsGameTechRT::RsSwimSettingsDefinition::set_DoNotPlayIdleToSwimAnimation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xa0 + 0);
    *(uint8_t*)((uintptr_t)this + 0xa0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_Engine::AnimationAsset*& _Script_RsGameTechRT::RsSwimSettingsDefinition::get_AnimationIdleToSwim() {
    return *(_Script_Engine::AnimationAsset**)((uintptr_t)this + 0xa8);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsSwimSettingsDefinition::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsSwimSettingsDefinition");
    return result;
}
float& _Script_RsGameTechRT::RsSwimSettingsDefinition::get_MaxPlayingTimeForDiveUpAnimation() {
    return *(float*)((uintptr_t)this + 0x148);
}
float& _Script_RsGameTechRT::RsSwimSettingsDefinition::get_AnimationIdleToSwimBlendInTime() {
    return *(float*)((uintptr_t)this + 0xb0);
}
float& _Script_RsGameTechRT::RsSwimSettingsDefinition::get_BoostUnderwaterAnimationTimePenalty() {
    return *(float*)((uintptr_t)this + 0x15c);
}
float& _Script_RsGameTechRT::RsSwimSettingsDefinition::get_AnimationIdleToSwimBlendOutTime() {
    return *(float*)((uintptr_t)this + 0xb4);
}
float& _Script_RsGameTechRT::RsSwimSettingsDefinition::get_TimeOffsetToGoUnderwater() {
    return *(float*)((uintptr_t)this + 0xd8);
}
float& _Script_RsGameTechRT::RsSwimSettingsDefinition::get_VelocityThresholdToPlayIdleToSwimAnimation() {
    return *(float*)((uintptr_t)this + 0xb8);
}
float& _Script_RsGameTechRT::RsSwimSettingsDefinition::get_StaminaUsagePerSecondWhileDiving() {
    return *(float*)((uintptr_t)this + 0xbc);
}
float& _Script_RsGameTechRT::RsSwimSettingsDefinition::get_StaminaMeterShadowTime() {
    return *(float*)((uintptr_t)this + 0xc0);
}
float& _Script_RsGameTechRT::RsSwimSettingsDefinition::get_HealthUsagePerSecondWhileDiving() {
    return *(float*)((uintptr_t)this + 0xc4);
}
float& _Script_RsGameTechRT::RsSwimSettingsDefinition::get_DiveDownAnimationTimePenalty() {
    return *(float*)((uintptr_t)this + 0x154);
}
_Script_Engine::AnimationAsset*& _Script_RsGameTechRT::RsSwimSettingsDefinition::get_AnimationFromSwimToDive() {
    return *(_Script_Engine::AnimationAsset**)((uintptr_t)this + 0xc8);
}
float& _Script_RsGameTechRT::RsSwimSettingsDefinition::get_DiveUpAnimationTimePenalty() {
    return *(float*)((uintptr_t)this + 0x14c);
}
float& _Script_RsGameTechRT::RsSwimSettingsDefinition::get_AnimationFromSwimToDiveBlendInTime() {
    return *(float*)((uintptr_t)this + 0xd0);
}
float& _Script_RsGameTechRT::RsSwimSettingsDefinition::get_AnimationFromSwimToDiveBlendOutTime() {
    return *(float*)((uintptr_t)this + 0xd4);
}
float& _Script_RsGameTechRT::RsSwimSettingsDefinition::get_InitialPitchAngleWhenDiving() {
    return *(float*)((uintptr_t)this + 0xdc);
}
_Script_Engine::AnimationAsset*& _Script_RsGameTechRT::RsSwimSettingsDefinition::get_AnimationFromDiveToSwim() {
    return *(_Script_Engine::AnimationAsset**)((uintptr_t)this + 0xe0);
}
float& _Script_RsGameTechRT::RsSwimSettingsDefinition::get_AnimationFromDiveToSwimBlendInTime() {
    return *(float*)((uintptr_t)this + 0xe8);
}
float& _Script_RsGameTechRT::RsSwimSettingsDefinition::get_AnimationFromDiveToSwimBlendOutTime() {
    return *(float*)((uintptr_t)this + 0xec);
}
_Script_RsGameTechRT::RsHeroStateModifierDefinition*& _Script_RsGameTechRT::RsSwimSettingsDefinition::get_DiveToSwimHeroStateModifier() {
    return *(_Script_RsGameTechRT::RsHeroStateModifierDefinition**)((uintptr_t)this + 0xf0);
}
void _Script_RsGameTechRT::RsSwimSettingsDefinition::set_EnableDebugDrawForMovementDirections(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xf8 + 0);
    *(uint8_t*)((uintptr_t)this + 0xf8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_RsGameTechRT::RsSwimSettingsDefinition::get_EnableDebugDrawToIndicateTurningAnimation() {
    return (*(uint8_t*)((uintptr_t)this + 0xf9 + 0)) & 1 != 0;
}
bool _Script_RsGameTechRT::RsSwimSettingsDefinition::get_DisableTurningAnimations() {
    return (*(uint8_t*)((uintptr_t)this + 0xfa + 0)) & 1 != 0;
}
void _Script_RsGameTechRT::RsSwimSettingsDefinition::set_EnableDebugDrawToIndicateTurningAnimation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xf9 + 0);
    *(uint8_t*)((uintptr_t)this + 0xf9 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_RsGameTechRT::RsSwimSettingsDefinition::set_DisableTurningAnimations(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xfa + 0);
    *(uint8_t*)((uintptr_t)this + 0xfa + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_Engine::AnimationAsset*& _Script_RsGameTechRT::RsSwimSettingsDefinition::get_AnimationTurn180Right() {
    return *(_Script_Engine::AnimationAsset**)((uintptr_t)this + 0x110);
}
_Script_Engine::AnimationAsset*& _Script_RsGameTechRT::RsSwimSettingsDefinition::get_AnimationTurn180RightUnderwater() {
    return *(_Script_Engine::AnimationAsset**)((uintptr_t)this + 0x120);
}
float& _Script_RsGameTechRT::RsSwimSettingsDefinition::get_AnimationTurn180BlendInTime() {
    return *(float*)((uintptr_t)this + 0x128);
}
float& _Script_RsGameTechRT::RsSwimSettingsDefinition::get_MinimumTurningAngleInDegreesToPlayTurningAnimation() {
    return *(float*)((uintptr_t)this + 0x130);
}
float& _Script_RsGameTechRT::RsSwimSettingsDefinition::get_MinimumVelocityToPlayTurningAnimation() {
    return *(float*)((uintptr_t)this + 0x134);
}
_Script_Engine::AnimationAsset*& _Script_RsGameTechRT::RsSwimSettingsDefinition::get_AnimationStartDivingDown() {
    return *(_Script_Engine::AnimationAsset**)((uintptr_t)this + 0x140);
}
float& _Script_RsGameTechRT::RsSwimSettingsDefinition::get_MaxPlayingTimeForDiveDownAnimation() {
    return *(float*)((uintptr_t)this + 0x150);
}
