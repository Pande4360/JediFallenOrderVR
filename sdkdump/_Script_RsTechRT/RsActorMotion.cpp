#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Transform.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_CoreUObject\Vector2D.hpp"
#include "..\_Script_Engine\CharacterMovementComponent.hpp"
#include "RsActorMotion.hpp"
#include "RsActorTweaksBook.hpp"
#include "RsGeoLocator.hpp"
#include "RsInfluence.hpp"
#include "RsTopology.hpp"
#include "RsTweaks.hpp"
bool _Script_RsTechRT::RsActorMotion::get_GenerateCollisionFromTweaks() {
    return (*(uint8_t*)((uintptr_t)this + 0x7f8 + 0)) & 1 != 0;
}
_Script_RsTechRT::RsActorTweaksBook*& _Script_RsTechRT::RsActorMotion::get_Tweaks() {
    return *(_Script_RsTechRT::RsActorTweaksBook**)((uintptr_t)this + 0x7e0);
}
float _Script_RsTechRT::RsActorMotion::GetLean() {
    return;
}
bool _Script_RsTechRT::RsActorMotion::SetCollisionFromAll(void* SetName, bool replaceOldCollision) {
    return;
}
bool _Script_RsTechRT::RsActorMotion::get_FreezeCenterOfGravity() {
    return (*(uint8_t*)((uintptr_t)this + 0x820 + 0)) & 1 != 0;
}
bool _Script_RsTechRT::RsActorMotion::get_GenerateCollisionFromComponents() {
    return (*(uint8_t*)((uintptr_t)this + 0x7f9 + 0)) & 1 != 0;
}
void* _Script_RsTechRT::RsActorMotion::get_TweakFile() {
    return (void*)((uintptr_t)this + 0x7e8);
}
void _Script_RsTechRT::RsActorMotion::ApplyRsVelocityImpulse(_Script_CoreUObject::Vector Impulse) {
    return;
}
void _Script_RsTechRT::RsActorMotion::set_GenerateCollisionFromTweaks(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x7f8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x7f8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_RsTechRT::RsActorMotion::SetUseGravityOverride(bool shouldOverride) {
    return;
}
void _Script_RsTechRT::RsActorMotion::DebugToggleCheatFlying() {
    return;
}
void* _Script_RsTechRT::RsActorMotion::get_CollisionTweakFile() {
    return (void*)((uintptr_t)this + 0x7f0);
}
void _Script_RsTechRT::RsActorMotion::ResetVisualDamping() {
    return;
}
void _Script_RsTechRT::RsActorMotion::set_GenerateCollisionFromComponents(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x7f9 + 0);
    *(uint8_t*)((uintptr_t)this + 0x7f9 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_RsTechRT::RsActorMotion::get_DefaultCollisionSet() {
    return (void*)((uintptr_t)this + 0x800);
}
void _Script_RsTechRT::RsActorMotion::PushInfluence(_Script_RsTechRT::RsInfluence& influence, bool isImpulse, bool overrideExisting) {
    return;
}
void* _Script_RsTechRT::RsActorMotion::get_UpTarget() {
    return (void*)((uintptr_t)this + 0x808);
}
void* _Script_RsTechRT::RsActorMotion::get_AppliedAcceleration() {
    return (void*)((uintptr_t)this + 0x814);
}
_Script_CoreUObject::Vector _Script_RsTechRT::RsActorMotion::GetAngularVelocity(float Dt) {
    return;
}
void _Script_RsTechRT::RsActorMotion::set_FreezeCenterOfGravity(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x820 + 0);
    *(uint8_t*)((uintptr_t)this + 0x820 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_RsTechRT::RsActorMotion::get_RelativeAngleToIntentDirection() {
    return *(float*)((uintptr_t)this + 0x824);
}
float& _Script_RsTechRT::RsActorMotion::get_InputDirectionZ() {
    return *(float*)((uintptr_t)this + 0x828);
}
bool _Script_RsTechRT::RsActorMotion::SetMotionParm(void* parmName) {
    return;
}
void* _Script_RsTechRT::RsActorMotion::get_OnMotionParmChangedEvent() {
    return (void*)((uintptr_t)this + 0x830);
}
_Script_CoreUObject::Class* _Script_RsTechRT::RsActorMotion::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsTechRT.RsActorMotion");
    return result;
}
bool _Script_RsTechRT::RsActorMotion::UpdateConstrainedOrientation(int32_t constraintID, _Script_RsTechRT::RsGeoLocator& Orientation, float OrientationStrength) {
    return;
}
bool _Script_RsTechRT::RsActorMotion::EnableClampToTopology(bool enable) {
    return;
}
bool _Script_RsTechRT::RsActorMotion::UpdateConstrainedBoneLocation(int32_t constraintID, void* BoneName, _Script_RsTechRT::RsGeoLocator& Location, _Script_CoreUObject::Vector2D linearRange, _Script_CoreUObject::Vector axisOrPlaneNormal, _Script_CoreUObject::Vector BoneOffset, float Springiness, float SpringDamping) {
    return;
}
void _Script_RsTechRT::RsActorMotion::Unfreeze() {
    return;
}
void _Script_RsTechRT::RsActorMotion::SetIsOverridingRootMotionDropOffCheck(bool shouldOverride) {
    return;
}
void _Script_RsTechRT::RsActorMotion::SetVisualDamping(float motionDampFactor, float motionDampOffSpeed, float orientationDampFactor, float orientationDampOffSpeed) {
    return;
}
void _Script_RsTechRT::RsActorMotion::SetRsVelocity(_Script_CoreUObject::Vector NewVelocity) {
    return;
}
void _Script_RsTechRT::RsActorMotion::SetRsAngularVelocity(_Script_CoreUObject::Vector NewVelocity) {
    return;
}
void _Script_RsTechRT::RsActorMotion::SetRootMotionDropOffCheckEnabled(bool Enabled, bool shouldOverride) {
    return;
}
void* _Script_RsTechRT::RsActorMotion::GetAimDirectionMode() {
    return;
}
bool _Script_RsTechRT::RsActorMotion::SetMotionTweaks(_Script_RsTechRT::RsTweaks* MotionTweaks) {
    return;
}
bool _Script_RsTechRT::RsActorMotion::DisableClampToTopology() {
    return;
}
void _Script_RsTechRT::RsActorMotion::SetMaintainedVelocityTarget(_Script_CoreUObject::Vector VelocityTarget, void* velocityBase, bool inHorizontalPlane) {
    return;
}
void _Script_RsTechRT::RsActorMotion::SetGravityOverride(_Script_CoreUObject::Vector Gravity, bool shouldOverride) {
    return;
}
void _Script_RsTechRT::RsActorMotion::NotifyRootAttachmentChanged(bool bIsAttached) {
    return;
}
bool _Script_RsTechRT::RsActorMotion::SetCollisionFromTweaks(void* tweakName, bool replaceOldTweaks) {
    return;
}
bool _Script_RsTechRT::RsActorMotion::SetCollisionFromComponents(void* SetName, bool replaceOldComponentCollision) {
    return;
}
void _Script_RsTechRT::RsActorMotion::Freeze() {
    return;
}
void _Script_RsTechRT::RsActorMotion::SetAimDirectionMode(void* Mode) {
    return;
}
bool _Script_RsTechRT::RsActorMotion::GetIsOverridingRootMotionDropOffCheck() {
    return;
}
bool _Script_RsTechRT::RsActorMotion::ReleaseConstraint(int32_t constraintID) {
    return;
}
bool _Script_RsTechRT::RsActorMotion::GetIsRootMotionDropOffCheckEnabled() {
    return;
}
bool _Script_RsTechRT::RsActorMotion::PushMotionTweaks(_Script_RsTechRT::RsTweaks* MotionTweaks, float TweenTime, void*& InstanceName) {
    return;
}
bool _Script_RsTechRT::RsActorMotion::PushMotionParm(void* parmName, float TweenTime, void* InstanceName) {
    return;
}
bool _Script_RsTechRT::RsActorMotion::PopMotionTweaks(_Script_RsTechRT::RsTweaks* MotionTweaks, float TweenTime, void*& InstanceName) {
    return;
}
float _Script_RsTechRT::RsActorMotion::GetControllerInflexion() {
    return;
}
bool _Script_RsTechRT::RsActorMotion::PopMotionParm(void* parmName, float TweenTime, void* InstanceName) {
    return;
}
bool _Script_RsTechRT::RsActorMotion::IsMotionParmActive(void* parmName) {
    return;
}
bool _Script_RsTechRT::RsActorMotion::GetUseGravityOverride() {
    return;
}
_Script_CoreUObject::Vector _Script_RsTechRT::RsActorMotion::GetRsVelocity() {
    return;
}
_Script_RsTechRT::RsTweaks* _Script_RsTechRT::RsActorMotion::GetTweaks(void* tweaksName) {
    return;
}
bool _Script_RsTechRT::RsActorMotion::DebugGetResolvedMotionParm(void*& resolvedMotionParm) {
    return;
}
float _Script_RsTechRT::RsActorMotion::GetMotionSample(void* motionSample) {
    return;
}
_Script_CoreUObject::Vector _Script_RsTechRT::RsActorMotion::GetMaxVelocityInPadDirection() {
    return;
}
_Script_CoreUObject::Vector _Script_RsTechRT::RsActorMotion::GetMaxVelocityInDirection(_Script_CoreUObject::Vector& Direction) {
    return;
}
void _Script_RsTechRT::RsActorMotion::GetKineticWorldLocation(_Script_CoreUObject::Transform& WorldLocation) {
    return;
}
_Script_CoreUObject::Vector _Script_RsTechRT::RsActorMotion::GetGravityOverride() {
    return;
}
_Script_CoreUObject::Vector _Script_RsTechRT::RsActorMotion::GetGravity() {
    return;
}
_Script_RsTechRT::RsTopology _Script_RsTechRT::RsActorMotion::GetExtrapolatedTopology(float lookAhead) {
    return;
}
void* _Script_RsTechRT::RsActorMotion::GetCurrentCollisionTweaks() {
    return;
}
bool _Script_RsTechRT::RsActorMotion::DebugGetMotionParmStack(void*& motionParmStack) {
    return;
}
int32_t _Script_RsTechRT::RsActorMotion::ConstrainOrientation(_Script_RsTechRT::RsGeoLocator& Orientation, float OrientationStrength) {
    return;
}
int32_t _Script_RsTechRT::RsActorMotion::ConstrainBoneToLocation(void* BoneName, _Script_RsTechRT::RsGeoLocator& Location, void* positionType, void* orientationType, _Script_CoreUObject::Vector2D linearRange, _Script_CoreUObject::Vector axisOrPlaneNormal, _Script_CoreUObject::Vector BoneOffset, float Springiness, float SpringDamping) {
    return;
}
void _Script_RsTechRT::RsActorMotion::ClearPendingInfluence(void* DeferredInfluence, bool overrideExisting) {
    return;
}
void _Script_RsTechRT::RsActorMotion::ClearMaintainedVelocity() {
    return;
}
void _Script_RsTechRT::RsActorMotion::ClearCollisionFromTweaks() {
    return;
}
