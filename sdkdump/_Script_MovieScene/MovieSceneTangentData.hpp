#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MovieScene {
#pragma pack(push, 1)
struct MovieSceneTangentData {
    private: char pad_0[0x14]; public:
    float& get_ArriveTangent();
    float& get_LeaveTangent();
    void* get_TangentWeightMode();
    float& get_ArriveTangentWeight();
    float& get_LeaveTangentWeight();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x14
#pragma pack(pop)
}
