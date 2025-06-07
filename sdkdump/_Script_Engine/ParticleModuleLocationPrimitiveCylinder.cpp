#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ParticleModuleLocationPrimitiveBase.hpp"
#include "ParticleModuleLocationPrimitiveCylinder.hpp"
bool _Script_Engine::ParticleModuleLocationPrimitiveCylinder::get_RadialVelocity() {
    return (*(uint8_t*)((uintptr_t)this + 0xc0 + 0)) & 1 != 0;
}
void _Script_Engine::ParticleModuleLocationPrimitiveCylinder::set_RadialVelocity(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xc0 + 0);
    *(uint8_t*)((uintptr_t)this + 0xc0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::ParticleModuleLocationPrimitiveCylinder::get_StartRadius() {
    return (void*)((uintptr_t)this + 0xc8);
}
void* _Script_Engine::ParticleModuleLocationPrimitiveCylinder::get_HeightAxis() {
    return (void*)((uintptr_t)this + 0x138);
}
void* _Script_Engine::ParticleModuleLocationPrimitiveCylinder::get_StartHeight() {
    return (void*)((uintptr_t)this + 0x100);
}
_Script_CoreUObject::Class* _Script_Engine::ParticleModuleLocationPrimitiveCylinder::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.ParticleModuleLocationPrimitiveCylinder");
    return result;
}
