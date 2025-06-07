#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "FunctionExpressionOutput.hpp"
#include "MaterialExpressionFunctionOutput.hpp"
_Script_Engine::MaterialExpressionFunctionOutput*& _Script_Engine::FunctionExpressionOutput::get_ExpressionOutput() {
    return *(_Script_Engine::MaterialExpressionFunctionOutput**)((uintptr_t)this + 0x0);
}
void* _Script_Engine::FunctionExpressionOutput::get_ExpressionOutputId() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_Engine::FunctionExpressionOutput::get_Output() {
    return (void*)((uintptr_t)this + 0x18);
}
_Script_CoreUObject::Class* _Script_Engine::FunctionExpressionOutput::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.FunctionExpressionOutput");
    return result;
}
