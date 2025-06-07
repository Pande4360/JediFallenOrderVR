#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "SlateWidgetStyle.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SlateCore {
#pragma pack(push, 1)
struct ExpandableAreaStyle : public SlateWidgetStyle {
    private: char pad_8[0x118]; public:
    void* get_CollapsedImage();
    void* get_ExpandedImage();
    float& get_RolloutAnimationSeconds();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x120
#pragma pack(pop)
}
