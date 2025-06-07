#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "LevelStreaming.hpp"
#include "RsStreamingManager.hpp"
void* _Script_Engine::RsStreamingManager::get_StreamingLevels() {
    return (void*)((uintptr_t)this + 0x28);
}
void* _Script_Engine::RsStreamingManager::get_LevelsToDelayGCFor() {
    return (void*)((uintptr_t)this + 0xc8);
}
void* _Script_Engine::RsStreamingManager::get_StreamingLevelLookup() {
    return (void*)((uintptr_t)this + 0x38);
}
void* _Script_Engine::RsStreamingManager::get_LevelsBeingActivated() {
    return (void*)((uintptr_t)this + 0x88);
}
void* _Script_Engine::RsStreamingManager::get_LevelsCurrentlyLoading() {
    return (void*)((uintptr_t)this + 0xb8);
}
void* _Script_Engine::RsStreamingManager::get_LevelsBeingDeactivated() {
    return (void*)((uintptr_t)this + 0x98);
}
void* _Script_Engine::RsStreamingManager::get_PendingLoadLevels() {
    return (void*)((uintptr_t)this + 0xa8);
}
_Script_Engine::LevelStreaming*& _Script_Engine::RsStreamingManager::get_GlobalLevel() {
    return *(_Script_Engine::LevelStreaming**)((uintptr_t)this + 0xe8);
}
_Script_Engine::LevelStreaming*& _Script_Engine::RsStreamingManager::get_RootLevel() {
    return *(_Script_Engine::LevelStreaming**)((uintptr_t)this + 0xf0);
}
void* _Script_Engine::RsStreamingManager::get_WithinStreamingVolumes() {
    return (void*)((uintptr_t)this + 0xf8);
}
void* _Script_Engine::RsStreamingManager::get_PendingMapLoadParams() {
    return (void*)((uintptr_t)this + 0x148);
}
_Script_CoreUObject::Class* _Script_Engine::RsStreamingManager::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.RsStreamingManager");
    return result;
}
