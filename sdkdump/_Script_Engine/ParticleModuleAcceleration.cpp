#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ParticleModuleAcceleration.hpp"
#include "ParticleModuleAccelerationBase.hpp"
void* _Script_Engine::ParticleModuleAcceleration::get_Acceleration() {
    return (void*)((uintptr_t)this + 0x38);
}
_Script_CoreUObject::Class* _Script_Engine::ParticleModuleAcceleration::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.ParticleModuleAcceleration");
    return result;
}
bool _Script_Engine::ParticleModuleAcceleration::get_bApplyOwnerScale() {
    return (*(uint8_t*)((uintptr_t)this + 0x88 + 0)) & 1 != 0;
}
void _Script_Engine::ParticleModuleAcceleration::set_bApplyOwnerScale(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x88 + 0);
    *(uint8_t*)((uintptr_t)this + 0x88 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
