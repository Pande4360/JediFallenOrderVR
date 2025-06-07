#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "DistributionFloatConstant.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct DistributionFloatParameterBase : public DistributionFloatConstant {
    private: char pad_40[0x20]; public:
    void* get_ParameterName();
    float& get_MinInput();
    float& get_MaxInput();
    float& get_MinOutput();
    float& get_MaxOutput();
    void* get_ParamMode();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x60
#pragma pack(pop)
}
