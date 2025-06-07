#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "Level.hpp"
#include "LevelStreaming.hpp"
#include "RsStreamingDefinition.hpp"
#include "RsStreamingLevelLoader.hpp"
_Script_Engine::RsStreamingDefinition*& _Script_Engine::RsStreamingLevelLoader::get_StreamingDef() {
    return *(_Script_Engine::RsStreamingDefinition**)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_Engine::RsStreamingLevelLoader::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.RsStreamingLevelLoader");
    return result;
}
void* _Script_Engine::RsStreamingLevelLoader::get_DependentAssetsToLoad() {
    return (void*)((uintptr_t)this + 0x18);
}
_Script_Engine::Level*& _Script_Engine::RsStreamingLevelLoader::get_LoadedLevel() {
    return *(_Script_Engine::Level**)((uintptr_t)this + 0x8);
}
_Script_Engine::LevelStreaming*& _Script_Engine::RsStreamingLevelLoader::get_StreamingObject() {
    return *(_Script_Engine::LevelStreaming**)((uintptr_t)this + 0x10);
}
