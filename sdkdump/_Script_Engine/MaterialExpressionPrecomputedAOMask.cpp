#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MaterialExpression.hpp"
#include "MaterialExpressionPrecomputedAOMask.hpp"
_Script_CoreUObject::Class* _Script_Engine::MaterialExpressionPrecomputedAOMask::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.MaterialExpressionPrecomputedAOMask");
    return result;
}
