#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimSequence.hpp"
#include "RsAIAnimInstance.hpp"
#include "RsGameAnimInstance.hpp"
float& _Script_RsGameTechRT::RsAIAnimInstance::get_TransitionRelativeAngle() {
    return *(float*)((uintptr_t)this + 0x1110);
}
_Script_Engine::AnimSequence*& _Script_RsGameTechRT::RsAIAnimInstance::get_StartMovingAnimation() {
    return *(_Script_Engine::AnimSequence**)((uintptr_t)this + 0x1118);
}
float& _Script_RsGameTechRT::RsAIAnimInstance::get_TransitionCombatRadius() {
    return *(float*)((uintptr_t)this + 0x1130);
}
void _Script_RsGameTechRT::RsAIAnimInstance::set_bIsCombatPose(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1149 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1149 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_Engine::AnimSequence*& _Script_RsGameTechRT::RsAIAnimInstance::get_StopMovingAnimation() {
    return *(_Script_Engine::AnimSequence**)((uintptr_t)this + 0x1120);
}
float& _Script_RsGameTechRT::RsAIAnimInstance::get_ArrivingDistanceRange() {
    return *(float*)((uintptr_t)this + 0x1128);
}
void _Script_RsGameTechRT::RsAIAnimInstance::set_bMoveTransitionEnabledPerClass(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x112c + 0);
    *(uint8_t*)((uintptr_t)this + 0x112c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_RsGameTechRT::RsAIAnimInstance::get_bMoveTransitionEnabledPerClass() {
    return (*(uint8_t*)((uintptr_t)this + 0x112c + 0)) & 1 != 0;
}
void* _Script_RsGameTechRT::RsAIAnimInstance::get_MoveTransitionConditions() {
    return (void*)((uintptr_t)this + 0x1138);
}
bool _Script_RsGameTechRT::RsAIAnimInstance::get_bIsAttacking() {
    return (*(uint8_t*)((uintptr_t)this + 0x1148 + 0)) & 1 != 0;
}
void _Script_RsGameTechRT::RsAIAnimInstance::set_bIsAttacking(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1148 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1148 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_RsGameTechRT::RsAIAnimInstance::get_bIsCombatPose() {
    return (*(uint8_t*)((uintptr_t)this + 0x1149 + 0)) & 1 != 0;
}
bool _Script_RsGameTechRT::RsAIAnimInstance::get_bIsFocusTracking() {
    return (*(uint8_t*)((uintptr_t)this + 0x114a + 0)) & 1 != 0;
}
void _Script_RsGameTechRT::RsAIAnimInstance::set_bIsFocusTracking(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x114a + 0);
    *(uint8_t*)((uintptr_t)this + 0x114a + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_RsGameTechRT::RsAIAnimInstance::get_bIsAiming() {
    return (*(uint8_t*)((uintptr_t)this + 0x114b + 0)) & 1 != 0;
}
void _Script_RsGameTechRT::RsAIAnimInstance::set_bIsAiming(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x114b + 0);
    *(uint8_t*)((uintptr_t)this + 0x114b + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_RsGameTechRT::RsAIAnimInstance::get_bIsMoving() {
    return (*(uint8_t*)((uintptr_t)this + 0x114c + 0)) & 1 != 0;
}
void _Script_RsGameTechRT::RsAIAnimInstance::set_bIsMoving(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x114c + 0);
    *(uint8_t*)((uintptr_t)this + 0x114c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_RsGameTechRT::RsAIAnimInstance::get_FocusYaw() {
    return *(float*)((uintptr_t)this + 0x1150);
}
float& _Script_RsGameTechRT::RsAIAnimInstance::get_FocusPitch() {
    return *(float*)((uintptr_t)this + 0x1154);
}
float& _Script_RsGameTechRT::RsAIAnimInstance::get_AimYaw() {
    return *(float*)((uintptr_t)this + 0x1158);
}
float& _Script_RsGameTechRT::RsAIAnimInstance::get_AimPitch() {
    return *(float*)((uintptr_t)this + 0x115c);
}
void* _Script_RsGameTechRT::RsAIAnimInstance::get_AwarenessReactionState() {
    return (void*)((uintptr_t)this + 0x1160);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsAIAnimInstance::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsAIAnimInstance");
    return result;
}
void _Script_RsGameTechRT::RsAIAnimInstance::SetPlayingInAirAnimation(bool IsPlaying) {
    return;
}
void _Script_RsGameTechRT::RsAIAnimInstance::SetAllowMoveTransition(bool bUseMoveTransition) {
    return;
}
bool _Script_RsGameTechRT::RsAIAnimInstance::IsPlayingInAirAnimation() {
    return;
}
bool _Script_RsGameTechRT::RsAIAnimInstance::GetAllowMoveTransition() {
    return;
}
