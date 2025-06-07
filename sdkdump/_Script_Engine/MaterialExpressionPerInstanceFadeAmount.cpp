#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MaterialExpression.hpp"
#include "MaterialExpressionPerInstanceFadeAmount.hpp"
_Script_CoreUObject::Class* _Script_Engine::MaterialExpressionPerInstanceFadeAmount::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.MaterialExpressionPerInstanceFadeAmount");
    return result;
}
