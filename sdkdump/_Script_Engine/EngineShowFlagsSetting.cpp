#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "EngineShowFlagsSetting.hpp"
void* _Script_Engine::EngineShowFlagsSetting::get_ShowFlagName() {
    return (void*)((uintptr_t)this + 0x0);
}
bool _Script_Engine::EngineShowFlagsSetting::get_Enabled() {
    return (*(uint8_t*)((uintptr_t)this + 0x10 + 0)) & 1 != 0;
}
void _Script_Engine::EngineShowFlagsSetting::set_Enabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x10 + 0);
    *(uint8_t*)((uintptr_t)this + 0x10 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_Engine::EngineShowFlagsSetting::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.EngineShowFlagsSetting");
    return result;
}
