#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "DeveloperSettings.hpp"
#include "GarbageCollectionSettings.hpp"
void _Script_Engine::GarbageCollectionSettings::set_IncrementalBeginDestroyEnabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3c + 0);
    *(uint8_t*)((uintptr_t)this + 0x3c + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
float& _Script_Engine::GarbageCollectionSettings::get_TimeBetweenPurgingPendingKillObjects() {
    return *(float*)((uintptr_t)this + 0x38);
}
bool _Script_Engine::GarbageCollectionSettings::get_FlushStreamingOnGC() {
    return (*(uint8_t*)((uintptr_t)this + 0x3c + 0)) & 1 != 0;
}
bool _Script_Engine::GarbageCollectionSettings::get_IncrementalBeginDestroyEnabled() {
    return (*(uint8_t*)((uintptr_t)this + 0x3c + 0)) & 4 != 0;
}
void _Script_Engine::GarbageCollectionSettings::set_FlushStreamingOnGC(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3c + 0);
    *(uint8_t*)((uintptr_t)this + 0x3c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::GarbageCollectionSettings::get_AllowParallelGC() {
    return (*(uint8_t*)((uintptr_t)this + 0x3c + 0)) & 2 != 0;
}
void _Script_Engine::GarbageCollectionSettings::set_AllowParallelGC(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3c + 0);
    *(uint8_t*)((uintptr_t)this + 0x3c + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_Engine::GarbageCollectionSettings::get_CreateGCClusters() {
    return (*(uint8_t*)((uintptr_t)this + 0x3c + 0)) & 8 != 0;
}
void _Script_Engine::GarbageCollectionSettings::set_CreateGCClusters(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3c + 0);
    *(uint8_t*)((uintptr_t)this + 0x3c + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
bool _Script_Engine::GarbageCollectionSettings::get_MergeGCClusters() {
    return (*(uint8_t*)((uintptr_t)this + 0x3c + 0)) & 16 != 0;
}
void _Script_Engine::GarbageCollectionSettings::set_MergeGCClusters(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3c + 0);
    *(uint8_t*)((uintptr_t)this + 0x3c + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
bool _Script_Engine::GarbageCollectionSettings::get_ActorClusteringEnabled() {
    return (*(uint8_t*)((uintptr_t)this + 0x3c + 0)) & 32 != 0;
}
void _Script_Engine::GarbageCollectionSettings::set_ActorClusteringEnabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3c + 0);
    *(uint8_t*)((uintptr_t)this + 0x3c + 0) = (cur_value & ~32) | (value ? 32 : 0);
}
bool _Script_Engine::GarbageCollectionSettings::get_BlueprintClusteringEnabled() {
    return (*(uint8_t*)((uintptr_t)this + 0x3c + 0)) & 64 != 0;
}
void _Script_Engine::GarbageCollectionSettings::set_BlueprintClusteringEnabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3c + 0);
    *(uint8_t*)((uintptr_t)this + 0x3c + 0) = (cur_value & ~64) | (value ? 64 : 0);
}
bool _Script_Engine::GarbageCollectionSettings::get_UseDisregardForGCOnDedicatedServers() {
    return (*(uint8_t*)((uintptr_t)this + 0x3c + 0)) & 128 != 0;
}
void _Script_Engine::GarbageCollectionSettings::set_UseDisregardForGCOnDedicatedServers(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3c + 0);
    *(uint8_t*)((uintptr_t)this + 0x3c + 0) = (cur_value & ~128) | (value ? 128 : 0);
}
int32_t& _Script_Engine::GarbageCollectionSettings::get_MinGCClusterSize() {
    return *(int32_t*)((uintptr_t)this + 0x40);
}
int32_t& _Script_Engine::GarbageCollectionSettings::get_NumRetriesBeforeForcingGC() {
    return *(int32_t*)((uintptr_t)this + 0x44);
}
int32_t& _Script_Engine::GarbageCollectionSettings::get_MaxObjectsNotConsideredByGC() {
    return *(int32_t*)((uintptr_t)this + 0x48);
}
int32_t& _Script_Engine::GarbageCollectionSettings::get_SizeOfPermanentObjectPool() {
    return *(int32_t*)((uintptr_t)this + 0x4c);
}
int32_t& _Script_Engine::GarbageCollectionSettings::get_MaxObjectsInGame() {
    return *(int32_t*)((uintptr_t)this + 0x50);
}
int32_t& _Script_Engine::GarbageCollectionSettings::get_MaxObjectsInEditor() {
    return *(int32_t*)((uintptr_t)this + 0x54);
}
_Script_CoreUObject::Class* _Script_Engine::GarbageCollectionSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.GarbageCollectionSettings");
    return result;
}
