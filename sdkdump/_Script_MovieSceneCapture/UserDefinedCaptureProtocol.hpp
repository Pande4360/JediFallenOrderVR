#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "FrameMetrics.hpp"
#include "MovieSceneImageCaptureProtocolBase.hpp"
namespace _Script_Engine {
struct World;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct Texture;
}
namespace _Script_MovieSceneCapture {
#pragma pack(push, 1)
struct UserDefinedCaptureProtocol : public MovieSceneImageCaptureProtocolBase {
    private: char pad_58[0x88]; public:
    _Script_Engine::World*& get_World();
    static _Script_CoreUObject::Class* static_class();
    void StopCapturingFinalPixels();
    void StartCapturingFinalPixels(void* StreamName);
    void ResolveBuffer(_Script_Engine::Texture* Buffer, void* BufferName, void* Handler);
    void PushBufferToStream(_Script_Engine::Texture* Buffer, void* StreamName);
    void OnWarmUp();
    void OnTick();
    void OnStartCapture();
    bool OnSetup();
    void OnPreTick();
    void OnPauseCapture();
    void OnFinalize();
    void OnCaptureFrame();
    bool OnCanFinalize();
    void OnBeginFinalize();
    _Script_MovieSceneCapture::FrameMetrics GetCurrentFrameMetrics();
    void* GenerateFilename(_Script_MovieSceneCapture::FrameMetrics& InFrameMetrics);
    void BindToStream(void* StreamName, void* Handler);
}; // Size: 0xe0
#pragma pack(pop)
}
