#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\PrimitiveComponent.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
#include "..\_Script_Engine\SkinnedMeshComponent.hpp"
#include "RsRopeAttachmentComponent.hpp"
#include "RsRopeComponent.hpp"
#include "RsSetRopeAttachmentParams.hpp"
void _Script_RsGameTechRT::RsRopeComponent::SetRopeAwake(bool awake) {
    return;
}
void* _Script_RsGameTechRT::RsRopeComponent::get_OnRopeAttachedGroundEnd() {
    return (void*)((uintptr_t)this + 0xdb0);
}
void* _Script_RsGameTechRT::RsRopeComponent::get_OnRopeAttached() {
    return (void*)((uintptr_t)this + 0xd40);
}
void* _Script_RsGameTechRT::RsRopeComponent::get_OnRopeDetached() {
    return (void*)((uintptr_t)this + 0xd50);
}
void* _Script_RsGameTechRT::RsRopeComponent::get_OnRopeForcePullStart() {
    return (void*)((uintptr_t)this + 0xd60);
}
_Script_CoreUObject::Vector _Script_RsGameTechRT::RsRopeComponent::GetRopeParticleDefaultPosition(int32_t ParticleIndex) {
    return;
}
void* _Script_RsGameTechRT::RsRopeComponent::get_OnRopeForcePullEnd() {
    return (void*)((uintptr_t)this + 0xd70);
}
void* _Script_RsGameTechRT::RsRopeComponent::get_OnRopeAttachedGroundBegin() {
    return (void*)((uintptr_t)this + 0xda0);
}
bool _Script_RsGameTechRT::RsRopeComponent::get_bRopeCollisionEnabled() {
    return (*(uint8_t*)((uintptr_t)this + 0xe2c + 0)) & 1 != 0;
}
void* _Script_RsGameTechRT::RsRopeComponent::get_OnRopeAttachedAirBegin() {
    return (void*)((uintptr_t)this + 0xd80);
}
void* _Script_RsGameTechRT::RsRopeComponent::get_OnRopeAttachedAirEnd() {
    return (void*)((uintptr_t)this + 0xd90);
}
void _Script_RsGameTechRT::RsRopeComponent::SetRopeUnstretchedLength(float newLength) {
    return;
}
void* _Script_RsGameTechRT::RsRopeComponent::get_OnPostUpdateRope() {
    return (void*)((uintptr_t)this + 0xdc0);
}
bool _Script_RsGameTechRT::RsRopeComponent::IsRopePhysicsActive() {
    return;
}
float& _Script_RsGameTechRT::RsRopeComponent::get_Length() {
    return *(float*)((uintptr_t)this + 0xdd0);
}
float& _Script_RsGameTechRT::RsRopeComponent::get_RopeAdditiveStretchLength() {
    return *(float*)((uintptr_t)this + 0xdd4);
}
bool _Script_RsGameTechRT::RsRopeComponent::get_bSeparateLengthForRopeStrafe() {
    return (*(uint8_t*)((uintptr_t)this + 0x1e78 + 0)) & 1 != 0;
}
float& _Script_RsGameTechRT::RsRopeComponent::get_RopeParticleRadius() {
    return *(float*)((uintptr_t)this + 0xdd8);
}
float& _Script_RsGameTechRT::RsRopeComponent::get_RopeMotionDriverCollisionInterpolationDuration() {
    return *(float*)((uintptr_t)this + 0xddc);
}
float& _Script_RsGameTechRT::RsRopeComponent::get_SwingRangeDegrees() {
    return *(float*)((uintptr_t)this + 0xde0);
}
float& _Script_RsGameTechRT::RsRopeComponent::get_RopeRenderStrainedAirMinAlpha() {
    return *(float*)((uintptr_t)this + 0xe10);
}
float& _Script_RsGameTechRT::RsRopeComponent::get_ClimbAttachmentRangeDegrees() {
    return *(float*)((uintptr_t)this + 0xde4);
}
void _Script_RsGameTechRT::RsRopeComponent::set_bCanForcePullRopeWithMotionDriver(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xe2d + 0);
    *(uint8_t*)((uintptr_t)this + 0xe2d + 0) = (cur_value & ~32) | (value ? 32 : 0);
}
float& _Script_RsGameTechRT::RsRopeComponent::get_PreferredAttachmentLength() {
    return *(float*)((uintptr_t)this + 0xde8);
}
float& _Script_RsGameTechRT::RsRopeComponent::get_DisableRopeCollisionUpToLength() {
    return *(float*)((uintptr_t)this + 0xdec);
}
float& _Script_RsGameTechRT::RsRopeComponent::get_OverrideSwingSlowdownRangePercentage() {
    return *(float*)((uintptr_t)this + 0xdf0);
}
float& _Script_RsGameTechRT::RsRopeComponent::get_RopeGroundDetachLengthInterpolateTime() {
    return *(float*)((uintptr_t)this + 0xdfc);
}
float& _Script_RsGameTechRT::RsRopeComponent::get_OverrideSwingSlowdownStrength() {
    return *(float*)((uintptr_t)this + 0xdf4);
}
void _Script_RsGameTechRT::RsRopeComponent::set_bCanForcePullRope(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xe2d + 0);
    *(uint8_t*)((uintptr_t)this + 0xe2d + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
bool _Script_RsGameTechRT::RsRopeComponent::CanRopeClimb() {
    return;
}
float& _Script_RsGameTechRT::RsRopeComponent::get_RopeAirDetachLengthInterpolateTime() {
    return *(float*)((uintptr_t)this + 0xdf8);
}
float& _Script_RsGameTechRT::RsRopeComponent::get_OverrideGroundMaxAttachmentLength() {
    return *(float*)((uintptr_t)this + 0xe00);
}
void _Script_RsGameTechRT::RsRopeComponent::set_bCanSwingOnRope(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xe2c + 0);
    *(uint8_t*)((uintptr_t)this + 0xe2c + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
float& _Script_RsGameTechRT::RsRopeComponent::get_RopeMeshRadius() {
    return *(float*)((uintptr_t)this + 0xe04);
}
void _Script_RsGameTechRT::RsRopeComponent::set_bCanClimbAscendDescendOnRope(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xe2c + 0);
    *(uint8_t*)((uintptr_t)this + 0xe2c + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
float& _Script_RsGameTechRT::RsRopeComponent::get_RopeTileMaterial() {
    return *(float*)((uintptr_t)this + 0xe08);
}
void _Script_RsGameTechRT::RsRopeComponent::set_bRenderStrainedWhenAttachedOnGround(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xe2e + 0);
    *(uint8_t*)((uintptr_t)this + 0xe2e + 0) = (cur_value & ~32) | (value ? 32 : 0);
}
float& _Script_RsGameTechRT::RsRopeComponent::get_RopeRenderStrainedAirInterpolationSpeed() {
    return *(float*)((uintptr_t)this + 0xe0c);
}
float& _Script_RsGameTechRT::RsRopeComponent::get_RopeRenderStrainedAirMaxAlpha() {
    return *(float*)((uintptr_t)this + 0xe14);
}
void _Script_RsGameTechRT::RsRopeComponent::set_bCanClimbTurnOnRope(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xe2c + 0);
    *(uint8_t*)((uintptr_t)this + 0xe2c + 0) = (cur_value & ~32) | (value ? 32 : 0);
}
float& _Script_RsGameTechRT::RsRopeComponent::get_RopeRenderStrainedGroundInterpolationSpeed() {
    return *(float*)((uintptr_t)this + 0xe18);
}
float& _Script_RsGameTechRT::RsRopeComponent::get_RopeRenderStrainedGroundMinAlpha() {
    return *(float*)((uintptr_t)this + 0xe1c);
}
bool _Script_RsGameTechRT::RsRopeComponent::get_bCanForcePullRopeOnGround() {
    return (*(uint8_t*)((uintptr_t)this + 0xe2d + 0)) & 8 != 0;
}
void _Script_RsGameTechRT::RsRopeComponent::AddRopeParticleAttachment(int32_t ParticleIndex, bool setParticlePosition, _Script_CoreUObject::Vector particlePosition, bool autoWake) {
    return;
}
int32_t& _Script_RsGameTechRT::RsRopeComponent::get_RopeCollisionChannels() {
    return *(int32_t*)((uintptr_t)this + 0xe28);
}
float& _Script_RsGameTechRT::RsRopeComponent::get_RopeRenderStrainedGroundMaxAlpha() {
    return *(float*)((uintptr_t)this + 0xe20);
}
void _Script_RsGameTechRT::RsRopeComponent::set_bSeparateLengthForRopeStrafe(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1e78 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1e78 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_RsGameTechRT::RsRopeComponent::get_RopeDeactivationDistance() {
    return *(float*)((uintptr_t)this + 0xe24);
}
void _Script_RsGameTechRT::RsRopeComponent::set_bRopeCollisionEnabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xe2c + 0);
    *(uint8_t*)((uintptr_t)this + 0xe2c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_RsGameTechRT::RsRopeComponent::set_bCanForcePullRopeOverLength(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xe2d + 0);
    *(uint8_t*)((uintptr_t)this + 0xe2d + 0) = (cur_value & ~128) | (value ? 128 : 0);
}
int32_t _Script_RsGameTechRT::RsRopeComponent::GetPreferredRopeAttachmentParticle() {
    return;
}
bool _Script_RsGameTechRT::RsRopeComponent::get_bCanAttachToRopeInAir() {
    return (*(uint8_t*)((uintptr_t)this + 0xe2c + 0)) & 2 != 0;
}
bool _Script_RsGameTechRT::RsRopeComponent::get_bCanAttachToRopeOnGround() {
    return (*(uint8_t*)((uintptr_t)this + 0xe2d + 0)) & 1 != 0;
}
void _Script_RsGameTechRT::RsRopeComponent::set_bCanAttachToRopeInAir(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xe2c + 0);
    *(uint8_t*)((uintptr_t)this + 0xe2c + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
void _Script_RsGameTechRT::RsRopeComponent::set_bRenderStrainedWhenAttachedInAir(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xe2e + 0);
    *(uint8_t*)((uintptr_t)this + 0xe2e + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
bool _Script_RsGameTechRT::RsRopeComponent::get_bCanSwingOnRope() {
    return (*(uint8_t*)((uintptr_t)this + 0xe2c + 0)) & 4 != 0;
}
bool _Script_RsGameTechRT::RsRopeComponent::get_bCanClimbOnRope() {
    return (*(uint8_t*)((uintptr_t)this + 0xe2c + 0)) & 8 != 0;
}
bool _Script_RsGameTechRT::RsRopeComponent::get_bFaceRopeWhenAttachedOnGround() {
    return (*(uint8_t*)((uintptr_t)this + 0xe2d + 0)) & 2 != 0;
}
void _Script_RsGameTechRT::RsRopeComponent::set_bCanClimbOnRope(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xe2c + 0);
    *(uint8_t*)((uintptr_t)this + 0xe2c + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
float& _Script_RsGameTechRT::RsRopeComponent::get_RopeForcePullLength() {
    return *(float*)((uintptr_t)this + 0x1e74);
}
bool _Script_RsGameTechRT::RsRopeComponent::get_bCanClimbAscendDescendOnRope() {
    return (*(uint8_t*)((uintptr_t)this + 0xe2c + 0)) & 16 != 0;
}
bool _Script_RsGameTechRT::RsRopeComponent::get_bCanClimbTurnOnRope() {
    return (*(uint8_t*)((uintptr_t)this + 0xe2c + 0)) & 32 != 0;
}
bool _Script_RsGameTechRT::RsRopeComponent::get_bAllowRopeReattach() {
    return (*(uint8_t*)((uintptr_t)this + 0xe2c + 0)) & 64 != 0;
}
bool _Script_RsGameTechRT::RsRopeComponent::get_bSlideToPreferredAttachmentLength() {
    return (*(uint8_t*)((uintptr_t)this + 0xe2c + 0)) & 128 != 0;
}
void _Script_RsGameTechRT::RsRopeComponent::set_bAllowRopeReattach(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xe2c + 0);
    *(uint8_t*)((uintptr_t)this + 0xe2c + 0) = (cur_value & ~64) | (value ? 64 : 0);
}
void _Script_RsGameTechRT::RsRopeComponent::set_bForcePullRopeFromPreferredAttachment(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xe2d + 0);
    *(uint8_t*)((uintptr_t)this + 0xe2d + 0) = (cur_value & ~64) | (value ? 64 : 0);
}
void _Script_RsGameTechRT::RsRopeComponent::set_bSlideToPreferredAttachmentLength(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xe2c + 0);
    *(uint8_t*)((uintptr_t)this + 0xe2c + 0) = (cur_value & ~128) | (value ? 128 : 0);
}
void _Script_RsGameTechRT::RsRopeComponent::set_bCanAttachToRopeOnGround(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xe2d + 0);
    *(uint8_t*)((uintptr_t)this + 0xe2d + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_RsGameTechRT::RsRopeComponent::set_bFaceRopeWhenAttachedOnGround(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xe2d + 0);
    *(uint8_t*)((uintptr_t)this + 0xe2d + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_RsGameTechRT::RsRopeComponent::get_bCanForcePullRope() {
    return (*(uint8_t*)((uintptr_t)this + 0xe2d + 0)) & 4 != 0;
}
bool _Script_RsGameTechRT::RsRopeComponent::get_bForcePullRopeFromPreferredAttachment() {
    return (*(uint8_t*)((uintptr_t)this + 0xe2d + 0)) & 64 != 0;
}
void _Script_RsGameTechRT::RsRopeComponent::set_bCanForcePullRopeOnGround(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xe2d + 0);
    *(uint8_t*)((uintptr_t)this + 0xe2d + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
void _Script_RsGameTechRT::RsRopeComponent::set_bCanForcePullRopeInAir(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xe2d + 0);
    *(uint8_t*)((uintptr_t)this + 0xe2d + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
bool _Script_RsGameTechRT::RsRopeComponent::get_bCanForcePullRopeInAir() {
    return (*(uint8_t*)((uintptr_t)this + 0xe2d + 0)) & 16 != 0;
}
bool _Script_RsGameTechRT::RsRopeComponent::get_bCanForcePullRopeWithMotionDriver() {
    return (*(uint8_t*)((uintptr_t)this + 0xe2d + 0)) & 32 != 0;
}
bool _Script_RsGameTechRT::RsRopeComponent::get_bCanForcePullRopeOverLength() {
    return (*(uint8_t*)((uintptr_t)this + 0xe2d + 0)) & 128 != 0;
}
bool _Script_RsGameTechRT::RsRopeComponent::get_bSpawnSettled() {
    return (*(uint8_t*)((uintptr_t)this + 0xe2e + 0)) & 1 != 0;
}
void _Script_RsGameTechRT::RsRopeComponent::set_bSpawnSettled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xe2e + 0);
    *(uint8_t*)((uintptr_t)this + 0xe2e + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_RsGameTechRT::RsRopeComponent::get_bAllowAutoDetachOverLength() {
    return (*(uint8_t*)((uintptr_t)this + 0xe2e + 0)) & 2 != 0;
}
void _Script_RsGameTechRT::RsRopeComponent::set_bAllowAutoDetachOverLength(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xe2e + 0);
    *(uint8_t*)((uintptr_t)this + 0xe2e + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_RsGameTechRT::RsRopeComponent::get_bAllowResetRopePhysics() {
    return (*(uint8_t*)((uintptr_t)this + 0xe2e + 0)) & 4 != 0;
}
void _Script_RsGameTechRT::RsRopeComponent::set_bAllowResetRopePhysics(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xe2e + 0);
    *(uint8_t*)((uintptr_t)this + 0xe2e + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
bool _Script_RsGameTechRT::RsRopeComponent::get_bOnlyRenderToAttachment() {
    return (*(uint8_t*)((uintptr_t)this + 0xe2e + 0)) & 8 != 0;
}
void _Script_RsGameTechRT::RsRopeComponent::set_bOnlyRenderToAttachment(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xe2e + 0);
    *(uint8_t*)((uintptr_t)this + 0xe2e + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
bool _Script_RsGameTechRT::RsRopeComponent::get_bRenderStrainedWhenAttachedInAir() {
    return (*(uint8_t*)((uintptr_t)this + 0xe2e + 0)) & 16 != 0;
}
bool _Script_RsGameTechRT::RsRopeComponent::get_bRenderStrainedWhenAttachedOnGround() {
    return (*(uint8_t*)((uintptr_t)this + 0xe2e + 0)) & 32 != 0;
}
bool _Script_RsGameTechRT::RsRopeComponent::get_bAllowDeactivateRopeOwner() {
    return (*(uint8_t*)((uintptr_t)this + 0xe2e + 0)) & 64 != 0;
}
void _Script_RsGameTechRT::RsRopeComponent::set_bAllowDeactivateRopeOwner(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xe2e + 0);
    *(uint8_t*)((uintptr_t)this + 0xe2e + 0) = (cur_value & ~64) | (value ? 64 : 0);
}
float& _Script_RsGameTechRT::RsRopeComponent::get_RopeStrafeLength() {
    return *(float*)((uintptr_t)this + 0x1e70);
}
bool _Script_RsGameTechRT::RsRopeComponent::get_bSeparateLengthForRopeForcePull() {
    return (*(uint8_t*)((uintptr_t)this + 0x1e78 + 0)) & 2 != 0;
}
void _Script_RsGameTechRT::RsRopeComponent::set_bSeparateLengthForRopeForcePull(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1e78 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1e78 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_RsGameTechRT::RsRopeComponent::get_IsPole() {
    return (*(uint8_t*)((uintptr_t)this + 0x1e78 + 0)) & 4 != 0;
}
bool _Script_RsGameTechRT::RsRopeComponent::CanRopeClimbAscendDescend() {
    return;
}
void _Script_RsGameTechRT::RsRopeComponent::set_IsPole(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1e78 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1e78 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
bool _Script_RsGameTechRT::RsRopeComponent::get_IsRopeInteractable() {
    return (*(uint8_t*)((uintptr_t)this + 0x1e78 + 0)) & 8 != 0;
}
void _Script_RsGameTechRT::RsRopeComponent::set_IsRopeInteractable(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1e78 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1e78 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsRopeComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsRopeComponent");
    return result;
}
bool _Script_RsGameTechRT::RsRopeComponent::ShouldSlideToPreferredAttachmentLength() {
    return;
}
void _Script_RsGameTechRT::RsRopeComponent::SetTargetRopeLength(float targetLength, float timeToReachTarget) {
    return;
}
void _Script_RsGameTechRT::RsRopeComponent::SetRopeSwingAxis(_Script_CoreUObject::Vector SwingAxis) {
    return;
}
void _Script_RsGameTechRT::RsRopeComponent::SetRopeStretched(bool stretched, bool interpolateRopeLength, float timeToInterpolate) {
    return;
}
int32_t _Script_RsGameTechRT::RsRopeComponent::GetRopeParticleAtLength(float ropeLength) {
    return;
}
void _Script_RsGameTechRT::RsRopeComponent::SetRopeStretchDirection(_Script_CoreUObject::Vector Direction) {
    return;
}
_Script_CoreUObject::Vector _Script_RsGameTechRT::RsRopeComponent::GetRopeParticleVelocity(int32_t ParticleIndex) {
    return;
}
void _Script_RsGameTechRT::RsRopeComponent::SetRopeParticleVelocity(int32_t ParticleIndex, _Script_CoreUObject::Vector Velocity) {
    return;
}
void _Script_RsGameTechRT::RsRopeComponent::SetRopeParticleRadius(float newRadius) {
    return;
}
void _Script_RsGameTechRT::RsRopeComponent::SetRopeParticlePosition(int32_t ParticleIndex, _Script_CoreUObject::Vector Position) {
    return;
}
void _Script_RsGameTechRT::RsRopeComponent::SetRopeMotionDriverCollisionEnabled(bool Enabled) {
    return;
}
float _Script_RsGameTechRT::RsRopeComponent::GetLengthForRopeParticle(int32_t ParticleIndex) {
    return;
}
void _Script_RsGameTechRT::RsRopeComponent::SetRopeMotionDriver(_Script_Engine::SceneComponent* motionDriver, bool EnableCollision) {
    return;
}
void _Script_RsGameTechRT::RsRopeComponent::SetRopeCollisionEnabled(bool Enabled) {
    return;
}
bool _Script_RsGameTechRT::RsRopeComponent::IsRopeStretched() {
    return;
}
void _Script_RsGameTechRT::RsRopeComponent::SetRopeCollisionChannels(int32_t collisionChannels) {
    return;
}
void _Script_RsGameTechRT::RsRopeComponent::SetRopeAttachmentPoint(_Script_CoreUObject::Vector ropeAttachmentPtWorld) {
    return;
}
void _Script_RsGameTechRT::RsRopeComponent::SetRopeAttachmentLength(float attachmentLength) {
    return;
}
bool _Script_RsGameTechRT::RsRopeComponent::SetRopeAttachment(_Script_RsGameTechRT::RsSetRopeAttachmentParams& Params) {
    return;
}
void _Script_RsGameTechRT::RsRopeComponent::SetRopeAdditiveStretchLength(float newLength) {
    return;
}
void _Script_RsGameTechRT::RsRopeComponent::SetCurrentRopeLength(float newLength) {
    return;
}
void _Script_RsGameTechRT::RsRopeComponent::ResetRopeRenderStrainedAlpha() {
    return;
}
void _Script_RsGameTechRT::RsRopeComponent::ResetRopePhysics(bool keepAwake) {
    return;
}
void _Script_RsGameTechRT::RsRopeComponent::RemoveRopeParticleAttachment(int32_t ParticleIndex) {
    return;
}
void _Script_RsGameTechRT::RsRopeComponent::RemoveRopeCollisionExclusionComponent(_Script_Engine::PrimitiveComponent* Component) {
    return;
}
void _Script_RsGameTechRT::RsRopeComponent::RemoveRopeCollisionExclusionActor(_Script_Engine::Actor* Actor) {
    return;
}
void _Script_RsGameTechRT::RsRopeComponent::RemoveAllRopeParticleAttachments() {
    return;
}
bool _Script_RsGameTechRT::RsRopeComponent::IsRopeParticleAttached(int32_t ParticleIndex) {
    return;
}
bool _Script_RsGameTechRT::RsRopeComponent::IsRopeActiveAndMoving() {
    return;
}
bool _Script_RsGameTechRT::RsRopeComponent::IsParticleIndexValid(int32_t ParticleIndex) {
    return;
}
bool _Script_RsGameTechRT::RsRopeComponent::HasRopeMotionDriver() {
    return;
}
bool _Script_RsGameTechRT::RsRopeComponent::HasRopeAttachment() {
    return;
}
float _Script_RsGameTechRT::RsRopeComponent::GetRopeUnstretchedLength() {
    return;
}
_Script_CoreUObject::Vector _Script_RsGameTechRT::RsRopeComponent::GetRopeSwingAxis() {
    return;
}
float _Script_RsGameTechRT::RsRopeComponent::GetRopeStretchedProgression() {
    return;
}
float _Script_RsGameTechRT::RsRopeComponent::GetRopeStretchedLength() {
    return;
}
float _Script_RsGameTechRT::RsRopeComponent::CalculateRopeLengthToPoint(_Script_CoreUObject::Vector& queryPtWorld) {
    return;
}
_Script_CoreUObject::Vector _Script_RsGameTechRT::RsRopeComponent::GetRopeStretchDirection() {
    return;
}
float _Script_RsGameTechRT::RsRopeComponent::GetRopePreferredAttachmentLengthFromAnchor() {
    return;
}
_Script_CoreUObject::Vector _Script_RsGameTechRT::RsRopeComponent::GetRopeParticlePosition(int32_t ParticleIndex) {
    return;
}
bool _Script_RsGameTechRT::RsRopeComponent::GetRopeMotionDriverCollisionEnabled() {
    return;
}
void _Script_RsGameTechRT::RsRopeComponent::AttractRopeParticlesTowardsDefaultPosition(float AttractionForce, float DistanceThreshold) {
    return;
}
_Script_Engine::SceneComponent* _Script_RsGameTechRT::RsRopeComponent::GetRopeMotionDriver() {
    return;
}
float _Script_RsGameTechRT::RsRopeComponent::GetRopeCurrentMaxLength() {
    return;
}
bool _Script_RsGameTechRT::RsRopeComponent::GetRopeCollisionEnabled() {
    return;
}
_Script_CoreUObject::Vector _Script_RsGameTechRT::RsRopeComponent::GetRopeAttachmentPointWorld() {
    return;
}
_Script_CoreUObject::Vector _Script_RsGameTechRT::RsRopeComponent::GetRopeAttachmentPointLocal() {
    return;
}
float _Script_RsGameTechRT::RsRopeComponent::GetRopeAttachmentLength() {
    return;
}
_Script_RsGameTechRT::RsRopeAttachmentComponent* _Script_RsGameTechRT::RsRopeComponent::GetRopeAttachment() {
    return;
}
float _Script_RsGameTechRT::RsRopeComponent::GetRopeAdditiveStretchLength() {
    return;
}
int32_t _Script_RsGameTechRT::RsRopeComponent::GetNumRopeParticles() {
    return;
}
int32_t _Script_RsGameTechRT::RsRopeComponent::GetLastRopeParticle() {
    return;
}
float _Script_RsGameTechRT::RsRopeComponent::GetCurrentRopeLength() {
    return;
}
void _Script_RsGameTechRT::RsRopeComponent::GetClosestParticleOnRope(int32_t& outClosestParticleIdx, float& outDistSq, _Script_CoreUObject::Vector queryPtWorld) {
    return;
}
void _Script_RsGameTechRT::RsRopeComponent::ClearRopeVelocity() {
    return;
}
void _Script_RsGameTechRT::RsRopeComponent::ClearRopeAttachment() {
    return;
}
bool _Script_RsGameTechRT::RsRopeComponent::CanRopeSwing() {
    return;
}
bool _Script_RsGameTechRT::RsRopeComponent::CanRopeForcePull() {
    return;
}
bool _Script_RsGameTechRT::RsRopeComponent::CanRopeClimbTurn() {
    return;
}
void _Script_RsGameTechRT::RsRopeComponent::ApplyImpulseToRopeParticle(int32_t ParticleIndex, _Script_CoreUObject::Vector Impulse) {
    return;
}
void _Script_RsGameTechRT::RsRopeComponent::AddRopeCollisionExclusionComponent(_Script_Engine::PrimitiveComponent* Component) {
    return;
}
void _Script_RsGameTechRT::RsRopeComponent::AddRopeCollisionExclusionActor(_Script_Engine::Actor* Actor) {
    return;
}
