#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "RsBTTask_SpatialQueryBase.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsBTTask_FindJumpLocation : public RsBTTask_SpatialQueryBase {
    private: char pad_a8[0x18]; public:
    float& get_MinDistance();
    float& get_MaxDistance();
    void* get_Strategy();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xc0
#pragma pack(pop)
}
