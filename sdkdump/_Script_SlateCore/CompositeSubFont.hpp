#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "CompositeFallbackFont.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SlateCore {
#pragma pack(push, 1)
struct CompositeSubFont : public CompositeFallbackFont {
    private: char pad_18[0x20]; public:
    void* get_CharacterRanges();
    void* get_Cultures();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x38
#pragma pack(pop)
}
