#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\MaterialExpression.hpp"
#include "MaterialExpressionLandscapeVisibilityMask.hpp"
void* _Script_Landscape::MaterialExpressionLandscapeVisibilityMask::get_ExpressionGUID() {
    return (void*)((uintptr_t)this + 0x40);
}
_Script_CoreUObject::Class* _Script_Landscape::MaterialExpressionLandscapeVisibilityMask::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Landscape.MaterialExpressionLandscapeVisibilityMask");
    return result;
}
