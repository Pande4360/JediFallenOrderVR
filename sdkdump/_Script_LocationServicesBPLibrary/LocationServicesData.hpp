#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_LocationServicesBPLibrary {
#pragma pack(push, 1)
struct LocationServicesData {
    private: char pad_0[0x18]; public:
    float& get_Timestamp();
    float& get_Longitude();
    float& get_Latitude();
    float& get_HorizontalAccuracy();
    float& get_VerticalAccuracy();
    float& get_Altitude();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x18
#pragma pack(pop)
}
