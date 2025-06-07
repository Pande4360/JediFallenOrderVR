#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "ConstraintBaseParams.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct TwistConstraint : public ConstraintBaseParams {
    private: char pad_14[0x8]; public:
    float& get_TwistLimitDegrees();
    void* get_TwistMotion();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x1c
#pragma pack(pop)
}
