#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
#include "..\_Script_Engine\LatentActionInfo.hpp"
#include "RsAICharacterDefinition.hpp"
#include "RsAIDefaultSpawner.hpp"
#include "RsAISpawnerRef.hpp"
#include "RsAISpawningSystem.hpp"
void* _Script_RsGameTechRT::RsAISpawningSystem::get_SpawnersNew() {
    return (void*)((uintptr_t)this + 0x40);
}
_Script_RsGameTechRT::RsAIDefaultSpawner*& _Script_RsGameTechRT::RsAISpawningSystem::get_DefaultSpawner() {
    return *(_Script_RsGameTechRT::RsAIDefaultSpawner**)((uintptr_t)this + 0x50);
}
void _Script_RsGameTechRT::RsAISpawningSystem::SpawnAIForArray(_Script_CoreUObject::Object* WorldContext, void*& SpawnerRefs, float SpawnDelay) {
    return;
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsAISpawningSystem::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsAISpawningSystem");
    return result;
}
void _Script_RsGameTechRT::RsAISpawningSystem::UnbindAllEventsFromAIDespawned(_Script_CoreUObject::Object* WorldContext, _Script_RsGameTechRT::RsAISpawnerRef& SpawnerRef) {
    return;
}
void _Script_RsGameTechRT::RsAISpawningSystem::UnbindEventFromAISpawned(_Script_CoreUObject::Object* WorldContext, _Script_RsGameTechRT::RsAISpawnerRef& SpawnerRef, void*& Event) {
    return;
}
void _Script_RsGameTechRT::RsAISpawningSystem::UnbindAllEventsFromAISpawned(_Script_CoreUObject::Object* WorldContext, _Script_RsGameTechRT::RsAISpawnerRef& SpawnerRef) {
    return;
}
void _Script_RsGameTechRT::RsAISpawningSystem::UnbindAllAISpawnedEventsMulti(_Script_CoreUObject::Object* WorldContext, void*& Spawners) {
    return;
}
void _Script_RsGameTechRT::RsAISpawningSystem::UnbindAllAIDespawnedEventsMulti(_Script_CoreUObject::Object* WorldContext, void*& Spawners) {
    return;
}
void _Script_RsGameTechRT::RsAISpawningSystem::UnbindAISpawnedEventMulti(_Script_CoreUObject::Object* WorldContext, void*& Spawners, void*& Event) {
    return;
}
void _Script_RsGameTechRT::RsAISpawningSystem::UnbindAIDespawnedEventMulti(_Script_CoreUObject::Object* WorldContext, void*& Spawners, void*& Event) {
    return;
}
void _Script_RsGameTechRT::RsAISpawningSystem::SpawnAI_Internal(_Script_CoreUObject::Object* WorldContext, _Script_Engine::LatentActionInfo LatentInfo, void*& OnAISpawned, _Script_RsGameTechRT::RsAISpawnerRef& SpawnerRef, float SpawnDelay) {
    return;
}
void _Script_RsGameTechRT::RsAISpawningSystem::OnSpawnedAIDied(_Script_Engine::Actor* DeadActor) {
    return;
}
void _Script_RsGameTechRT::RsAISpawningSystem::OnSpawnedAIDestroyed(_Script_Engine::Actor* DestroyedActor) {
    return;
}
void _Script_RsGameTechRT::RsAISpawningSystem::EnableSpawnerMulti(_Script_CoreUObject::Object* WorldContext, void*& Spawners, bool bEnabled) {
    return;
}
void _Script_RsGameTechRT::RsAISpawningSystem::DespawnAllAI(_Script_CoreUObject::Object* WorldContext, void* DespawnReason) {
    return;
}
void _Script_RsGameTechRT::RsAISpawningSystem::DespawnAIMulti(_Script_CoreUObject::Object* WorldContext, void*& Spawners, void* DespawnReason) {
    return;
}
void _Script_RsGameTechRT::RsAISpawningSystem::DebugSpawnAI(_Script_CoreUObject::Object* WorldContext, _Script_RsGameTechRT::RsAICharacterDefinition* AICharacterDefinition, void*& OnAISpawnedDelegate) {
    return;
}
void _Script_RsGameTechRT::RsAISpawningSystem::BindEventToAISpawnedForArray(_Script_CoreUObject::Object* WorldContext, void*& SpawnerRefs, void*& Event) {
    return;
}
void _Script_RsGameTechRT::RsAISpawningSystem::BindEventToAISpawned(_Script_CoreUObject::Object* WorldContext, _Script_RsGameTechRT::RsAISpawnerRef& SpawnerRef, void*& Event) {
    return;
}
void _Script_RsGameTechRT::RsAISpawningSystem::BindEventToAIDespawnedForArray(_Script_CoreUObject::Object* WorldContext, void*& SpawnerRefs, void*& Event) {
    return;
}
void _Script_RsGameTechRT::RsAISpawningSystem::BindEventToAIDespawned(_Script_CoreUObject::Object* WorldContext, _Script_RsGameTechRT::RsAISpawnerRef& SpawnerRef, void*& Event) {
    return;
}
void _Script_RsGameTechRT::RsAISpawningSystem::BindAISpawnedEventMulti(_Script_CoreUObject::Object* WorldContext, void*& Spawners, void*& Event) {
    return;
}
void _Script_RsGameTechRT::RsAISpawningSystem::BindAIDespawnedEventMulti(_Script_CoreUObject::Object* WorldContext, void*& Spawners, void*& Event) {
    return;
}
