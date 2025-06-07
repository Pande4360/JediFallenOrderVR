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
struct DatasmithCameraFilmbackSettingsTemplate {
    private: char pad_0[0x8]; public:
    float& get_SensorWidth();
    float& get_SensorHeight();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x8
#pragma pack(pop)
}
