#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "DistributionVector.hpp"
#include "DistributionVectorUniformCurve.hpp"
void* _Script_Engine::DistributionVectorUniformCurve::get_ConstantCurve() {
    return (void*)((uintptr_t)this + 0x38);
}
void* _Script_Engine::DistributionVectorUniformCurve::get_LockedAxes() {
    return (void*)((uintptr_t)this + 0x54);
}
bool _Script_Engine::DistributionVectorUniformCurve::get_bLockAxes1() {
    return (*(uint8_t*)((uintptr_t)this + 0x50 + 0)) & 1 != 0;
}
void* _Script_Engine::DistributionVectorUniformCurve::get_MirrorFlags() {
    return (void*)((uintptr_t)this + 0x56);
}
void _Script_Engine::DistributionVectorUniformCurve::set_bLockAxes1(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x50 + 0);
    *(uint8_t*)((uintptr_t)this + 0x50 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::DistributionVectorUniformCurve::get_bLockAxes2() {
    return (*(uint8_t*)((uintptr_t)this + 0x50 + 0)) & 2 != 0;
}
void _Script_Engine::DistributionVectorUniformCurve::set_bLockAxes2(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x50 + 0);
    *(uint8_t*)((uintptr_t)this + 0x50 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_Engine::DistributionVectorUniformCurve::get_bUseExtremes() {
    return (*(uint8_t*)((uintptr_t)this + 0x5c + 0)) & 1 != 0;
}
void _Script_Engine::DistributionVectorUniformCurve::set_bUseExtremes(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x5c + 0);
    *(uint8_t*)((uintptr_t)this + 0x5c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_Engine::DistributionVectorUniformCurve::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.DistributionVectorUniformCurve");
    return result;
}
