#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "DistributionFloat.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct DistributionFloatUniform : public DistributionFloat {
    private: char pad_38[0x8]; public:
    float& get_Min();
    float& get_Max();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x40
#pragma pack(pop)
}
