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
struct RsWorldMap : public _Script_CoreUObject::Object {
    private: char pad_28[0x110]; public:
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x138
#pragma pack(pop)
}
