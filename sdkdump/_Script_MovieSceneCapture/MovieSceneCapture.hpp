#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_MovieSceneCapture {
struct MovieSceneImageCaptureProtocolBase;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MovieSceneCapture {
struct MovieSceneAudioCaptureProtocolBase;
}
namespace _Script_MovieSceneCapture {
struct MovieSceneCaptureProtocolBase;
}
namespace _Script_MovieSceneCapture {
#pragma pack(push, 1)
struct MovieSceneCapture : public _Script_CoreUObject::Object {
    private: char pad_28[0x1c8]; public:
    void* get_ImageCaptureProtocolType();
    void* get_AudioCaptureProtocolType();
    _Script_MovieSceneCapture::MovieSceneImageCaptureProtocolBase*& get_ImageCaptureProtocol();
    _Script_MovieSceneCapture::MovieSceneAudioCaptureProtocolBase*& get_AudioCaptureProtocol();
    void* get_Settings();
    bool get_bUseSeparateProcess();
    void set_bUseSeparateProcess(bool value);
    bool get_bCloseEditorWhenCaptureStarts();
    void set_bCloseEditorWhenCaptureStarts(bool value);
    void* get_AdditionalCommandLineArguments();
    void* get_InheritedCommandLineArguments();
    static _Script_CoreUObject::Class* static_class();
    void SetImageCaptureProtocolType(void* ProtocolType);
    void SetAudioCaptureProtocolType(void* ProtocolType);
    _Script_MovieSceneCapture::MovieSceneCaptureProtocolBase* GetImageCaptureProtocol();
    _Script_MovieSceneCapture::MovieSceneCaptureProtocolBase* GetAudioCaptureProtocol();
}; // Size: 0x1f0
#pragma pack(pop)
}
