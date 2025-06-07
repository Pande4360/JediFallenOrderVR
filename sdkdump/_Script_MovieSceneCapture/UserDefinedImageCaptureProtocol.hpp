#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "UserDefinedCaptureProtocol.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MovieSceneCapture {
struct FrameMetrics;
}
namespace _Script_MovieSceneCapture {
struct CapturedPixels;
}
namespace _Script_Engine {
struct Texture;
}
namespace _Script_MovieSceneCapture {
#pragma pack(push, 1)
struct UserDefinedImageCaptureProtocol : public UserDefinedCaptureProtocol {
    private: char pad_e0[0x8]; public:
    void* get_Format();
    bool get_bEnableCompression();
    void set_bEnableCompression(bool value);
    int32_t& get_CompressionQuality();
    static _Script_CoreUObject::Class* static_class();
    void WriteImageToDisk(_Script_MovieSceneCapture::CapturedPixels& PixelData, void* StreamName, _Script_MovieSceneCapture::FrameMetrics& FrameMetrics, bool bCopyImageData);
    void* GenerateFilenameForCurrentFrame();
    void* GenerateFilenameForBuffer(_Script_Engine::Texture* Buffer, void* StreamName);
}; // Size: 0xe8
#pragma pack(pop)
}
