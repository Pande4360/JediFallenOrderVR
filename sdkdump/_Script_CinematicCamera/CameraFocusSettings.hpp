#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CinematicCamera {
#pragma pack(push, 1)
struct CameraFocusSettings {
    private: char pad_0[0x38]; public:
    void* get_FocusMethod();
    float& get_ManualFocusDistance();
    void* get_TrackingFocusSettings();
    bool get_bDrawDebugFocusPlane();
    void set_bDrawDebugFocusPlane(bool value);
    void* get_DebugFocusPlaneColor();
    bool get_bSmoothFocusChanges();
    void set_bSmoothFocusChanges(bool value);
    float& get_FocusSmoothingInterpSpeed();
    float& get_FocusOffset();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x38
#pragma pack(pop)
}
