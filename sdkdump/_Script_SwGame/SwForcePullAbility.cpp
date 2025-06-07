#include "..\FUObjectArray.hpp"
#include "..\_Script_AkAudio\AkAudioEvent.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimMontage.hpp"
#include "..\_Script_Engine\AnimationAsset.hpp"
#include "..\_Script_Engine\DataTable.hpp"
#include "..\_Script_Engine\ParticleSystem.hpp"
#include "RsAbility.hpp"
#include "SwForcePullAbility.hpp"
_Script_Engine::DataTable*& _Script_SwGame::SwForcePullAbility::get_WeightTable() {
    return *(_Script_Engine::DataTable**)((uintptr_t)this + 0xb8);
}
_Script_Engine::AnimMontage*& _Script_SwGame::SwForcePullAbility::get_PullSuccessAnimation() {
    return *(_Script_Engine::AnimMontage**)((uintptr_t)this + 0xd0);
}
void* _Script_SwGame::SwForcePullAbility::get_ForceMeterRow() {
    return (void*)((uintptr_t)this + 0xc0);
}
void* _Script_SwGame::SwForcePullAbility::get_DropSection() {
    return (void*)((uintptr_t)this + 0xf8);
}
_Script_Engine::AnimMontage*& _Script_SwGame::SwForcePullAbility::get_PullAlternateAnimation() {
    return *(_Script_Engine::AnimMontage**)((uintptr_t)this + 0xd8);
}
_Script_Engine::AnimMontage*& _Script_SwGame::SwForcePullAbility::get_PullYankAnimation() {
    return *(_Script_Engine::AnimMontage**)((uintptr_t)this + 0xe0);
}
_Script_Engine::AnimMontage*& _Script_SwGame::SwForcePullAbility::get_PullFailAnimation() {
    return *(_Script_Engine::AnimMontage**)((uintptr_t)this + 0xe8);
}
void* _Script_SwGame::SwForcePullAbility::get_OutSection() {
    return (void*)((uintptr_t)this + 0xf0);
}
_Script_Engine::AnimationAsset*& _Script_SwGame::SwForcePullAbility::get_PullRopeAttachAnimation() {
    return *(_Script_Engine::AnimationAsset**)((uintptr_t)this + 0x100);
}
void* _Script_SwGame::SwForcePullAbility::get_ShakeType() {
    return (void*)((uintptr_t)this + 0x108);
}
bool _Script_SwGame::SwForcePullAbility::get_bShouldTestTargetAtTrigger() {
    return (*(uint8_t*)((uintptr_t)this + 0x110 + 0)) & 1 != 0;
}
void _Script_SwGame::SwForcePullAbility::set_bShouldTestTargetAtTrigger(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x110 + 0);
    *(uint8_t*)((uintptr_t)this + 0x110 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_SwGame::SwForcePullAbility::get_TargetData() {
    return (void*)((uintptr_t)this + 0x114);
}
_Script_CoreUObject::Class* _Script_SwGame::SwForcePullAbility::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.SwForcePullAbility");
    return result;
}
float& _Script_SwGame::SwForcePullAbility::get_TurnDuration() {
    return *(float*)((uintptr_t)this + 0x130);
}
_Script_Engine::ParticleSystem*& _Script_SwGame::SwForcePullAbility::get_ParticleTemplate() {
    return *(_Script_Engine::ParticleSystem**)((uintptr_t)this + 0x138);
}
float& _Script_SwGame::SwForcePullAbility::get_ParticleSpeed() {
    return *(float*)((uintptr_t)this + 0x140);
}
void* _Script_SwGame::SwForcePullAbility::get_UpgradeData() {
    return (void*)((uintptr_t)this + 0x148);
}
_Script_AkAudio::AkAudioEvent*& _Script_SwGame::SwForcePullAbility::get_ForcePullCastNonCharacterEvent() {
    return *(_Script_AkAudio::AkAudioEvent**)((uintptr_t)this + 0x1c0);
}
_Script_AkAudio::AkAudioEvent*& _Script_SwGame::SwForcePullAbility::get_ForcePullCastNonCharacterStopEvent() {
    return *(_Script_AkAudio::AkAudioEvent**)((uintptr_t)this + 0x1c8);
}
_Script_AkAudio::AkAudioEvent*& _Script_SwGame::SwForcePullAbility::get_ForcePullFailEvent() {
    return *(_Script_AkAudio::AkAudioEvent**)((uintptr_t)this + 0x1d0);
}
void _Script_SwGame::SwForcePullAbility::OnForceMeterBarEmptied(void* ResponsibleForceName, float TimeUntilForceRegen) {
    return;
}
