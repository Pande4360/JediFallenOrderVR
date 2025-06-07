#include "..\FUObjectArray.hpp"
#include "AudioMixerBlueprintLibrary.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
#include "..\_Script_Engine\SoundEffectSourcePresetChain.hpp"
#include "..\_Script_Engine\SoundEffectSubmixPreset.hpp"
#include "..\_Script_Engine\SoundSubmix.hpp"
#include "..\_Script_Engine\SoundWave.hpp"
#include "..\_Script_Engine\SourceEffectChainEntry.hpp"
void _Script_AudioMixer::AudioMixerBlueprintLibrary::SetBypassSourceEffectChainEntry(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::SoundEffectSourcePresetChain* PresetChain, int32_t EntryIndex, bool bBypassed) {
    return;
}
_Script_CoreUObject::Class* _Script_AudioMixer::AudioMixerBlueprintLibrary::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AudioMixer.AudioMixerBlueprintLibrary");
    return result;
}
void _Script_AudioMixer::AudioMixerBlueprintLibrary::ResumeRecordingOutput(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::SoundSubmix* SubmixToPause) {
    return;
}
_Script_Engine::SoundWave* _Script_AudioMixer::AudioMixerBlueprintLibrary::StopRecordingOutput(_Script_CoreUObject::Object* WorldContextObject, void* ExportType, void* Name, void* Path, _Script_Engine::SoundSubmix* SubmixToRecord, _Script_Engine::SoundWave* ExistingSoundWaveToOverwrite) {
    return;
}
void _Script_AudioMixer::AudioMixerBlueprintLibrary::StartRecordingOutput(_Script_CoreUObject::Object* WorldContextObject, float ExpectedDuration, _Script_Engine::SoundSubmix* SubmixToRecord) {
    return;
}
void _Script_AudioMixer::AudioMixerBlueprintLibrary::RemoveMasterSubmixEffect(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::SoundEffectSubmixPreset* SubmixEffectPreset) {
    return;
}
void _Script_AudioMixer::AudioMixerBlueprintLibrary::RemoveSourceEffectFromPresetChain(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::SoundEffectSourcePresetChain* PresetChain, int32_t EntryIndex) {
    return;
}
void _Script_AudioMixer::AudioMixerBlueprintLibrary::PauseRecordingOutput(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::SoundSubmix* SubmixToPause) {
    return;
}
int32_t _Script_AudioMixer::AudioMixerBlueprintLibrary::GetNumberOfEntriesInSourceEffectChain(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::SoundEffectSourcePresetChain* PresetChain) {
    return;
}
void _Script_AudioMixer::AudioMixerBlueprintLibrary::ClearMasterSubmixEffects(_Script_CoreUObject::Object* WorldContextObject) {
    return;
}
void _Script_AudioMixer::AudioMixerBlueprintLibrary::AddSourceEffectToPresetChain(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::SoundEffectSourcePresetChain* PresetChain, _Script_Engine::SourceEffectChainEntry Entry) {
    return;
}
void _Script_AudioMixer::AudioMixerBlueprintLibrary::AddMasterSubmixEffect(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::SoundEffectSubmixPreset* SubmixEffectPreset) {
    return;
}
