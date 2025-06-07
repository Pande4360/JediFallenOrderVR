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
struct ExpandableArea : public Widget {
    private: char pad_100[0x230]; public:
    void* get_Style();
    void* get_BorderBrush();
    void* get_BorderColor();
    bool get_bIsExpanded();
    void set_bIsExpanded(bool value);
    float& get_MaxHeight();
    void* get_HeaderPadding();
    void* get_AreaPadding();
    void* get_OnExpansionChanged();
    _Script_UMG::Widget*& get_HeaderContent();
    _Script_UMG::Widget*& get_BodyContent();
    static _Script_CoreUObject::Class* static_class();
    void SetIsExpanded_Animated(bool IsExpanded);
    void SetIsExpanded(bool IsExpanded);
    bool GetIsExpanded();
}; // Size: 0x330
#pragma pack(pop)
}
