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
struct ComboBoxString : public Widget {
    private: char pad_100[0xbc0]; public:
    void* get_DefaultOptions();
    void* get_SelectedOption();
    void* get_WidgetStyle();
    void* get_ItemStyle();
    void* get_ContentPadding();
    float& get_MaxListHeight();
    bool get_HasDownArrow();
    void set_HasDownArrow(bool value);
    bool get_EnableGamepadNavigationMode();
    void set_EnableGamepadNavigationMode(bool value);
    void* get_Font();
    void* get_ForegroundColor();
    bool get_bIsFocusable();
    void set_bIsFocusable(bool value);
    void* get_OnGenerateWidgetEvent();
    void* get_OnSelectionChanged();
    void* get_OnOpening();
    static _Script_CoreUObject::Class* static_class();
    void SetSelectedOption(void* Option);
    bool RemoveOption(void* Option);
    void RefreshOptions();
    void* GetSelectedOption();
    int32_t GetOptionCount();
    void* GetOptionAtIndex(int32_t Index);
    int32_t FindOptionIndex(void* Option);
    void ClearSelection();
    void ClearOptions();
    void AddOption(void* Option);
}; // Size: 0xcc0
#pragma pack(pop)
}
