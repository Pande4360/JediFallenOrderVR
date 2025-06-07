#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MaterialExpression.hpp"
#include "MaterialExpressionFunctionOutput.hpp"
void* _Script_Engine::MaterialExpressionFunctionOutput::get_ID() {
    return (void*)((uintptr_t)this + 0x7c);
}
void _Script_Engine::MaterialExpressionFunctionOutput::set_bLastPreviewed(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x78 + 0);
    *(uint8_t*)((uintptr_t)this + 0x78 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::MaterialExpressionFunctionOutput::get_OutputName() {
    return (void*)((uintptr_t)this + 0x40);
}
void* _Script_Engine::MaterialExpressionFunctionOutput::get_Description() {
    return (void*)((uintptr_t)this + 0x48);
}
int32_t& _Script_Engine::MaterialExpressionFunctionOutput::get_SortPriority() {
    return *(int32_t*)((uintptr_t)this + 0x58);
}
bool _Script_Engine::MaterialExpressionFunctionOutput::get_bLastPreviewed() {
    return (*(uint8_t*)((uintptr_t)this + 0x78 + 0)) & 1 != 0;
}
void* _Script_Engine::MaterialExpressionFunctionOutput::get_A() {
    return (void*)((uintptr_t)this + 0x60);
}
_Script_CoreUObject::Class* _Script_Engine::MaterialExpressionFunctionOutput::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.MaterialExpressionFunctionOutput");
    return result;
}
