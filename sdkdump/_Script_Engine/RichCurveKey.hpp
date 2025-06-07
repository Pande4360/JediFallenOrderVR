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
struct RichCurveKey {
    private: char pad_0[0x1c]; public:
    void* get_InterpMode();
    void* get_TangentMode();
    void* get_TangentWeightMode();
    float& get_Time();
    float& get_Value();
    float& get_ArriveTangent();
    float& get_ArriveTangentWeight();
    float& get_LeaveTangent();
    float& get_LeaveTangentWeight();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x1c
#pragma pack(pop)
}
