#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct MinimalViewInfo {
    private: char pad_0[0x560]; public:
    void* get_Location();
    void* get_Rotation();
    float& get_FOV();
    float& get_DesiredFOV();
    float& get_OrthoWidth();
    float& get_OrthoNearClipPlane();
    float& get_OrthoFarClipPlane();
    float& get_AspectRatio();
    bool get_bConstrainAspectRatio();
    void set_bConstrainAspectRatio(bool value);
    bool get_bUseFieldOfViewForLOD();
    void set_bUseFieldOfViewForLOD(bool value);
    void* get_ProjectionMode();
    float& get_PostProcessBlendWeight();
    void* get_PostProcessSettings();
    void* get_OffCenterProjectionOffset();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x560
#pragma pack(pop)
}
