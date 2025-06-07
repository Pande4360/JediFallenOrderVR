#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "StaticComponentMaskParameter.hpp"
void* _Script_Engine::StaticComponentMaskParameter::get_ParameterInfo() {
    return (void*)((uintptr_t)this + 0x0);
}
void _Script_Engine::StaticComponentMaskParameter::set_R(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x10 + 0);
    *(uint8_t*)((uintptr_t)this + 0x10 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::StaticComponentMaskParameter::get_R() {
    return (*(uint8_t*)((uintptr_t)this + 0x10 + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Script_Engine::StaticComponentMaskParameter::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.StaticComponentMaskParameter");
    return result;
}
bool _Script_Engine::StaticComponentMaskParameter::get_G() {
    return (*(uint8_t*)((uintptr_t)this + 0x11 + 0)) & 1 != 0;
}
void _Script_Engine::StaticComponentMaskParameter::set_G(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x11 + 0);
    *(uint8_t*)((uintptr_t)this + 0x11 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::StaticComponentMaskParameter::get_A() {
    return (*(uint8_t*)((uintptr_t)this + 0x13 + 0)) & 1 != 0;
}
bool _Script_Engine::StaticComponentMaskParameter::get_B() {
    return (*(uint8_t*)((uintptr_t)this + 0x12 + 0)) & 1 != 0;
}
void _Script_Engine::StaticComponentMaskParameter::set_B(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x12 + 0);
    *(uint8_t*)((uintptr_t)this + 0x12 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Engine::StaticComponentMaskParameter::set_A(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x13 + 0);
    *(uint8_t*)((uintptr_t)this + 0x13 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::StaticComponentMaskParameter::get_bOverride() {
    return (*(uint8_t*)((uintptr_t)this + 0x14 + 0)) & 1 != 0;
}
void _Script_Engine::StaticComponentMaskParameter::set_bOverride(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x14 + 0);
    *(uint8_t*)((uintptr_t)this + 0x14 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::StaticComponentMaskParameter::get_ExpressionGUID() {
    return (void*)((uintptr_t)this + 0x18);
}
