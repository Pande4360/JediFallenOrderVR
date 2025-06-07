#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_AIModule\BTTaskNode.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsBTTask_AlignToPOI : public _Script_AIModule::BTTaskNode {
    private: char pad_70[0x8]; public:
    float& get_TotalTime();
    bool get_bIgnoreAlignmentInZ();
    void set_bIgnoreAlignmentInZ(bool value);
    bool get_bUseActorMotionRotation();
    void set_bUseActorMotionRotation(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x78
#pragma pack(pop)
}
