#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ParticleModuleColorBase.hpp"
#include "ParticleModuleColorOverLife.hpp"
void* _Script_Engine::ParticleModuleColorOverLife::get_ColorOverLife() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_Engine::ParticleModuleColorOverLife::get_AlphaOverLife() {
    return (void*)((uintptr_t)this + 0x80);
}
_Script_CoreUObject::Class* _Script_Engine::ParticleModuleColorOverLife::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.ParticleModuleColorOverLife");
    return result;
}
bool _Script_Engine::ParticleModuleColorOverLife::get_bClampAlpha() {
    return (*(uint8_t*)((uintptr_t)this + 0xb8 + 0)) & 1 != 0;
}
void _Script_Engine::ParticleModuleColorOverLife::set_bClampAlpha(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xb8 + 0);
    *(uint8_t*)((uintptr_t)this + 0xb8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
