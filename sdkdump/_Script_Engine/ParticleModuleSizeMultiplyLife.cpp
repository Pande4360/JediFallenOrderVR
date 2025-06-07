#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ParticleModuleSizeBase.hpp"
#include "ParticleModuleSizeMultiplyLife.hpp"
_Script_CoreUObject::Class* _Script_Engine::ParticleModuleSizeMultiplyLife::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.ParticleModuleSizeMultiplyLife");
    return result;
}
void _Script_Engine::ParticleModuleSizeMultiplyLife::set_MultiplyZ(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x80 + 0);
    *(uint8_t*)((uintptr_t)this + 0x80 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
void* _Script_Engine::ParticleModuleSizeMultiplyLife::get_LifeMultiplier() {
    return (void*)((uintptr_t)this + 0x30);
}
bool _Script_Engine::ParticleModuleSizeMultiplyLife::get_MultiplyX() {
    return (*(uint8_t*)((uintptr_t)this + 0x80 + 0)) & 1 != 0;
}
void _Script_Engine::ParticleModuleSizeMultiplyLife::set_MultiplyX(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x80 + 0);
    *(uint8_t*)((uintptr_t)this + 0x80 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::ParticleModuleSizeMultiplyLife::get_MultiplyY() {
    return (*(uint8_t*)((uintptr_t)this + 0x80 + 0)) & 2 != 0;
}
void _Script_Engine::ParticleModuleSizeMultiplyLife::set_MultiplyY(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x80 + 0);
    *(uint8_t*)((uintptr_t)this + 0x80 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_Engine::ParticleModuleSizeMultiplyLife::get_MultiplyZ() {
    return (*(uint8_t*)((uintptr_t)this + 0x80 + 0)) & 4 != 0;
}
