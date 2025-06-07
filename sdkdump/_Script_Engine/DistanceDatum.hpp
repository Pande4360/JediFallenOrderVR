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
struct DistanceDatum {
    private: char pad_0[0x14]; public:
    float& get_FadeInDistanceStart();
    float& get_FadeInDistanceEnd();
    float& get_FadeOutDistanceStart();
    float& get_FadeOutDistanceEnd();
    float& get_Volume();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x14
#pragma pack(pop)
}
