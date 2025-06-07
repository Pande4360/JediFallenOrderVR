#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "FunctionExpressionInput.hpp"
#include "MaterialExpressionFunctionInput.hpp"
_Script_Engine::MaterialExpressionFunctionInput*& _Script_Engine::FunctionExpressionInput::get_ExpressionInput() {
    return *(_Script_Engine::MaterialExpressionFunctionInput**)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_Engine::FunctionExpressionInput::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.FunctionExpressionInput");
    return result;
}
void* _Script_Engine::FunctionExpressionInput::get_ExpressionInputId() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_Engine::FunctionExpressionInput::get_Input() {
    return (void*)((uintptr_t)this + 0x18);
}
