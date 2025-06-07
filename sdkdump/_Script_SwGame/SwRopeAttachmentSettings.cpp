#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimationAsset.hpp"
#include "..\_Script_Engine\DataAsset.hpp"
#include "..\_Script_RsGameTechRT\RsHeroStateModifierDefinition.hpp"
#include "..\_Script_RsGameTechRT\RsPhysicalAnimationProfile.hpp"
#include "SwRopeAttachmentSettings.hpp"
void _Script_SwGame::SwRopeAttachmentSettings::set_bEnableAnticipateAttachHandAttachment(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xfb + 0);
    *(uint8_t*)((uintptr_t)this + 0xfb + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_SwGame::SwRopeAttachmentSettings::get_DetachAnimBlendInTime() {
    return *(float*)((uintptr_t)this + 0x1e0);
}
float& _Script_SwGame::SwRopeAttachmentSettings::get_StrafingMinAttachmentLength() {
    return *(float*)((uintptr_t)this + 0x70);
}
void* _Script_SwGame::SwRopeAttachmentSettings::get_DetectionCones() {
    return (void*)((uintptr_t)this + 0x30);
}
bool _Script_SwGame::SwRopeAttachmentSettings::get_RequireInputForClimbing() {
    return (*(uint8_t*)((uintptr_t)this + 0x22c + 0)) & 1 != 0;
}
bool _Script_SwGame::SwRopeAttachmentSettings::get_bDebugDrawAllDetection() {
    return (*(uint8_t*)((uintptr_t)this + 0x40 + 0)) & 1 != 0;
}
bool _Script_SwGame::SwRopeAttachmentSettings::get_bEnableAnticipateAttachment() {
    return (*(uint8_t*)((uintptr_t)this + 0xfa + 0)) & 1 != 0;
}
void _Script_SwGame::SwRopeAttachmentSettings::set_bDebugDrawAllDetection(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x40 + 0);
    *(uint8_t*)((uintptr_t)this + 0x40 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_SwGame::SwRopeAttachmentSettings::get_AttachAnimBlendOutTime() {
    return *(float*)((uintptr_t)this + 0x15c);
}
void* _Script_SwGame::SwRopeAttachmentSettings::get_AttachmentBone() {
    return (void*)((uintptr_t)this + 0x48);
}
void* _Script_SwGame::SwRopeAttachmentSettings::get_DetachRopeOnNavStateChange() {
    return (void*)((uintptr_t)this + 0x50);
}
_Script_RsGameTechRT::RsHeroStateModifierDefinition*& _Script_SwGame::SwRopeAttachmentSettings::get_RopeStrafeModifier() {
    return *(_Script_RsGameTechRT::RsHeroStateModifierDefinition**)((uintptr_t)this + 0x60);
}
_Script_RsGameTechRT::RsHeroStateModifierDefinition*& _Script_SwGame::SwRopeAttachmentSettings::get_RopeStrafeFaceRopeModifier() {
    return *(_Script_RsGameTechRT::RsHeroStateModifierDefinition**)((uintptr_t)this + 0x68);
}
float& _Script_SwGame::SwRopeAttachmentSettings::get_StrafingMaxAttachmentLength() {
    return *(float*)((uintptr_t)this + 0x74);
}
float& _Script_SwGame::SwRopeAttachmentSettings::get_AnticipateGroundAttachAnimBlendOutTime() {
    return *(float*)((uintptr_t)this + 0x14c);
}
float& _Script_SwGame::SwRopeAttachmentSettings::get_StrafingConstraintStiffness() {
    return *(float*)((uintptr_t)this + 0x78);
}
float& _Script_SwGame::SwRopeAttachmentSettings::get_StrafingConstraintDamping() {
    return *(float*)((uintptr_t)this + 0x7c);
}
float& _Script_SwGame::SwRopeAttachmentSettings::get_StrafingAutoDetachOverRopeLength() {
    return *(float*)((uintptr_t)this + 0x80);
}
float& _Script_SwGame::SwRopeAttachmentSettings::get_StrafingToSwingClearanceSweepLength() {
    return *(float*)((uintptr_t)this + 0x84);
}
float& _Script_SwGame::SwRopeAttachmentSettings::get_TurnAroundAnimBlendInTime() {
    return *(float*)((uintptr_t)this + 0xf0);
}
float& _Script_SwGame::SwRopeAttachmentSettings::get_StrafingToSwingMinVerticalVelocity() {
    return *(float*)((uintptr_t)this + 0x88);
}
float& _Script_SwGame::SwRopeAttachmentSettings::get_SwingAttachmentStiffenTime() {
    return *(float*)((uintptr_t)this + 0x168);
}
float& _Script_SwGame::SwRopeAttachmentSettings::get_StrafingToSwingMaxVerticalVelocity() {
    return *(float*)((uintptr_t)this + 0x8c);
}
float& _Script_SwGame::SwRopeAttachmentSettings::get_ReturnToStrafingMinElapsedTime() {
    return *(float*)((uintptr_t)this + 0x90);
}
_Script_Engine::AnimationAsset*& _Script_SwGame::SwRopeAttachmentSettings::get_AttachAnimation() {
    return *(_Script_Engine::AnimationAsset**)((uintptr_t)this + 0x150);
}
bool _Script_SwGame::SwRopeAttachmentSettings::get_DebugDrawStrafingClearanceSweeps() {
    return (*(uint8_t*)((uintptr_t)this + 0x94 + 0)) & 1 != 0;
}
float& _Script_SwGame::SwRopeAttachmentSettings::get_AttachAnimBlendInTime() {
    return *(float*)((uintptr_t)this + 0x158);
}
float& _Script_SwGame::SwRopeAttachmentSettings::get_TurnAroundBeginDetectionAngle() {
    return *(float*)((uintptr_t)this + 0xd8);
}
void _Script_SwGame::SwRopeAttachmentSettings::set_DebugDrawStrafingClearanceSweeps(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x94 + 0);
    *(uint8_t*)((uintptr_t)this + 0x94 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_SwGame::SwRopeAttachmentSettings::get_AnticipateGroundAttachAnimBlendInTime() {
    return *(float*)((uintptr_t)this + 0x148);
}
float& _Script_SwGame::SwRopeAttachmentSettings::get_IdleVelocityThreshold() {
    return *(float*)((uintptr_t)this + 0x98);
}
float& _Script_SwGame::SwRopeAttachmentSettings::get_JumpOffForwardLowAnimBlendInTime() {
    return *(float*)((uintptr_t)this + 0x180);
}
float& _Script_SwGame::SwRopeAttachmentSettings::get_IdleSwingPhaseThreshold() {
    return *(float*)((uintptr_t)this + 0x9c);
}
_Script_Engine::AnimationAsset*& _Script_SwGame::SwRopeAttachmentSettings::get_StartSwingForwardLowAnimation() {
    return *(_Script_Engine::AnimationAsset**)((uintptr_t)this + 0xa0);
}
_Script_Engine::AnimationAsset*& _Script_SwGame::SwRopeAttachmentSettings::get_StartSwingForwardHighAnimation() {
    return *(_Script_Engine::AnimationAsset**)((uintptr_t)this + 0xa8);
}
float& _Script_SwGame::SwRopeAttachmentSettings::get_SwingAttachmentSlideStopDistance() {
    return *(float*)((uintptr_t)this + 0x164);
}
_Script_Engine::AnimationAsset*& _Script_SwGame::SwRopeAttachmentSettings::get_StartSwingBackwardLowAnimation() {
    return *(_Script_Engine::AnimationAsset**)((uintptr_t)this + 0xb0);
}
_Script_Engine::AnimationAsset*& _Script_SwGame::SwRopeAttachmentSettings::get_StartSwingBackwardHighAnimation() {
    return *(_Script_Engine::AnimationAsset**)((uintptr_t)this + 0xb8);
}
float& _Script_SwGame::SwRopeAttachmentSettings::get_StartSwingBlendInTime() {
    return *(float*)((uintptr_t)this + 0xc0);
}
_Script_Engine::AnimationAsset*& _Script_SwGame::SwRopeAttachmentSettings::get_AnticipateGroundAttachAnimation() {
    return *(_Script_Engine::AnimationAsset**)((uintptr_t)this + 0x140);
}
float& _Script_SwGame::SwRopeAttachmentSettings::get_StartSwingBlendOutTime() {
    return *(float*)((uintptr_t)this + 0xc4);
}
float& _Script_SwGame::SwRopeAttachmentSettings::get_StartSwingMinimumSignedSwingPhase() {
    return *(float*)((uintptr_t)this + 0xcc);
}
float& _Script_SwGame::SwRopeAttachmentSettings::get_StartSwingHighSwingPhaseThreshold() {
    return *(float*)((uintptr_t)this + 0xc8);
}
float& _Script_SwGame::SwRopeAttachmentSettings::get_StartSwingForwardImpulse() {
    return *(float*)((uintptr_t)this + 0xd0);
}
int32_t& _Script_SwGame::SwRopeAttachmentSettings::get_AnticipateAttachLookAheadSamples() {
    return *(int32_t*)((uintptr_t)this + 0x124);
}
float& _Script_SwGame::SwRopeAttachmentSettings::get_StartSwingBackwardImpulse() {
    return *(float*)((uintptr_t)this + 0xd4);
}
float& _Script_SwGame::SwRopeAttachmentSettings::get_TurnAroundEndDetectionAngle() {
    return *(float*)((uintptr_t)this + 0xdc);
}
_Script_Engine::AnimationAsset*& _Script_SwGame::SwRopeAttachmentSettings::get_TurnAroundLeftToRightAnimation() {
    return *(_Script_Engine::AnimationAsset**)((uintptr_t)this + 0xe0);
}
_Script_Engine::AnimationAsset*& _Script_SwGame::SwRopeAttachmentSettings::get_TurnAroundRightToLeftAnimation() {
    return *(_Script_Engine::AnimationAsset**)((uintptr_t)this + 0xe8);
}
_Script_Engine::AnimationAsset*& _Script_SwGame::SwRopeAttachmentSettings::get_JumpOffBackwardLowLeftAnimation() {
    return *(_Script_Engine::AnimationAsset**)((uintptr_t)this + 0x1a8);
}
float& _Script_SwGame::SwRopeAttachmentSettings::get_TurnAroundAnimBlendOutTime() {
    return *(float*)((uintptr_t)this + 0xf4);
}
bool _Script_SwGame::SwRopeAttachmentSettings::get_bEndTurnAroundOnAnimationEnd() {
    return (*(uint8_t*)((uintptr_t)this + 0xf8 + 0)) & 1 != 0;
}
void _Script_SwGame::SwRopeAttachmentSettings::set_bEndTurnAroundOnAnimationEnd(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xf8 + 0);
    *(uint8_t*)((uintptr_t)this + 0xf8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_SwGame::SwRopeAttachmentSettings::get_bDriveTurnAroundWithRootMotion() {
    return (*(uint8_t*)((uintptr_t)this + 0xf9 + 0)) & 1 != 0;
}
void _Script_SwGame::SwRopeAttachmentSettings::set_bDriveTurnAroundWithRootMotion(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xf9 + 0);
    *(uint8_t*)((uintptr_t)this + 0xf9 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_SwGame::SwRopeAttachmentSettings::set_bEnableAnticipateAttachment(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xfa + 0);
    *(uint8_t*)((uintptr_t)this + 0xfa + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_SwGame::SwRopeAttachmentSettings::get_bEnableAnticipateAttachHandAttachment() {
    return (*(uint8_t*)((uintptr_t)this + 0xfb + 0)) & 1 != 0;
}
void* _Script_SwGame::SwRopeAttachmentSettings::get_DontAnticipateAttachTags() {
    return (void*)((uintptr_t)this + 0x100);
}
float& _Script_SwGame::SwRopeAttachmentSettings::get_SwingAttachmentSlideTime() {
    return *(float*)((uintptr_t)this + 0x160);
}
float& _Script_SwGame::SwRopeAttachmentSettings::get_AnticipateAttachLookAheadTime() {
    return *(float*)((uintptr_t)this + 0x120);
}
float& _Script_SwGame::SwRopeAttachmentSettings::get_AnticipateAttachLookAheadRadius() {
    return *(float*)((uintptr_t)this + 0x128);
}
_Script_Engine::AnimationAsset*& _Script_SwGame::SwRopeAttachmentSettings::get_AnticipateAirAttachAnimation() {
    return *(_Script_Engine::AnimationAsset**)((uintptr_t)this + 0x130);
}
float& _Script_SwGame::SwRopeAttachmentSettings::get_AnticipateAirAttachAnimBlendInTime() {
    return *(float*)((uintptr_t)this + 0x138);
}
float& _Script_SwGame::SwRopeAttachmentSettings::get_AnticipateAirAttachAnimBlendOutTime() {
    return *(float*)((uintptr_t)this + 0x13c);
}
void* _Script_SwGame::SwRopeAttachmentSettings::get_SwingHipAttachmentBone() {
    return (void*)((uintptr_t)this + 0x170);
}
_Script_Engine::AnimationAsset*& _Script_SwGame::SwRopeAttachmentSettings::get_JumpOffForwardLowAnimation() {
    return *(_Script_Engine::AnimationAsset**)((uintptr_t)this + 0x178);
}
float& _Script_SwGame::SwRopeAttachmentSettings::get_JumpOffForwardLowAnimBlendOutTime() {
    return *(float*)((uintptr_t)this + 0x184);
}
_Script_Engine::AnimationAsset*& _Script_SwGame::SwRopeAttachmentSettings::get_JumpOffForwardHighAnimation() {
    return *(_Script_Engine::AnimationAsset**)((uintptr_t)this + 0x188);
}
float& _Script_SwGame::SwRopeAttachmentSettings::get_JumpOffForwardHighAnimBlendInTime() {
    return *(float*)((uintptr_t)this + 0x190);
}
float& _Script_SwGame::SwRopeAttachmentSettings::get_JumpOffForwardHighAnimBlendOutTime() {
    return *(float*)((uintptr_t)this + 0x194);
}
float& _Script_SwGame::SwRopeAttachmentSettings::get_JumpOffForwardHighSwingPhaseThreshold() {
    return *(float*)((uintptr_t)this + 0x198);
}
_Script_Engine::AnimationAsset*& _Script_SwGame::SwRopeAttachmentSettings::get_JumpOffBackwardLowRightAnimation() {
    return *(_Script_Engine::AnimationAsset**)((uintptr_t)this + 0x1a0);
}
float& _Script_SwGame::SwRopeAttachmentSettings::get_JumpOffBackwardLowAnimBlendInTime() {
    return *(float*)((uintptr_t)this + 0x1b0);
}
float& _Script_SwGame::SwRopeAttachmentSettings::get_JumpOffBackwardLowAnimBlendOutTime() {
    return *(float*)((uintptr_t)this + 0x1b4);
}
_Script_Engine::AnimationAsset*& _Script_SwGame::SwRopeAttachmentSettings::get_JumpOffBackwardHighRightAnimation() {
    return *(_Script_Engine::AnimationAsset**)((uintptr_t)this + 0x1b8);
}
_Script_Engine::AnimationAsset*& _Script_SwGame::SwRopeAttachmentSettings::get_JumpOffBackwardHighLeftAnimation() {
    return *(_Script_Engine::AnimationAsset**)((uintptr_t)this + 0x1c0);
}
float& _Script_SwGame::SwRopeAttachmentSettings::get_JumpOffBackwardHighAnimBlendInTime() {
    return *(float*)((uintptr_t)this + 0x1c8);
}
float& _Script_SwGame::SwRopeAttachmentSettings::get_JumpOffBackwardHighAnimBlendOutTime() {
    return *(float*)((uintptr_t)this + 0x1cc);
}
float& _Script_SwGame::SwRopeAttachmentSettings::get_JumpOffBackwardHighSwingPhaseThreshold() {
    return *(float*)((uintptr_t)this + 0x1d0);
}
_Script_Engine::AnimationAsset*& _Script_SwGame::SwRopeAttachmentSettings::get_DetachAnimation() {
    return *(_Script_Engine::AnimationAsset**)((uintptr_t)this + 0x1d8);
}
float& _Script_SwGame::SwRopeAttachmentSettings::get_DetachAnimBlendOutTime() {
    return *(float*)((uintptr_t)this + 0x1e4);
}
bool _Script_SwGame::SwRopeAttachmentSettings::get_bEnableSwingHeadLook() {
    return (*(uint8_t*)((uintptr_t)this + 0x1e8 + 0)) & 1 != 0;
}
void _Script_SwGame::SwRopeAttachmentSettings::set_bEnableSwingHeadLook(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1e8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1e8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_SwGame::SwRopeAttachmentSettings::get_SwingHeadLookMaxAngle() {
    return *(float*)((uintptr_t)this + 0x1ec);
}
float& _Script_SwGame::SwRopeAttachmentSettings::get_SwingHeadLookTime() {
    return *(float*)((uintptr_t)this + 0x1f0);
}
bool _Script_SwGame::SwRopeAttachmentSettings::get_bEnableSwingImpactBracingSweeps() {
    return (*(uint8_t*)((uintptr_t)this + 0x1f4 + 0)) & 1 != 0;
}
void _Script_SwGame::SwRopeAttachmentSettings::set_bEnableSwingImpactBracingSweeps(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1f4 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1f4 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_SwGame::SwRopeAttachmentSettings::get_SwingImpactBracingMinRequiredSpeed() {
    return *(float*)((uintptr_t)this + 0x1f8);
}
float& _Script_SwGame::SwRopeAttachmentSettings::get_SwingImpactBracingLookAheadTime() {
    return *(float*)((uintptr_t)this + 0x1fc);
}
float& _Script_SwGame::SwRopeAttachmentSettings::get_SwingImpactBracingSweepRadius() {
    return *(float*)((uintptr_t)this + 0x200);
}
bool _Script_SwGame::SwRopeAttachmentSettings::get_bInterpolateSwingImpactBracingWeights() {
    return (*(uint8_t*)((uintptr_t)this + 0x204 + 0)) & 1 != 0;
}
void _Script_SwGame::SwRopeAttachmentSettings::set_bInterpolateSwingImpactBracingWeights(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x204 + 0);
    *(uint8_t*)((uintptr_t)this + 0x204 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_SwGame::SwRopeAttachmentSettings::get_SwingImpactBracingFoundImpactInterpolationSpeed() {
    return *(float*)((uintptr_t)this + 0x208);
}
float& _Script_SwGame::SwRopeAttachmentSettings::get_SwingImpactBracingLostImpactInterpolationSpeed() {
    return *(float*)((uintptr_t)this + 0x20c);
}
bool _Script_SwGame::SwRopeAttachmentSettings::get_bPerformBackwardSwingImpactBracingSweeps() {
    return (*(uint8_t*)((uintptr_t)this + 0x210 + 0)) & 1 != 0;
}
void _Script_SwGame::SwRopeAttachmentSettings::set_bPerformBackwardSwingImpactBracingSweeps(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x210 + 0);
    *(uint8_t*)((uintptr_t)this + 0x210 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_SwGame::SwRopeAttachmentSettings::get_bDebugDrawSwingImpactBracingSweeps() {
    return (*(uint8_t*)((uintptr_t)this + 0x211 + 0)) & 1 != 0;
}
void _Script_SwGame::SwRopeAttachmentSettings::set_bDebugDrawSwingImpactBracingSweeps(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x211 + 0);
    *(uint8_t*)((uintptr_t)this + 0x211 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_SwGame::SwRopeAttachmentSettings::get_bDebugPrintSwingImpactBracingWeights() {
    return (*(uint8_t*)((uintptr_t)this + 0x212 + 0)) & 1 != 0;
}
void _Script_SwGame::SwRopeAttachmentSettings::set_bDebugPrintSwingImpactBracingWeights(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x212 + 0);
    *(uint8_t*)((uintptr_t)this + 0x212 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_SwGame::SwRopeAttachmentSettings::get_ClimbAscendDescendInputThreshold() {
    return *(float*)((uintptr_t)this + 0x214);
}
float& _Script_SwGame::SwRopeAttachmentSettings::get_ClimbTurnInputThreshold() {
    return *(float*)((uintptr_t)this + 0x218);
}
float& _Script_SwGame::SwRopeAttachmentSettings::get_ClimbSpeed() {
    return *(float*)((uintptr_t)this + 0x21c);
}
float& _Script_SwGame::SwRopeAttachmentSettings::get_ClimbMinAttachmentLength() {
    return *(float*)((uintptr_t)this + 0x220);
}
float& _Script_SwGame::SwRopeAttachmentSettings::get_ClimbMaxAttachmentLength() {
    return *(float*)((uintptr_t)this + 0x224);
}
float& _Script_SwGame::SwRopeAttachmentSettings::get_ClimbSafetySweepLength() {
    return *(float*)((uintptr_t)this + 0x228);
}
void _Script_SwGame::SwRopeAttachmentSettings::set_RequireInputForClimbing(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x22c + 0);
    *(uint8_t*)((uintptr_t)this + 0x22c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_SwGame::SwRopeAttachmentSettings::get_ClimbAttachmentStiffenTime() {
    return *(float*)((uintptr_t)this + 0x230);
}
_Script_Engine::AnimationAsset*& _Script_SwGame::SwRopeAttachmentSettings::get_ClimbAscendLeftHandAnimation() {
    return *(_Script_Engine::AnimationAsset**)((uintptr_t)this + 0x238);
}
_Script_Engine::AnimationAsset*& _Script_SwGame::SwRopeAttachmentSettings::get_ClimbAscendRightHandAnimation() {
    return *(_Script_Engine::AnimationAsset**)((uintptr_t)this + 0x240);
}
_Script_Engine::AnimationAsset*& _Script_SwGame::SwRopeAttachmentSettings::get_ClimbDescendLeftHandAnimation() {
    return *(_Script_Engine::AnimationAsset**)((uintptr_t)this + 0x248);
}
_Script_Engine::AnimationAsset*& _Script_SwGame::SwRopeAttachmentSettings::get_ClimbDescendRightHandAnimation() {
    return *(_Script_Engine::AnimationAsset**)((uintptr_t)this + 0x250);
}
_Script_Engine::AnimationAsset*& _Script_SwGame::SwRopeAttachmentSettings::get_ClimbTurnLeftAnimation() {
    return *(_Script_Engine::AnimationAsset**)((uintptr_t)this + 0x258);
}
_Script_Engine::AnimationAsset*& _Script_SwGame::SwRopeAttachmentSettings::get_ClimbTurnRightAnimation() {
    return *(_Script_Engine::AnimationAsset**)((uintptr_t)this + 0x260);
}
_Script_Engine::AnimationAsset*& _Script_SwGame::SwRopeAttachmentSettings::get_ClimbJumpOffForwardAnimation() {
    return *(_Script_Engine::AnimationAsset**)((uintptr_t)this + 0x268);
}
float& _Script_SwGame::SwRopeAttachmentSettings::get_ClimbBlendInTime() {
    return *(float*)((uintptr_t)this + 0x270);
}
float& _Script_SwGame::SwRopeAttachmentSettings::get_ClimbBlendOutTime() {
    return *(float*)((uintptr_t)this + 0x274);
}
bool _Script_SwGame::SwRopeAttachmentSettings::get_DebugDrawClimbSafetySweeps() {
    return (*(uint8_t*)((uintptr_t)this + 0x278 + 0)) & 1 != 0;
}
void _Script_SwGame::SwRopeAttachmentSettings::set_DebugDrawClimbSafetySweeps(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x278 + 0);
    *(uint8_t*)((uintptr_t)this + 0x278 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_SwGame::SwRopeAttachmentSettings::get_LeftHandBone() {
    return (void*)((uintptr_t)this + 0x280);
}
void* _Script_SwGame::SwRopeAttachmentSettings::get_RightHandBone() {
    return (void*)((uintptr_t)this + 0x288);
}
float& _Script_SwGame::SwRopeAttachmentSettings::get_HandToRopeMinAttachDistance() {
    return *(float*)((uintptr_t)this + 0x290);
}
float& _Script_SwGame::SwRopeAttachmentSettings::get_HandToRopeAttachIKBlendTime() {
    return *(float*)((uintptr_t)this + 0x294);
}
float& _Script_SwGame::SwRopeAttachmentSettings::get_HandReadjustmentIKBlendTime() {
    return *(float*)((uintptr_t)this + 0x298);
}
float& _Script_SwGame::SwRopeAttachmentSettings::get_HandClimbPositionSwitchThreshold() {
    return *(float*)((uintptr_t)this + 0x29c);
}
float& _Script_SwGame::SwRopeAttachmentSettings::get_HandAttractParticleSpeed() {
    return *(float*)((uintptr_t)this + 0x2a0);
}
float& _Script_SwGame::SwRopeAttachmentSettings::get_HandAutoAttachmentTimeout() {
    return *(float*)((uintptr_t)this + 0x2a4);
}
bool _Script_SwGame::SwRopeAttachmentSettings::get_bEnableHandAutoReattach() {
    return (*(uint8_t*)((uintptr_t)this + 0x2a8 + 0)) & 1 != 0;
}
void _Script_SwGame::SwRopeAttachmentSettings::set_bEnableHandAutoReattach(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2a8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2a8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_SwGame::SwRopeAttachmentSettings::get_bEnableHandAutoDetach() {
    return (*(uint8_t*)((uintptr_t)this + 0x2a9 + 0)) & 1 != 0;
}
void _Script_SwGame::SwRopeAttachmentSettings::set_bEnableHandAutoDetach(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2a9 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2a9 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_SwGame::SwRopeAttachmentSettings::get_IdleHandAttachmentAutoAupdateMode() {
    return (void*)((uintptr_t)this + 0x2aa);
}
void* _Script_SwGame::SwRopeAttachmentSettings::get_ClimbingHandAttachmentAutoAupdateMode() {
    return (void*)((uintptr_t)this + 0x2ab);
}
void* _Script_SwGame::SwRopeAttachmentSettings::get_SwingingHandAttachmentAutoAupdateMode() {
    return (void*)((uintptr_t)this + 0x2ac);
}
_Script_RsGameTechRT::RsPhysicalAnimationProfile*& _Script_SwGame::SwRopeAttachmentSettings::get_PhysicalAnimationProfileHanging() {
    return *(_Script_RsGameTechRT::RsPhysicalAnimationProfile**)((uintptr_t)this + 0x2b0);
}
_Script_RsGameTechRT::RsPhysicalAnimationProfile*& _Script_SwGame::SwRopeAttachmentSettings::get_PhysicalAnimationProfileClimbing() {
    return *(_Script_RsGameTechRT::RsPhysicalAnimationProfile**)((uintptr_t)this + 0x2b8);
}
_Script_CoreUObject::Class* _Script_SwGame::SwRopeAttachmentSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.SwRopeAttachmentSettings");
    return result;
}
