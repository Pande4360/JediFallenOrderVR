#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "MovieSceneImageCaptureProtocolBase.hpp"
namespace _Script_Engine {
struct MaterialInterface;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MovieSceneCapture {
#pragma pack(push, 1)
struct CompositionGraphCaptureProtocol : public MovieSceneImageCaptureProtocolBase {
    private: char pad_58[0x68]; public:
    void* get_IncludeRenderPasses();
    bool get_bCaptureFramesInHDR();
    void set_bCaptureFramesInHDR(bool value);
    int32_t& get_HDRCompressionQuality();
    void* get_CaptureGamut();
    void* get_PostProcessingMaterial();
    bool get_bDisableScreenPercentage();
    void set_bDisableScreenPercentage(bool value);
    _Script_Engine::MaterialInterface*& get_PostProcessingMaterialPtr();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xc0
#pragma pack(pop)
}
