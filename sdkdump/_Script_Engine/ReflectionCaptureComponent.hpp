#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "SceneComponent.hpp"
namespace _Script_Engine {
struct BillboardComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct ReflectionCaptureComponent : public SceneComponent {
    private: char pad_2d0[0x70]; public:
    _Script_Engine::BillboardComponent*& get_CaptureOffsetComponent();
    void* get_ReflectionSourceType();
    float& get_SourceCubemapAngle();
    float& get_Brightness();
    void* get_CaptureOffset();
    float& get_FadeScreenSize();
    float& get_FadeScreenSizeStart();
    float& get_NearPlaneDistance();
    bool get_bCaptureFog();
    void set_bCaptureFog(bool value);
    void* get_LightingChannels();
    void* get_MapBuildDataId();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x340
#pragma pack(pop)
}
