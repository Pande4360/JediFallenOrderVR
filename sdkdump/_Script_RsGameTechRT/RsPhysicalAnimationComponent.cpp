#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\SkeletalMeshComponent.hpp"
#include "RsPhysicalAnimationComponent.hpp"
#include "RsPhysicalAnimationProfile.hpp"
#include "..\_Script_RsTechRT\RsPhysicalAnimationBaseComponent.hpp"
bool _Script_RsGameTechRT::RsPhysicalAnimationComponent::get_ForceToCallTickDuringTickComponent() {
    return (*(uint8_t*)((uintptr_t)this + 0x188 + 0)) & 1 != 0;
}
void _Script_RsGameTechRT::RsPhysicalAnimationComponent::set_ForceToCallTickDuringTickComponent(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x188 + 0);
    *(uint8_t*)((uintptr_t)this + 0x188 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_RsGameTechRT::RsPhysicalAnimationComponent::get_DrawDebugSkeletonFromAnimation() {
    return (*(uint8_t*)((uintptr_t)this + 0x189 + 0)) & 1 != 0;
}
void _Script_RsGameTechRT::RsPhysicalAnimationComponent::set_m_UseDebugAngularDriveParameters(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x194 + 0);
    *(uint8_t*)((uintptr_t)this + 0x194 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_RsGameTechRT::RsPhysicalAnimationComponent::get_m_UseDebugAngularDriveParameters() {
    return (*(uint8_t*)((uintptr_t)this + 0x194 + 0)) & 1 != 0;
}
void _Script_RsGameTechRT::RsPhysicalAnimationComponent::set_DrawDebugSkeletonFromAnimation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x189 + 0);
    *(uint8_t*)((uintptr_t)this + 0x189 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
int32_t& _Script_RsGameTechRT::RsPhysicalAnimationComponent::get_m_CurrentTestScenario() {
    return *(int32_t*)((uintptr_t)this + 0x18c);
}
float& _Script_RsGameTechRT::RsPhysicalAnimationComponent::get_m_Scenario01_Amplitude() {
    return *(float*)((uintptr_t)this + 0x190);
}
float& _Script_RsGameTechRT::RsPhysicalAnimationComponent::get_m_DebugAngularDriveParameters_Spring() {
    return *(float*)((uintptr_t)this + 0x198);
}
float& _Script_RsGameTechRT::RsPhysicalAnimationComponent::get_m_DebugAngularDriveParameters_Damping() {
    return *(float*)((uintptr_t)this + 0x19c);
}
bool _Script_RsGameTechRT::RsPhysicalAnimationComponent::get_m_DebugUseOnlyChildAngularVelocityToDriveMotors() {
    return (*(uint8_t*)((uintptr_t)this + 0x1a0 + 0)) & 1 != 0;
}
void _Script_RsGameTechRT::RsPhysicalAnimationComponent::set_m_DebugUseOnlyChildAngularVelocityToDriveMotors(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1a0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1a0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_RsGameTechRT::RsPhysicalAnimationComponent::get_m_DebugUseSmoothedAngularVelocitiesToDriveMotors() {
    return (*(uint8_t*)((uintptr_t)this + 0x1a1 + 0)) & 1 != 0;
}
void _Script_RsGameTechRT::RsPhysicalAnimationComponent::set_m_DebugUseSmoothedAngularVelocitiesToDriveMotors(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1a1 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1a1 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_RsGameTechRT::RsPhysicalAnimationProfile*& _Script_RsGameTechRT::RsPhysicalAnimationComponent::get_DebugTestScenarioProfile() {
    return *(_Script_RsGameTechRT::RsPhysicalAnimationProfile**)((uintptr_t)this + 0x1a8);
}
_Script_Engine::Actor*& _Script_RsGameTechRT::RsPhysicalAnimationComponent::get_DebugOtherActorToApplyTestMovement() {
    return *(_Script_Engine::Actor**)((uintptr_t)this + 0x1b0);
}
void* _Script_RsGameTechRT::RsPhysicalAnimationComponent::get_m_ProfilesQueue() {
    return (void*)((uintptr_t)this + 0x1c8);
}
void* _Script_RsGameTechRT::RsPhysicalAnimationComponent::get_m_Parameters() {
    return (void*)((uintptr_t)this + 0x1f0);
}
void* _Script_RsGameTechRT::RsPhysicalAnimationComponent::get_m_AttachedActors() {
    return (void*)((uintptr_t)this + 0x478);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsPhysicalAnimationComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsPhysicalAnimationComponent");
    return result;
}
void _Script_RsGameTechRT::RsPhysicalAnimationComponent::OnPostPerformBlendInPhysics(_Script_Engine::SkeletalMeshComponent* SkeletalMeshComponent) {
    return;
}
void _Script_RsGameTechRT::RsPhysicalAnimationComponent::OnPerformCustomBlendInPhysics_BuddyDroid(_Script_Engine::SkeletalMeshComponent* SkeletalMeshComponent, void*& InRequiredBones, void*& InBoneSpaceTransforms) {
    return;
}
void _Script_RsGameTechRT::RsPhysicalAnimationComponent::OnPerformCustomBlendInPhysics(_Script_Engine::SkeletalMeshComponent* SkeletalMeshComponent, void*& InRequiredBones, void*& InBoneSpaceTransforms) {
    return;
}
