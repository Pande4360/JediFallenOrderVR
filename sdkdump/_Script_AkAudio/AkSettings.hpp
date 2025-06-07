#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AkAudio {
#pragma pack(push, 1)
struct AkSettings : public _Script_CoreUObject::Object {
    private: char pad_28[0x80]; public:
    void* get_MaxSimultaneousReverbVolumes();
    void* get_WwiseProjectPath();
    void* get_WwiseSoundBankFolder();
    bool get_bAutoConnectToWAAPI();
    void set_bAutoConnectToWAAPI(bool value);
    bool get_bEnableMultiCoreRendering();
    void set_bEnableMultiCoreRendering(bool value);
    void* get_DefaultOcclusionCollisionChannel();
    void* get_WwiseWindowsInstallationPath();
    void* get_WwiseMacInstallationPath();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xa8
#pragma pack(pop)
}
