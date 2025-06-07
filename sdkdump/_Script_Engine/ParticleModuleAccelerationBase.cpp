#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ParticleModule.hpp"
#include "ParticleModuleAccelerationBase.hpp"
_Script_CoreUObject::Class* _Script_Engine::ParticleModuleAccelerationBase::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.ParticleModuleAccelerationBase");
    return result;
}
bool _Script_Engine::ParticleModuleAccelerationBase::get_bAlwaysInWorldSpace() {
    return (*(uint8_t*)((uintptr_t)this + 0x30 + 0)) & 1 != 0;
}
void _Script_Engine::ParticleModuleAccelerationBase::set_bAlwaysInWorldSpace(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x30 + 0);
    *(uint8_t*)((uintptr_t)this + 0x30 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
