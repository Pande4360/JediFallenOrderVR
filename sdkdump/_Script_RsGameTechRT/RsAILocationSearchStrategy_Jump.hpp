#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "RsAILocationSearchStrategy.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsAILocationSearchStrategy_Jump : public RsAILocationSearchStrategy {
    private: char pad_8[0x4]; public:
    bool get_bPreferFlanking();
    void set_bPreferFlanking(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xc
#pragma pack(pop)
}
