#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ParticleModuleBeamBase.hpp"
#include "ParticleModuleBeamNoise.hpp"
bool _Script_Engine::ParticleModuleBeamNoise::get_bLowFreq_Enabled() {
    return (*(uint8_t*)((uintptr_t)this + 0x30 + 0)) & 1 != 0;
}
void* _Script_Engine::ParticleModuleBeamNoise::get_NoiseRange() {
    return (void*)((uintptr_t)this + 0x40);
}
void _Script_Engine::ParticleModuleBeamNoise::set_bLowFreq_Enabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x30 + 0);
    *(uint8_t*)((uintptr_t)this + 0x30 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
int32_t& _Script_Engine::ParticleModuleBeamNoise::get_Frequency() {
    return *(int32_t*)((uintptr_t)this + 0x34);
}
int32_t& _Script_Engine::ParticleModuleBeamNoise::get_Frequency_LowRange() {
    return *(int32_t*)((uintptr_t)this + 0x38);
}
void* _Script_Engine::ParticleModuleBeamNoise::get_NoiseRangeScale() {
    return (void*)((uintptr_t)this + 0x90);
}
bool _Script_Engine::ParticleModuleBeamNoise::get_bNRScaleEmitterTime() {
    return (*(uint8_t*)((uintptr_t)this + 0xc8 + 0)) & 1 != 0;
}
void _Script_Engine::ParticleModuleBeamNoise::set_bNRScaleEmitterTime(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xc8 + 0);
    *(uint8_t*)((uintptr_t)this + 0xc8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::ParticleModuleBeamNoise::get_NoiseSpeed() {
    return (void*)((uintptr_t)this + 0xd0);
}
bool _Script_Engine::ParticleModuleBeamNoise::get_bSmooth() {
    return (*(uint8_t*)((uintptr_t)this + 0x120 + 0)) & 1 != 0;
}
void _Script_Engine::ParticleModuleBeamNoise::set_bSmooth(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x120 + 0);
    *(uint8_t*)((uintptr_t)this + 0x120 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_Engine::ParticleModuleBeamNoise::get_NoiseLockRadius() {
    return *(float*)((uintptr_t)this + 0x124);
}
bool _Script_Engine::ParticleModuleBeamNoise::get_bNoiseLock() {
    return (*(uint8_t*)((uintptr_t)this + 0x128 + 0)) & 1 != 0;
}
void _Script_Engine::ParticleModuleBeamNoise::set_bNoiseLock(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x128 + 0);
    *(uint8_t*)((uintptr_t)this + 0x128 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::ParticleModuleBeamNoise::get_bOscillate() {
    return (*(uint8_t*)((uintptr_t)this + 0x128 + 0)) & 2 != 0;
}
void _Script_Engine::ParticleModuleBeamNoise::set_bOscillate(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x128 + 0);
    *(uint8_t*)((uintptr_t)this + 0x128 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
float& _Script_Engine::ParticleModuleBeamNoise::get_NoiseLockTime() {
    return *(float*)((uintptr_t)this + 0x12c);
}
float& _Script_Engine::ParticleModuleBeamNoise::get_NoiseTension() {
    return *(float*)((uintptr_t)this + 0x130);
}
bool _Script_Engine::ParticleModuleBeamNoise::get_bUseNoiseTangents() {
    return (*(uint8_t*)((uintptr_t)this + 0x134 + 0)) & 1 != 0;
}
void _Script_Engine::ParticleModuleBeamNoise::set_bUseNoiseTangents(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x134 + 0);
    *(uint8_t*)((uintptr_t)this + 0x134 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::ParticleModuleBeamNoise::get_NoiseScale() {
    return (void*)((uintptr_t)this + 0x180);
}
void* _Script_Engine::ParticleModuleBeamNoise::get_NoiseTangentStrength() {
    return (void*)((uintptr_t)this + 0x138);
}
int32_t& _Script_Engine::ParticleModuleBeamNoise::get_NoiseTessellation() {
    return *(int32_t*)((uintptr_t)this + 0x170);
}
bool _Script_Engine::ParticleModuleBeamNoise::get_bTargetNoise() {
    return (*(uint8_t*)((uintptr_t)this + 0x174 + 0)) & 1 != 0;
}
void _Script_Engine::ParticleModuleBeamNoise::set_bTargetNoise(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x174 + 0);
    *(uint8_t*)((uintptr_t)this + 0x174 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_Engine::ParticleModuleBeamNoise::get_FrequencyDistance() {
    return *(float*)((uintptr_t)this + 0x178);
}
bool _Script_Engine::ParticleModuleBeamNoise::get_bApplyNoiseScale() {
    return (*(uint8_t*)((uintptr_t)this + 0x17c + 0)) & 1 != 0;
}
void _Script_Engine::ParticleModuleBeamNoise::set_bApplyNoiseScale(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x17c + 0);
    *(uint8_t*)((uintptr_t)this + 0x17c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_Engine::ParticleModuleBeamNoise::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.ParticleModuleBeamNoise");
    return result;
}
