#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MaterialExpression.hpp"
#include "MaterialExpressionAtmosphericLightColor.hpp"
_Script_CoreUObject::Class* _Script_Engine::MaterialExpressionAtmosphericLightColor::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.MaterialExpressionAtmosphericLightColor");
    return result;
}
