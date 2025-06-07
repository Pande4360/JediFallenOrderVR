#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MaterialExpression.hpp"
#include "MaterialExpressionParticleSpeed.hpp"
_Script_CoreUObject::Class* _Script_Engine::MaterialExpressionParticleSpeed::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.MaterialExpressionParticleSpeed");
    return result;
}
