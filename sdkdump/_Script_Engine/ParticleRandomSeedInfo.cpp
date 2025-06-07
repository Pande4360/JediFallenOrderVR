#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ParticleRandomSeedInfo.hpp"
void* _Script_Engine::ParticleRandomSeedInfo::get_ParameterName() {
    return (void*)((uintptr_t)this + 0x0);
}
void _Script_Engine::ParticleRandomSeedInfo::set_bInstanceSeedIsIndex(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x8 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_Engine::ParticleRandomSeedInfo::get_bGetSeedFromInstance() {
    return (*(uint8_t*)((uintptr_t)this + 0x8 + 0)) & 1 != 0;
}
void _Script_Engine::ParticleRandomSeedInfo::set_bGetSeedFromInstance(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::ParticleRandomSeedInfo::get_bRandomlySelectSeedArray() {
    return (*(uint8_t*)((uintptr_t)this + 0x8 + 0)) & 8 != 0;
}
bool _Script_Engine::ParticleRandomSeedInfo::get_bInstanceSeedIsIndex() {
    return (*(uint8_t*)((uintptr_t)this + 0x8 + 0)) & 2 != 0;
}
bool _Script_Engine::ParticleRandomSeedInfo::get_bResetSeedOnEmitterLooping() {
    return (*(uint8_t*)((uintptr_t)this + 0x8 + 0)) & 4 != 0;
}
void _Script_Engine::ParticleRandomSeedInfo::set_bResetSeedOnEmitterLooping(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x8 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
void _Script_Engine::ParticleRandomSeedInfo::set_bRandomlySelectSeedArray(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x8 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
void* _Script_Engine::ParticleRandomSeedInfo::get_RandomSeeds() {
    return (void*)((uintptr_t)this + 0x10);
}
_Script_CoreUObject::Class* _Script_Engine::ParticleRandomSeedInfo::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.ParticleRandomSeedInfo");
    return result;
}
