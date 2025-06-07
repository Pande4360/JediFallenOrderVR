#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MaterialExpression.hpp"
#include "MaterialExpressionObjectRadius.hpp"
_Script_CoreUObject::Class* _Script_Engine::MaterialExpressionObjectRadius::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.MaterialExpressionObjectRadius");
    return result;
}
