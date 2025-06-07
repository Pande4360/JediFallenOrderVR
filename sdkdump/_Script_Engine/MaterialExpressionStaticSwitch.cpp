#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MaterialExpression.hpp"
#include "MaterialExpressionStaticSwitch.hpp"
bool _Script_Engine::MaterialExpressionStaticSwitch::get_DefaultValue() {
    return (*(uint8_t*)((uintptr_t)this + 0x40 + 0)) & 1 != 0;
}
void* _Script_Engine::MaterialExpressionStaticSwitch::get_B() {
    return (void*)((uintptr_t)this + 0x60);
}
void _Script_Engine::MaterialExpressionStaticSwitch::set_DefaultValue(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x40 + 0);
    *(uint8_t*)((uintptr_t)this + 0x40 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::MaterialExpressionStaticSwitch::get_A() {
    return (void*)((uintptr_t)this + 0x48);
}
_Script_CoreUObject::Class* _Script_Engine::MaterialExpressionStaticSwitch::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.MaterialExpressionStaticSwitch");
    return result;
}
void* _Script_Engine::MaterialExpressionStaticSwitch::get_Value() {
    return (void*)((uintptr_t)this + 0x78);
}
