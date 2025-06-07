#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_RsGameTechRT\RsDirectionAnimationParameters.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct SwDefenseParameters : public _Script_RsGameTechRT::RsDirectionAnimationParameters {
    private: char pad_2[0x1]; public:
    void* get_DefenseType();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x3
#pragma pack(pop)
}
