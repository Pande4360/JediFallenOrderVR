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
struct RsCameraShake {
    private: char pad_0[0x18]; public:
    void* get_Shake();
    float& get_InnerRadius();
    float& get_OuterRadius();
    float& get_Falloff();
    bool get_bOrientShakeTowardsEpicenter();
    void set_bOrientShakeTowardsEpicenter(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x18
#pragma pack(pop)
}
