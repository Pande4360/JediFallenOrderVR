#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "MovieSceneAudioCaptureProtocolBase.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MovieSceneCapture {
#pragma pack(push, 1)
struct MasterAudioSubmixCaptureProtocol : public MovieSceneAudioCaptureProtocolBase {
    private: char pad_58[0x38]; public:
    void* get_Filename();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x90
#pragma pack(pop)
}
