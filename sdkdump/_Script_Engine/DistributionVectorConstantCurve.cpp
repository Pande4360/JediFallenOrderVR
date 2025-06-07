#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "DistributionVector.hpp"
#include "DistributionVectorConstantCurve.hpp"
void _Script_Engine::DistributionVectorConstantCurve::set_bLockAxes(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x50 + 0);
    *(uint8_t*)((uintptr_t)this + 0x50 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::DistributionVectorConstantCurve::get_ConstantCurve() {
    return (void*)((uintptr_t)this + 0x38);
}
bool _Script_Engine::DistributionVectorConstantCurve::get_bLockAxes() {
    return (*(uint8_t*)((uintptr_t)this + 0x50 + 0)) & 1 != 0;
}
void* _Script_Engine::DistributionVectorConstantCurve::get_LockedAxes() {
    return (void*)((uintptr_t)this + 0x54);
}
_Script_CoreUObject::Class* _Script_Engine::DistributionVectorConstantCurve::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.DistributionVectorConstantCurve");
    return result;
}
