#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Interface.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_GlobalData_Interfaces_INT_UseTraceCollision {
#pragma pack(push, 1)
struct INT_UseTraceCollision_C : public _Script_CoreUObject::Interface {
    static _Script_CoreUObject::Class* static_class();
    void UseTraceCollision();
}; // Size: 0x28
#pragma pack(pop)
}
