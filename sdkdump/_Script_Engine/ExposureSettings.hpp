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
struct ExposureSettings {
    private: char pad_0[0x8]; public:
    float& get_FixedEV100();
    bool get_bFixed();
    void set_bFixed(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x8
#pragma pack(pop)
}
