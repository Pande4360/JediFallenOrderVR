#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "VectorRK4SpringInterpolator.hpp"
float& _Script_Engine::VectorRK4SpringInterpolator::get_StiffnessConstant() {
    return *(float*)((uintptr_t)this + 0x0);
}
float& _Script_Engine::VectorRK4SpringInterpolator::get_DampeningRatio() {
    return *(float*)((uintptr_t)this + 0x4);
}
_Script_CoreUObject::Class* _Script_Engine::VectorRK4SpringInterpolator::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.VectorRK4SpringInterpolator");
    return result;
}
