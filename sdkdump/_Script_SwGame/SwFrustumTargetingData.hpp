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
struct SwFrustumTargetingData {
    private: char pad_0[0x20]; public:
    void* get_Offset();
    float& get_NearWidth();
    float& get_NearHeight();
    float& get_FarWidth();
    float& get_FarHeight();
    float& get_Length();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x20
#pragma pack(pop)
}
