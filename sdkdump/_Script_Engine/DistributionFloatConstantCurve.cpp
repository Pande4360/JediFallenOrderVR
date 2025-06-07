#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "DistributionFloat.hpp"
#include "DistributionFloatConstantCurve.hpp"
void* _Script_Engine::DistributionFloatConstantCurve::get_ConstantCurve() {
    return (void*)((uintptr_t)this + 0x38);
}
_Script_CoreUObject::Class* _Script_Engine::DistributionFloatConstantCurve::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.DistributionFloatConstantCurve");
    return result;
}
