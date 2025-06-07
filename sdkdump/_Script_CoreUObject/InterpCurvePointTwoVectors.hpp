#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CoreUObject {
#pragma pack(push, 1)
struct InterpCurvePointTwoVectors {
    private: char pad_0[0x50]; public:
    float& get_InVal();
    void* get_OutVal();
    void* get_ArriveTangent();
    void* get_LeaveTangent();
    void* get_InterpMode();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x50
#pragma pack(pop)
}
