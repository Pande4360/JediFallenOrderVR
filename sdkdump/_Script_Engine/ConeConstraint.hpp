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
struct ConeConstraint : public ConstraintBaseParams {
    private: char pad_14[0xc]; public:
    float& get_Swing1LimitDegrees();
    float& get_Swing2LimitDegrees();
    void* get_Swing1Motion();
    void* get_Swing2Motion();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x20
#pragma pack(pop)
}
