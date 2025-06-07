#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MaterialExpression.hpp"
#include "MaterialExpressionBreakMaterialAttributes.hpp"
void* _Script_Engine::MaterialExpressionBreakMaterialAttributes::get_MaterialAttributes() {
    return (void*)((uintptr_t)this + 0x40);
}
_Script_CoreUObject::Class* _Script_Engine::MaterialExpressionBreakMaterialAttributes::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.MaterialExpressionBreakMaterialAttributes");
    return result;
}
