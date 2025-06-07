#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ParticleModuleRotationBase.hpp"
#include "ParticleModuleRotationOverLifetime.hpp"
_Script_CoreUObject::Class* _Script_Engine::ParticleModuleRotationOverLifetime::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.ParticleModuleRotationOverLifetime");
    return result;
}
void* _Script_Engine::ParticleModuleRotationOverLifetime::get_RotationOverLife() {
    return (void*)((uintptr_t)this + 0x30);
}
void _Script_Engine::ParticleModuleRotationOverLifetime::set_Scale(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x68 + 0);
    *(uint8_t*)((uintptr_t)this + 0x68 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::ParticleModuleRotationOverLifetime::get_Scale() {
    return (*(uint8_t*)((uintptr_t)this + 0x68 + 0)) & 1 != 0;
}
