#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MovieSceneCapture {
struct MovieSceneImageCaptureProtocolBase;
}
namespace _Script_MovieSceneCapture {
struct MovieSceneAudioCaptureProtocolBase;
}
namespace _Script_MovieSceneCapture {
#pragma pack(push, 1)
struct MovieSceneCaptureEnvironment : public _Script_CoreUObject::Object {
    static _Script_CoreUObject::Class* static_class();
    bool IsCaptureInProgress();
    int32_t GetCaptureFrameNumber();
    float GetCaptureElapsedTime();
    _Script_MovieSceneCapture::MovieSceneImageCaptureProtocolBase* FindImageCaptureProtocol();
    _Script_MovieSceneCapture::MovieSceneAudioCaptureProtocolBase* FindAudioCaptureProtocol();
}; // Size: 0x28
#pragma pack(pop)
}
