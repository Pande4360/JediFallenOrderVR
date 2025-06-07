#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MaterialExpression.hpp"
#include "MaterialExpressionDynamicParameter.hpp"
void* _Script_Engine::MaterialExpressionDynamicParameter::get_ParamNames() {
    return (void*)((uintptr_t)this + 0x40);
}
void* _Script_Engine::MaterialExpressionDynamicParameter::get_DefaultValue() {
    return (void*)((uintptr_t)this + 0x50);
}
void* _Script_Engine::MaterialExpressionDynamicParameter::get_ParameterIndex() {
    return (void*)((uintptr_t)this + 0x60);
}
_Script_CoreUObject::Class* _Script_Engine::MaterialExpressionDynamicParameter::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.MaterialExpressionDynamicParameter");
    return result;
}
