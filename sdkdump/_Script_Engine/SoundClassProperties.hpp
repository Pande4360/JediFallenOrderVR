#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct SoundClassProperties {
    private: char pad_0[0x2c]; public:
    float& get_Volume();
    float& get_Pitch();
    float& get_StereoBleed();
    float& get_LFEBleed();
    float& get_VoiceCenterChannelVolume();
    float& get_RadioFilterVolume();
    float& get_RadioFilterVolumeThreshold();
    bool get_bApplyEffects();
    void set_bApplyEffects(bool value);
    bool get_bAlwaysPlay();
    void set_bAlwaysPlay(bool value);
    bool get_bIsUISound();
    void set_bIsUISound(bool value);
    bool get_bIsMusic();
    void set_bIsMusic(bool value);
    bool get_bReverb();
    void set_bReverb(bool value);
    float& get_Default2DReverbSendAmount();
    bool get_bCenterChannelOnly();
    void set_bCenterChannelOnly(bool value);
    bool get_bApplyAmbientVolumes();
    void set_bApplyAmbientVolumes(bool value);
    void* get_OutputTarget();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x2c
#pragma pack(pop)
}
