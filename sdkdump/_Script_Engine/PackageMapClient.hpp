#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\PackageMap.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct PackageMapClient : public _Script_CoreUObject::PackageMap {
    private: char pad_e0[0x2a0]; public:
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x380
#pragma pack(pop)
}
