#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "InputEvent.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SlateCore {
#pragma pack(push, 1)
struct PointerEvent : public InputEvent {
    private: char pad_18[0x58]; public:
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x70
#pragma pack(pop)
}
