#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MaterialExpression.hpp"
#include "MaterialExpressionSceneTexelSize.hpp"
_Script_CoreUObject::Class* _Script_Engine::MaterialExpressionSceneTexelSize::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.MaterialExpressionSceneTexelSize");
    return result;
}
