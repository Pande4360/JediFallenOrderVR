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
struct RsParryConditions {
    private: char pad_0[0xc]; public:
    int32_t& get_MaxCount();
    float& get_Timeout();
    float& get_MaxAngleCosine();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xc
#pragma pack(pop)
}
