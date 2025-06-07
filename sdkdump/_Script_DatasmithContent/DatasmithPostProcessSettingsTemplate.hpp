#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_DatasmithContent {
#pragma pack(push, 1)
struct DatasmithPostProcessSettingsTemplate {
    private: char pad_0[0x40]; public:
    bool get_bOverride_WhiteTemp();
    void set_bOverride_WhiteTemp(bool value);
    bool get_bOverride_ColorSaturation();
    void set_bOverride_ColorSaturation(bool value);
    bool get_bOverride_VignetteIntensity();
    void set_bOverride_VignetteIntensity(bool value);
    bool get_bOverride_FilmWhitePoint();
    void set_bOverride_FilmWhitePoint(bool value);
    bool get_bOverride_AutoExposureMethod();
    void set_bOverride_AutoExposureMethod(bool value);
    bool get_bOverride_CameraISO();
    void set_bOverride_CameraISO(bool value);
    float& get_WhiteTemp();
    float& get_VignetteIntensity();
    void* get_FilmWhitePoint();
    void* get_ColorSaturation();
    void* get_AutoExposureMethod();
    float& get_CameraISO();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x40
#pragma pack(pop)
}
