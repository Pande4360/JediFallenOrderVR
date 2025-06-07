#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct SwDistanceExtensionData {
    private: char pad_0[0xc]; public:
    float& get_Scale();
    float& get_MinSpeedToConsiderExtending();
    float& get_MaxExtension();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xc
#pragma pack(pop)
}
