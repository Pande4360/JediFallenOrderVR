#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MaterialExpression.hpp"
#include "MaterialExpressionParticleMotionBlurFade.hpp"
_Script_CoreUObject::Class* _Script_Engine::MaterialExpressionParticleMotionBlurFade::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.MaterialExpressionParticleMotionBlurFade");
    return result;
}
