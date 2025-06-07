#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MaterialExpression.hpp"
#include "MaterialExpressionMaterialFunctionCall.hpp"
#include "MaterialFunctionInterface.hpp"
_Script_CoreUObject::Class* _Script_Engine::MaterialExpressionMaterialFunctionCall::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.MaterialExpressionMaterialFunctionCall");
    return result;
}
_Script_Engine::MaterialFunctionInterface*& _Script_Engine::MaterialExpressionMaterialFunctionCall::get_MaterialFunction() {
    return *(_Script_Engine::MaterialFunctionInterface**)((uintptr_t)this + 0x40);
}
void* _Script_Engine::MaterialExpressionMaterialFunctionCall::get_FunctionParameterInfo() {
    return (void*)((uintptr_t)this + 0x48);
}
