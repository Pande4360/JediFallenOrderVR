#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MaterialExpressionParameter.hpp"
#include "MaterialExpressionStaticComponentMaskParameter.hpp"
void _Script_Engine::MaterialExpressionStaticComponentMaskParameter::set_DefaultR(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x70 + 0);
    *(uint8_t*)((uintptr_t)this + 0x70 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::MaterialExpressionStaticComponentMaskParameter::get_Input() {
    return (void*)((uintptr_t)this + 0x58);
}
bool _Script_Engine::MaterialExpressionStaticComponentMaskParameter::get_DefaultR() {
    return (*(uint8_t*)((uintptr_t)this + 0x70 + 0)) & 1 != 0;
}
bool _Script_Engine::MaterialExpressionStaticComponentMaskParameter::get_DefaultG() {
    return (*(uint8_t*)((uintptr_t)this + 0x70 + 0)) & 2 != 0;
}
void _Script_Engine::MaterialExpressionStaticComponentMaskParameter::set_DefaultG(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x70 + 0);
    *(uint8_t*)((uintptr_t)this + 0x70 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_Engine::MaterialExpressionStaticComponentMaskParameter::get_DefaultB() {
    return (*(uint8_t*)((uintptr_t)this + 0x70 + 0)) & 4 != 0;
}
void _Script_Engine::MaterialExpressionStaticComponentMaskParameter::set_DefaultB(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x70 + 0);
    *(uint8_t*)((uintptr_t)this + 0x70 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
bool _Script_Engine::MaterialExpressionStaticComponentMaskParameter::get_DefaultA() {
    return (*(uint8_t*)((uintptr_t)this + 0x70 + 0)) & 8 != 0;
}
void _Script_Engine::MaterialExpressionStaticComponentMaskParameter::set_DefaultA(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x70 + 0);
    *(uint8_t*)((uintptr_t)this + 0x70 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
_Script_CoreUObject::Class* _Script_Engine::MaterialExpressionStaticComponentMaskParameter::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.MaterialExpressionStaticComponentMaskParameter");
    return result;
}
