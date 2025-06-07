#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "Widget.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_UMG {
#pragma pack(push, 1)
struct NativeWidgetHost : public Widget {
    private: char pad_100[0x10]; public:
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x110
#pragma pack(pop)
}
