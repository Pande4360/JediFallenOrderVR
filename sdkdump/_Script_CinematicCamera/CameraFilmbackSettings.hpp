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
struct CameraFilmbackSettings {
    private: char pad_0[0xc]; public:
    float& get_SensorWidth();
    float& get_SensorHeight();
    float& get_SensorAspectRatio();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xc
#pragma pack(pop)
}
