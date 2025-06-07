#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "EmitterDynamicParameter.hpp"
void _Script_Engine::EmitterDynamicParameter::set_bSpawnTimeOnly(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x8 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
void* _Script_Engine::EmitterDynamicParameter::get_ParamName() {
    return (void*)((uintptr_t)this + 0x0);
}
bool _Script_Engine::EmitterDynamicParameter::get_bUseEmitterTime() {
    return (*(uint8_t*)((uintptr_t)this + 0x8 + 0)) & 1 != 0;
}
bool _Script_Engine::EmitterDynamicParameter::get_bSpawnTimeOnly() {
    return (*(uint8_t*)((uintptr_t)this + 0x8 + 0)) & 2 != 0;
}
void _Script_Engine::EmitterDynamicParameter::set_bScaleVelocityByParamValue(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x10 + 0);
    *(uint8_t*)((uintptr_t)this + 0x10 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Engine::EmitterDynamicParameter::set_bUseEmitterTime(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::EmitterDynamicParameter::get_ValueMethod() {
    return (void*)((uintptr_t)this + 0xc);
}
bool _Script_Engine::EmitterDynamicParameter::get_bScaleVelocityByParamValue() {
    return (*(uint8_t*)((uintptr_t)this + 0x10 + 0)) & 1 != 0;
}
void* _Script_Engine::EmitterDynamicParameter::get_ParamValue() {
    return (void*)((uintptr_t)this + 0x18);
}
_Script_CoreUObject::Class* _Script_Engine::EmitterDynamicParameter::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.EmitterDynamicParameter");
    return result;
}
