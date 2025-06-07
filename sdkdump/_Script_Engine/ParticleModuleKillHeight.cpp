#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ParticleModuleKillBase.hpp"
#include "ParticleModuleKillHeight.hpp"
bool _Script_Engine::ParticleModuleKillHeight::get_bFloor() {
    return (*(uint8_t*)((uintptr_t)this + 0x68 + 0)) & 2 != 0;
}
void* _Script_Engine::ParticleModuleKillHeight::get_Height() {
    return (void*)((uintptr_t)this + 0x30);
}
void _Script_Engine::ParticleModuleKillHeight::set_bAbsolute(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x68 + 0);
    *(uint8_t*)((uintptr_t)this + 0x68 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::ParticleModuleKillHeight::get_bAbsolute() {
    return (*(uint8_t*)((uintptr_t)this + 0x68 + 0)) & 1 != 0;
}
void _Script_Engine::ParticleModuleKillHeight::set_bFloor(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x68 + 0);
    *(uint8_t*)((uintptr_t)this + 0x68 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
_Script_CoreUObject::Class* _Script_Engine::ParticleModuleKillHeight::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.ParticleModuleKillHeight");
    return result;
}
bool _Script_Engine::ParticleModuleKillHeight::get_bApplyPSysScale() {
    return (*(uint8_t*)((uintptr_t)this + 0x68 + 0)) & 4 != 0;
}
void _Script_Engine::ParticleModuleKillHeight::set_bApplyPSysScale(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x68 + 0);
    *(uint8_t*)((uintptr_t)this + 0x68 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
