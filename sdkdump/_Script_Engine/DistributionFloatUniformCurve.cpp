#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "DistributionFloat.hpp"
#include "DistributionFloatUniformCurve.hpp"
void* _Script_Engine::DistributionFloatUniformCurve::get_ConstantCurve() {
    return (void*)((uintptr_t)this + 0x38);
}
_Script_CoreUObject::Class* _Script_Engine::DistributionFloatUniformCurve::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.DistributionFloatUniformCurve");
    return result;
}
