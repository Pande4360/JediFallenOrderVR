#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MaterialExpression.hpp"
#include "MaterialExpressionSetMaterialAttributes.hpp"
void* _Script_Engine::MaterialExpressionSetMaterialAttributes::get_Inputs() {
    return (void*)((uintptr_t)this + 0x40);
}
void* _Script_Engine::MaterialExpressionSetMaterialAttributes::get_AttributeSetTypes() {
    return (void*)((uintptr_t)this + 0x50);
}
_Script_CoreUObject::Class* _Script_Engine::MaterialExpressionSetMaterialAttributes::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.MaterialExpressionSetMaterialAttributes");
    return result;
}
