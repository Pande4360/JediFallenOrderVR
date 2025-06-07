#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsAINavLinkManager : public _Script_CoreUObject::Object {
    private: char pad_28[0x218]; public:
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x240
#pragma pack(pop)
}
