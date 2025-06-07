#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ResponseChannel.hpp"
void* _Script_Engine::ResponseChannel::get_Channel() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Engine::ResponseChannel::get_Response() {
    return (void*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_Engine::ResponseChannel::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.ResponseChannel");
    return result;
}
