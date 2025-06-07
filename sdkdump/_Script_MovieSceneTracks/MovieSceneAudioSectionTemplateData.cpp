#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\SoundAttenuation.hpp"
#include "..\_Script_Engine\SoundBase.hpp"
#include "MovieSceneAudioSectionTemplateData.hpp"
void* _Script_MovieSceneTracks::MovieSceneAudioSectionTemplateData::get_AudioPitchMultiplierCurve() {
    return (void*)((uintptr_t)this + 0x18);
}
_Script_Engine::SoundBase*& _Script_MovieSceneTracks::MovieSceneAudioSectionTemplateData::get_Sound() {
    return *(_Script_Engine::SoundBase**)((uintptr_t)this + 0x0);
}
float& _Script_MovieSceneTracks::MovieSceneAudioSectionTemplateData::get_AudioStartOffset() {
    return *(float*)((uintptr_t)this + 0x8);
}
void _Script_MovieSceneTracks::MovieSceneAudioSectionTemplateData::set_bOverrideAttenuation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x15c + 0);
    *(uint8_t*)((uintptr_t)this + 0x15c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
double& _Script_MovieSceneTracks::MovieSceneAudioSectionTemplateData::get_SectionStartTimeSeconds() {
    return *(double*)((uintptr_t)this + 0x10);
}
void* _Script_MovieSceneTracks::MovieSceneAudioSectionTemplateData::get_AudioVolumeCurve() {
    return (void*)((uintptr_t)this + 0xb8);
}
bool _Script_MovieSceneTracks::MovieSceneAudioSectionTemplateData::get_bOverrideAttenuation() {
    return (*(uint8_t*)((uintptr_t)this + 0x15c + 0)) & 1 != 0;
}
int32_t& _Script_MovieSceneTracks::MovieSceneAudioSectionTemplateData::get_RowIndex() {
    return *(int32_t*)((uintptr_t)this + 0x158);
}
_Script_Engine::SoundAttenuation*& _Script_MovieSceneTracks::MovieSceneAudioSectionTemplateData::get_AttenuationSettings() {
    return *(_Script_Engine::SoundAttenuation**)((uintptr_t)this + 0x160);
}
void* _Script_MovieSceneTracks::MovieSceneAudioSectionTemplateData::get_OnQueueSubtitles() {
    return (void*)((uintptr_t)this + 0x168);
}
void* _Script_MovieSceneTracks::MovieSceneAudioSectionTemplateData::get_OnAudioFinished() {
    return (void*)((uintptr_t)this + 0x178);
}
void* _Script_MovieSceneTracks::MovieSceneAudioSectionTemplateData::get_OnAudioPlaybackPercent() {
    return (void*)((uintptr_t)this + 0x188);
}
_Script_CoreUObject::Class* _Script_MovieSceneTracks::MovieSceneAudioSectionTemplateData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MovieSceneTracks.MovieSceneAudioSectionTemplateData");
    return result;
}
