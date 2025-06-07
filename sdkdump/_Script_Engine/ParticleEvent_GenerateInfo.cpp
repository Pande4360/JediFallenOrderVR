#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ParticleEvent_GenerateInfo.hpp"
void _Script_Engine::ParticleEvent_GenerateInfo::set_FirstTimeOnly(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xc + 0);
    *(uint8_t*)((uintptr_t)this + 0xc + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::ParticleEvent_GenerateInfo::get_Type() {
    return (void*)((uintptr_t)this + 0x0);
}
bool _Script_Engine::ParticleEvent_GenerateInfo::get_FirstTimeOnly() {
    return (*(uint8_t*)((uintptr_t)this + 0xc + 0)) & 1 != 0;
}
int32_t& _Script_Engine::ParticleEvent_GenerateInfo::get_Frequency() {
    return *(int32_t*)((uintptr_t)this + 0x4);
}
int32_t& _Script_Engine::ParticleEvent_GenerateInfo::get_ParticleFrequency() {
    return *(int32_t*)((uintptr_t)this + 0x8);
}
bool _Script_Engine::ParticleEvent_GenerateInfo::get_LastTimeOnly() {
    return (*(uint8_t*)((uintptr_t)this + 0xc + 0)) & 2 != 0;
}
bool _Script_Engine::ParticleEvent_GenerateInfo::get_UseReflectedImpactVector() {
    return (*(uint8_t*)((uintptr_t)this + 0xc + 0)) & 4 != 0;
}
void _Script_Engine::ParticleEvent_GenerateInfo::set_LastTimeOnly(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xc + 0);
    *(uint8_t*)((uintptr_t)this + 0xc + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
void _Script_Engine::ParticleEvent_GenerateInfo::set_UseReflectedImpactVector(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xc + 0);
    *(uint8_t*)((uintptr_t)this + 0xc + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
bool _Script_Engine::ParticleEvent_GenerateInfo::get_bUseOrbitOffset() {
    return (*(uint8_t*)((uintptr_t)this + 0xc + 0)) & 8 != 0;
}
void _Script_Engine::ParticleEvent_GenerateInfo::set_bUseOrbitOffset(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xc + 0);
    *(uint8_t*)((uintptr_t)this + 0xc + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
void* _Script_Engine::ParticleEvent_GenerateInfo::get_CustomName() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_Engine::ParticleEvent_GenerateInfo::get_ParticleModuleEventsToSendToGame() {
    return (void*)((uintptr_t)this + 0x18);
}
_Script_CoreUObject::Class* _Script_Engine::ParticleEvent_GenerateInfo::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.ParticleEvent_GenerateInfo");
    return result;
}
