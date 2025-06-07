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
struct RsBTTask_FindLocationWithLOS : public RsBTTask_SpatialQueryBase {
    private: char pad_a8[0x8]; public:
    void* get_Strategy();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xb0
#pragma pack(pop)
}
