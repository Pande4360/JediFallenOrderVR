#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_MovieSceneCapture\MovieSceneAudioCaptureProtocolBase.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AkAudio {
#pragma pack(push, 1)
struct AkAudioCaptureProtocol : public _Script_MovieSceneCapture::MovieSceneAudioCaptureProtocolBase {
    private: char pad_58[0x28]; public:
    void* get_Filename();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x80
#pragma pack(pop)
}
