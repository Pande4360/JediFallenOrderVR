#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "RsDirectionAnimationParameters.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsDeathParameters : public RsDirectionAnimationParameters {
    private: char pad_2[0x1]; public:
    void* get_DeathType();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x3
#pragma pack(pop)
}
