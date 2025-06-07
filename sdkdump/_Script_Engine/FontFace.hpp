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
struct FontFace : public _Script_CoreUObject::Object {
    private: char pad_28[0x30]; public:
    void* get_SourceFilename();
    void* get_Hinting();
    void* get_LoadingPolicy();
    void* get_LayoutMethod();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x58
#pragma pack(pop)
}
