#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "LevelStreaming.hpp"
#include "RsStreamingDefinition.hpp"
_Script_Engine::RsStreamingDefinition*& _Script_Engine::LevelStreaming::get_StreamingDef() {
    return *(_Script_Engine::RsStreamingDefinition**)((uintptr_t)this + 0x28);
}
void* _Script_Engine::LevelStreaming::get_LevelLoader() {
    return (void*)((uintptr_t)this + 0x30);
}
_Script_Engine::LevelStreaming*& _Script_Engine::LevelStreaming::get_PendingLODLevel() {
    return *(_Script_Engine::LevelStreaming**)((uintptr_t)this + 0x130);
}
void* _Script_Engine::LevelStreaming::get_StreamingVolumes() {
    return (void*)((uintptr_t)this + 0x110);
}
void* _Script_Engine::LevelStreaming::get_CachedChildLevels() {
    return (void*)((uintptr_t)this + 0x150);
}
void* _Script_Engine::LevelStreaming::get_References() {
    return (void*)((uintptr_t)this + 0x120);
}
_Script_Engine::LevelStreaming*& _Script_Engine::LevelStreaming::get_CurrentLODLevel() {
    return *(_Script_Engine::LevelStreaming**)((uintptr_t)this + 0x138);
}
void* _Script_Engine::LevelStreaming::get_CachedParentLevels() {
    return (void*)((uintptr_t)this + 0x140);
}
_Script_CoreUObject::Class* _Script_Engine::LevelStreaming::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.LevelStreaming");
    return result;
}
