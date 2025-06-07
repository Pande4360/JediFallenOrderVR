#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ParticleModuleColorBase.hpp"
#include "ParticleModuleColorScaleOverLife.hpp"
void* _Script_Engine::ParticleModuleColorScaleOverLife::get_ColorScaleOverLife() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_Engine::ParticleModuleColorScaleOverLife::get_AlphaScaleOverLife() {
    return (void*)((uintptr_t)this + 0x80);
}
bool _Script_Engine::ParticleModuleColorScaleOverLife::get_bEmitterTime() {
    return (*(uint8_t*)((uintptr_t)this + 0xb8 + 0)) & 1 != 0;
}
void _Script_Engine::ParticleModuleColorScaleOverLife::set_bEmitterTime(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xb8 + 0);
    *(uint8_t*)((uintptr_t)this + 0xb8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_Engine::ParticleModuleColorScaleOverLife::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.ParticleModuleColorScaleOverLife");
    return result;
}
