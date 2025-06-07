#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ParticleModuleEventReceiverBase.hpp"
#include "ParticleModuleEventReceiverKillParticles.hpp"
bool _Script_Engine::ParticleModuleEventReceiverKillParticles::get_bStopSpawning() {
    return (*(uint8_t*)((uintptr_t)this + 0x40 + 0)) & 1 != 0;
}
void _Script_Engine::ParticleModuleEventReceiverKillParticles::set_bStopSpawning(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x40 + 0);
    *(uint8_t*)((uintptr_t)this + 0x40 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_Engine::ParticleModuleEventReceiverKillParticles::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.ParticleModuleEventReceiverKillParticles");
    return result;
}
