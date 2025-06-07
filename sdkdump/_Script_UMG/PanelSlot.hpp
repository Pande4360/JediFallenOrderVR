#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "Visual.hpp"
namespace _Script_UMG {
struct PanelWidget;
}
namespace _Script_UMG {
struct Widget;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_UMG {
#pragma pack(push, 1)
struct PanelSlot : public Visual {
    private: char pad_28[0x10]; public:
    _Script_UMG::PanelWidget*& get_Parent();
    _Script_UMG::Widget*& get_Content();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x38
#pragma pack(pop)
}
