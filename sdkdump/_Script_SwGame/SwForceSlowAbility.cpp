#include "..\FUObjectArray.hpp"
#include "..\_Script_AkAudio\AkAudioEvent.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimMontage.hpp"
#include "RsAbility.hpp"
#include "SwForceSlowAbility.hpp"
bool _Script_SwGame::SwForceSlowAbility::get_bShouldTurn() {
    return (*(uint8_t*)((uintptr_t)this + 0xec + 0)) & 1 != 0;
}
void* _Script_SwGame::SwForceSlowAbility::get_ForceMeterRow() {
    return (void*)((uintptr_t)this + 0xb8);
}
bool _Script_SwGame::SwForceSlowAbility::get_bCanRenewForceSlow() {
    return (*(uint8_t*)((uintptr_t)this + 0xc8 + 0)) & 1 != 0;
}
_Script_Engine::AnimMontage*& _Script_SwGame::SwForceSlowAbility::get_EnterHoldAnimation() {
    return *(_Script_Engine::AnimMontage**)((uintptr_t)this + 0xd0);
}
void _Script_SwGame::SwForceSlowAbility::set_bCanRenewForceSlow(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xc8 + 0);
    *(uint8_t*)((uintptr_t)this + 0xc8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_Engine::AnimMontage*& _Script_SwGame::SwForceSlowAbility::get_FailureAnimation() {
    return *(_Script_Engine::AnimMontage**)((uintptr_t)this + 0xd8);
}
void* _Script_SwGame::SwForceSlowAbility::get_MotionTweakName() {
    return (void*)((uintptr_t)this + 0xe0);
}
void* _Script_SwGame::SwForceSlowAbility::get_UpgradeData() {
    return (void*)((uintptr_t)this + 0x118);
}
float& _Script_SwGame::SwForceSlowAbility::get_MinSpeedForExtraLogicTargets() {
    return *(float*)((uintptr_t)this + 0xe8);
}
void _Script_SwGame::SwForceSlowAbility::set_bShouldTurn(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xec + 0);
    *(uint8_t*)((uintptr_t)this + 0xec + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_SwGame::SwForceSlowAbility::get_TurnDuration() {
    return *(float*)((uintptr_t)this + 0xf0);
}
_Script_AkAudio::AkAudioEvent*& _Script_SwGame::SwForceSlowAbility::get_AudioTriggerEnd() {
    return *(_Script_AkAudio::AkAudioEvent**)((uintptr_t)this + 0xf8);
}
_Script_AkAudio::AkAudioEvent*& _Script_SwGame::SwForceSlowAbility::get_AudioFail() {
    return *(_Script_AkAudio::AkAudioEvent**)((uintptr_t)this + 0x100);
}
int32_t& _Script_SwGame::SwForceSlowAbility::get_MaxGroupsSlowed() {
    return *(int32_t*)((uintptr_t)this + 0x108);
}
void* _Script_SwGame::SwForceSlowAbility::get_DefaultCameraMode() {
    return (void*)((uintptr_t)this + 0x110);
}
_Script_CoreUObject::Class* _Script_SwGame::SwForceSlowAbility::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.SwForceSlowAbility");
    return result;
}
