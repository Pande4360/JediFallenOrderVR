#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ParticleModuleVelocityBase.hpp"
#include "ParticleModuleVelocityOverLifetime.hpp"
void* _Script_Engine::ParticleModuleVelocityOverLifetime::get_VelOverLife() {
    return (void*)((uintptr_t)this + 0x38);
}
bool _Script_Engine::ParticleModuleVelocityOverLifetime::get_Absolute() {
    return (*(uint8_t*)((uintptr_t)this + 0x88 + 0)) & 1 != 0;
}
void _Script_Engine::ParticleModuleVelocityOverLifetime::set_Absolute(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x88 + 0);
    *(uint8_t*)((uintptr_t)this + 0x88 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_Engine::ParticleModuleVelocityOverLifetime::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.ParticleModuleVelocityOverLifetime");
    return result;
}
