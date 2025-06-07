#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "Actor.hpp"
#include "LevelStreaming.hpp"
#include "RsMapLoadParams.hpp"
#include "RsStreamingDefinition.hpp"
void* _Script_Engine::RsMapLoadParams::get_StreamingAreasToLoad() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_Engine::RsStreamingDefinition*& _Script_Engine::RsMapLoadParams::get_RootLevelStreamingDef() {
    return *(_Script_Engine::RsStreamingDefinition**)((uintptr_t)this + 0x10);
}
_Script_Engine::Actor*& _Script_Engine::RsMapLoadParams::get_PlayerStart() {
    return *(_Script_Engine::Actor**)((uintptr_t)this + 0x20);
}
_Script_Engine::LevelStreaming*& _Script_Engine::RsMapLoadParams::get_RootLevelToLoad() {
    return *(_Script_Engine::LevelStreaming**)((uintptr_t)this + 0x18);
}
_Script_CoreUObject::Class* _Script_Engine::RsMapLoadParams::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.RsMapLoadParams");
    return result;
}
