#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "AnimCompress.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct AnimCompress_RemoveTrivialKeys : public AnimCompress {
    private: char pad_50[0x10]; public:
    float& get_MaxPosDiff();
    float& get_MaxAngleDiff();
    float& get_MaxScaleDiff();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x60
#pragma pack(pop)
}
