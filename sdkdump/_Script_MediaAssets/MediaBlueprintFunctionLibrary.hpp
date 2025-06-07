#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MediaAssets {
#pragma pack(push, 1)
struct MediaBlueprintFunctionLibrary : public _Script_Engine::BlueprintFunctionLibrary {
    static _Script_CoreUObject::Class* static_class();
    void EnumerateWebcamCaptureDevices(void*& OutDevices, int32_t Filter);
    void EnumerateVideoCaptureDevices(void*& OutDevices, int32_t Filter);
    void EnumerateAudioCaptureDevices(void*& OutDevices, int32_t Filter);
}; // Size: 0x28
#pragma pack(pop)
}
