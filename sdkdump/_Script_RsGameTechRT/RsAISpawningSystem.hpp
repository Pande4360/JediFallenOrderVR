#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
#include "..\_Script_Engine\LatentActionInfo.hpp"
namespace _Script_RsGameTechRT {
struct RsAIDefaultSpawner;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CoreUObject {
struct Object;
}
namespace _Script_RsGameTechRT {
struct RsAISpawnerRef;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Script_RsGameTechRT {
struct RsAICharacterDefinition;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsAISpawningSystem : public _Script_Engine::BlueprintFunctionLibrary {
    private: char pad_28[0xb8]; public:
    void* get_SpawnersNew();
    _Script_RsGameTechRT::RsAIDefaultSpawner*& get_DefaultSpawner();
    static _Script_CoreUObject::Class* static_class();
    void UnbindEventFromAISpawned(_Script_CoreUObject::Object* WorldContext, _Script_RsGameTechRT::RsAISpawnerRef& SpawnerRef, void*& Event);
    void UnbindAllEventsFromAISpawned(_Script_CoreUObject::Object* WorldContext, _Script_RsGameTechRT::RsAISpawnerRef& SpawnerRef);
    void UnbindAllEventsFromAIDespawned(_Script_CoreUObject::Object* WorldContext, _Script_RsGameTechRT::RsAISpawnerRef& SpawnerRef);
    void UnbindAllAISpawnedEventsMulti(_Script_CoreUObject::Object* WorldContext, void*& Spawners);
    void UnbindAllAIDespawnedEventsMulti(_Script_CoreUObject::Object* WorldContext, void*& Spawners);
    void UnbindAISpawnedEventMulti(_Script_CoreUObject::Object* WorldContext, void*& Spawners, void*& Event);
    void UnbindAIDespawnedEventMulti(_Script_CoreUObject::Object* WorldContext, void*& Spawners, void*& Event);
    void SpawnAIForArray(_Script_CoreUObject::Object* WorldContext, void*& SpawnerRefs, float SpawnDelay);
    void SpawnAI_Internal(_Script_CoreUObject::Object* WorldContext, _Script_Engine::LatentActionInfo LatentInfo, void*& OnAISpawned, _Script_RsGameTechRT::RsAISpawnerRef& SpawnerRef, float SpawnDelay);
    void OnSpawnedAIDied(_Script_Engine::Actor* DeadActor);
    void OnSpawnedAIDestroyed(_Script_Engine::Actor* DestroyedActor);
    void EnableSpawnerMulti(_Script_CoreUObject::Object* WorldContext, void*& Spawners, bool bEnabled);
    void DespawnAllAI(_Script_CoreUObject::Object* WorldContext, void* DespawnReason);
    void DespawnAIMulti(_Script_CoreUObject::Object* WorldContext, void*& Spawners, void* DespawnReason);
    void DebugSpawnAI(_Script_CoreUObject::Object* WorldContext, _Script_RsGameTechRT::RsAICharacterDefinition* AICharacterDefinition, void*& OnAISpawnedDelegate);
    void BindEventToAISpawnedForArray(_Script_CoreUObject::Object* WorldContext, void*& SpawnerRefs, void*& Event);
    void BindEventToAISpawned(_Script_CoreUObject::Object* WorldContext, _Script_RsGameTechRT::RsAISpawnerRef& SpawnerRef, void*& Event);
    void BindEventToAIDespawnedForArray(_Script_CoreUObject::Object* WorldContext, void*& SpawnerRefs, void*& Event);
    void BindEventToAIDespawned(_Script_CoreUObject::Object* WorldContext, _Script_RsGameTechRT::RsAISpawnerRef& SpawnerRef, void*& Event);
    void BindAISpawnedEventMulti(_Script_CoreUObject::Object* WorldContext, void*& Spawners, void*& Event);
    void BindAIDespawnedEventMulti(_Script_CoreUObject::Object* WorldContext, void*& Spawners, void*& Event);
}; // Size: 0xe0
#pragma pack(pop)
}
