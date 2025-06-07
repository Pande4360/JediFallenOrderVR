#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "PoseLinkBase.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct PoseLink : public PoseLinkBase {
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x10
#pragma pack(pop)
}
