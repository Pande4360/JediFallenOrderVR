#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_RsTechRT\RsAnimInstanceProxy.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsGameAnimInstanceProxy : public _Script_RsTechRT::RsAnimInstanceProxy {
    private: char pad_5f0[0x20]; public:
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x610
#pragma pack(pop)
}
