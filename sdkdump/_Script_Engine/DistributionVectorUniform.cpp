#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "DistributionVector.hpp"
#include "DistributionVectorUniform.hpp"
void _Script_Engine::DistributionVectorUniform::set_bUseExtremes(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x58 + 0);
    *(uint8_t*)((uintptr_t)this + 0x58 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::DistributionVectorUniform::get_Max() {
    return (void*)((uintptr_t)this + 0x38);
}
void* _Script_Engine::DistributionVectorUniform::get_Min() {
    return (void*)((uintptr_t)this + 0x44);
}
bool _Script_Engine::DistributionVectorUniform::get_bUseExtremes() {
    return (*(uint8_t*)((uintptr_t)this + 0x58 + 0)) & 1 != 0;
}
bool _Script_Engine::DistributionVectorUniform::get_bLockAxes() {
    return (*(uint8_t*)((uintptr_t)this + 0x50 + 0)) & 1 != 0;
}
void* _Script_Engine::DistributionVectorUniform::get_LockedAxes() {
    return (void*)((uintptr_t)this + 0x54);
}
void _Script_Engine::DistributionVectorUniform::set_bLockAxes(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x50 + 0);
    *(uint8_t*)((uintptr_t)this + 0x50 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::DistributionVectorUniform::get_MirrorFlags() {
    return (void*)((uintptr_t)this + 0x55);
}
_Script_CoreUObject::Class* _Script_Engine::DistributionVectorUniform::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.DistributionVectorUniform");
    return result;
}
