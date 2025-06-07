#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "RsBTDecorator_RelativeToLocationBase.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsBTDecorator_CheckAngleRange : public RsBTDecorator_RelativeToLocationBase {
    private: char pad_90[0x8]; public:
    float& get_OffsetAngle();
    float& get_HalfAngle();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x98
#pragma pack(pop)
}
