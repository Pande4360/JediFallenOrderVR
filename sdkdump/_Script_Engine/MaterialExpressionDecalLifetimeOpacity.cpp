#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MaterialExpression.hpp"
#include "MaterialExpressionDecalLifetimeOpacity.hpp"
_Script_CoreUObject::Class* _Script_Engine::MaterialExpressionDecalLifetimeOpacity::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.MaterialExpressionDecalLifetimeOpacity");
    return result;
}
