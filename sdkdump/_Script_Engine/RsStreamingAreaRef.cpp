#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsStreamingAreaRef.hpp"
#include "RsStreamingDefinition.hpp"
_Script_Engine::RsStreamingDefinition*& _Script_Engine::RsStreamingAreaRef::get_StreamingDef() {
    return *(_Script_Engine::RsStreamingDefinition**)((uintptr_t)this + 0x0);
}
void* _Script_Engine::RsStreamingAreaRef::get_AreaName() {
    return (void*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_Engine::RsStreamingAreaRef::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.RsStreamingAreaRef");
    return result;
}
