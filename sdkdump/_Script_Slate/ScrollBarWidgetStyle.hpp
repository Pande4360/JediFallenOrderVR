#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_SlateCore\SlateWidgetStyleContainerBase.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Slate {
#pragma pack(push, 1)
struct ScrollBarWidgetStyle : public _Script_SlateCore::SlateWidgetStyleContainerBase {
    private: char pad_30[0x4d0]; public:
    void* get_ScrollBarStyle();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x500
#pragma pack(pop)
}
