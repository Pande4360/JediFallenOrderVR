#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "PanelWidget.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_UMG {
struct Widget;
}
namespace _Script_UMG {
struct PanelSlot;
}
namespace _Script_UMG {
#pragma pack(push, 1)
struct ContentWidget : public PanelWidget {
    static _Script_CoreUObject::Class* static_class();
    _Script_UMG::PanelSlot* SetContent(_Script_UMG::Widget* Content);
    _Script_UMG::PanelSlot* GetContentSlot();
    _Script_UMG::Widget* GetContent();
}; // Size: 0x118
#pragma pack(pop)
}
