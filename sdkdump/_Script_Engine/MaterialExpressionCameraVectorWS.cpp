#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MaterialExpression.hpp"
#include "MaterialExpressionCameraVectorWS.hpp"
_Script_CoreUObject::Class* _Script_Engine::MaterialExpressionCameraVectorWS::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.MaterialExpressionCameraVectorWS");
    return result;
}
