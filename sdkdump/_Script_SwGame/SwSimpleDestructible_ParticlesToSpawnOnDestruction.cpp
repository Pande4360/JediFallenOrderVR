#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\ParticleSystem.hpp"
#include "SwSimpleDestructible_ParticlesToSpawnOnDestruction.hpp"
void* _Script_SwGame::SwSimpleDestructible_ParticlesToSpawnOnDestruction::get_LocalRotation() {
    return (void*)((uintptr_t)this + 0x14);
}
_Script_Engine::ParticleSystem*& _Script_SwGame::SwSimpleDestructible_ParticlesToSpawnOnDestruction::get_ParticleSystemToSpawn() {
    return *(_Script_Engine::ParticleSystem**)((uintptr_t)this + 0x0);
}
void* _Script_SwGame::SwSimpleDestructible_ParticlesToSpawnOnDestruction::get_LocalTranslation() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_SwGame::SwSimpleDestructible_ParticlesToSpawnOnDestruction::get_LocalScale() {
    return (void*)((uintptr_t)this + 0x20);
}
_Script_CoreUObject::Class* _Script_SwGame::SwSimpleDestructible_ParticlesToSpawnOnDestruction::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SwGame.SwSimpleDestructible_ParticlesToSpawnOnDestruction");
    return result;
}
