#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
#include "..\_Script_Engine\SourceEffectChainEntry.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CoreUObject {
struct Object;
}
namespace _Script_Engine {
struct SoundSubmix;
}
namespace _Script_Engine {
struct SoundEffectSubmixPreset;
}
namespace _Script_Engine {
struct SoundWave;
}
namespace _Script_Engine {
struct SoundEffectSourcePresetChain;
}
namespace _Script_AudioMixer {
#pragma pack(push, 1)
struct AudioMixerBlueprintLibrary : public _Script_Engine::BlueprintFunctionLibrary {
    static _Script_CoreUObject::Class* static_class();
    _Script_Engine::SoundWave* StopRecordingOutput(_Script_CoreUObject::Object* WorldContextObject, void* ExportType, void* Name, void* Path, _Script_Engine::SoundSubmix* SubmixToRecord, _Script_Engine::SoundWave* ExistingSoundWaveToOverwrite);
    void StartRecordingOutput(_Script_CoreUObject::Object* WorldContextObject, float ExpectedDuration, _Script_Engine::SoundSubmix* SubmixToRecord);
    void SetBypassSourceEffectChainEntry(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::SoundEffectSourcePresetChain* PresetChain, int32_t EntryIndex, bool bBypassed);
    void ResumeRecordingOutput(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::SoundSubmix* SubmixToPause);
    void RemoveSourceEffectFromPresetChain(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::SoundEffectSourcePresetChain* PresetChain, int32_t EntryIndex);
    void RemoveMasterSubmixEffect(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::SoundEffectSubmixPreset* SubmixEffectPreset);
    void PauseRecordingOutput(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::SoundSubmix* SubmixToPause);
    int32_t GetNumberOfEntriesInSourceEffectChain(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::SoundEffectSourcePresetChain* PresetChain);
    void ClearMasterSubmixEffects(_Script_CoreUObject::Object* WorldContextObject);
    void AddSourceEffectToPresetChain(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::SoundEffectSourcePresetChain* PresetChain, _Script_Engine::SourceEffectChainEntry Entry);
    void AddMasterSubmixEffect(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::SoundEffectSubmixPreset* SubmixEffectPreset);
}; // Size: 0x28
#pragma pack(pop)
}
