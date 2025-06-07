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
struct BatchedPoint {
    private: char pad_0[0x28]; public:
    void* get_Position();
    void* get_Color();
    float& get_PointSize();
    float& get_RemainingLifeTime();
    void* get_DepthPriority();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
