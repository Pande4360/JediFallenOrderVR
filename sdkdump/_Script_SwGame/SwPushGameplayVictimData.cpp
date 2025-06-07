#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimMontage.hpp"
#include "..\_Script_Engine\AnimationAsset.hpp"
#include "..\_Script_Engine\CurveFloat.hpp"
#include "SwPushGameplayVictimData.hpp"
float& _Script_SwGame::SwPushGameplayVictimData::get_ForcePushTimeToDestination() {
    return *(float*)((uintptr_t)this + 0x16c);
}
void _Script_SwGame::SwPushGameplayVictimData::set_bShouldForcePushHaveBackStagger(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xa + 0);
    *(uint8_t*)((uintptr_t)this + 0xa + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_SwGame::SwPushGameplayVictimData::get_ForcePushGlancing() {
    return (void*)((uintptr_t)this + 0xb0);
}
_Script_Engine::AnimationAsset*& _Script_SwGame::SwPushGameplayVictimData::get_ForcePushFailureAnimation() {
    return *(_Script_Engine::AnimationAsset**)((uintptr_t)this + 0x0);
}
void _Script_SwGame::SwPushGameplayVictimData::set_bCanModifyAngularDampening(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x150 + 0);
    *(uint8_t*)((uintptr_t)this + 0x150 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_SwGame::SwPushGameplayVictimData::get_bShouldForcePushStagger() {
    return (*(uint8_t*)((uintptr_t)this + 0x8 + 0)) & 1 != 0;
}
float& _Script_SwGame::SwPushGameplayVictimData::get_DirectDamage() {
    return *(float*)((uintptr_t)this + 0x174);
}
void _Script_SwGame::SwPushGameplayVictimData::set_bShouldForcePushStagger(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_SwGame::SwPushGameplayVictimData::set_bShouldRotateWhenImmune(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x170 + 0);
    *(uint8_t*)((uintptr_t)this + 0x170 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_SwGame::SwPushGameplayVictimData::get_bShouldForcePushStaggerPutInCombatState() {
    return (*(uint8_t*)((uintptr_t)this + 0x9 + 0)) & 1 != 0;
}
void _Script_SwGame::SwPushGameplayVictimData::set_bShouldForcePushStaggerPutInCombatState(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x9 + 0);
    *(uint8_t*)((uintptr_t)this + 0x9 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_SwGame::SwPushGameplayVictimData::get_ForcePushSpeed() {
    return *(float*)((uintptr_t)this + 0x160);
}
bool _Script_SwGame::SwPushGameplayVictimData::get_bShouldForcePushHaveBackStagger() {
    return (*(uint8_t*)((uintptr_t)this + 0xa + 0)) & 1 != 0;
}
float& _Script_SwGame::SwPushGameplayVictimData::get_GlancingDamage() {
    return *(float*)((uintptr_t)this + 0x178);
}
bool _Script_SwGame::SwPushGameplayVictimData::get_bShouldForcePushGlancingPutInCombatState() {
    return (*(uint8_t*)((uintptr_t)this + 0xb + 0)) & 1 != 0;
}
void _Script_SwGame::SwPushGameplayVictimData::set_bShouldForcePushGlancingPutInCombatState(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xb + 0);
    *(uint8_t*)((uintptr_t)this + 0xb + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_SwGame::SwPushGameplayVictimData::set_bShouldHaveMaxPushTime(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x17c + 0);
    *(uint8_t*)((uintptr_t)this + 0x17c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_SwGame::SwPushGameplayVictimData::get_ForcePushStagger() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_SwGame::SwPushGameplayVictimData::get_ForcePushBackStagger() {
    return (void*)((uintptr_t)this + 0x58);
}
_Script_Engine::AnimMontage*& _Script_SwGame::SwPushGameplayVictimData::get_ForcePushDirectHitEnterAndLoopAnimation() {
    return *(_Script_Engine::AnimMontage**)((uintptr_t)this + 0xa0);
}
_Script_Engine::AnimMontage*& _Script_SwGame::SwPushGameplayVictimData::get_ForcePushDirectHitLandAnimation() {
    return *(_Script_Engine::AnimMontage**)((uintptr_t)this + 0xa8);
}
_Script_Engine::AnimMontage*& _Script_SwGame::SwPushGameplayVictimData::get_ForcePushGlancingAnimation() {
    return *(_Script_Engine::AnimMontage**)((uintptr_t)this + 0x140);
}
_Script_Engine::CurveFloat*& _Script_SwGame::SwPushGameplayVictimData::get_DampingCurve() {
    return *(_Script_Engine::CurveFloat**)((uintptr_t)this + 0x148);
}
bool _Script_SwGame::SwPushGameplayVictimData::get_bCanModifyAngularDampening() {
    return (*(uint8_t*)((uintptr_t)this + 0x150 + 0)) & 1 != 0;
}
void _Script_SwGame::SwPushGameplayVictimData::set_bShouldDirectionHaveVariance(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x173 + 0);
    *(uint8_t*)((uintptr_t)this + 0x173 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_SwGame::SwPushGameplayVictimData::get_bShouldAddToVelocity() {
    return (*(uint8_t*)((uintptr_t)this + 0x151 + 0)) & 1 != 0;
}
void _Script_SwGame::SwPushGameplayVictimData::set_bShouldAddToVelocity(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x151 + 0);
    *(uint8_t*)((uintptr_t)this + 0x151 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_SwGame::SwPushGameplayVictimData::get_VelocityOverTimeDuration() {
    return *(float*)((uintptr_t)this + 0x154);
}
_Script_Engine::CurveFloat*& _Script_SwGame::SwPushGameplayVictimData::get_VelocityOverTimeCurve() {
    return *(_Script_Engine::CurveFloat**)((uintptr_t)this + 0x158);
}
bool _Script_SwGame::SwPushGameplayVictimData::get_bShouldSimulatePhysics() {
    return (*(uint8_t*)((uintptr_t)this + 0x164 + 0)) & 1 != 0;
}
void _Script_SwGame::SwPushGameplayVictimData::set_bShouldSimulatePhysics(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x164 + 0);
    *(uint8_t*)((uintptr_t)this + 0x164 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_SwGame::SwPushGameplayVictimData::get_bShouldDisableGravity() {
    return (*(uint8_t*)((uintptr_t)this + 0x165 + 0)) & 1 != 0;
}
bool _Script_SwGame::SwPushGameplayVictimData::get_bCanStopPush() {
    return (*(uint8_t*)((uintptr_t)this + 0x171 + 0)) & 1 != 0;
}
void _Script_SwGame::SwPushGameplayVictimData::set_bShouldDisableGravity(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x165 + 0);
    *(uint8_t*)((uintptr_t)this + 0x165 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_SwGame::SwPushGameplayVictimData::get_ForcePushDistance() {
    return *(float*)((uintptr_t)this + 0x168);
}
bool _Script_SwGame::SwPushGameplayVictimData::get_bShouldRotateWhenImmune() {
    return (*(uint8_t*)((uintptr_t)this + 0x170 + 0)) & 1 != 0;
}
void _Script_SwGame::SwPushGameplayVictimData::set_bCanStopPush(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x171 + 0);
    *(uint8_t*)((uintptr_t)this + 0x171 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_SwGame::SwPushGameplayVictimData::get_bShouldGlancingHitsBeDirectHits() {
    return (*(uint8_t*)((uintptr_t)this + 0x172 + 0)) & 1 != 0;
}
void _Script_SwGame::SwPushGameplayVictimData::set_bShouldGlancingHitsBeDirectHits(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x172 + 0);
    *(uint8_t*)((uintptr_t)this + 0x172 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_SwGame::SwPushGameplayVictimData::get_bShouldDirectionHaveVariance() {
    return (*(uint8_t*)((uintptr_t)this + 0x173 + 0)) & 1 != 0;
}
bool _Script_SwGame::SwPushGameplayVictimData::get_bShouldHaveMaxPushTime() {
    return (*(uint8_t*)((uintptr_t)this + 0x17c + 0)) & 1 != 0;
}
void _Script_SwGame::SwPushGameplayVictimData::set_bCanPushOnTopOf(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x189 + 0);
    *(uint8_t*)((uintptr_t)this + 0x189 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_SwGame::SwPushGameplayVictimData::get_MaxPushTime() {
    return *(float*)((uintptr_t)this + 0x180);
}
float& _Script_SwGame::SwPushGameplayVictimData::get_MaxPushTimeBlendout() {
    return *(float*)((uintptr_t)this + 0x184);
}
bool _Script_SwGame::SwPushGameplayVictimData::get_bShouldOverrideSingleTargetPush() {
    return (*(uint8_t*)((uintptr_t)this + 0x188 + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Script_SwGame::SwPushGameplayVictimData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SwGame.SwPushGameplayVictimData");
    return result;
}
void _Script_SwGame::SwPushGameplayVictimData::set_bShouldOverrideSingleTargetPush(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x188 + 0);
    *(uint8_t*)((uintptr_t)this + 0x188 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_SwGame::SwPushGameplayVictimData::get_bCanPushOnTopOf() {
    return (*(uint8_t*)((uintptr_t)this + 0x189 + 0)) & 1 != 0;
}
