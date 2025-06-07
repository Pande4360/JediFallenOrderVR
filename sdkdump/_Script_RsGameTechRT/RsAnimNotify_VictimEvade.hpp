#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\RsConditionalTargetAnimNotify.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsAnimNotify_VictimEvade : public _Script_Engine::RsConditionalTargetAnimNotify {
    private: char pad_c8[0x20]; public:
    void* get_AttackDirection();
    void* get_DefenseType();
    void* get_Offset();
    void* get_OffsetEnd();
    float& get_Radius();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xe8
#pragma pack(pop)
}
