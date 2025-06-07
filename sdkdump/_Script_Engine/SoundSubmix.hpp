#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_Engine {
struct AmbisonicsSubmixSettingsBase;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct SoundWave;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct SoundSubmix : public _Script_CoreUObject::Object {
    private: char pad_28[0x58]; public:
    void* get_ChildSubmixes();
    _Script_Engine::SoundSubmix*& get_ParentSubmix();
    void* get_ChannelFormat();
    void* get_SubmixEffectChain();
    _Script_Engine::AmbisonicsSubmixSettingsBase*& get_AmbisonicsPluginSettings();
    int32_t& get_EnvelopeFollowerAttackTime();
    int32_t& get_EnvelopeFollowerReleaseTime();
    void* get_OnSubmixRecordedFileDone();
    static _Script_CoreUObject::Class* static_class();
    void StopRecordingOutput(_Script_CoreUObject::Object* WorldContextObject, void* ExportType, void* Name, void* Path, _Script_Engine::SoundWave* ExistingSoundWaveToOverwrite);
    void StopEnvelopeFollowing(_Script_CoreUObject::Object* WorldContextObject);
    void StartRecordingOutput(_Script_CoreUObject::Object* WorldContextObject, float ExpectedDuration);
    void StartEnvelopeFollowing(_Script_CoreUObject::Object* WorldContextObject);
    void AddEnvelopeFollowerDelegate(_Script_CoreUObject::Object* WorldContextObject, void*& OnSubmixEnvelopeBP);
}; // Size: 0x80
#pragma pack(pop)
}
