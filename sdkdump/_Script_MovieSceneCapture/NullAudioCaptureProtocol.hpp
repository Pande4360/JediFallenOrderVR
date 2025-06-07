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
struct NullAudioCaptureProtocol : public MovieSceneAudioCaptureProtocolBase {
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x58
#pragma pack(pop)
}
