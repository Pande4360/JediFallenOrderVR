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
struct VerticalBoxSlot;
}
namespace _Script_UMG {
struct Widget;
}
namespace _Script_UMG {
#pragma pack(push, 1)
struct VerticalBox : public PanelWidget {
    private: char pad_118[0x10]; public:
    static _Script_CoreUObject::Class* static_class();
    _Script_UMG::VerticalBoxSlot* AddChildToVerticalBox(_Script_UMG::Widget* Content);
}; // Size: 0x128
#pragma pack(pop)
}
