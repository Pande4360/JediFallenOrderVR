#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "DeveloperSettings.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct GarbageCollectionSettings : public DeveloperSettings {
    private: char pad_38[0x20]; public:
    float& get_TimeBetweenPurgingPendingKillObjects();
    bool get_FlushStreamingOnGC();
    void set_FlushStreamingOnGC(bool value);
    bool get_AllowParallelGC();
    void set_AllowParallelGC(bool value);
    bool get_IncrementalBeginDestroyEnabled();
    void set_IncrementalBeginDestroyEnabled(bool value);
    bool get_CreateGCClusters();
    void set_CreateGCClusters(bool value);
    bool get_MergeGCClusters();
    void set_MergeGCClusters(bool value);
    bool get_ActorClusteringEnabled();
    void set_ActorClusteringEnabled(bool value);
    bool get_BlueprintClusteringEnabled();
    void set_BlueprintClusteringEnabled(bool value);
    bool get_UseDisregardForGCOnDedicatedServers();
    void set_UseDisregardForGCOnDedicatedServers(bool value);
    int32_t& get_MinGCClusterSize();
    int32_t& get_NumRetriesBeforeForcingGC();
    int32_t& get_MaxObjectsNotConsideredByGC();
    int32_t& get_SizeOfPermanentObjectPool();
    int32_t& get_MaxObjectsInGame();
    int32_t& get_MaxObjectsInEditor();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x58
#pragma pack(pop)
}
