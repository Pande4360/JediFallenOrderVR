#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MaterialFunction.hpp"
#include "MaterialFunctionInterface.hpp"
void* _Script_Engine::MaterialFunction::get_Description() {
    return (void*)((uintptr_t)this + 0x40);
}
void* _Script_Engine::MaterialFunction::get_AdditionalHeaderIncludes() {
    return (void*)((uintptr_t)this + 0x68);
}
bool _Script_Engine::MaterialFunction::get_bExposeToLibrary() {
    return (*(uint8_t*)((uintptr_t)this + 0x50 + 0)) & 1 != 0;
}
void* _Script_Engine::MaterialFunction::get_FunctionExpressions() {
    return (void*)((uintptr_t)this + 0x58);
}
void _Script_Engine::MaterialFunction::set_bExposeToLibrary(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x50 + 0);
    *(uint8_t*)((uintptr_t)this + 0x50 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::MaterialFunction::get_bReentrantFlag() {
    return (*(uint8_t*)((uintptr_t)this + 0x78 + 0)) & 1 != 0;
}
bool _Script_Engine::MaterialFunction::get_bPrefixParameterNames() {
    return (*(uint8_t*)((uintptr_t)this + 0x50 + 0)) & 2 != 0;
}
void _Script_Engine::MaterialFunction::set_bPrefixParameterNames(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x50 + 0);
    *(uint8_t*)((uintptr_t)this + 0x50 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
void _Script_Engine::MaterialFunction::set_bReentrantFlag(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x78 + 0);
    *(uint8_t*)((uintptr_t)this + 0x78 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_Engine::MaterialFunction::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.MaterialFunction");
    return result;
}
