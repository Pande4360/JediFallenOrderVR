#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "AudioSettings.hpp"
#include "DeveloperSettings.hpp"
float& _Script_Engine::AudioSettings::get_PlayerAsListener() {
    return *(float*)((uintptr_t)this + 0x38);
}
bool _Script_Engine::AudioSettings::get_OcclusionEnabled() {
    return (*(uint8_t*)((uintptr_t)this + 0x50 + 0)) & 1 != 0;
}
bool _Script_Engine::AudioSettings::get_DebugDraw() {
    return (*(uint8_t*)((uintptr_t)this + 0x3c + 0)) & 1 != 0;
}
bool _Script_Engine::AudioSettings::get_bAllowVirtualizedSounds() {
    return (*(uint8_t*)((uintptr_t)this + 0x268 + 0)) & 1 != 0;
}
void* _Script_Engine::AudioSettings::get_DefaultMediaSoundClassName() {
    return (void*)((uintptr_t)this + 0x1e8);
}
void _Script_Engine::AudioSettings::set_DebugDraw(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3c + 0);
    *(uint8_t*)((uintptr_t)this + 0x3c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::AudioSettings::get_LocalizedVOBanks() {
    return (void*)((uintptr_t)this + 0x1a8);
}
bool _Script_Engine::AudioSettings::get_DebugDrawNames() {
    return (*(uint8_t*)((uintptr_t)this + 0x3d + 0)) & 1 != 0;
}
void* _Script_Engine::AudioSettings::get_DebugDrawActorName() {
    return (void*)((uintptr_t)this + 0x40);
}
void _Script_Engine::AudioSettings::set_DebugDrawNames(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3d + 0);
    *(uint8_t*)((uintptr_t)this + 0x3d + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Engine::AudioSettings::set_OcclusionEnabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x50 + 0);
    *(uint8_t*)((uintptr_t)this + 0x50 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_Engine::AudioSettings::get_AdditionalRayConeAngleInDegrees() {
    return *(float*)((uintptr_t)this + 0x54);
}
void _Script_Engine::AudioSettings::set_bAllowCenterChannel3DPanning(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x268 + 0);
    *(uint8_t*)((uintptr_t)this + 0x268 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
float& _Script_Engine::AudioSettings::get_AdditionalRayConeRadius() {
    return *(float*)((uintptr_t)this + 0x58);
}
bool _Script_Engine::AudioSettings::get_UseConeRadius() {
    return (*(uint8_t*)((uintptr_t)this + 0x5c + 0)) & 1 != 0;
}
void _Script_Engine::AudioSettings::set_UseConeRadius(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x5c + 0);
    *(uint8_t*)((uintptr_t)this + 0x5c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::AudioSettings::get_NumStoppingSources() {
    return (void*)((uintptr_t)this + 0x270);
}
float& _Script_Engine::AudioSettings::get_PeriodOfChecks() {
    return *(float*)((uintptr_t)this + 0x60);
}
float& _Script_Engine::AudioSettings::get_MaxPeriodOfChecks() {
    return *(float*)((uintptr_t)this + 0x64);
}
void* _Script_Engine::AudioSettings::get_DialogueFilenameFormat() {
    return (void*)((uintptr_t)this + 0x278);
}
float& _Script_Engine::AudioSettings::get_MinPeriodOfChecksDistane() {
    return *(float*)((uintptr_t)this + 0x68);
}
float& _Script_Engine::AudioSettings::get_MaxPeriodOfChecksDistane() {
    return *(float*)((uintptr_t)this + 0x6c);
}
void* _Script_Engine::AudioSettings::get_VoiPSampleRate() {
    return (void*)((uintptr_t)this + 0x248);
}
float& _Script_Engine::AudioSettings::get_PeriodOfSoundPosUpdates() {
    return *(float*)((uintptr_t)this + 0x70);
}
float& _Script_Engine::AudioSettings::get_MaxPeriodOfSoundPosUpdates() {
    return *(float*)((uintptr_t)this + 0x74);
}
void* _Script_Engine::AudioSettings::get_DefaultSoundClassName() {
    return (void*)((uintptr_t)this + 0x1d0);
}
float& _Script_Engine::AudioSettings::get_MinPeriodOfSoundPosUpdatesDistane() {
    return *(float*)((uintptr_t)this + 0x78);
}
float& _Script_Engine::AudioSettings::get_MaxPeriodOfSoundPosUpdatesDistane() {
    return *(float*)((uintptr_t)this + 0x7c);
}
float& _Script_Engine::AudioSettings::get_ObstructionPerMeter() {
    return *(float*)((uintptr_t)this + 0x80);
}
float& _Script_Engine::AudioSettings::get_MaxOcclusionDistance() {
    return *(float*)((uintptr_t)this + 0x84);
}
void _Script_Engine::AudioSettings::set_bDisableMasterEQ(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x268 + 0);
    *(uint8_t*)((uintptr_t)this + 0x268 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
void* _Script_Engine::AudioSettings::get_AdditionalRays() {
    return (void*)((uintptr_t)this + 0x88);
}
bool _Script_Engine::AudioSettings::get_bDisableMasterEQ() {
    return (*(uint8_t*)((uintptr_t)this + 0x268 + 0)) & 2 != 0;
}
void* _Script_Engine::AudioSettings::get_MaxObjectsToHit() {
    return (void*)((uintptr_t)this + 0x8c);
}
void* _Script_Engine::AudioSettings::get_PanningMethod() {
    return (void*)((uintptr_t)this + 0x274);
}
void* _Script_Engine::AudioSettings::get_ListenerType() {
    return (void*)((uintptr_t)this + 0x90);
}
float& _Script_Engine::AudioSettings::get_VoipBufferingDelay() {
    return *(float*)((uintptr_t)this + 0x24c);
}
void* _Script_Engine::AudioSettings::get_DebugSurfaceEffectType() {
    return (void*)((uintptr_t)this + 0x98);
}
void* _Script_Engine::AudioSettings::get_SilenceUID() {
    return (void*)((uintptr_t)this + 0xe8);
}
float& _Script_Engine::AudioSettings::get_MaxAudioPhysicsVelocity() {
    return *(float*)((uintptr_t)this + 0x9c);
}
void* _Script_Engine::AudioSettings::get_MaxWaveInstances() {
    return (void*)((uintptr_t)this + 0x26c);
}
float& _Script_Engine::AudioSettings::get_MaxAudioPhysicsAngularVelocity() {
    return *(float*)((uintptr_t)this + 0xa0);
}
float& _Script_Engine::AudioSettings::get_MaxAudioPhysicsImpactVelocity() {
    return *(float*)((uintptr_t)this + 0xa4);
}
bool _Script_Engine::AudioSettings::get_DebugDrawImpact() {
    return (*(uint8_t*)((uintptr_t)this + 0xa8 + 0)) & 1 != 0;
}
void _Script_Engine::AudioSettings::set_DebugDrawImpact(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xa8 + 0);
    *(uint8_t*)((uintptr_t)this + 0xa8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_Engine::AudioSettings::get_ImpactDelay() {
    return *(float*)((uintptr_t)this + 0xac);
}
float& _Script_Engine::AudioSettings::get_MinimumTimeBetweenTwoRagdollImpactSounds() {
    return *(float*)((uintptr_t)this + 0xb0);
}
float& _Script_Engine::AudioSettings::get_MinimumTimeBetweenImpactSounds() {
    return *(float*)((uintptr_t)this + 0xb4);
}
void* _Script_Engine::AudioSettings::get_GlobalUIStringTable() {
    return (void*)((uintptr_t)this + 0xb8);
}
void* _Script_Engine::AudioSettings::get_GlobalRAPDatabase() {
    return (void*)((uintptr_t)this + 0xd0);
}
void* _Script_Engine::AudioSettings::get_SurfaceTypeOverrides() {
    return (void*)((uintptr_t)this + 0xf0);
}
void* _Script_Engine::AudioSettings::get_SurfaceEffectBoneMapping() {
    return (void*)((uintptr_t)this + 0x140);
}
void* _Script_Engine::AudioSettings::get_SilenceTrackingEvent() {
    return (void*)((uintptr_t)this + 0x190);
}
void* _Script_Engine::AudioSettings::get_HighlightEvent() {
    return (void*)((uintptr_t)this + 0x1b8);
}
void* _Script_Engine::AudioSettings::get_DefaultSoundConcurrencyName() {
    return (void*)((uintptr_t)this + 0x200);
}
void* _Script_Engine::AudioSettings::get_DefaultBaseSoundMix() {
    return (void*)((uintptr_t)this + 0x218);
}
int32_t& _Script_Engine::AudioSettings::get_MaximumConcurrentStreams() {
    return *(int32_t*)((uintptr_t)this + 0x254);
}
void* _Script_Engine::AudioSettings::get_VoiPSoundClass() {
    return (void*)((uintptr_t)this + 0x230);
}
float& _Script_Engine::AudioSettings::get_DefaultReverbSendLevel() {
    return *(float*)((uintptr_t)this + 0x250);
}
void* _Script_Engine::AudioSettings::get_QualityLevels() {
    return (void*)((uintptr_t)this + 0x258);
}
void _Script_Engine::AudioSettings::set_bAllowVirtualizedSounds(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x268 + 0);
    *(uint8_t*)((uintptr_t)this + 0x268 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::AudioSettings::get_bAllowCenterChannel3DPanning() {
    return (*(uint8_t*)((uintptr_t)this + 0x268 + 0)) & 4 != 0;
}
void* _Script_Engine::AudioSettings::get_MonoChannelUpmixMethod() {
    return (void*)((uintptr_t)this + 0x275);
}
_Script_CoreUObject::Class* _Script_Engine::AudioSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.AudioSettings");
    return result;
}
