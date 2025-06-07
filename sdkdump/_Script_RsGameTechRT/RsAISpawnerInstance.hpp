#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\RespawnInstanceData.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsAISpawnerInstance : public _Script_Engine::RespawnInstanceData {
    private: char pad_30[0x90]; public:
    void* get_LeashSettings();
    void* get_GroupName();
    void* get_OverrideSyncSlotName();
    void* get_AssetRequestPriority();
    int32_t& get_MaxNumSpawned();
    float& get_SpawnDelay();
    int32_t& get_NumDied();
    bool get_bIsEnabled();
    void set_bIsEnabled(bool value);
    bool get_bAllowSpawnOffNavMesh();
    void set_bAllowSpawnOffNavMesh(bool value);
    bool get_bAdjustToGround();
    void set_bAdjustToGround(bool value);
    bool get_bInexpensiveCharacter();
    void set_bInexpensiveCharacter(bool value);
    bool get_bLoadWithLevel();
    void set_bLoadWithLevel(bool value);
    void* get_RoleSettings();
    void* get_GameplayTags();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xc0
#pragma pack(pop)
}
