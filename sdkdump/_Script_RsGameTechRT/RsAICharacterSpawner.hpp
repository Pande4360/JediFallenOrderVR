#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "RsAIScriptingOptions.hpp"
#include "RsAISpawner.hpp"
#include "RsAISpawnerIntroSettings.hpp"
#include "RsAISpawnerLeashSettings.hpp"
#include "RsAISpawnerPOISettings.hpp"
#include "RsAISpawnerPatrolSettings.hpp"
#include "RsAISpawnerWanderSettings.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_GameplayTags {
struct GameplayTag;
}
namespace _Script_RsGameTechRT {
struct RsAICharacter;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsAICharacterSpawner : public RsAISpawner {
    private: char pad_390[0x1c0]; public:
    void* get_SpawnerRef();
    void* get_SimpleSpawnerInstance();
    static _Script_CoreUObject::Class* static_class();
    void SetSpawnerWanderSettings(_Script_RsGameTechRT::RsAISpawnerWanderSettings SpawnerWanderSettings);
    void SetSpawnerScriptingSettings(_Script_RsGameTechRT::RsAIScriptingOptions SpawnerScriptingSettings);
    void SetSpawnerPOISettings(_Script_RsGameTechRT::RsAISpawnerPOISettings SpawnerPOISettings);
    void SetSpawnerPatrolSettings(_Script_RsGameTechRT::RsAISpawnerPatrolSettings SpawnerPatrolSettings);
    void SetSpawnerIntroSettings(_Script_RsGameTechRT::RsAISpawnerIntroSettings SpawnerIntroSettings);
    void SetSpawnerAdvancedSettings(bool bAutoSpawn, void* GroupName, void* OverrideSyncSlotName, int32_t SpawnMax, float SpawnDelay, bool bEnabled, bool bAllowSpawnOffNavMesh);
    void SetLeashSettings(_Script_RsGameTechRT::RsAISpawnerLeashSettings SpawnerLeashSettings);
    void GetSpawnerAdvancedSettings(bool& bAutoSpawn, void*& GroupName, void*& OverrideSyncSlotName, int32_t& SpawnMax, float& SpawnDelay, bool& bEnabled, bool& bAllowSpawnOffNavMesh, _Script_GameplayTags::GameplayTag& SpeakerTagOverride);
    void* GetSpawnedAI();
    _Script_RsGameTechRT::RsAICharacter* GetFirstCurrentlySpawnedAI();
}; // Size: 0x550
#pragma pack(pop)
}
