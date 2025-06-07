#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MaterialExpression.hpp"
#include "MaterialExpressionGetMaterialAttributes.hpp"
void* _Script_Engine::MaterialExpressionGetMaterialAttributes::get_MaterialAttributes() {
    return (void*)((uintptr_t)this + 0x40);
}
void* _Script_Engine::MaterialExpressionGetMaterialAttributes::get_AttributeGetTypes() {
    return (void*)((uintptr_t)this + 0x60);
}
_Script_CoreUObject::Class* _Script_Engine::MaterialExpressionGetMaterialAttributes::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.MaterialExpressionGetMaterialAttributes");
    return result;
}
