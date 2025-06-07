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
struct InterpCurvePointFloat {
    private: char pad_0[0x14]; public:
    float& get_InVal();
    float& get_OutVal();
    float& get_ArriveTangent();
    float& get_LeaveTangent();
    void* get_InterpMode();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x14
#pragma pack(pop)
}
