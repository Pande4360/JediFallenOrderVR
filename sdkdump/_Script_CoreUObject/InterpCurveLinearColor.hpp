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
struct InterpCurveLinearColor {
    private: char pad_0[0x18]; public:
    void* get_Points();
    bool get_bIsLooped();
    void set_bIsLooped(bool value);
    float& get_LoopKeyOffset();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x18
#pragma pack(pop)
}
