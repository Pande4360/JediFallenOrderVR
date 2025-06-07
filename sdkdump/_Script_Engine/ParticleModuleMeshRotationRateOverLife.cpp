#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ParticleModuleMeshRotationRateOverLife.hpp"
#include "ParticleModuleRotationRateBase.hpp"
void* _Script_Engine::ParticleModuleMeshRotationRateOverLife::get_RotRate() {
    return (void*)((uintptr_t)this + 0x30);
}
_Script_CoreUObject::Class* _Script_Engine::ParticleModuleMeshRotationRateOverLife::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.ParticleModuleMeshRotationRateOverLife");
    return result;
}
bool _Script_Engine::ParticleModuleMeshRotationRateOverLife::get_bScaleRotRate() {
    return (*(uint8_t*)((uintptr_t)this + 0x80 + 0)) & 1 != 0;
}
void _Script_Engine::ParticleModuleMeshRotationRateOverLife::set_bScaleRotRate(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x80 + 0);
    *(uint8_t*)((uintptr_t)this + 0x80 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
