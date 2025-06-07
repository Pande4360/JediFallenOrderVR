#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "StaticSwitchParameter.hpp"
void _Script_Engine::StaticSwitchParameter::set_bOverride(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x11 + 0);
    *(uint8_t*)((uintptr_t)this + 0x11 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::StaticSwitchParameter::get_bOverride() {
    return (*(uint8_t*)((uintptr_t)this + 0x11 + 0)) & 1 != 0;
}
void* _Script_Engine::StaticSwitchParameter::get_ParameterInfo() {
    return (void*)((uintptr_t)this + 0x0);
}
bool _Script_Engine::StaticSwitchParameter::get_Value() {
    return (*(uint8_t*)((uintptr_t)this + 0x10 + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Script_Engine::StaticSwitchParameter::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.StaticSwitchParameter");
    return result;
}
void _Script_Engine::StaticSwitchParameter::set_Value(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x10 + 0);
    *(uint8_t*)((uintptr_t)this + 0x10 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::StaticSwitchParameter::get_ExpressionGUID() {
    return (void*)((uintptr_t)this + 0x14);
}
