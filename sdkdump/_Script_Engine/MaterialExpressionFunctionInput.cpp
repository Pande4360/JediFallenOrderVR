#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MaterialExpression.hpp"
#include "MaterialExpressionFunctionInput.hpp"
void* _Script_Engine::MaterialExpressionFunctionInput::get_ID() {
    return (void*)((uintptr_t)this + 0x70);
}
void* _Script_Engine::MaterialExpressionFunctionInput::get_Preview() {
    return (void*)((uintptr_t)this + 0x40);
}
void _Script_Engine::MaterialExpressionFunctionInput::set_bUsePreviewValueAsDefault(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xa0 + 0);
    *(uint8_t*)((uintptr_t)this + 0xa0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::MaterialExpressionFunctionInput::get_InputType() {
    return (void*)((uintptr_t)this + 0x80);
}
void* _Script_Engine::MaterialExpressionFunctionInput::get_InputName() {
    return (void*)((uintptr_t)this + 0x58);
}
void* _Script_Engine::MaterialExpressionFunctionInput::get_Description() {
    return (void*)((uintptr_t)this + 0x60);
}
void* _Script_Engine::MaterialExpressionFunctionInput::get_PreviewValue() {
    return (void*)((uintptr_t)this + 0x90);
}
bool _Script_Engine::MaterialExpressionFunctionInput::get_bUsePreviewValueAsDefault() {
    return (*(uint8_t*)((uintptr_t)this + 0xa0 + 0)) & 1 != 0;
}
int32_t& _Script_Engine::MaterialExpressionFunctionInput::get_SortPriority() {
    return *(int32_t*)((uintptr_t)this + 0xa4);
}
bool _Script_Engine::MaterialExpressionFunctionInput::get_bCompilingFunctionPreview() {
    return (*(uint8_t*)((uintptr_t)this + 0xa8 + 0)) & 1 != 0;
}
void _Script_Engine::MaterialExpressionFunctionInput::set_bCompilingFunctionPreview(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xa8 + 0);
    *(uint8_t*)((uintptr_t)this + 0xa8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_Engine::MaterialExpressionFunctionInput::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.MaterialExpressionFunctionInput");
    return result;
}
