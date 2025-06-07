#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ParticleModuleSizeBase.hpp"
#include "ParticleModuleSizeScale.hpp"
_Script_CoreUObject::Class* _Script_Engine::ParticleModuleSizeScale::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.ParticleModuleSizeScale");
    return result;
}
void* _Script_Engine::ParticleModuleSizeScale::get_SizeScale() {
    return (void*)((uintptr_t)this + 0x30);
}
bool _Script_Engine::ParticleModuleSizeScale::get_EnableX() {
    return (*(uint8_t*)((uintptr_t)this + 0x80 + 0)) & 1 != 0;
}
void _Script_Engine::ParticleModuleSizeScale::set_EnableY(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x80 + 0);
    *(uint8_t*)((uintptr_t)this + 0x80 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
void _Script_Engine::ParticleModuleSizeScale::set_EnableX(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x80 + 0);
    *(uint8_t*)((uintptr_t)this + 0x80 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::ParticleModuleSizeScale::get_EnableY() {
    return (*(uint8_t*)((uintptr_t)this + 0x80 + 0)) & 2 != 0;
}
void _Script_Engine::ParticleModuleSizeScale::set_EnableZ(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x80 + 0);
    *(uint8_t*)((uintptr_t)this + 0x80 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
bool _Script_Engine::ParticleModuleSizeScale::get_EnableZ() {
    return (*(uint8_t*)((uintptr_t)this + 0x80 + 0)) & 4 != 0;
}
