#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "RsAISpawner.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct SceneComponent;
}
namespace _Script_CoreUObject {
struct Vector;
}
namespace _Script_CoreUObject {
struct Rotator;
}
namespace _Script_RsGameTechRT {
struct RsAICharacter;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsAIStagedSpawner : public RsAISpawner {
    private: char pad_390[0x28]; public:
    void* get_SpawnAnimationDefs();
    bool get_bSpawnNoPhysicsNoCollision();
    void set_bSpawnNoPhysicsNoCollision(bool value);
    bool get_bUseLeashingBoundsAfterSpawnIntro();
    void set_bUseLeashingBoundsAfterSpawnIntro(bool value);
    void* get_SpawnerInstances();
    static _Script_CoreUObject::Class* static_class();
    void TriggerStagedSpawner();
    void SpawnAIAtSceneComponent(int32_t SpawnerSlot, _Script_Engine::SceneComponent* SceneComponent, bool bIgnoreSpawnAnimation);
    void SpawnAIAtLocation(int32_t SpawnerSlot, _Script_CoreUObject::Vector& SpawnLocation, _Script_CoreUObject::Rotator& SpawnRotation, bool bIgnoreSpawnAnimation);
    void SpawnAIAtActor(int32_t SpawnerSlot, _Script_Engine::Actor* Actor, bool bIgnoreSpawnAnimation);
    void OnSleepFromEncounterGroup();
    void OnAwakeFromEncounterGroup();
    void OnAISpawnedFromAnySlot(_Script_RsGameTechRT::RsAICharacter* SpawnedAI, void* SpawnResult);
}; // Size: 0x3b8
#pragma pack(pop)
}
