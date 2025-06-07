#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Rotator.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
#include "RsAICharacter.hpp"
#include "RsAISpawner.hpp"
#include "RsAIStagedSpawner.hpp"
void* _Script_RsGameTechRT::RsAIStagedSpawner::get_SpawnAnimationDefs() {
    return (void*)((uintptr_t)this + 0x390);
}
bool _Script_RsGameTechRT::RsAIStagedSpawner::get_bSpawnNoPhysicsNoCollision() {
    return (*(uint8_t*)((uintptr_t)this + 0x3a0 + 0)) & 1 != 0;
}
void _Script_RsGameTechRT::RsAIStagedSpawner::set_bSpawnNoPhysicsNoCollision(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3a0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3a0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsAIStagedSpawner::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsAIStagedSpawner");
    return result;
}
bool _Script_RsGameTechRT::RsAIStagedSpawner::get_bUseLeashingBoundsAfterSpawnIntro() {
    return (*(uint8_t*)((uintptr_t)this + 0x3a1 + 0)) & 1 != 0;
}
void _Script_RsGameTechRT::RsAIStagedSpawner::TriggerStagedSpawner() {
    return;
}
void _Script_RsGameTechRT::RsAIStagedSpawner::set_bUseLeashingBoundsAfterSpawnIntro(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3a1 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3a1 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_RsGameTechRT::RsAIStagedSpawner::get_SpawnerInstances() {
    return (void*)((uintptr_t)this + 0x3a8);
}
void _Script_RsGameTechRT::RsAIStagedSpawner::SpawnAIAtSceneComponent(int32_t SpawnerSlot, _Script_Engine::SceneComponent* SceneComponent, bool bIgnoreSpawnAnimation) {
    return;
}
void _Script_RsGameTechRT::RsAIStagedSpawner::SpawnAIAtLocation(int32_t SpawnerSlot, _Script_CoreUObject::Vector& SpawnLocation, _Script_CoreUObject::Rotator& SpawnRotation, bool bIgnoreSpawnAnimation) {
    return;
}
void _Script_RsGameTechRT::RsAIStagedSpawner::SpawnAIAtActor(int32_t SpawnerSlot, _Script_Engine::Actor* Actor, bool bIgnoreSpawnAnimation) {
    return;
}
void _Script_RsGameTechRT::RsAIStagedSpawner::OnSleepFromEncounterGroup() {
    return;
}
void _Script_RsGameTechRT::RsAIStagedSpawner::OnAwakeFromEncounterGroup() {
    return;
}
void _Script_RsGameTechRT::RsAIStagedSpawner::OnAISpawnedFromAnySlot(_Script_RsGameTechRT::RsAICharacter* SpawnedAI, void* SpawnResult) {
    return;
}
