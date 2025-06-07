#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ParticleModuleColor.hpp"
#include "ParticleModuleColorBase.hpp"
void* _Script_Engine::ParticleModuleColor::get_StartColor() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_Engine::ParticleModuleColor::get_StartAlpha() {
    return (void*)((uintptr_t)this + 0x80);
}
_Script_CoreUObject::Class* _Script_Engine::ParticleModuleColor::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.ParticleModuleColor");
    return result;
}
bool _Script_Engine::ParticleModuleColor::get_bClampAlpha() {
    return (*(uint8_t*)((uintptr_t)this + 0xb8 + 0)) & 1 != 0;
}
void _Script_Engine::ParticleModuleColor::set_bClampAlpha(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xb8 + 0);
    *(uint8_t*)((uintptr_t)this + 0xb8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
