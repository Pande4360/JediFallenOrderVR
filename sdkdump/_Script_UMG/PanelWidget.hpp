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
struct PanelSlot;
}
namespace _Script_UMG {
#pragma pack(push, 1)
struct PanelWidget : public Widget {
    private: char pad_100[0x18]; public:
    void* get_Slots();
    static _Script_CoreUObject::Class* static_class();
    bool RemoveChildAt(int32_t Index);
    bool RemoveChild(_Script_UMG::Widget* Content);
    bool HasChild(_Script_UMG::Widget* Content);
    bool HasAnyChildren();
    int32_t GetChildrenCount();
    int32_t GetChildIndex(_Script_UMG::Widget* Content);
    _Script_UMG::Widget* GetChildAt(int32_t Index);
    void ClearChildren();
    _Script_UMG::PanelSlot* AddChild(_Script_UMG::Widget* Content);
}; // Size: 0x118
#pragma pack(pop)
}
