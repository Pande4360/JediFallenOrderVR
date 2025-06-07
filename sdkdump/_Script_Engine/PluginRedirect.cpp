#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "PluginRedirect.hpp"
void* _Script_Engine::PluginRedirect::get_OldPluginName() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Engine::PluginRedirect::get_NewPluginName() {
    return (void*)((uintptr_t)this + 0x10);
}
_Script_CoreUObject::Class* _Script_Engine::PluginRedirect::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.PluginRedirect");
    return result;
}
