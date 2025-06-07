#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "Widget.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Slate {
struct InputChord;
}
namespace _Script_UMG {
#pragma pack(push, 1)
struct InputKeySelector : public Widget {
    private: char pad_100[0x588]; public:
    void* get_WidgetStyle();
    void* get_TextStyle();
    void* get_SelectedKey();
    void* get_Font();
    void* get_Margin();
    void* get_ColorAndOpacity();
    void* get_KeySelectionText();
    void* get_NoKeySpecifiedText();
    bool get_bAllowModifierKeys();
    void set_bAllowModifierKeys(bool value);
    bool get_bAllowGamepadKeys();
    void set_bAllowGamepadKeys(bool value);
    void* get_EscapeKeys();
    void* get_OnKeySelected();
    void* get_OnIsSelectingKeyChanged();
    static _Script_CoreUObject::Class* static_class();
    void SetTextBlockVisibility(void* InVisibility);
    void SetSelectedKey(_Script_Slate::InputChord& InSelectedKey);
    void SetNoKeySpecifiedText(void* InNoKeySpecifiedText);
    void SetKeySelectionText(void* InKeySelectionText);
    void SetEscapeKeys(void*& InKeys);
    void SetAllowModifierKeys(bool bInAllowModifierKeys);
    void SetAllowGamepadKeys(bool bInAllowGamepadKeys);
    bool GetIsSelectingKey();
}; // Size: 0x688
#pragma pack(pop)
}
