#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct SwAimAssistData {
    private: char pad_0[0x1c]; public:
    float& get_PrimeAngle();
    float& get_PrimeRadius();
    float& get_PrimeStartRadius();
    float& get_SecondaryAngle();
    float& get_SecondaryRadius();
    bool get_bUseDoubleCone();
    void set_bUseDoubleCone(bool value);
    float& get_ProximityWeight();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x1c
#pragma pack(pop)
}
