#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\ParticleSystem.hpp"
#include "SwSimpleDestructible_ComponentOptimizationParameters.hpp"
float& _Script_SwGame::SwSimpleDestructible_ComponentOptimizationParameters::get_MinimumTimeBetweenSpawningParticles() {
    return *(float*)((uintptr_t)this + 0x1c);
}
void* _Script_SwGame::SwSimpleDestructible_ComponentOptimizationParameters::get_ComponentName() {
    return (void*)((uintptr_t)this + 0x0);
}
bool _Script_SwGame::SwSimpleDestructible_ComponentOptimizationParameters::get_HideBoneOnFirstCollision() {
    return (*(uint8_t*)((uintptr_t)this + 0x8 + 0)) & 1 != 0;
}
void _Script_SwGame::SwSimpleDestructible_ComponentOptimizationParameters::set_HideBoneOnFirstCollision(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
int32_t& _Script_SwGame::SwSimpleDestructible_ComponentOptimizationParameters::get_HideBoneAfterNumberCollisionHits() {
    return *(int32_t*)((uintptr_t)this + 0xc);
}
_Script_Engine::ParticleSystem*& _Script_SwGame::SwSimpleDestructible_ComponentOptimizationParameters::get_ParticleToSpawnAfterHidingBone() {
    return *(_Script_Engine::ParticleSystem**)((uintptr_t)this + 0x10);
}
int32_t& _Script_SwGame::SwSimpleDestructible_ComponentOptimizationParameters::get_SpawnOnlyEveryNthParticle() {
    return *(int32_t*)((uintptr_t)this + 0x18);
}
float& _Script_SwGame::SwSimpleDestructible_ComponentOptimizationParameters::get_TimeToHideAllBonesAndDeactivateComponent() {
    return *(float*)((uintptr_t)this + 0x20);
}
bool _Script_SwGame::SwSimpleDestructible_ComponentOptimizationParameters::get_HideComponentAfterDeactivation() {
    return (*(uint8_t*)((uintptr_t)this + 0x24 + 0)) & 1 != 0;
}
void _Script_SwGame::SwSimpleDestructible_ComponentOptimizationParameters::set_HideComponentAfterDeactivation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x24 + 0);
    *(uint8_t*)((uintptr_t)this + 0x24 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_SwGame::SwSimpleDestructible_ComponentOptimizationParameters::get_DisableAllCollisionsAfterDeactivation() {
    return (*(uint8_t*)((uintptr_t)this + 0x25 + 0)) & 1 != 0;
}
void _Script_SwGame::SwSimpleDestructible_ComponentOptimizationParameters::set_DisableAllCollisionsAfterDeactivation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x25 + 0);
    *(uint8_t*)((uintptr_t)this + 0x25 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_SwGame::SwSimpleDestructible_ComponentOptimizationParameters::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SwGame.SwSimpleDestructible_ComponentOptimizationParameters");
    return result;
}
