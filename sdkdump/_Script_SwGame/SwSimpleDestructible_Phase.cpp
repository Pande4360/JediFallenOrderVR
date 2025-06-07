#include "..\FUObjectArray.hpp"
#include "..\_Script_AkAudio\AkAudioEvent.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SwSimpleDestructible_Phase.hpp"
void* _Script_SwGame::SwSimpleDestructible_Phase::get_AcceptedDamageFromCharacterTypes() {
    return (void*)((uintptr_t)this + 0x18);
}
_Script_CoreUObject::Class* _Script_SwGame::SwSimpleDestructible_Phase::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SwGame.SwSimpleDestructible_Phase");
    return result;
}
bool _Script_SwGame::SwSimpleDestructible_Phase::get_IgnoreThisPhase() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 1 != 0;
}
void* _Script_SwGame::SwSimpleDestructible_Phase::get_ProhibitDamageFromCharacterTypes() {
    return (void*)((uintptr_t)this + 0x28);
}
void _Script_SwGame::SwSimpleDestructible_Phase::set_IgnoreThisPhase(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_SwGame::SwSimpleDestructible_Phase::get_AcceptedDamageTypes() {
    return (void*)((uintptr_t)this + 0x8);
}
float& _Script_SwGame::SwSimpleDestructible_Phase::get_DamagePointsNeededToDestroy() {
    return *(float*)((uintptr_t)this + 0x4);
}
void* _Script_SwGame::SwSimpleDestructible_Phase::get_DestructionParticleComponents() {
    return (void*)((uintptr_t)this + 0x38);
}
void* _Script_SwGame::SwSimpleDestructible_Phase::get_ComponentsToHideAfterDestruction() {
    return (void*)((uintptr_t)this + 0x60);
}
void* _Script_SwGame::SwSimpleDestructible_Phase::get_ParticlesToSpawnOnDestruction() {
    return (void*)((uintptr_t)this + 0x48);
}
_Script_AkAudio::AkAudioEvent*& _Script_SwGame::SwSimpleDestructible_Phase::get_DestructionSound() {
    return *(_Script_AkAudio::AkAudioEvent**)((uintptr_t)this + 0x58);
}
void* _Script_SwGame::SwSimpleDestructible_Phase::get_ComponentsToShowAfterDestruction() {
    return (void*)((uintptr_t)this + 0x70);
}
void* _Script_SwGame::SwSimpleDestructible_Phase::get_PhysicsParameters() {
    return (void*)((uintptr_t)this + 0x80);
}
void* _Script_SwGame::SwSimpleDestructible_Phase::get_ReactionOnForcePush() {
    return (void*)((uintptr_t)this + 0xc8);
}
void* _Script_SwGame::SwSimpleDestructible_Phase::get_RadialDamageParameters() {
    return (void*)((uintptr_t)this + 0xa8);
}
float& _Script_SwGame::SwSimpleDestructible_Phase::get_SelfInflictedDamagePointsPerSecond() {
    return *(float*)((uintptr_t)this + 0xc0);
}
void* _Script_SwGame::SwSimpleDestructible_Phase::get_ReactionOnForcePull() {
    return (void*)((uintptr_t)this + 0xe0);
}
void* _Script_SwGame::SwSimpleDestructible_Phase::get_PlayAnimations() {
    return (void*)((uintptr_t)this + 0x100);
}
