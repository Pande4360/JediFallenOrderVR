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
#pragma pack(push, 1)
struct WidgetSwitcher : public PanelWidget {
    private: char pad_118[0x18]; public:
    int32_t& get_ActiveWidgetIndex();
    static _Script_CoreUObject::Class* static_class();
    void SetActiveWidgetIndex(int32_t Index);
    void SetActiveWidget(_Script_UMG::Widget* Widget);
    _Script_UMG::Widget* GetWidgetAtIndex(int32_t Index);
    int32_t GetNumWidgets();
    int32_t GetActiveWidgetIndex();
    _Script_UMG::Widget* GetActiveWidget();
}; // Size: 0x130
#pragma pack(pop)
}
