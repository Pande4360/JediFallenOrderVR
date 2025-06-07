#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MaterialExpression.hpp"
#include "MaterialExpressionParticlePositionWS.hpp"
_Script_CoreUObject::Class* _Script_Engine::MaterialExpressionParticlePositionWS::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.MaterialExpressionParticlePositionWS");
    return result;
}
