#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct ButtonStyleAsset : public _Script_CoreUObject::Object {
    private: char pad_28[0x278]; public:
    void* get_ButtonStyle();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x2a0
#pragma pack(pop)
}
