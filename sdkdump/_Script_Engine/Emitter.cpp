#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\LinearColor.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "Actor.hpp"
#include "Emitter.hpp"
#include "MaterialInterface.hpp"
#include "ParticleSystem.hpp"
#include "ParticleSystemComponent.hpp"
_Script_Engine::ParticleSystemComponent*& _Script_Engine::Emitter::get_ParticleSystemComponent() {
    return *(_Script_Engine::ParticleSystemComponent**)((uintptr_t)this + 0x360);
}
bool _Script_Engine::Emitter::get_bDestroyOnSystemFinish() {
    return (*(uint8_t*)((uintptr_t)this + 0x368 + 0)) & 1 != 0;
}
void _Script_Engine::Emitter::set_bDestroyOnSystemFinish(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x368 + 0);
    *(uint8_t*)((uintptr_t)this + 0x368 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Engine::Emitter::set_bCurrentlyActive(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x368 + 0);
    *(uint8_t*)((uintptr_t)this + 0x368 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
bool _Script_Engine::Emitter::get_bCurrentlyActive() {
    return (*(uint8_t*)((uintptr_t)this + 0x368 + 0)) & 4 != 0;
}
bool _Script_Engine::Emitter::get_bPostUpdateTickGroup() {
    return (*(uint8_t*)((uintptr_t)this + 0x368 + 0)) & 2 != 0;
}
void _Script_Engine::Emitter::set_bPostUpdateTickGroup(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x368 + 0);
    *(uint8_t*)((uintptr_t)this + 0x368 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
void* _Script_Engine::Emitter::get_OnParticleSpawn() {
    return (void*)((uintptr_t)this + 0x370);
}
void* _Script_Engine::Emitter::get_OnParticleBurst() {
    return (void*)((uintptr_t)this + 0x380);
}
void* _Script_Engine::Emitter::get_OnParticleDeath() {
    return (void*)((uintptr_t)this + 0x390);
}
void* _Script_Engine::Emitter::get_OnParticleCollide() {
    return (void*)((uintptr_t)this + 0x3a0);
}
void _Script_Engine::Emitter::OnRep_bCurrentlyActive() {
    return;
}
_Script_CoreUObject::Class* _Script_Engine::Emitter::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.Emitter");
    return result;
}
void _Script_Engine::Emitter::SetVectorParameter(void* ParameterName, _Script_CoreUObject::Vector Param) {
    return;
}
void _Script_Engine::Emitter::ToggleActive() {
    return;
}
void _Script_Engine::Emitter::SetTemplate(_Script_Engine::ParticleSystem* NewTemplate) {
    return;
}
void _Script_Engine::Emitter::SetFloatParameter(void* ParameterName, float Param) {
    return;
}
void _Script_Engine::Emitter::SetMaterialParameter(void* ParameterName, _Script_Engine::MaterialInterface* Param) {
    return;
}
void _Script_Engine::Emitter::SetColorParameter(void* ParameterName, _Script_CoreUObject::LinearColor Param) {
    return;
}
void _Script_Engine::Emitter::SetActorParameter(void* ParameterName, _Script_Engine::Actor* Param) {
    return;
}
void _Script_Engine::Emitter::OnParticleSystemFinished(_Script_Engine::ParticleSystemComponent* FinishedComponent) {
    return;
}
bool _Script_Engine::Emitter::IsActive() {
    return;
}
void _Script_Engine::Emitter::Deactivate() {
    return;
}
void _Script_Engine::Emitter::Activate() {
    return;
}
