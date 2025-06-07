#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Vector2D.hpp"
#include "PanelWidget.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_UMG {
struct Widget;
}
namespace _Script_UMG {
struct WrapBoxSlot;
}
namespace _Script_UMG {
#pragma pack(push, 1)
struct WrapBox : public PanelWidget {
    private: char pad_118[0x20]; public:
    void* get_InnerSlotPadding();
    float& get_WrapWidth();
    bool get_bExplicitWrapWidth();
    void set_bExplicitWrapWidth(bool value);
    static _Script_CoreUObject::Class* static_class();
    void SetInnerSlotPadding(_Script_CoreUObject::Vector2D InPadding);
    _Script_UMG::WrapBoxSlot* AddChildWrapBox(_Script_UMG::Widget* Content);
}; // Size: 0x138
#pragma pack(pop)
}
