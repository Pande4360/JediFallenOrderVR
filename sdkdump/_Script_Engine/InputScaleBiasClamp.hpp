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
struct InputScaleBiasClamp {
    private: char pad_0[0x30]; public:
    bool get_bMapRange();
    void set_bMapRange(bool value);
    bool get_bClampResult();
    void set_bClampResult(bool value);
    bool get_bInterpResult();
    void set_bInterpResult(bool value);
    bool get_bInitialized();
    void set_bInitialized(bool value);
    void* get_InRange();
    void* get_OutRange();
    float& get_Scale();
    float& get_Bias();
    float& get_ClampMin();
    float& get_ClampMax();
    float& get_InterpSpeedIncreasing();
    float& get_InterpSpeedDecreasing();
    float& get_InterpolatedResult();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x30
#pragma pack(pop)
}
