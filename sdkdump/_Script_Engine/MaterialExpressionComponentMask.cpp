#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MaterialExpression.hpp"
#include "MaterialExpressionComponentMask.hpp"
void _Script_Engine::MaterialExpressionComponentMask::set_B(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x58 + 0);
    *(uint8_t*)((uintptr_t)this + 0x58 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
void* _Script_Engine::MaterialExpressionComponentMask::get_Input() {
    return (void*)((uintptr_t)this + 0x40);
}
bool _Script_Engine::MaterialExpressionComponentMask::get_R() {
    return (*(uint8_t*)((uintptr_t)this + 0x58 + 0)) & 1 != 0;
}
void _Script_Engine::MaterialExpressionComponentMask::set_R(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x58 + 0);
    *(uint8_t*)((uintptr_t)this + 0x58 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::MaterialExpressionComponentMask::get_G() {
    return (*(uint8_t*)((uintptr_t)this + 0x58 + 0)) & 2 != 0;
}
bool _Script_Engine::MaterialExpressionComponentMask::get_A() {
    return (*(uint8_t*)((uintptr_t)this + 0x58 + 0)) & 8 != 0;
}
void _Script_Engine::MaterialExpressionComponentMask::set_G(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x58 + 0);
    *(uint8_t*)((uintptr_t)this + 0x58 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_Engine::MaterialExpressionComponentMask::get_B() {
    return (*(uint8_t*)((uintptr_t)this + 0x58 + 0)) & 4 != 0;
}
void _Script_Engine::MaterialExpressionComponentMask::set_A(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x58 + 0);
    *(uint8_t*)((uintptr_t)this + 0x58 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
_Script_CoreUObject::Class* _Script_Engine::MaterialExpressionComponentMask::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.MaterialExpressionComponentMask");
    return result;
}
