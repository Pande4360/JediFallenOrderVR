#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\AnimMontage.hpp"
#include "..\_Script_Engine\AnimationAsset.hpp"
#include "..\_Script_Engine\Controller.hpp"
#include "..\_Script_Engine\DamageType.hpp"
#include "RsSyncInstance.hpp"
bool _Script_RsGameTechRT::RsSyncInstance::IsSyncStopped() {
    return;
}
bool _Script_RsGameTechRT::RsSyncInstance::get_bLoop() {
    return (*(uint8_t*)((uintptr_t)this + 0x42 + 0)) & 1 != 0;
}
void _Script_RsGameTechRT::RsSyncInstance::set_bAlwaysTickPoseAndRefreshBones(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x41 + 0);
    *(uint8_t*)((uintptr_t)this + 0x41 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_RsGameTechRT::RsSyncInstance::set_bEndSyncOnMontageBlendingOut(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x40 + 0);
    *(uint8_t*)((uintptr_t)this + 0x40 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_RsGameTechRT::RsSyncInstance::get_Actor() {
    return (void*)((uintptr_t)this + 0x2c);
}
void* _Script_RsGameTechRT::RsSyncInstance::get_OnTakeSyncDamage() {
    return (void*)((uintptr_t)this + 0xe0);
}
_Script_Engine::AnimationAsset*& _Script_RsGameTechRT::RsSyncInstance::get_Animation() {
    return *(_Script_Engine::AnimationAsset**)((uintptr_t)this + 0x38);
}
void _Script_RsGameTechRT::RsSyncInstance::set_bLoop(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x42 + 0);
    *(uint8_t*)((uintptr_t)this + 0x42 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_RsGameTechRT::RsSyncInstance::get_bEndSyncOnMontageBlendingOut() {
    return (*(uint8_t*)((uintptr_t)this + 0x40 + 0)) & 1 != 0;
}
void _Script_RsGameTechRT::RsSyncInstance::set_bUseHeroOnGroundFallback(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x44 + 0);
    *(uint8_t*)((uintptr_t)this + 0x44 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_RsGameTechRT::RsSyncInstance::get_bAlwaysTickPoseAndRefreshBones() {
    return (*(uint8_t*)((uintptr_t)this + 0x41 + 0)) & 1 != 0;
}
bool _Script_RsGameTechRT::RsSyncInstance::get_bStopAnimationOnSyncEnd() {
    return (*(uint8_t*)((uintptr_t)this + 0x43 + 0)) & 1 != 0;
}
void _Script_RsGameTechRT::RsSyncInstance::set_bStopAnimationOnSyncEnd(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x43 + 0);
    *(uint8_t*)((uintptr_t)this + 0x43 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_RsGameTechRT::RsSyncInstance::OnMontageEndedAll(_Script_Engine::AnimMontage* Montage, bool bInterrupted) {
    return;
}
bool _Script_RsGameTechRT::RsSyncInstance::get_bUseHeroOnGroundFallback() {
    return (*(uint8_t*)((uintptr_t)this + 0x44 + 0)) & 1 != 0;
}
float& _Script_RsGameTechRT::RsSyncInstance::get_BlendInTime() {
    return *(float*)((uintptr_t)this + 0x48);
}
float& _Script_RsGameTechRT::RsSyncInstance::get_BlendOutTime() {
    return *(float*)((uintptr_t)this + 0x4c);
}
void* _Script_RsGameTechRT::RsSyncInstance::get_DeathAnimationData() {
    return (void*)((uintptr_t)this + 0x50);
}
bool _Script_RsGameTechRT::RsSyncInstance::get_bNavIgnoreZ() {
    return (*(uint8_t*)((uintptr_t)this + 0x98 + 0)) & 1 != 0;
}
void _Script_RsGameTechRT::RsSyncInstance::set_bNavIgnoreZ(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x98 + 0);
    *(uint8_t*)((uintptr_t)this + 0x98 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_RsGameTechRT::RsSyncInstance::get_OnSyncStoppedDelegate() {
    return (void*)((uintptr_t)this + 0xc0);
}
void* _Script_RsGameTechRT::RsSyncInstance::get_OnSyncEnding() {
    return (void*)((uintptr_t)this + 0xd0);
}
void* _Script_RsGameTechRT::RsSyncInstance::get_OnSyncAnimStarted() {
    return (void*)((uintptr_t)this + 0xf0);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsSyncInstance::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsSyncInstance");
    return result;
}
void _Script_RsGameTechRT::RsSyncInstance::StopSync() {
    return;
}
void _Script_RsGameTechRT::RsSyncInstance::SetBreakOnTakeDamage(void* BreakType) {
    return;
}
void _Script_RsGameTechRT::RsSyncInstance::OnTakeAnyDamageSetDeathAnimation(_Script_Engine::Actor* DamagedActor, float Damage, _Script_Engine::DamageType* DamageType, _Script_Engine::Controller* InstigatedBy, _Script_Engine::Actor* DamageCauser) {
    return;
}
void _Script_RsGameTechRT::RsSyncInstance::OnTakeAnyDamageInstance(_Script_Engine::Actor* DamagedActor, float Damage, _Script_Engine::DamageType* DamageType, _Script_Engine::Controller* InstigatedBy, _Script_Engine::Actor* DamageCauser) {
    return;
}
void _Script_RsGameTechRT::RsSyncInstance::OnTakeAnyDamageAll(_Script_Engine::Actor* DamagedActor, float Damage, _Script_Engine::DamageType* DamageType, _Script_Engine::Controller* InstigatedBy, _Script_Engine::Actor* DamageCauser) {
    return;
}
void _Script_RsGameTechRT::RsSyncInstance::OnMontageEndedInstance(_Script_Engine::AnimMontage* Montage, bool bInterrupted) {
    return;
}
