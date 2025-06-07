#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ImportFactorySettingValues.hpp"
void* _Script_Engine::ImportFactorySettingValues::get_SettingName() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Engine::ImportFactorySettingValues::get_Value() {
    return (void*)((uintptr_t)this + 0x10);
}
_Script_CoreUObject::Class* _Script_Engine::ImportFactorySettingValues::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.ImportFactorySettingValues");
    return result;
}
