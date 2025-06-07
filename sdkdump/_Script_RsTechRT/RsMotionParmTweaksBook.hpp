#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "RsTweaksBook.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsTechRT {
#pragma pack(push, 1)
struct RsMotionParmTweaksBook : public RsTweaksBook {
    private: char pad_40[0x50]; public:
    void* get_MotionInfluence();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x90
#pragma pack(pop)
}
