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
struct GridSlot;
}
namespace _Script_UMG {
#pragma pack(push, 1)
struct GridPanel : public PanelWidget {
    private: char pad_118[0x30]; public:
    void* get_ColumnFill();
    void* get_RowFill();
    static _Script_CoreUObject::Class* static_class();
    void SetRowFill(int32_t ColumnIndex, float Coefficient);
    void SetColumnFill(int32_t ColumnIndex, float Coefficient);
    _Script_UMG::GridSlot* AddChildToGrid(_Script_UMG::Widget* Content);
}; // Size: 0x148
#pragma pack(pop)
}
