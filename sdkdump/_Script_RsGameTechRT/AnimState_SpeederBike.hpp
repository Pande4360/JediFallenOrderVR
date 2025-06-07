#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct AnimState_SpeederBike {
    private: char pad_0[0xc]; public:
    float& get_CurrentForwardAccelerationTime();
    bool get_IsAccelerating();
    void set_IsAccelerating(bool value);
    float& get_DegreeTurn();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xc
#pragma pack(pop)
}
