#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "LaunchOnTestSettings.hpp"
void* _Script_Engine::LaunchOnTestSettings::get_LaunchOnTestmap() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Engine::LaunchOnTestSettings::get_DeviceID() {
    return (void*)((uintptr_t)this + 0x10);
}
_Script_CoreUObject::Class* _Script_Engine::LaunchOnTestSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.LaunchOnTestSettings");
    return result;
}
