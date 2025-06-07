#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsStreamingAreaPlayerStartList.hpp"
#include "RsStreamingDefinition.hpp"
_Script_Engine::RsStreamingDefinition*& _Script_Engine::RsStreamingAreaPlayerStartList::get_StreamingDef() {
    return *(_Script_Engine::RsStreamingDefinition**)((uintptr_t)this + 0x0);
}
void* _Script_Engine::RsStreamingAreaPlayerStartList::get_PlayerStartNames() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_Engine::RsStreamingAreaPlayerStartList::get_Status() {
    return (void*)((uintptr_t)this + 0x18);
}
_Script_CoreUObject::Class* _Script_Engine::RsStreamingAreaPlayerStartList::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.RsStreamingAreaPlayerStartList");
    return result;
}
