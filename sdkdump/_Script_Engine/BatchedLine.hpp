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
struct BatchedLine {
    private: char pad_0[0x34]; public:
    void* get_Start();
    void* get_End();
    void* get_Color();
    float& get_Thickness();
    float& get_RemainingLifeTime();
    void* get_DepthPriority();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x34
#pragma pack(pop)
}
